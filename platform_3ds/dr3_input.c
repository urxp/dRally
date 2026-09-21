#include <stdio.h>
#include <string.h>

#include "dr3_input.h"
#include "dr3_input_map.h"

/* Raw joystick indices as exposed by SDL's n3ds backend (see SDL_sysjoystick.c):
   A=0 B=1 SELECT=2 START=3 DRIGHT=4 DLEFT=5 DUP=6 DDOWN=7 R=8 L=9 X=10 Y=11 ZL=12 ZR=13 */
#define DR3_JOY_A 0
#define DR3_JOY_B 1
#define DR3_JOY_SELECT 2
#define DR3_JOY_START 3
#define DR3_JOY_DRIGHT 4
#define DR3_JOY_DLEFT 5
#define DR3_JOY_DUP 6
#define DR3_JOY_DDOWN 7
#define DR3_JOY_R 8
#define DR3_JOY_L 9
#define DR3_JOY_X 10
#define DR3_JOY_Y 11
#define DR3_JOY_ZL 12
#define DR3_JOY_ZR 13

#define DR3_AXIS_DEADZONE 12000
#define DR3_QUEUE_LEN 32

static SDL_GameController *dr3_pad;
static SDL_Joystick       *dr3_joy;
static int                 dr3_ready;

static uint8_t dr3_prev[SDL_NUM_SCANCODES];

static struct { int scancode; int pressed; } dr3_queue[DR3_QUEUE_LEN];
static int dr3_q_head, dr3_q_tail;

int dr3_input_init(void)
{
    if (dr3_ready) return 0;

    if (SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER | SDL_INIT_JOYSTICK) != 0)
        printf("[dRally.3DS] input: SDL_InitSubSystem failed: %s\n", SDL_GetError());

    if (SDL_NumJoysticks() > 0) {
        if (SDL_IsGameController(0)) dr3_pad = SDL_GameControllerOpen(0);
        if (!dr3_pad) dr3_joy = SDL_JoystickOpen(0);
    }

    memset(dr3_prev, 0, sizeof(dr3_prev));
    dr3_q_head = dr3_q_tail = 0;
    dr3_ready = 1;

    printf("[dRally.3DS] input ready (pad=%s joystick=%s)\n",
           dr3_pad ? SDL_GameControllerName(dr3_pad) : "-",
           dr3_joy ? SDL_JoystickName(dr3_joy) : "-");
    return 0;
}

void dr3_input_describe(void)
{
    printf("[dRally.3DS] R/L = accelerate/brake, d-pad or circle pad = steer, "
           "A = nitro + confirm, X = machine gun, Y = mine, B = horn, "
           "START = pause/back, L+R+START = quit\n");
}

static int dr3_btn(SDL_GameControllerButton gc, int joy_index)
{
    if (dr3_pad) return SDL_GameControllerGetButton(dr3_pad, gc) ? 1 : 0;
    if (dr3_joy) return SDL_JoystickGetButton(dr3_joy, joy_index) ? 1 : 0;
    return 0;
}

static int dr3_axis(SDL_GameControllerAxis gc, int threshold)
{
    Sint16 v;
    if (!dr3_pad) return 0;
    v = SDL_GameControllerGetAxis(dr3_pad, gc);
    if (v > threshold) return 1;
    if (v < -threshold) return -1;
    return 0;
}

static void dr3_build_state(dr3_pad_state_t *st)
{
    memset(st, 0, sizeof(*st));

    if (dr3_btn(SDL_CONTROLLER_BUTTON_A, DR3_JOY_A))               st->held |= DR3_PAD_A;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_B, DR3_JOY_B))               st->held |= DR3_PAD_B;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_X, DR3_JOY_X))               st->held |= DR3_PAD_X;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_Y, DR3_JOY_Y))               st->held |= DR3_PAD_Y;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_DPAD_UP, DR3_JOY_DUP))       st->held |= DR3_PAD_UP;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_DPAD_DOWN, DR3_JOY_DDOWN))   st->held |= DR3_PAD_DOWN;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_DPAD_LEFT, DR3_JOY_DLEFT))   st->held |= DR3_PAD_LEFT;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_DPAD_RIGHT, DR3_JOY_DRIGHT)) st->held |= DR3_PAD_RIGHT;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_LEFTSHOULDER, DR3_JOY_L))    st->held |= DR3_PAD_L;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, DR3_JOY_R))   st->held |= DR3_PAD_R;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_BACK, DR3_JOY_SELECT))       st->held |= DR3_PAD_SELECT;
    if (dr3_btn(SDL_CONTROLLER_BUTTON_START, DR3_JOY_START))       st->held |= DR3_PAD_START;

    /* ZL/ZR only exist on the New 3DS; keep them optional */
    if (dr3_joy && SDL_JoystickNumButtons(dr3_joy) > DR3_JOY_ZR) {
        if (SDL_JoystickGetButton(dr3_joy, DR3_JOY_ZL)) st->held |= DR3_PAD_ZL;
        if (SDL_JoystickGetButton(dr3_joy, DR3_JOY_ZR)) st->held |= DR3_PAD_ZR;
    }

    /* SDL's Y axes point down, our map uses +1 = up */
    st->cpad_x   = dr3_axis(SDL_CONTROLLER_AXIS_LEFTX,  DR3_AXIS_DEADZONE);
    st->cpad_y   = -dr3_axis(SDL_CONTROLLER_AXIS_LEFTY,  DR3_AXIS_DEADZONE);
    st->cstick_x = dr3_axis(SDL_CONTROLLER_AXIS_RIGHTX, DR3_AXIS_DEADZONE);
    st->cstick_y = -dr3_axis(SDL_CONTROLLER_AXIS_RIGHTY, DR3_AXIS_DEADZONE);
}

static int dr3_queue_full(void) { return ((dr3_q_tail + 1) % DR3_QUEUE_LEN) == dr3_q_head; }

static void dr3_queue_push(int scancode, int pressed)
{
    if (dr3_queue_full()) return;
    dr3_queue[dr3_q_tail].scancode = scancode;
    dr3_queue[dr3_q_tail].pressed  = pressed;
    dr3_q_tail = (dr3_q_tail + 1) % DR3_QUEUE_LEN;
}

/* Diff the desired scancode set against what the engine already knows about. */
static void dr3_sync_keys(const dr3_pad_state_t *st)
{
    uint8_t now[SDL_NUM_SCANCODES];
    int     scan;

    dr3_input_scancodes(st, now);

    for (scan = 0; scan < SDL_NUM_SCANCODES; ++scan) {
        if (now[scan] && !dr3_prev[scan])      dr3_queue_push(scan, 1);
        else if (!now[scan] && dr3_prev[scan]) dr3_queue_push(scan, 0);
    }
    memcpy(dr3_prev, now, sizeof(dr3_prev));
}

int dr3_poll_event(SDL_Event *e)
{
    if (!dr3_ready) dr3_input_init();

    /* real events (HOME button / SDL_QUIT, touch, ...) win over synthetic ones */
    if (SDL_PollEvent(e)) return 1;

    if (dr3_q_head == dr3_q_tail) {
        dr3_pad_state_t st;
        dr3_build_state(&st);

        if (dr3_input_quit_combo(&st)) {
            memset(e, 0, sizeof(*e));
            e->type = SDL_QUIT;
            return 1;
        }
        dr3_sync_keys(&st);
    }

    if (dr3_q_head != dr3_q_tail) {
        const int scan    = dr3_queue[dr3_q_head].scancode;
        const int pressed = dr3_queue[dr3_q_head].pressed;
        dr3_q_head = (dr3_q_head + 1) % DR3_QUEUE_LEN;

        memset(e, 0, sizeof(*e));
        e->type                = pressed ? SDL_KEYDOWN : SDL_KEYUP;
        e->key.type            = e->type;
        e->key.state           = pressed ? SDL_PRESSED : SDL_RELEASED;
        e->key.repeat          = 0;
        e->key.keysym.scancode = (SDL_Scancode)scan;
        e->key.keysym.sym      = SDL_SCANCODE_TO_KEYCODE(scan);
        e->key.keysym.mod      = KMOD_NONE;
        return 1;
    }

    return 0;
}

#include "dr3_input_map.h"

/* One 3DS button can produce several scancodes (e.g. nitro *and* menu confirm). */
typedef struct {
    uint32_t mask;
    int      scancodes[3];
} dr3_btn_map_t;

static const dr3_btn_map_t dr3_btn_map[] = {
    /* steering (+ keypad aliases the engine also accepts) */
    { DR3_PAD_LEFT,   { SDL_SCANCODE_LEFT,       SDL_SCANCODE_KP_4,     -1 } },
    { DR3_PAD_RIGHT,  { SDL_SCANCODE_RIGHT,      SDL_SCANCODE_KP_6,     -1 } },
    /* d-pad up/down double as accelerate/brake, so d-pad-only players need no shoulders */
    { DR3_PAD_UP,     { SDL_SCANCODE_UP,         SDL_SCANCODE_A,        -1 } },
    { DR3_PAD_DOWN,   { SDL_SCANCODE_DOWN,       SDL_SCANCODE_Z,        -1 } },
    /* shoulders: the Vita-proven accelerate / brake mapping */
    { DR3_PAD_R,      { SDL_SCANCODE_A,          -1, -1 } },
    { DR3_PAD_L,      { SDL_SCANCODE_Z,          -1, -1 } },
    /* face buttons: nitro+confirm, machine gun, mine, horn */
    { DR3_PAD_A,      { SDL_SCANCODE_LSHIFT,     SDL_SCANCODE_KP_ENTER, -1 } },
    { DR3_PAD_X,      { SDL_SCANCODE_LCTRL,      -1, -1 } },
    { DR3_PAD_Y,      { SDL_SCANCODE_LALT,       -1, -1 } },
    { DR3_PAD_B,      { SDL_SCANCODE_SPACE,      -1, -1 } },
    /* New 3DS shoulder extras + system keys */
    { DR3_PAD_ZL,     { SDL_SCANCODE_LCTRL,      -1, -1 } },
    { DR3_PAD_ZR,     { SDL_SCANCODE_LALT,       -1, -1 } },
    { DR3_PAD_START,  { SDL_SCANCODE_ESCAPE,     -1, -1 } },  /* pause / back out */
    { DR3_PAD_SELECT, { SDL_SCANCODE_F1,         -1, -1 } }   /* help / key list  */
};

static const struct { int scan; const char *name; } dr3_names[] = {
    { SDL_SCANCODE_LEFT,     "LEFT" },
    { SDL_SCANCODE_RIGHT,    "RIGHT" },
    { SDL_SCANCODE_UP,       "UP" },
    { SDL_SCANCODE_DOWN,     "DOWN" },
    { SDL_SCANCODE_A,        "A (accelerate)" },
    { SDL_SCANCODE_Z,        "Z (brake)" },
    { SDL_SCANCODE_LSHIFT,   "LSHIFT (turbo)" },
    { SDL_SCANCODE_LCTRL,    "LCTRL (machine gun)" },
    { SDL_SCANCODE_LALT,     "LALT (drop mine)" },
    { SDL_SCANCODE_SPACE,    "SPACE (horn)" },
    { SDL_SCANCODE_KP_ENTER, "KP_ENTER (confirm)" },
    { SDL_SCANCODE_RETURN,   "RETURN (confirm)" },
    { SDL_SCANCODE_ESCAPE,   "ESCAPE (pause/back)" },
    { SDL_SCANCODE_F1,       "F1 (help)" },
    { SDL_SCANCODE_KP_4,     "KP_4 (steer left)" },
    { SDL_SCANCODE_KP_6,     "KP_6 (steer right)" }
};

int dr3_input_scancodes(const dr3_pad_state_t *st, uint8_t *scancode_set)
{
    size_t i;
    int    n, count = 0;

    for (n = 0; n < SDL_NUM_SCANCODES; ++n) scancode_set[n] = 0;

    for (i = 0; i < sizeof(dr3_btn_map) / sizeof(dr3_btn_map[0]); ++i) {
        const uint32_t mask = dr3_btn_map[i].mask;
        int            on;

        if (mask == DR3_PAD_LEFT)       on = (st->held & mask) != 0 || st->cpad_x < 0 || st->cstick_x < 0;
        else if (mask == DR3_PAD_RIGHT) on = (st->held & mask) != 0 || st->cpad_x > 0 || st->cstick_x > 0;
        else if (mask == DR3_PAD_UP)    on = (st->held & mask) != 0 || st->cpad_y > 0;
        else if (mask == DR3_PAD_DOWN)  on = (st->held & mask) != 0 || st->cpad_y < 0;
        else                            on = (st->held & mask) != 0;

        if (!on) continue;

        for (n = 0; n < 3; ++n) {
            const int scan = dr3_btn_map[i].scancodes[n];
            if (scan < 0) break;
            if (scan < SDL_NUM_SCANCODES && !scancode_set[scan]) {
                scancode_set[scan] = 1;
                ++count;
            }
        }
    }

    return count;
}

int dr3_input_quit_combo(const dr3_pad_state_t *st)
{
    const uint32_t combo = DR3_PAD_L | DR3_PAD_R | DR3_PAD_START;
    return (st->held & combo) == combo;
}

const char *dr3_scancode_name(int scancode)
{
    size_t i;
    for (i = 0; i < sizeof(dr3_names) / sizeof(dr3_names[0]); ++i)
        if (dr3_names[i].scan == scancode) return dr3_names[i].name;
    return "unknown";
}

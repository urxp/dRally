#include "dr3_input_map.h"

#include <stddef.h>   /* size_t - MSVC pulls this in transitively, GCC does not */
#include <string.h>

/*
 * The mapping is described with *functions* (what the game needs), not with keys: each function owns
 * the buttons that trigger it and the key(s) it sends to the engine.
 *
 *   - a function belongs to one situation (front end 640x480, race 320x240) or to both
 *   - several buttons can trigger the same function (GAS = R, UP by default)
 *   - so "gas" can be put on anything the player likes, via dr3_controls.txt
 */

#define DR3_CTX_MENU      0        /* front end (VESA101 640x480)            */
#define DR3_CTX_RACE      1        /* race (VGA13 320x240)                   */
#define DR3_CTX_ANY      -1

#define DR3_FUNC_KEYS     3
#define DR3_FUNC_BUTTONS  4

/* pseudo buttons: the analog sticks (both of them, per direction) so that e.g. GAS can be put on
   STICK_UP as well as on R */
#define DR3_STICK_LEFT   0x80000001u
#define DR3_STICK_RIGHT  0x80000002u
#define DR3_STICK_UP     0x80000003u
#define DR3_STICK_DOWN   0x80000004u

typedef struct {
    const char *name;                          /* the name used in dr3_controls.txt */
    int         context;                       /* DR3_CTX_MENU / _RACE / _ANY       */
    int         keys[DR3_FUNC_KEYS];           /* the keys it sends to the engine   */
    uint32_t    buttons[DR3_FUNC_BUTTONS];     /* the buttons that trigger it       */
} dr3_func_def_t;

#define DR3_FUNC_COUNT 13

static const dr3_func_def_t dr3_funcs[DR3_FUNC_COUNT] = {
    { "GAS",       DR3_CTX_RACE,  { SDL_SCANCODE_A, -1, -1 },
      { DR3_PAD_R, DR3_PAD_UP, DR3_STICK_UP, 0 } },
    { "BRAKE",     DR3_CTX_RACE,  { SDL_SCANCODE_Z, -1, -1 },
      { DR3_PAD_L, DR3_PAD_DOWN, DR3_STICK_DOWN, 0 } },
    { "MENU_UP",   DR3_CTX_MENU,  { SDL_SCANCODE_UP, -1, -1 },
      { DR3_PAD_UP, 0, 0, 0 } },
    { "MENU_DOWN", DR3_CTX_MENU,  { SDL_SCANCODE_DOWN, -1, -1 },
      { DR3_PAD_DOWN, 0, 0, 0 } },
    { "LEFT",      DR3_CTX_ANY,   { SDL_SCANCODE_LEFT, SDL_SCANCODE_KP_4, -1 },
      { DR3_PAD_LEFT, DR3_STICK_LEFT, 0, 0 } },
    { "RIGHT",     DR3_CTX_ANY,   { SDL_SCANCODE_RIGHT, SDL_SCANCODE_KP_6, -1 },
      { DR3_PAD_RIGHT, DR3_STICK_RIGHT, 0, 0 } },
    { "PAUSE",     DR3_CTX_ANY,   { SDL_SCANCODE_ESCAPE, -1, -1 },
      { DR3_PAD_START, 0, 0, 0 } },
    { "BOOST",     DR3_CTX_RACE,  { SDL_SCANCODE_LSHIFT, -1, -1 },
      { DR3_PAD_B, DR3_PAD_ZL, 0, 0 } },
    { "SHOOT",     DR3_CTX_RACE,  { SDL_SCANCODE_LCTRL, -1, -1 },
      { DR3_PAD_Y, DR3_PAD_ZR, 0, 0 } },
    { "MINE",      DR3_CTX_RACE,  { SDL_SCANCODE_LALT, -1, -1 },
      { DR3_PAD_X, 0, 0, 0 } },
    { "HORN",      DR3_CTX_RACE,  { SDL_SCANCODE_SPACE, SDL_SCANCODE_RETURN, -1 },
      { DR3_PAD_A, 0, 0, 0 } },
    { "CONFIRM",   DR3_CTX_MENU,  { SDL_SCANCODE_RETURN, -1, -1 },
      { DR3_PAD_A, 0, 0, 0 } },
    { "MENU_NEXT", DR3_CTX_MENU,  { SDL_SCANCODE_SPACE, -1, -1 },
      { DR3_PAD_B, 0, 0, 0 } }
};

/* buttons can be reassigned by dr3_controls.txt */
static uint32_t dr3_func_buttons[DR3_FUNC_COUNT][DR3_FUNC_BUTTONS];
static int      dr3_func_ready;
static int      dr3_race_ctx;

void dr3_input_set_context(int in_race) { dr3_race_ctx = in_race ? 1 : 0; }

static void dr3_func_defaults(void)
{
    int i, j;

    for (i = 0; i < DR3_FUNC_COUNT; ++i)
        for (j = 0; j < DR3_FUNC_BUTTONS; ++j) dr3_func_buttons[i][j] = dr3_funcs[i].buttons[j];
}
/* ---------------------------------------------------------------- config file --- */

#if defined(__3DS__)

#include "dr3_log.h"

#include <stdio.h>

#define DR3_CONTROLS_FILE "dr3_controls.txt"

static const struct { const char *name; uint32_t mask; } dr3_pad_names[] = {
    { "A",     DR3_PAD_A     },
    { "B",     DR3_PAD_B     },
    { "X",     DR3_PAD_X     },
    { "Y",     DR3_PAD_Y     },
    { "L",     DR3_PAD_L     },
    { "R",     DR3_PAD_R     },
    { "ZL",    DR3_PAD_ZL    },
    { "ZR",    DR3_PAD_ZR    },
    { "START", DR3_PAD_START },
    { "UP",    DR3_PAD_UP    },
    { "DOWN",  DR3_PAD_DOWN  },
    { "LEFT",  DR3_PAD_LEFT  },
    { "RIGHT", DR3_PAD_RIGHT },
    { "STICK_LEFT",  DR3_STICK_LEFT  },
    { "STICK_RIGHT", DR3_STICK_RIGHT },
    { "STICK_UP",    DR3_STICK_UP    },
    { "STICK_DOWN",  DR3_STICK_DOWN  },
    { "NONE",        0               }
};

static char *dr3_trim(char *s)
{
    char *end;

    while ((*s == (char)32) || (*s == (char)9)) ++s;

    end = s + strlen(s);
    while ((end > s) && ((end[-1] == (char)32) || (end[-1] == (char)9) || (end[-1] == (char)13) ||
                         (end[-1] == (char)10))) --end;
    *end = 0;

    return s;
}

static uint32_t dr3_pad_mask(const char *name)
{
    size_t i;

    for (i = 0; i < sizeof(dr3_pad_names) / sizeof(dr3_pad_names[0]); ++i) {
        if (SDL_strcasecmp(name, dr3_pad_names[i].name) == 0) return dr3_pad_names[i].mask;
    }

    return 0;
}

static int dr3_func_index(const char *name)
{
    int i;

    for (i = 0; i < DR3_FUNC_COUNT; ++i) {
        if (SDL_strcasecmp(name, dr3_funcs[i].name) == 0) return i;
    }

    return -1;
}

/*
 * dr3_controls.txt (game folder, next to ENGINE.BPA) holds one line per function:
 *
 *      FUNCTION = BUTTON[, BUTTON]
 *
 * FUNCTION is GAS, BRAKE, LEFT, RIGHT, PAUSE, BOOST, SHOOT, MINE, HORN, CONFIRM, MENU_UP, MENU_DOWN
 * or MENU_NEXT; BUTTON is A, B, X, Y, L, R, ZL, ZR, START, UP, DOWN, LEFT, RIGHT, STICK or NONE.
 * Functions that are not mentioned keep their built-in buttons.  The file is optional.
 */
static void dr3_func_load(void)
{
    FILE *fd = fopen(DR3_CONTROLS_FILE, "rb");
    char  line[160];
    int   n = 0;

    if (!fd) {
        dr3_log("[dr3] controls: no %s, using the built-in mapping", DR3_CONTROLS_FILE);
        return;
    }

    while (fgets(line, sizeof(line), fd)) {
        char *hash = strchr(line, '#');
        char *eq;
        char *p;
        int   fi, slot;

        ++n;
        if (hash) *hash = 0;

        p = dr3_trim(line);
        if (!*p) continue;

        eq = strchr(p, '=');
        if (!eq) {
            dr3_log("[dr3] controls: line %d has no '='", n);
            continue;
        }

        *eq = 0;
        fi  = dr3_func_index(dr3_trim(p));
        if (fi < 0) {
            dr3_log("[dr3] controls: line %d: unknown function '%s'", n, dr3_trim(p));
            continue;
        }

        p    = dr3_trim(eq + 1);
        slot = 0;
        while (slot < DR3_FUNC_BUTTONS) dr3_func_buttons[fi][slot++] = 0;

        slot = 0;
        while (*p) {
            char   name[24];
            size_t len = strcspn(p, ",");
            char * k;

            if (len >= sizeof(name)) len = sizeof(name) - 1;
            memcpy(name, p, len);
            name[len] = 0;
            p += len;
            if (*p == ',') ++p;

            k = dr3_trim(name);
            if (!*k) continue;

            if (slot >= DR3_FUNC_BUTTONS) {
                dr3_log("[dr3] controls: line %d: %s takes at most %d buttons", n,
                        dr3_funcs[fi].name, DR3_FUNC_BUTTONS);
                break;
            }

            dr3_func_buttons[fi][slot] = dr3_pad_mask(k);
            if (dr3_func_buttons[fi][slot] == 0) {
                dr3_log("[dr3] controls: line %d: unknown button '%s'", n, k);
            }

            ++slot;
        }

        dr3_log("[dr3] controls: %s = %d button(s)", dr3_funcs[fi].name, slot);
    }

    fclose(fd);
}

#else

#define dr3_func_load() ((void)0)

#endif /* __3DS__ */

static void dr3_func_ensure(void)
{
    if (dr3_func_ready) return;
    dr3_func_ready = 1;

    dr3_func_defaults();
    dr3_func_load();
}

/* Is that button (or analog stick direction) currently triggered? */
static int dr3_btn_on(uint32_t mask, const dr3_pad_state_t *st)
{
    switch (mask) {
        case DR3_STICK_LEFT:  return (st->cpad_x < 0) || (st->cstick_x < 0);
        case DR3_STICK_RIGHT: return (st->cpad_x > 0) || (st->cstick_x > 0);
        case DR3_STICK_UP:    return (st->cpad_y > 0) || (st->cstick_y > 0);
        case DR3_STICK_DOWN:  return (st->cpad_y < 0) || (st->cstick_y < 0);
        default:              return (st->held & mask) != 0;
    }
}

int dr3_input_scancodes(const dr3_pad_state_t *st, uint8_t *scancode_set)
{
    int i, j, n, count = 0;

    dr3_func_ensure();

    for (n = 0; n < SDL_NUM_SCANCODES; ++n) scancode_set[n] = 0;

    for (i = 0; i < DR3_FUNC_COUNT; ++i) {
        const dr3_func_def_t *f  = &dr3_funcs[i];
        int                   on = 0;

        if ((f->context != DR3_CTX_ANY) && (f->context != dr3_race_ctx)) continue;

        for (j = 0; j < DR3_FUNC_BUTTONS; ++j) {
            const uint32_t mask = dr3_func_buttons[i][j];

            if (!mask) continue;
            if (dr3_btn_on(mask, st)) on = 1;
        }

        if (!on) continue;

        for (n = 0; n < DR3_FUNC_KEYS; ++n) {
            const int scan = f->keys[n];

            if (scan < 0) break;
            if (!scancode_set[scan]) {
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

/*
 * Maps a character typed on the 3DS software keyboard to the SDL scancode the engine understands
 * (keyboard.c turns scancodes into DOS scan codes and derives the typed character from them).
 */
int dr3_char_to_scancode(char c)
{
    if ((c >= 'a') && (c <= 'z')) c = (char)(c - 'a' + 'A');

    if ((c >= 'A') && (c <= 'Z')) return SDL_SCANCODE_A + (c - 'A');   /* A..Z are consecutive */
    if ((c >= '1') && (c <= '9')) return SDL_SCANCODE_1 + (c - '1');
    if (c == '0')                 return SDL_SCANCODE_0;

    switch (c) {
        case ' ':  return SDL_SCANCODE_SPACE;
        case '-':  return SDL_SCANCODE_MINUS;
        case '_':  return SDL_SCANCODE_MINUS;
        case '.':  return SDL_SCANCODE_PERIOD;
        case ',':  return SDL_SCANCODE_COMMA;
        case '/':  return SDL_SCANCODE_SLASH;
        case 92:   return SDL_SCANCODE_BACKSLASH;
        case 39:   return SDL_SCANCODE_APOSTROPHE;
        case ';':  return SDL_SCANCODE_SEMICOLON;
        case '=':  return SDL_SCANCODE_EQUALS;
        case '[':  return SDL_SCANCODE_LEFTBRACKET;
        case ']':  return SDL_SCANCODE_RIGHTBRACKET;
        case 96:   return SDL_SCANCODE_GRAVE;
        case '+':  return SDL_SCANCODE_KP_PLUS;
        case 10:   return SDL_SCANCODE_RETURN;
        default:   return -1;
    }
}

static const struct { int scan; const char *name; } dr3_names[] = {
    { SDL_SCANCODE_LEFT,     "LEFT" },
    { SDL_SCANCODE_RIGHT,    "RIGHT" },
    { SDL_SCANCODE_UP,       "UP" },
    { SDL_SCANCODE_DOWN,     "DOWN" },
    { SDL_SCANCODE_A,        "A (gas)" },
    { SDL_SCANCODE_Z,        "Z (brake)" },
    { SDL_SCANCODE_LSHIFT,   "LSHIFT (boost)" },
    { SDL_SCANCODE_LCTRL,    "LCTRL (shoot)" },
    { SDL_SCANCODE_LALT,     "LALT (drop mine)" },
    { SDL_SCANCODE_SPACE,    "SPACE (horn)" },
    { SDL_SCANCODE_KP_ENTER, "KP_ENTER (confirm)" },
    { SDL_SCANCODE_RETURN,   "RETURN (confirm)" },
    { SDL_SCANCODE_ESCAPE,   "ESCAPE (pause/back)" },
    { SDL_SCANCODE_F1,       "F1 (help)" },
    { SDL_SCANCODE_KP_4,     "KP_4 (steer left)" },
    { SDL_SCANCODE_KP_6,     "KP_6 (steer right)" }
};

const char *dr3_scancode_name(int scancode)
{
    size_t i;

    for (i = 0; i < sizeof(dr3_names) / sizeof(dr3_names[0]); ++i)
        if (dr3_names[i].scan == scancode) return dr3_names[i].name;

    return "unknown";
}

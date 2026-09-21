#include "dr3_input_map.h"

#include <stddef.h>   /* size_t - MSVC pulls this in transitively, GCC does not */
#include <string.h>

/* One 3DS button can produce up to three scancodes (e.g. horn *and* menu confirm, or accelerator
   *and* the keypad alias the engine also accepts). */
typedef struct {
    uint32_t    mask;
    const char *name;          /* the name used in dr3_controls.txt */
} dr3_btn_def_t;

#define DR3_BTN_COUNT 13
#define DR3_CTX_COUNT 2        /* 0 = front end (VESA101 640x480), 1 = race (VGA13 320x240) */
#define DR3_BTN_KEYS  3

static const dr3_btn_def_t dr3_btn_defs[DR3_BTN_COUNT] = {
    { DR3_PAD_LEFT,  "LEFT"  },
    { DR3_PAD_RIGHT, "RIGHT" },
    { DR3_PAD_UP,    "UP"    },
    { DR3_PAD_DOWN,  "DOWN"  },
    { DR3_PAD_R,     "R"     },
    { DR3_PAD_L,     "L"     },
    { DR3_PAD_A,     "A"     },
    { DR3_PAD_B,     "B"     },
    { DR3_PAD_X,     "X"     },
    { DR3_PAD_Y,     "Y"     },
    { DR3_PAD_ZL,    "ZL"    },
    { DR3_PAD_ZR,    "ZR"    },
    { DR3_PAD_START, "START" }

    /* NOTE: SELECT deliberately has no scancode - it opens the 3DS software keyboard (dr3_input.c)
       so player names and save slots can be typed. */
};

/* [button][context][slot].  Filled from the defaults below and then optionally overridden by
   dr3_controls.txt in the game folder (see doc/3ds.md / README.txt). */
static int dr3_btn_tab[DR3_BTN_COUNT][DR3_CTX_COUNT][DR3_BTN_KEYS];
static int dr3_btn_tab_ready;
static int dr3_race_ctx;

void dr3_input_set_context(int in_race) { dr3_race_ctx = in_race ? 1 : 0; }

static void dr3_btn_set(int b, int ctx, int k0, int k1, int k2)
{
    dr3_btn_tab[b][ctx][0] = k0;
    dr3_btn_tab[b][ctx][1] = k1;
    dr3_btn_tab[b][ctx][2] = k2;
}

/* The built-in mapping - the same one the port shipped before the config file existed. */
static void dr3_btn_tab_defaults(void)
{
    int b, c;

    for (b = 0; b < DR3_BTN_COUNT; ++b)
        for (c = 0; c < DR3_CTX_COUNT; ++c) dr3_btn_set(b, c, -1, -1, -1);

    /* steering (the keypad aliases are what the engine also accepts) and gas/brake */
    dr3_btn_set(0, 0, SDL_SCANCODE_LEFT,    SDL_SCANCODE_KP_4, -1);
    dr3_btn_set(0, 1, SDL_SCANCODE_LEFT,    SDL_SCANCODE_KP_4, -1);
    dr3_btn_set(1, 0, SDL_SCANCODE_RIGHT,   SDL_SCANCODE_KP_6, -1);
    dr3_btn_set(1, 1, SDL_SCANCODE_RIGHT,   SDL_SCANCODE_KP_6, -1);
    dr3_btn_set(2, 0, SDL_SCANCODE_UP,      SDL_SCANCODE_A,    -1);
    dr3_btn_set(2, 1, SDL_SCANCODE_UP,      SDL_SCANCODE_A,    -1);
    dr3_btn_set(3, 0, SDL_SCANCODE_DOWN,    SDL_SCANCODE_Z,    -1);
    dr3_btn_set(3, 1, SDL_SCANCODE_DOWN,    SDL_SCANCODE_Z,    -1);
    dr3_btn_set(4, 0, SDL_SCANCODE_A,       -1, -1);
    dr3_btn_set(4, 1, SDL_SCANCODE_A,       -1, -1);
    dr3_btn_set(5, 0, SDL_SCANCODE_Z,       -1, -1);
    dr3_btn_set(5, 1, SDL_SCANCODE_Z,       -1, -1);
    dr3_btn_set(12, 0, SDL_SCANCODE_ESCAPE, -1, -1);
    dr3_btn_set(12, 1, SDL_SCANCODE_ESCAPE, -1, -1);

    /* front end: A confirms, B selects */
    dr3_btn_set(6, 0, SDL_SCANCODE_RETURN,  -1, -1);
    dr3_btn_set(7, 0, SDL_SCANCODE_SPACE,   -1, -1);

    /* race: A horn (+RETURN for the race start dialogues), B boost, X mine, Y shoot */
    dr3_btn_set(6,  1, SDL_SCANCODE_SPACE,  SDL_SCANCODE_RETURN, -1);
    dr3_btn_set(7,  1, SDL_SCANCODE_LSHIFT, -1, -1);
    dr3_btn_set(8,  1, SDL_SCANCODE_LALT,   -1, -1);
    dr3_btn_set(9,  1, SDL_SCANCODE_LCTRL,  -1, -1);
    dr3_btn_set(10, 1, SDL_SCANCODE_LSHIFT, -1, -1);
    dr3_btn_set(11, 1, SDL_SCANCODE_LCTRL,  -1, -1);
}
/* ---------------------------------------------------------------- config file --- */

#if defined(__3DS__)

#include "dr3_log.h"

#include <stdio.h>

#define DR3_CONTROLS_FILE "dr3_controls.txt"

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

static int dr3_btn_index(const char *name)
{
    int b;

    for (b = 0; b < DR3_BTN_COUNT; ++b) {
        if (SDL_strcasecmp(name, dr3_btn_defs[b].name) == 0) return b;
    }

    return -1;
}

/*
 * dr3_controls.txt lives next to the game data and holds one line per button:
 *
 *      BUTTON = KEY[, KEY]         changes the race mapping
 *      menu:BUTTON = KEY[, KEY]    changes only the front end
 *      race:BUTTON = KEY[, KEY]    changes only the race
 *
 * KEY is an SDL scancode name (SPACE, RETURN, LSHIFT, LCTRL, LALT, ESCAPE, A..Z, 1..0, KP_4, F1, ...);
 * NONE removes the mapping.  Buttons that are not mentioned keep their built-in key.
 */
static void dr3_btn_tab_load(void)
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
        int   ctx = 0, b, slot;

        ++n;
        if (hash) *hash = 0;

        p = dr3_trim(line);
        if (!*p) continue;

        if (strncmp(p, "menu:", 5) == 0)      { ctx = 0; p = dr3_trim(p + 5); }
        else if (strncmp(p, "race:", 5) == 0) { ctx = 1; p = dr3_trim(p + 5); }

        eq = strchr(p, '=');
        if (!eq) {
            dr3_log("[dr3] controls: line %d has no '='", n);
            continue;
        }

        *eq = 0;
        b   = dr3_btn_index(dr3_trim(p));
        if (b < 0) {
            dr3_log("[dr3] controls: line %d: unknown button '%s'", n, dr3_trim(p));
            continue;
        }

        p    = dr3_trim(eq + 1);
        slot = 0;
        dr3_btn_set(b, ctx, -1, -1, -1);

        while (*p && (slot < DR3_BTN_KEYS)) {
            char   key[32];
            size_t len = strcspn(p, ",");
            char * k;

            if (len >= sizeof(key)) len = sizeof(key) - 1;
            memcpy(key, p, len);
            key[len] = 0;
            p += len;
            if (*p == ',') ++p;

            k = dr3_trim(key);
            if (!*k) continue;
            if (SDL_strcasecmp(k, "NONE") == 0) continue;

            {
                SDL_Scancode sc = SDL_GetScancodeFromName(k);

                if (sc == SDL_SCANCODE_UNKNOWN) {
                    dr3_log("[dr3] controls: line %d: unknown key '%s'", n, k);
                    continue;
                }

                dr3_btn_tab[b][ctx][slot++] = (int)sc;
            }
        }

        dr3_log("[dr3] controls: %s%s = first key %d", ctx ? "race:" : "menu:", dr3_btn_defs[b].name,
                dr3_btn_tab[b][ctx][0]);
    }

    fclose(fd);
}

#else

#define dr3_btn_tab_load() ((void)0)

#endif /* __3DS__ */

static void dr3_btn_tab_ensure(void)
{
    if (dr3_btn_tab_ready) return;
    dr3_btn_tab_ready = 1;

    dr3_btn_tab_defaults();
    dr3_btn_tab_load();
}

int dr3_input_scancodes(const dr3_pad_state_t *st, uint8_t *scancode_set)
{
    int b, n, count = 0;

    dr3_btn_tab_ensure();

    for (n = 0; n < SDL_NUM_SCANCODES; ++n) scancode_set[n] = 0;

    for (b = 0; b < DR3_BTN_COUNT; ++b) {
        const uint32_t mask = dr3_btn_defs[b].mask;
        int            on;

        if (mask == DR3_PAD_LEFT)       on = (st->held & mask) != 0 || st->cpad_x < 0 || st->cstick_x < 0;
        else if (mask == DR3_PAD_RIGHT) on = (st->held & mask) != 0 || st->cpad_x > 0 || st->cstick_x > 0;
        else if (mask == DR3_PAD_UP)    on = (st->held & mask) != 0 || st->cpad_y > 0;
        else if (mask == DR3_PAD_DOWN)  on = (st->held & mask) != 0 || st->cpad_y < 0;
        else                            on = (st->held & mask) != 0;

        if (!on) continue;

        for (n = 0; n < DR3_BTN_KEYS; ++n) {
            const int scan = dr3_btn_tab[b][dr3_race_ctx][n];

            if (scan < 0) break;
            if ((scan < SDL_NUM_SCANCODES) && !scancode_set[scan]) {
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
    { SDL_SCANCODE_A,        "A (accelerate)" },
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

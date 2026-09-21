#include "dr3_input_map.h"

#include <stddef.h>   /* size_t - MSVC pulls this in transitively, GCC does not */

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
    /* face buttons: confirm, horn, machine gun, turbo/nitro */
    { DR3_PAD_A,      { SDL_SCANCODE_RETURN,     -1, -1 } },   /* single key: dialogues see exactly one */
    { DR3_PAD_B,      { SDL_SCANCODE_SPACE,      -1, -1 } },
    { DR3_PAD_X,      { SDL_SCANCODE_LCTRL,      -1, -1 } },
    { DR3_PAD_Y,      { SDL_SCANCODE_LSHIFT,     -1, -1 } },   /* turbo boost */
    /* New 3DS shoulder extras + system keys */
    { DR3_PAD_ZL,     { SDL_SCANCODE_LALT,       -1, -1 } },
    { DR3_PAD_ZR,     { SDL_SCANCODE_LCTRL,      -1, -1 } },
    { DR3_PAD_START,  { SDL_SCANCODE_ESCAPE,     -1, -1 } }
    /* NOTE: SELECT deliberately has no scancode - it opens the 3DS software keyboard
       (see dr3_input.c) so player names and save slots can actually be typed. */
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

/*
 * Maps a character typed on the 3DS software keyboard to the SDL scancode the engine understands
 * (keyboard.c turns scancodes into DOS scan codes and derives the typed character from them).
 */
int dr3_char_to_scancode(char c)
{
    if (c >= 'a' && c <= 'z') c = (char)(c - 'a' + 'A');

    if (c >= 'A' && c <= 'Z') return SDL_SCANCODE_A + (c - 'A');   /* A..Z are consecutive in SDL */
    if (c >= '1' && c <= '9') return SDL_SCANCODE_1 + (c - '1');
    if (c == '0')             return SDL_SCANCODE_0;

    switch (c) {
        case ' ':  return SDL_SCANCODE_SPACE;
        case '-':  return SDL_SCANCODE_MINUS;
        case '_':  return SDL_SCANCODE_MINUS;
        case '.':  return SDL_SCANCODE_PERIOD;
        case ',':  return SDL_SCANCODE_COMMA;
        case '/':  return SDL_SCANCODE_SLASH;
        case '\\': return SDL_SCANCODE_BACKSLASH;
        case '\'': return SDL_SCANCODE_APOSTROPHE;
        case ';':  return SDL_SCANCODE_SEMICOLON;
        case '=':  return SDL_SCANCODE_EQUALS;
        case '[':  return SDL_SCANCODE_LEFTBRACKET;
        case ']':  return SDL_SCANCODE_RIGHTBRACKET;
        case '`':  return SDL_SCANCODE_GRAVE;
        case '+':  return SDL_SCANCODE_KP_PLUS;
        case '\n': return SDL_SCANCODE_RETURN;
        default:   return -1;
    }
}

const char *dr3_scancode_name(int scancode)
{
    size_t i;
    for (i = 0; i < sizeof(dr3_names) / sizeof(dr3_names[0]); ++i)
        if (dr3_names[i].scan == scancode) return dr3_names[i].name;
    return "unknown";
}

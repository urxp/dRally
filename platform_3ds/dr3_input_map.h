/*
 * dr3_input_map.h - 3DS pad state -> SDL scancodes.
 *
 * Death Rally's default controls (see config_c.c) are DOS scan codes:
 *     accelerate = 'A'   brake = 'Z'   steer_left/right = arrow keys
 *     turbo_boost = LShift   horn = Space   drop_mine = LAlt   machine_gun = LCtrl
 * Menus confirm with Enter / KP_Enter and use Escape to go back.
 *
 * The layout below keeps that intact and mirrors the mapping that already works on the PS Vita
 * port. It is data-only (no SDL calls), so it can be unit-tested on the host - see tests/test_dr3.c.
 */
#ifndef DR3_INPUT_MAP_H
#define DR3_INPUT_MAP_H

#include <stdint.h>
#include "SDL_scancode.h"

#define DR3_PAD_A       (1u << 0)
#define DR3_PAD_B       (1u << 1)
#define DR3_PAD_X       (1u << 2)
#define DR3_PAD_Y       (1u << 3)
#define DR3_PAD_UP      (1u << 4)
#define DR3_PAD_DOWN    (1u << 5)
#define DR3_PAD_LEFT    (1u << 6)
#define DR3_PAD_RIGHT   (1u << 7)
#define DR3_PAD_L       (1u << 8)
#define DR3_PAD_R       (1u << 9)
#define DR3_PAD_ZL      (1u << 10)
#define DR3_PAD_ZR      (1u << 11)
#define DR3_PAD_START   (1u << 12)
#define DR3_PAD_SELECT  (1u << 13)

typedef struct {
    uint32_t held;      /* DR3_PAD_* bits currently held down */
    int      cpad_x;    /* circle pad, -1 / 0 / +1 */
    int      cpad_y;
    int      cstick_x;  /* c-stick (New 3DS), -1 / 0 / +1 */
    int      cstick_y;
} dr3_pad_state_t;

/*
 * Fills scancode_set (must hold SDL_NUM_SCANCODES bytes) with 0/1 and returns how many
 * scancodes are set. The circle pad / c-stick act like the d-pad, because the engine's steering
 * expects a held direction.
 */
int dr3_input_scancodes(const dr3_pad_state_t *st, uint8_t *scancode_set);

/* True when the player asked to quit (L + R + START). */
int dr3_input_quit_combo(const dr3_pad_state_t *st);

/* Text typed on the 3DS software keyboard -> SDL scancode (returns -1 if unmappable). */
int dr3_char_to_scancode(char c);

/* Which mapping applies: 0 = front end (VESA101 menus), 1 = race (VGA13).  The same button confirms
   in menus and drives the car in a race, so the engine tells us which situation we are in. */
void dr3_input_set_context(int in_race);

const char *dr3_scancode_name(int scancode);

#endif /* DR3_INPUT_MAP_H */

/*
 * dr3_input.h - 3DS input glue: SDL2's n3ds joystick backend produces *joystick* events, but the
 * engine reads *keyboard* scancodes (events.c -> dRally_Keyboard_make/break), so we translate the
 * pad into synthetic SDL keyboard events. Only compiled for the 3DS build.
 */
#ifndef DR3_INPUT_H
#define DR3_INPUT_H

#include <SDL.h>

int  dr3_input_init(void);            /* open the pad, reset state; call after SDL_Init  */
int  dr3_poll_event(SDL_Event *e);    /* drop-in replacement for SDL_PollEvent           */
void dr3_input_describe(void);        /* log the pad/joystick name and the button map    */

/* Inject a key as if the pad had produced it (used by the on-screen buttons of the bottom screen). */
void dr3_input_inject_key(int scancode, int pressed);

#endif /* DR3_INPUT_H */

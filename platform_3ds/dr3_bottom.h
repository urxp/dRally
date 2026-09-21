/*
 * dr3_bottom.h - the bottom screen of the 3DS shows the controls (left) and the current driver
 * standings (right), in the style of the Death Rally front end.
 *
 * The game never draws to the bottom screen, so it is free for this.  The console needs the gfx state
 * that SDL's n3ds video driver creates with gfxInit(), so everything is initialised lazily on the
 * first update (doing it earlier jumps into a NULL pointer inside libctru).
 */
#ifndef DR3_BOTTOM_H
#define DR3_BOTTOM_H

void dr3_bottom_update(void);   /* cheap: redraws at most once per second, only when something changed */
void dr3_bottom_release(void);

#endif /* DR3_BOTTOM_H */

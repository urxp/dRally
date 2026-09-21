/*
 * dr3_bottom.h - the bottom screen of the 3DS shows the controls (left) and the current driver
 * standings (right), in the style of the Death Rally front end.
 *
 * The game never draws to the bottom screen, so it is free for this.  The console needs the gfx state
 * that SDL's n3ds video driver creates with gfxInit(), so it is initialised lazily (doing it earlier
 * jumps into a NULL pointer inside libctru).  The profiler build shares this code: it prints its
 * statistics and then appends the same block.
 */
#ifndef DR3_BOTTOM_H
#define DR3_BOTTOM_H

#define DR3_BOTTOM_LINE_LEN 64
#define DR3_BOTTOM_LINES    26          /* controls + standings need at most this many rows */

/* Initialises the bottom screen console once gfx is up.  Returns 1 when it is usable, 0 to retry
   later.  Safe to call from both the game and the profiler. */
int  dr3_bottom_console_ensure(void);

/* Fills "out" with the controls/standings block and returns the number of lines written. */
int  dr3_bottom_build_lines(char out[DR3_BOTTOM_LINES][DR3_BOTTOM_LINE_LEN]);

/* The on-screen buttons drawn in the last row of the screen. */
const char *dr3_bottom_button_line(void);

/* Handles taps on those buttons (ENTER / ESC).  Call frequently - it throttles itself. */
void dr3_bottom_touch(void);

/* Standalone bottom screen (release build): redraws at most once a second, only when it changed. */
void dr3_bottom_update(void);

/* Flush + swap the bottom screen after printing. */
void dr3_bottom_flush(void);

#endif /* DR3_BOTTOM_H */

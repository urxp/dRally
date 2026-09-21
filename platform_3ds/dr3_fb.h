/*
 * Part of the dRally 3DS port - https://github.com/urxp/dRally
 * SPDX-License-Identifier: MIT (see LICENSE and THIRD_PARTY.md)
 */
/*
 * dr3_fb.h - direct top-screen framebuffer output for the Nintendo 3DS.
 *
 * SDL2's n3ds video driver hands the window surface to the GPU with a per-pixel SDL_memcpy loop
 * (src/video/n3ds/SDL_n3dsframebuffer.c: CopyFramebuffertoN3DS) - 96.000 memcpy calls per frame,
 * which is the main reason the port felt slow.  This module converts and writes the 8-bit screen
 * straight into the (rotated) hardware framebuffer and flips it, exactly like SDL does internally:
 *     GSPGPU_FlushDataCache(fb, size); gfxScreenSwapBuffers(GFX_TOP, false);
 */
#ifndef DR3_FB_H
#define DR3_FB_H

#include <stdint.h>
#include "dr3_blit.h"

/* returns 0 on success, -1 if the framebuffer could not be acquired */
int  dr3_fb_init(void);

/*
 * src/sw/sh/src_pitch : the engine's 8-bit screen
 * pal                 : current palette (only needed for the filtered path)
 * filter              : 1 = average horizontally when downscaling (640x480 VESA -> 400x240),
 *                       0 = nearest neighbour
 */
void dr3_fb_present(const uint8_t *src, int sw, int sh, int src_pitch,
                    const dr3_palette_t *pal, const dr3_lut32_t *lut, int filter);

#endif /* DR3_FB_H */

/*
 * dr3_blit.h - fast 8-bit indexed -> 32-bit RGBx conversion for the Nintendo 3DS build.
 *
 * SDL2's 3DS video driver is a frame-buffer driver (see SDL_n3dsframebuffer.c) and only the
 * *software* renderer is available, so the hot path of dRally (presenting a 320x200 / 320x240
 * 8-bit paletted screen) must convert indices to 32-bit pixels by itself.
 *
 * Palette -> 32-bit look-up table plus an integer-only nearest-neighbour / centred scaler.
 * Everything here is platform independent and is unit-tested on the host (tests/test_dr3.c).
 */
#ifndef DR3_BLIT_H
#define DR3_BLIT_H

#include <stdint.h>

#define DR3_LUT_BGR 0   /* memory order B,G,R,A (== SDL_PIXELFORMAT_ARGB8888 masks) */
#define DR3_LUT_RGB 1   /* memory order R,G,B,A (== SDL_PIXELFORMAT_ABGR8888 masks) */

#define DR3_SCALE_STRETCH 0  /* fill the whole target */
#define DR3_SCALE_CENTER  1  /* 1:1, centred, borders filled with the clear colour */

#define DR3_SCREEN_W 400  /* 3DS top screen */
#define DR3_SCREEN_H 240

typedef struct {
    uint8_t r[256];
    uint8_t g[256];
    uint8_t b[256];
} dr3_palette_t;

typedef struct {
    uint32_t px[256];
} dr3_lut32_t;

void dr3_palette_reset(dr3_palette_t *pal);
void dr3_palette_set(dr3_palette_t *pal, int index, uint8_t r, uint8_t g, uint8_t b);

/*
 * The colour layout of the destination can be given two ways:
 *   dr3_lut32_build()        convenience for the two common byte orders
 *   dr3_lut32_build_masks()  exact SDL masks - use this with a real target surface
 *                            (e.g. SDL_PIXELFORMAT_RGBA8888 on the 3DS) so no assumption is made
 */
void dr3_lut32_build(dr3_lut32_t *lut, const dr3_palette_t *pal, int order, uint8_t alpha);
void dr3_lut32_build_masks(dr3_lut32_t *lut, const dr3_palette_t *pal,
                           uint32_t r_mask, uint32_t g_mask, uint32_t b_mask, uint32_t a_mask);

/*
 * src        : 8-bit indexed pixels
 * dst        : 32-bit pixels, dst_pitch_px = pixels per row (not bytes)
 * clear      : packed 32-bit value used for the border in DR3_SCALE_CENTER mode
 *
 * Returns 0 on success, -1 if the mode cannot be satisfied (e.g. source larger than target).
 */
int dr3_blit8_lut32(const uint8_t *src, int sw, int sh, int src_pitch,
                    const dr3_lut32_t *lut,
                    uint32_t *dst, int dw, int dh, int dst_pitch_px,
                    int mode, uint32_t clear);

#endif /* DR3_BLIT_H */

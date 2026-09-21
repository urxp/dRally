#include "dr3_blit.h"

void dr3_palette_reset(dr3_palette_t *pal)
{
    int n;
    for (n = 0; n < 256; ++n) {
        pal->r[n] = (uint8_t)n;
        pal->g[n] = (uint8_t)n;
        pal->b[n] = (uint8_t)n;
    }
}

void dr3_palette_set(dr3_palette_t *pal, int index, uint8_t r, uint8_t g, uint8_t b)
{
    if (index < 0 || index > 255) return;
    pal->r[index] = r;
    pal->g[index] = g;
    pal->b[index] = b;
}

/* Number of trailing zero bits of an SDL channel mask (0 for an empty mask). */
static int dr3_mask_shift(uint32_t mask)
{
    int shift = 0;
    if (!mask) return 0;
    while (!(mask & 1u)) {
        mask >>= 1;
        ++shift;
    }
    return shift;
}

void dr3_lut32_build_masks(dr3_lut32_t *lut, const dr3_palette_t *pal,
                           uint32_t r_mask, uint32_t g_mask, uint32_t b_mask, uint32_t a_mask)
{
    const int      rs = dr3_mask_shift(r_mask);
    const int      gs = dr3_mask_shift(g_mask);
    const int      bs = dr3_mask_shift(b_mask);
    const int      as = dr3_mask_shift(a_mask);
    const uint32_t a_bits = a_mask ? (0xFFu << as) : 0u;   /* no alpha bits -> no alpha value */
    int            n;

    for (n = 0; n < 256; ++n) {
        lut->px[n] = ((uint32_t)pal->r[n] << rs) |
                     ((uint32_t)pal->g[n] << gs) |
                     ((uint32_t)pal->b[n] << bs) |
                     a_bits;
    }
}

void dr3_lut32_build(dr3_lut32_t *lut, const dr3_palette_t *pal, int order, uint8_t alpha)
{
    /* memory order B,G,R,A  -> B in the low byte (SDL_PIXELFORMAT_ARGB8888 masks)
       memory order R,G,B,A  -> R in the low byte (SDL_PIXELFORMAT_ABGR8888 masks) */
    const uint32_t alpha_mask = (uint32_t)alpha << 24;

    if (order == DR3_LUT_RGB)
        dr3_lut32_build_masks(lut, pal, 0x000000FFu, 0x0000FF00u, 0x00FF0000u, alpha_mask);
    else
        dr3_lut32_build_masks(lut, pal, 0x00FF0000u, 0x0000FF00u, 0x000000FFu, alpha_mask);
}

static void dr3_fill32(uint32_t *dst, int dw, int dh, int pitch, uint32_t color)
{
    int x, y;
    for (y = 0; y < dh; ++y) {
        uint32_t *row = dst + (size_t)y * (size_t)pitch;
        for (x = 0; x < dw; ++x) row[x] = color;
    }
}

int dr3_blit8_lut32(const uint8_t *src, int sw, int sh, int src_pitch,
                    const dr3_lut32_t *lut,
                    uint32_t *dst, int dw, int dh, int dst_pitch_px,
                    int mode, uint32_t clear)
{
    int x, y;

    if (sw <= 0 || sh <= 0 || dw <= 0 || dh <= 0) return -1;

    if (mode == DR3_SCALE_CENTER) {
        const int off_x = (dw - sw) / 2;
        const int off_y = (dh - sh) / 2;

        if (sw > dw || sh > dh) return -1;
        dr3_fill32(dst, dw, dh, dst_pitch_px, clear);

        for (y = 0; y < sh; ++y) {
            const uint8_t *srow = src + (size_t)y * (size_t)src_pitch;
            uint32_t      *drow = dst + (size_t)(y + off_y) * (size_t)dst_pitch_px + off_x;
            for (x = 0; x < sw; ++x) drow[x] = lut->px[srow[x]];
        }
        return 0;
    }

    for (y = 0; y < dh; ++y) {
        const int      sy   = (int)(((uint32_t)y * (uint32_t)sh) / (uint32_t)dh); /* nearest */
        const uint8_t *srow = src + (size_t)sy * (size_t)src_pitch;
        uint32_t      *drow = dst + (size_t)y * (size_t)dst_pitch_px;
        for (x = 0; x < dw; ++x) {
            const int sx = (int)(((uint32_t)x * (uint32_t)sw) / (uint32_t)dw);
            drow[x] = lut->px[srow[sx]];
        }
    }
    return 0;
}

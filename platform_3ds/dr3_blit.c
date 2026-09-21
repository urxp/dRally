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

void dr3_lut32_build(dr3_lut32_t *lut, const dr3_palette_t *pal, int order, uint8_t alpha)
{
    int n;
    for (n = 0; n < 256; ++n) {
        const uint32_t r = pal->r[n];
        const uint32_t g = pal->g[n];
        const uint32_t b = pal->b[n];
        const uint32_t a = (uint32_t)alpha << 24;
        lut->px[n] = (order == DR3_LUT_RGB)
                   ? (r | (g << 8) | (b << 16) | a)
                   : (b | (g << 8) | (r << 16) | a);
    }
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

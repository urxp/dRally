#include "dr3_fb.h"
#include "dr3_log.h"

#include <3ds.h>
#include <stddef.h>

static uint32_t *dr3_fb;
static int       dr3_fb_w;
static int       dr3_fb_h;
static int       dr3_fb_ready;

int dr3_fb_init(void)
{
    uint16_t w = 0;
    uint16_t h = 0;
    uint32_t *fb;

    if (dr3_fb_ready) return 0;

    /* libctru does not double buffer the top screen by default: without it we would draw into the
       buffer that is currently on screen (heavy tearing) */
    gfxSetDoubleBuffering(GFX_TOP, true);

    /* the top screen frame buffer is stored rotated: 240 x 400 */
    fb = (uint32_t *)gfxGetFramebuffer(GFX_TOP, GFX_LEFT, &w, &h);
    dr3_fb_w = (int)w;
    dr3_fb_h = (int)h;

    if (!fb || dr3_fb_w <= 0 || dr3_fb_h <= 0) {
        dr3_log("[dr3] gfx: no framebuffer (%dx%d)", dr3_fb_w, dr3_fb_h);
        return -1;
    }

    dr3_fb      = fb;
    dr3_fb_ready = 1;
    dr3_log("[dr3] gfx: direct output %dx%d (rotated top screen, double buffered)", dr3_fb_w, dr3_fb_h);
    return 0;
}

void dr3_fb_present(const uint8_t *src, int sw, int sh, int src_pitch,
                    const dr3_palette_t *pal, const dr3_lut32_t *lut, int filter)
{
    int         x, y;
    uint16_t    w = 0;
    uint16_t    h = 0;
    uint32_t *  fb;

    if (!dr3_fb_ready && (dr3_fb_init() != 0)) return;

    /* with double buffering enabled the back buffer alternates every frame - always ask for the
       current one instead of caching the pointer */
    fb = (uint32_t *)gfxGetFramebuffer(GFX_TOP, GFX_LEFT, &w, &h);
    if (!fb) return;
    dr3_fb = fb;

    /* the image is written into the rotated buffer: source column -> hardware row */
    const int dw = dr3_fb_h;                  /* 400 */
    const int dh = dr3_fb_w;                  /* 240 */

    for (x = 0; x < dw; ++x) {
        uint32_t *row = dr3_fb + (size_t)x * (size_t)dr3_fb_w;
        int       sx0 = (int)(((uint32_t)x * (uint32_t)sw) / (uint32_t)dw);
        int       sx1 = (int)(((uint32_t)(x + 1) * (uint32_t)sw) / (uint32_t)dw);

        if (sx1 <= sx0) sx1 = sx0 + 1;

        for (y = 0; y < dh; ++y) {
            const int sy = (int)(((uint32_t)y * (uint32_t)sh) / (uint32_t)dh);
            uint32_t  v;

            if (filter) {
                /* average the source columns that this target pixel covers - the game's dither
                   patterns alias into vertical stripes otherwise */
                const uint8_t *srow = src + (size_t)sy * (size_t)src_pitch;
                uint32_t       r = 0, g = 0, b = 0, n = 0;
                int            sx;

                for (sx = sx0; sx < sx1 && sx < sw; ++sx) {
                    const uint8_t idx = srow[sx];
                    r += pal->r[idx];
                    g += pal->g[idx];
                    b += pal->b[idx];
                    ++n;
                }

                if (n > 1) {
                    const uint32_t inv = 65536u / n;   /* no integer divide on ARM11 */
                    r = (r * inv) >> 16;
                    g = (g * inv) >> 16;
                    b = (b * inv) >> 16;
                }

                v = (r << lut->rs) | (g << lut->gs) | (b << lut->bs) | (0xFFu << lut->as);
            }
            else {
                v = lut->px[src[(size_t)sy * (size_t)src_pitch + sx0]];
            }

            row[dh - 1 - y] = v;   /* rotation: dest column counts downwards */
        }
    }

    GSPGPU_FlushDataCache(dr3_fb, (u32)(dr3_fb_w * dr3_fb_h * 4));
    gfxScreenSwapBuffers(GFX_TOP, false);
}

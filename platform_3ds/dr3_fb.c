#include "dr3_fb.h"
#include "dr3_log.h"
#include "dr3_prof.h"

#include <3ds.h>
#include <stddef.h>

static uint32_t *dr3_fb;
static int       dr3_fb_w;
static int       dr3_fb_h;
static int       dr3_fb_ready;

/*
 * Per-mode lookup tables.  The original inner loops computed "y * sh / dh" for every one of the
 * 96.000 pixels; an ARM11 integer division costs ~20-40 cycles, so that alone was milliseconds per
 * frame.  Everything that only depends on the source/target size is precomputed once here.
 */
#define DR3_MAP_MAX 512

static int      dr3_map_sw = -1;
static int      dr3_map_sh = -1;
static uint16_t dr3_sx[DR3_MAP_MAX];    /* target x -> source column (nearest)        */
static uint16_t dr3_sy[DR3_MAP_MAX];    /* target y -> source row (nearest)           */
static uint16_t dr3_fx0[DR3_MAP_MAX];   /* filtered: first source column of target x  */
static uint16_t dr3_fx1[DR3_MAP_MAX];   /* filtered: end column (exclusive)           */
static uint32_t dr3_finv[DR3_MAP_MAX];  /* filtered: 65536 / (fx1 - fx0) - must hold 65536! */

static void dr3_fb_build_maps(int sw, int sh, int dw, int dh)
{
    int i;

    if (dr3_map_sw == sw && dr3_map_sh == sh) return;

    for (i = 0; i < dw && i < DR3_MAP_MAX; ++i) {
        int x1;

        dr3_sx[i]  = (uint16_t)(((uint32_t)i * (uint32_t)sw) / (uint32_t)dw);
        dr3_fx0[i] = dr3_sx[i];
        x1         = (int)(((uint32_t)(i + 1) * (uint32_t)sw) / (uint32_t)dw);
        if (x1 <= dr3_fx0[i]) x1 = dr3_fx0[i] + 1;
        if (x1 > sw)          x1 = sw;
        dr3_fx1[i]  = (uint16_t)x1;
        dr3_finv[i] = 65536u / (uint32_t)(x1 - dr3_fx0[i]);
    }

    for (i = 0; i < dh && i < DR3_MAP_MAX; ++i) {
        dr3_sy[i] = (uint16_t)(((uint32_t)i * (uint32_t)sh) / (uint32_t)dh);
    }

    dr3_map_sw = sw;
    dr3_map_sh = sh;
}

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
    const uint32_t *lutpx = lut->px;

    if (dw > DR3_MAP_MAX || dh > DR3_MAP_MAX) return;

    dr3_fb_build_maps(sw, sh, dw, dh);

    /* the skip-blit variant measures the floor we cannot avoid (flush + swap only) */
    if (!dr3_prof_skip_blit()) {
        const uint64_t blit_t0 = dr3_prof_tick();

        if (filter) {
            /* average the source columns a target pixel covers - the game's dither patterns alias into
               vertical stripes with plain nearest neighbour */
            for (x = 0; x < dw; ++x) {
                uint32_t *      drow   = fb + (size_t)x * (size_t)dr3_fb_w + (dh - 1);
                const int       sx0    = dr3_fx0[x];
                const int       sx1    = dr3_fx1[x];
                const uint32_t  inv    = dr3_finv[x];
                const uint8_t * srow   = NULL;
                int             sy_cur = -1;
                const int       rs = lut->rs, gs = lut->gs, bs = lut->bs, as = lut->as;

                for (y = 0; y < dh; ++y) {
                    const int sy = dr3_sy[y];
                    uint32_t  r = 0, g = 0, b = 0;
                    const uint8_t *p;
                    const uint8_t *end;

                    if (sy != sy_cur) {          /* same source row -> same pixels, only re-base on change */
                        sy_cur = sy;
                        srow   = src + (size_t)sy * (size_t)src_pitch;
                    }

                    if ((sx1 - sx0) == 2) {
                        /* the common case (1.6:1 downscale): average two already converted pixels.
                           The packed average is exact for 8-bit channels and needs neither palette
                           lookups nor multiplications - the generic path cost 10 ms per frame. */
                        const uint32_t a = lutpx[srow[sx0]];
                        const uint32_t b = lutpx[srow[sx0 + 1]];

                        *drow-- = ((((a ^ b) & 0xFEFEFEFEu) >> 1) + (a & b)) | (0xFFu << as);
                        continue;
                    }

                    p   = srow + sx0;
                    end = srow + sx1;
                    while (p < end) {
                        const uint8_t idx = *p++;
                        r += pal->r[idx];
                        g += pal->g[idx];
                        b += pal->b[idx];
                    }

                    *drow-- = ((((r * inv) >> 16) << rs) | (((g * inv) >> 16) << gs) |
                               (((b * inv) >> 16) << bs) | (0xFFu << as));
                }
            }
        }
        else {
            for (x = 0; x < dw; ++x) {
                const int       sx     = dr3_sx[x];
                uint32_t *      drow   = fb + (size_t)x * (size_t)dr3_fb_w + (dh - 1);
                const uint8_t * sptr   = src + sx;
                int             sy_cur = -1;

                for (y = 0; y < dh; ++y) {
                    const int sy = dr3_sy[y];
                    if (sy != sy_cur) {
                        sy_cur = sy;
                        sptr   = src + (size_t)sy * (size_t)src_pitch + sx;
                    }
                    *drow-- = lutpx[*sptr];      /* vertical stretch: same source pixel while sy is constant */
                }
            }
        }
        dr3_prof_add(DR3_SLOT_BLIT, dr3_prof_us(blit_t0));
    }


    {
        const uint64_t t = dr3_prof_tick();
        GSPGPU_FlushDataCache(dr3_fb, (u32)(dr3_fb_w * dr3_fb_h * 4));
        dr3_prof_add(DR3_SLOT_FLUSH, dr3_prof_us(t));
    }
    {
        const uint64_t t = dr3_prof_tick();
        gfxScreenSwapBuffers(GFX_TOP, false);
        dr3_prof_add(DR3_SLOT_SWAP, dr3_prof_us(t));
    }
}

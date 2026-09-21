/*
 * test_dr3.c - host unit tests for the portable part of the 3DS port.
 *
 * Runs on Windows (MSVC) so the error-prone logic (palette -> 32-bit LUT, scaling, pad ->
 * scancode mapping) is verified long before a devkitARM toolchain is available.
 *
 * Build/run:  powershell -ExecutionPolicy Bypass -File tests/build_tests.ps1
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../platform_3ds/dr3_blit.h"
#include "../platform_3ds/dr3_input_map.h"

static int g_failed;
static int g_checks;

#define CHECK(cond, ...)                                  \
    do {                                                  \
        ++g_checks;                                       \
        if (!(cond)) {                                    \
            ++g_failed;                                   \
            printf("  FAIL %s:%d: ", __FILE__, __LINE__); \
            printf(__VA_ARGS__);                          \
            printf("\n");                                 \
        }                                                 \
    } while (0)

static void test_lut(void)
{
    dr3_palette_t pal;
    dr3_lut32_t   lut;
    int           n;

    printf("- LUT build\n");
    dr3_palette_reset(&pal);
    dr3_palette_set(&pal, 0, 0x11, 0x22, 0x33);

    /* BGR memory order: byte0=B, byte1=G, byte2=R  ->  little endian value 0x00RRGGBB */
    dr3_lut32_build(&lut, &pal, DR3_LUT_BGR, 0xFF);
    CHECK(lut.px[0] == 0xFF112233u, "BGR order: got 0x%08X want 0xFF112233 (bytes 33,22,11)",
          lut.px[0]);
    CHECK(lut.px[255] == 0xFFFFFFFFu, "grey ramp end: got 0x%08X", lut.px[255]);

    /* RGB memory order: byte0=R, byte1=G, byte2=B  ->  little endian value 0x00BBGGRR */
    dr3_lut32_build(&lut, &pal, DR3_LUT_RGB, 0x00);
    CHECK(lut.px[0] == 0x00332211u, "RGB order/alpha: got 0x%08X want 0x00332211 (bytes 11,22,33)",
          lut.px[0]);

    dr3_lut32_build(&lut, &pal, DR3_LUT_RGB, 0xFF);
    for (n = 1; n < 256; ++n)
        CHECK(lut.px[n] != lut.px[n - 1], "duplicate LUT entry at %d", n);
}

static void test_blit_center(void)
{
    uint8_t       src[4 * 2]; /* 4x2 image */
    uint32_t      dst[8 * 4]; /* 8x4 target */
    dr3_lut32_t   lut;
    dr3_palette_t pal;

    printf("- blit, centred 1:1\n");
    dr3_palette_reset(&pal);
    dr3_lut32_build(&lut, &pal, DR3_LUT_RGB, 0xFF);

    memset(src, 0, sizeof(src));
    src[0] = 0; src[1] = 1; src[2] = 2; src[3] = 3;
    src[4] = 4; src[5] = 5; src[6] = 6; src[7] = 7;

    memset(dst, 0xAB, sizeof(dst));
    CHECK(dr3_blit8_lut32(src, 4, 2, 4, &lut, dst, 8, 4, 8, DR3_SCALE_CENTER, 0xDEADBEEFu) == 0,
          "blit returned an error");

    /* 4x2 image into an 8x4 target -> top-left offset (2,1); borders keep the clear colour */
    CHECK(dst[0] == 0xDEADBEEFu, "border not cleared: 0x%08X", dst[0]);
    CHECK(dst[1 * 8 + 2] == lut.px[0], "pixel(0,0) wrong: 0x%08X", dst[1 * 8 + 2]);
    CHECK(dst[2 * 8 + 5] == lut.px[7], "pixel(3,1) wrong: 0x%08X", dst[2 * 8 + 5]);
    CHECK(dst[1 * 8 + 1] == 0xDEADBEEFu, "left border overwritten: 0x%08X", dst[1 * 8 + 1]);
    CHECK(dst[3 * 8 + 2] == 0xDEADBEEFu, "bottom border overwritten: 0x%08X", dst[3 * 8 + 2]);

    CHECK(dr3_blit8_lut32(src, 4, 2, 4, &lut, dst, 2, 2, 2, DR3_SCALE_CENTER, 0) == -1,
          "expected a refusal when the source is larger than the target");
}

static void test_blit_stretch(void)
{
    static uint8_t  src[320 * 200];
    static uint32_t dst[400 * 240];
    dr3_lut32_t     lut;
    dr3_palette_t   pal;
    int             x, y;

    printf("- blit, 320x200 -> 400x240 stretch\n");
    dr3_palette_reset(&pal);
    dr3_lut32_build(&lut, &pal, DR3_LUT_BGR, 0xFF);

    for (y = 0; y < 200; ++y)
        for (x = 0; x < 320; ++x)
            src[y * 320 + x] = (uint8_t)((x ^ y) & 0xFF);

    CHECK(dr3_blit8_lut32(src, 320, 200, 320, &lut, dst, 400, 240, 400, DR3_SCALE_STRETCH, 0) == 0,
          "stretch blit failed");

    CHECK(dst[0] == lut.px[src[0]], "top-left mismatch");
    CHECK(dst[400 - 1] == lut.px[src[319]], "top-right mismatch: 0x%08X vs 0x%08X",
          dst[400 - 1], lut.px[src[319]]);
    CHECK(dst[239 * 400] == lut.px[src[199 * 320]], "bottom-left mismatch");
    CHECK(dst[239 * 400 + 399] == lut.px[src[199 * 320 + 319]], "bottom-right mismatch");

    for (y = 0; y < 240; ++y)
        for (x = 0; x < 400; ++x)
            if (dst[y * 400 + x] == 0) { CHECK(0, "untouched pixel at %d,%d", x, y); y = 240; break; }
}

static void expect_scan(const dr3_pad_state_t *st, int want, const char *what)
{
    uint8_t set[SDL_NUM_SCANCODES];
    int     n = dr3_input_scancodes(st, set);
    CHECK(n == want, "%s: %d scancodes set, expected %d", what, n, want);
}

static void test_input_map(void)
{
    dr3_pad_state_t st;
    uint8_t         set[SDL_NUM_SCANCODES];

    printf("- pad -> scancode mapping\n");

    memset(&st, 0, sizeof(st));
    expect_scan(&st, 0, "idle");

    /* R = accelerate -> 'A' (dRally's default), L = brake -> 'Z' */
    memset(&st, 0, sizeof(st));
    st.held = DR3_PAD_R;
    dr3_input_scancodes(&st, set);
    CHECK(set[SDL_SCANCODE_A] == 1, "R must press 'A' (accelerate)");
    CHECK(set[SDL_SCANCODE_Z] == 0, "R must not press 'Z'");

    /* A = nitro (LSHIFT) + menu confirm (KP_ENTER) */
    memset(&st, 0, sizeof(st));
    st.held = DR3_PAD_A;
    dr3_input_scancodes(&st, set);
    expect_scan(&st, 2, "A button");
    CHECK(set[SDL_SCANCODE_LSHIFT] && set[SDL_SCANCODE_KP_ENTER],
          "A must map to LSHIFT + KP_ENTER");

    memset(&st, 0, sizeof(st));
    st.held = DR3_PAD_UP;
    expect_scan(&st, 2, "d-pad up");

    memset(&st, 0, sizeof(st));
    st.cpad_x = -1;
    expect_scan(&st, 2, "circle pad left");

    memset(&st, 0, sizeof(st));
    st.held   = DR3_PAD_R;
    st.cpad_x = -1;
    expect_scan(&st, 3, "accelerate + steer left");

    memset(&st, 0, sizeof(st));
    st.held = DR3_PAD_X;
    expect_scan(&st, 1, "X button");
    memset(&st, 0, sizeof(st));
    st.held = DR3_PAD_Y;
    expect_scan(&st, 1, "Y button");
    memset(&st, 0, sizeof(st));
    st.held = DR3_PAD_B;
    expect_scan(&st, 1, "B button");
    memset(&st, 0, sizeof(st));
    st.held = DR3_PAD_START;
    expect_scan(&st, 1, "START button");

    memset(&st, 0, sizeof(st));
    st.cpad_y = 1;
    expect_scan(&st, 2, "circle pad up");

    /* quit combo */
    memset(&st, 0, sizeof(st));
    CHECK(!dr3_input_quit_combo(&st), "empty pad must not quit");
    st.held = DR3_PAD_L | DR3_PAD_R;
    CHECK(!dr3_input_quit_combo(&st), "L+R must not quit (START is required)");
    st.held = DR3_PAD_L | DR3_PAD_R | DR3_PAD_START;
    CHECK(dr3_input_quit_combo(&st), "L+R+START must quit");

    CHECK(strcmp(dr3_scancode_name(SDL_SCANCODE_A), "A (accelerate)") == 0,
          "scancode name lookup failed");
}

static void test_lut_masks(void)
{
    dr3_palette_t pal;
    dr3_lut32_t   lut, lut2;
    uint32_t      v;

    printf("- LUT from SDL masks\n");
    dr3_palette_reset(&pal);
    dr3_palette_set(&pal, 0, 0x11, 0x22, 0x33);

    /* the 3DS framebuffer is SDL_PIXELFORMAT_RGBA8888:
       R=0xFF000000 G=0x00FF0000 B=0x0000FF00 A=0x000000FF */
    dr3_lut32_build_masks(&lut, &pal, 0xFF000000u, 0x00FF0000u, 0x0000FF00u, 0x000000FFu);
    CHECK(lut.px[0] == 0x112233FFu, "RGBA8888 masks: got 0x%08X want 0x112233FF", lut.px[0]);

    /* ... which in little endian memory is A,B,G,R = FF,33,22,11 */
    v = lut.px[0];
    CHECK(((v >> 0) & 0xFF) == 0xFF, "byte0 (A) = 0x%02X", (v >> 0) & 0xFF);
    CHECK(((v >> 8) & 0xFF) == 0x33, "byte1 (B) = 0x%02X", (v >> 8) & 0xFF);
    CHECK(((v >> 16) & 0xFF) == 0x22, "byte2 (G) = 0x%02X", (v >> 16) & 0xFF);
    CHECK(((v >> 24) & 0xFF) == 0x11, "byte3 (R) = 0x%02X", (v >> 24) & 0xFF);

    /* the convenience orders must match the equivalent SDL masks */
    dr3_lut32_build(&lut2, &pal, DR3_LUT_BGR, 0xFF);
    dr3_lut32_build_masks(&lut, &pal, 0x00FF0000u, 0x0000FF00u, 0x000000FFu, 0xFF000000u);
    CHECK(lut2.px[0] == lut.px[0], "DR3_LUT_BGR != ARGB8888 masks (0x%08X vs 0x%08X)",
          lut2.px[0], lut.px[0]);

    dr3_lut32_build(&lut2, &pal, DR3_LUT_RGB, 0xFF);
    dr3_lut32_build_masks(&lut, &pal, 0x000000FFu, 0x0000FF00u, 0x00FF0000u, 0xFF000000u);
    CHECK(lut2.px[0] == lut.px[0], "DR3_LUT_RGB != ABGR8888 masks (0x%08X vs 0x%08X)",
          lut2.px[0], lut.px[0]);

    /* empty masks must not invent an alpha value (palette entry 0 is black after a reset) */
    dr3_palette_reset(&pal);
    dr3_lut32_build_masks(&lut, &pal, 0, 0, 0, 0);
    CHECK(lut.px[0] == 0x00000000u, "empty masks: 0x%08X", lut.px[0]);
}

int main(void)
{
    printf("dRally 3DS port - host tests\n\n");
    test_lut();
    test_lut_masks();
    test_blit_center();
    test_blit_stretch();
    test_input_map();

    printf("\n%d checks, %d failures\n", g_checks, g_failed);
    return g_failed ? 1 : 0;
}

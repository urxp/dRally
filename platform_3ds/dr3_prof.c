#include "dr3_prof.h"

#if defined(DR3_PROFILE)

#include "dr3_log.h"
#include "dr3_bottom.h"

#include <3ds.h>
#include <SDL.h>
#include <stdio.h>

/* this file draws via the real printf (libctru's console on the bottom screen) */
#if defined(printf)
#undef printf
#endif

#include <stdarg.h>
#include <string.h>

/* ------------------------------------------------------------------- state --- */

typedef struct { uint32_t cnt, sum, max; } dr3_slot_t;

typedef struct {
    uint32_t present_cnt, present_sum;
    uint32_t blit_sum, flush_sum, swap_sum;
    uint32_t frame_cnt, frame_sum, frame_max;
    uint32_t skip_sum;
    uint32_t hist[4];                     /* <14ms | 14-20 | 20-30 | >30 */
} dr3_var_t;

static dr3_slot_t dr3_slot[DR3_PHASE_COUNT][DR3_SLOT_COUNT];
static uint32_t   dr3_cnt [DR3_PHASE_COUNT][DR3_CNT_COUNT];
static dr3_var_t  dr3_var [DR3_PHASE_COUNT][DR3_VAR_COUNT];

/* the same as above, but accumulating over the whole phase (the per-second ones are reset each
   second, the summaries need the phase totals) */
static dr3_slot_t dr3_slot_total[DR3_PHASE_COUNT][DR3_SLOT_COUNT];
static uint32_t   dr3_cnt_total [DR3_PHASE_COUNT][DR3_CNT_COUNT];
static dr3_var_t  dr3_var_total [DR3_PHASE_COUNT][DR3_VAR_COUNT];

static const char *const dr3_phase_name[DR3_PHASE_COUNT] = { "BOOT", "INTRO", "MENU", "RACE" };
static const char *const dr3_var_name[DR3_VAR_COUNT]     = { "normal", "filter-off", "skip-blit" };

static uint64_t dr3_ticks_per_ms = 268000;      /* ARM11 @268 MHz, calibrated in init() */
static int      dr3_phase        = DR3_PHASE_BOOT;
static int      dr3_variant      = DR3_VAR_NORMAL;
static int      dr3_var_force    = -1;          /* variant the scheduler wants   */
static uint64_t dr3_var_change_ms;
static uint64_t dr3_sec_ms;
static uint64_t dr3_phase_ms;
static int      dr3_phase_summarised;
static int      dr3_mode_w = -1, dr3_mode_h = -1, dr3_mode_filtered = -1;
static uint64_t dr3_audio_last_cb_ms;
static int      dr3_poll_div;
static uint64_t dr3_now_ms_cached;

/* ------------------------------------------------------------------ timing --- */

uint64_t dr3_prof_tick(void) { return svcGetSystemTick(); }

uint32_t dr3_prof_us(uint64_t t0)
{
    const uint64_t d = svcGetSystemTick() - t0;
    return (uint32_t)((d * 1000u) / dr3_ticks_per_ms);
}

static uint64_t dr3_now_ms(void) { return svcGetSystemTick() / dr3_ticks_per_ms; }

/* -------------------------------------------------------------------- init --- */

void dr3_prof_init(void)
{
    static int done = 0;
    uint64_t   w0, w1, t0, t1;

    if (done) return;
    done = 1;

    /* The New 3DS runs the ARM11 at 804 MHz instead of 268 MHz - ask for it (needs Luma/hbmenu to
       allow it; harmless if refused) and then calibrate the tick clock, so all numbers below are in
       real microseconds and the log also tells us which clock we actually got. */
    osSetSpeedupEnable(true);      /* void in libctru - refused silently without Luma's 804 MHz support */

    w0 = osGetTime(); t0 = svcGetSystemTick();
    svcSleepThread(200000000LL);                 /* 200 ms */
    w1 = osGetTime(); t1 = svcGetSystemTick();

    if ((w1 > w0) && ((w1 - w0) > 50) && (t1 > t0)) {
        dr3_ticks_per_ms = (t1 - t0) / (w1 - w0);
    }

    dr3_log("[dr3] PROF init: 804 MHz speedup requested, cpu clock ~%lu MHz (ticks/ms=%llu)",
            (unsigned long)(dr3_ticks_per_ms / 1000), (unsigned long long)dr3_ticks_per_ms);

    /* NOTE: the profiler text lives on the bottom screen, but consoleInit() needs the gfx state that
       SDL's n3ds video driver creates with gfxInit() - and that happens long after this function.
       Initialising it here jumped into a NULL pointer inside libctru, so it is now done lazily in
       dr3_prof_console() on the first overlay update. */
    dr3_sec_ms        = dr3_now_ms();
    dr3_phase_ms      = dr3_sec_ms;
    dr3_var_change_ms = dr3_sec_ms;
    dr3_audio_last_cb_ms = 0;
}

/* ------------------------------------------------------------------ adders --- */

void dr3_prof_add(int slot, uint32_t us)
{
    dr3_slot_t *s;
    dr3_slot_t *t;

    if (slot < 0 || slot >= DR3_SLOT_COUNT) return;

    s = &dr3_slot[dr3_phase][slot];
    t = &dr3_slot_total[dr3_phase][slot];

    s->cnt++; s->sum += us; if (us > s->max) s->max = us;
    t->cnt++; t->sum += us; if (us > t->max) t->max = us;

    /* the per-variant numbers are what the summaries compare, so they are filled here (the present
       code just reports its slots) */
    switch (slot) {
        case DR3_SLOT_PRESENT:
            dr3_var[dr3_phase][dr3_variant].present_cnt++;
            dr3_var[dr3_phase][dr3_variant].present_sum      += us;
            dr3_var_total[dr3_phase][dr3_variant].present_cnt++;
            dr3_var_total[dr3_phase][dr3_variant].present_sum += us;
            break;
        case DR3_SLOT_BLIT:
            dr3_var[dr3_phase][dr3_variant].blit_sum        += us;
            dr3_var_total[dr3_phase][dr3_variant].blit_sum  += us;
            break;
        case DR3_SLOT_FLUSH:
            dr3_var[dr3_phase][dr3_variant].flush_sum       += us;
            dr3_var_total[dr3_phase][dr3_variant].flush_sum += us;
            break;
        case DR3_SLOT_SWAP:
            dr3_var[dr3_phase][dr3_variant].swap_sum        += us;
            dr3_var_total[dr3_phase][dr3_variant].swap_sum  += us;
            break;
        default:
            break;
    }
}

void dr3_prof_count(int counter, uint32_t n)
{
    if (counter < 0 || counter >= DR3_CNT_COUNT) return;
    dr3_cnt[dr3_phase][counter]       += n;
    dr3_cnt_total[dr3_phase][counter] += n;
}

void dr3_prof_phase(int phase)
{
    if (phase < 0 || phase >= DR3_PHASE_COUNT || phase == dr3_phase) return;

    dr3_log("[dr3] PROF --- phase %s -> %s ---", dr3_phase_name[dr3_phase], dr3_phase_name[phase]);

    dr3_phase             = phase;
    dr3_phase_ms          = dr3_now_ms();
    dr3_sec_ms            = dr3_phase_ms;
    dr3_var_change_ms     = dr3_phase_ms;
    dr3_phase_summarised  = 0;
    dr3_variant           = DR3_VAR_NORMAL;

    memset(dr3_slot, 0, sizeof(dr3_slot));
    memset(dr3_cnt, 0, sizeof(dr3_cnt));
    memset(dr3_var, 0, sizeof(dr3_var));
    memset(dr3_slot_total, 0, sizeof(dr3_slot_total));
    memset(dr3_cnt_total, 0, sizeof(dr3_cnt_total));
    memset(dr3_var_total, 0, sizeof(dr3_var_total));
}

void dr3_prof_present_mode(int w, int h, int filtered)
{
    if ((w == dr3_mode_w) && (h == dr3_mode_h) && (filtered == dr3_mode_filtered)) return;

    dr3_mode_w        = w;
    dr3_mode_h        = h;
    dr3_mode_filtered = filtered;

    dr3_log("[dr3] PROF mode %dx%d (%s) in phase %s", w, h, filtered ? "filter" : "nearest",
            dr3_phase_name[dr3_phase]);
}

void dr3_prof_event(const char *fmt, ...)
{
    char    buf[160];
    va_list ap;

    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);

    dr3_log("[dr3] PROF event [%s]: %s", dr3_phase_name[dr3_phase], buf);
}

/* printf-style overlay line (bottom screen, updated once per second) */
static void dr3_prof_line(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
static void dr3_prof_line(const char *fmt, ...)
{
    char    buf[80];
    va_list ap;

    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);

    printf("%s\n", buf);
}

/* ------------------------------------------------------------------- audio --- */

void dr3_prof_audio_cb(int samples, uint32_t mix_us)
{
    const uint64_t now       = dr3_now_ms();
    const uint32_t period_ms = 1024u * 1000u / 32728u;      /* ~31 ms buffer period */

    dr3_prof_add(DR3_SLOT_MIX, mix_us);
    dr3_prof_count(DR3_CNT_AUDIO_CB, 1);
    if (samples > 0) dr3_prof_count(DR3_CNT_AUDIO_FR, (uint32_t)samples);

    /* a callback arriving much later than the buffer period means the mixer was starved - that is what
       makes music drag on the 3DS */
    if (dr3_audio_last_cb_ms && ((now - dr3_audio_last_cb_ms) > (period_ms + period_ms / 2)))
        dr3_prof_count(DR3_CNT_STALL, 1);

    dr3_audio_last_cb_ms = now;
}

void dr3_prof_music_tick(void) { dr3_prof_count(DR3_CNT_MUSIC_TICK, 1); }

/* ---------------------------------------------------- game frame + variants --- */

/* Time between two engine frames (the real frame period, not just the timer handler) so the log
   shows whether the 70 Hz budget (14285 us) is met. */
uint32_t dr3_prof_frame_delta(void)
{
    static uint64_t prev;
    const uint64_t  now = svcGetSystemTick();
    uint32_t        us  = 0;

    if (prev) us = (uint32_t)(((now - prev) * 1000u) / dr3_ticks_per_ms);
    prev = now;

    return us;
}

void dr3_prof_frame(uint32_t game_us, uint32_t skip)
{
    dr3_var_t *v = &dr3_var[dr3_phase][dr3_variant];
    dr3_var_t *t = &dr3_var_total[dr3_phase][dr3_variant];

    dr3_prof_add(DR3_SLOT_GAME, game_us);
    dr3_prof_count(DR3_CNT_SKIP, skip);

    v->frame_cnt++;
    v->frame_sum += game_us;
    v->skip_sum  += skip;
    if (game_us > v->frame_max) v->frame_max = game_us;

    t->frame_cnt++;
    t->frame_sum += game_us;
    t->skip_sum  += skip;
    if (game_us > t->frame_max) t->frame_max = game_us;

    /* frame time histogram - the engine targets 70 Hz = 14.3 ms per frame */
    if      (game_us < 14000) { v->hist[0]++; t->hist[0]++; }
    else if (game_us < 20000) { v->hist[1]++; t->hist[1]++; }
    else if (game_us < 30000) { v->hist[2]++; t->hist[2]++; }
    else                      { v->hist[3]++; t->hist[3]++; }
}

int dr3_prof_variant(void)      { return dr3_variant; }
int dr3_prof_skip_blit(void)    { return dr3_variant == DR3_VAR_NOBLIT; }
int dr3_prof_force_filter(void) { return (dr3_variant == DR3_VAR_NOFILT) ? 0 : -1; }

/* The schedule knows two situations: the 640x480 front end (menu/intro) and the 320x240 races.  It
   rotates on its own so a single run collects every comparison we need. */
static int dr3_prof_want_variant(uint64_t now)
{
    const uint32_t since = (uint32_t)(now - dr3_var_change_ms);

    if ((dr3_phase == DR3_PHASE_MENU) || (dr3_phase == DR3_PHASE_INTRO)) {
        if (since < 10000) return DR3_VAR_NORMAL;
        if (since < 20000) return DR3_VAR_NOFILT;
        if (since < 30000) return DR3_VAR_NOBLIT;
    }
    else if (dr3_phase == DR3_PHASE_RACE) {
        if (since < 15000) return DR3_VAR_NORMAL;
        if (since < 30000) return DR3_VAR_NOBLIT;
        if (since < 45000) return DR3_VAR_NORMAL;
    }

    dr3_var_change_ms = now;               /* restart the cycle */
    return DR3_VAR_NORMAL;
}

/* ------------------------------------------------------------------ output --- */

static uint32_t dr3_avg(uint32_t sum, uint32_t cnt) { return cnt ? (sum / cnt) : 0; }

/* The bottom screen console needs gfxInit(), which SDL performs when the video subsystem is
   initialised - definitely not during early startup.  Initialising it on the first overlay update
   avoids the NULL jump inside libctru's gfx code. */
static int dr3_console_ready;

static int dr3_prof_console(void)
{
    if (!dr3_bottom_console_ensure()) return 0;   /* shared with the release build's bottom screen */
    dr3_console_ready = 1;

    return 1;
}

/* ------------------------------------------------------------------ audio UI --- */

/* Rate candidates - the DAC's real rate does not have to be the commonly quoted 32728 Hz; the pitch
   tells us.  A tap reopens the SDL device at the new rate and persists it. */
static const uint32_t dr3_rate_tab[] = { 22050u, 24000u, 26728u, 32000u, 32728u, 36000u, 44100u, 48000u, 48500u };
static const int      dr3_rate_n     = (int)(sizeof(dr3_rate_tab) / sizeof(dr3_rate_tab[0]));
static int            dr3_rate_idx   = 4;      /* 32728 */

extern void dr3_audio_reopen(uint32_t hz);     /* implemented in sound_api.c (3DS build) */

static uint32_t dr3_prof_audio_rate(void) { return dr3_rate_tab[dr3_rate_idx]; }

static void dr3_prof_audio_rate_step(int dir)
{
    dr3_rate_idx += dir;
    if (dr3_rate_idx < 0)          dr3_rate_idx = 0;
    if (dr3_rate_idx >= dr3_rate_n) dr3_rate_idx = dr3_rate_n - 1;

    dr3_log("[dr3] PROF audio rate -> %lu Hz", (unsigned long)dr3_prof_audio_rate());
    dr3_audio_reopen(dr3_prof_audio_rate());
}

/* Three touch zones on the bottom screen: rate down, rate up (drawn right of the AUDIO line). */
static void dr3_prof_touch(void)
{
    static int  was_down;
    touchPosition t;
    int         down;

    hidTouchRead(&t);
    down = (t.px || t.py) ? 1 : 0;

    if (down && !was_down) {
        const int x = t.px, y = t.py;

        if ((y >= 76) && (y <= 96)) {
            if ((x >= 160) && (x <= 240))      dr3_prof_audio_rate_step(-1);
            else if ((x >= 248) && (x <= 319)) dr3_prof_audio_rate_step(+1);
        }
    }

    was_down = down;
}

/* The console redraws the screen for every printf(), which made the overlay flicker.  Everything
   (including the clear) is collected here and written with a single printf(). */
static char dr3_out_buf[4096];
static int  dr3_out_len;

static void dr3_out(const char *fmt, ...)
{
    va_list ap;
    int     n;

    va_start(ap, fmt);
    n = vsnprintf(dr3_out_buf + dr3_out_len, sizeof(dr3_out_buf) - (size_t)dr3_out_len, fmt, ap);
    va_end(ap);

    if (n > 0) dr3_out_len += n;
}

static void dr3_prof_overlay(void)
{
    const uint64_t    t0 = dr3_prof_tick();
    const int         p  = dr3_phase;
    const dr3_slot_t *pr = &dr3_slot[p][DR3_SLOT_PRESENT];
    const dr3_slot_t *ga = &dr3_slot[p][DR3_SLOT_GAME];
    const dr3_slot_t *io = &dr3_slot[p][DR3_SLOT_IO];
    const dr3_slot_t *mx = &dr3_slot[p][DR3_SLOT_MIX];
    const dr3_var_t  *v  = &dr3_var[p][dr3_variant];
    const uint64_t    in = dr3_now_ms() - dr3_phase_ms;

    if (!dr3_prof_console()) return;      /* gfx not initialised yet - no overlay this time */

    if (dr3_bottom_is_hidden()) {
        /* the player tapped the screen away - keep it dark */
        printf("\x1b[2J\x1b[H");
        dr3_bottom_flush();
        dr3_prof_add(DR3_SLOT_OVERLAY, dr3_prof_us(t0));
        return;
    }

    printf("\x1b[2J\x1b[H");
    dr3_out("dRally 3DS profiler   %lu MHz\n", (unsigned long)(dr3_ticks_per_ms / 1000));
    dr3_out("PHASE %-5s %4lu.%01lus   VAR %s\n", dr3_phase_name[p], (unsigned long)(in / 1000),
           (unsigned long)((in / 100) % 10), dr3_var_name[dr3_variant]);
    dr3_out("MODE  %dx%d %s\n", dr3_mode_w, dr3_mode_h, dr3_mode_filtered ? "filter" : "nearest");
    dr3_out("PRES  %3lu/s %5luus max %5lu | blit %5lu flush %4lu swap %4lu\n",
           (unsigned long)pr->cnt, (unsigned long)dr3_avg(pr->sum, pr->cnt), (unsigned long)pr->max,
           (unsigned long)dr3_avg(dr3_slot[p][DR3_SLOT_BLIT].sum, pr->cnt),
           (unsigned long)dr3_avg(dr3_slot[p][DR3_SLOT_FLUSH].sum, pr->cnt),
           (unsigned long)dr3_avg(dr3_slot[p][DR3_SLOT_SWAP].sum, pr->cnt));
    dr3_out("GAME  %3lu/s %5luus max %5lu | IO %4lu/s %4luus\n",
           (unsigned long)ga->cnt, (unsigned long)dr3_avg(ga->sum, ga->cnt), (unsigned long)ga->max,
           (unsigned long)io->cnt, (unsigned long)dr3_avg(io->sum, io->cnt));
    dr3_out("FRAME %5luus max %5lu  skip %lu/s\n", (unsigned long)dr3_avg(v->frame_sum, v->frame_cnt),
           (unsigned long)v->frame_max, (unsigned long)dr3_cnt[p][DR3_CNT_SKIP]);
    dr3_out("AUDIO %3lucb/s %5luf/s (want %5lu) stalls %lu mix %luus\n",
           (unsigned long)dr3_cnt[p][DR3_CNT_AUDIO_CB],
           (unsigned long)dr3_cnt[p][DR3_CNT_AUDIO_FR],
           (unsigned long)dr3_prof_audio_rate(),
           (unsigned long)dr3_cnt[p][DR3_CNT_STALL],
           (unsigned long)dr3_avg(mx->sum, mx->cnt));
    dr3_out("HIST  <14ms:%lu 14-20:%lu 20-30:%lu >30:%lu\n",
           (unsigned long)v->hist[0], (unsigned long)v->hist[1],
           (unsigned long)v->hist[2], (unsigned long)v->hist[3]);
    dr3_out("\n%s\n", dr3_phase_summarised ? "*** see drally_3ds.log for the summary ***"
                                         : "(measuring - no input needed)");
    dr3_out("RATE %5lu Hz          [RATE -]  [RATE +]\n", (unsigned long)dr3_prof_audio_rate());

    dr3_prof_touch();          /* tap the rate buttons to tune the pitch */

    /* append the same controls + driver standings block the normal build shows */
    {
        char lines[DR3_BOTTOM_LINES][DR3_BOTTOM_LINE_LEN];
        int  n = dr3_bottom_build_lines(lines), i;

        for (i = 0; i < n; ++i) dr3_out("%s\n", lines[i]);
    }

    printf("%s", dr3_out_buf);
    dr3_out_len = 0;

    dr3_bottom_flush();

    dr3_prof_add(DR3_SLOT_OVERLAY, dr3_prof_us(t0));
}

static void dr3_prof_summary(const char *when)
{
    const int p = dr3_phase;
    int       k;

    dr3_log("[dr3] PROF === SUMMARY phase=%s (%s) duration=%lus ===", dr3_phase_name[p], when,
            (unsigned long)((dr3_now_ms() - dr3_phase_ms) / 1000));

    for (k = 0; k < DR3_VAR_COUNT; ++k) {
        const dr3_var_t *v = &dr3_var_total[p][k];
        const uint32_t   fl = dr3_avg(dr3_slot_total[p][DR3_SLOT_FLUSH].sum, v->present_cnt);
        const uint32_t   sw = dr3_avg(dr3_slot_total[p][DR3_SLOT_SWAP].sum, v->present_cnt);

        if (!v->present_cnt) continue;

        dr3_log("[dr3] PROF   var=%-10s pres=%lu avg=%luus blit=%luus flush=%luus swap=%luus "
                "frame=%lu avg=%luus max=%luus skip=%lu hist=%lu/%lu/%lu/%lu",
                dr3_var_name[k], (unsigned long)v->present_cnt,
                (unsigned long)dr3_avg(v->present_sum, v->present_cnt),
                (unsigned long)dr3_avg(v->blit_sum, v->present_cnt),
                (unsigned long)fl, (unsigned long)sw,
                (unsigned long)v->frame_cnt,
                (unsigned long)dr3_avg(v->frame_sum, v->frame_cnt),
                (unsigned long)v->frame_max, (unsigned long)v->skip_sum,
                (unsigned long)v->hist[0], (unsigned long)v->hist[1],
                (unsigned long)v->hist[2], (unsigned long)v->hist[3]);
    }

    dr3_log("[dr3] PROF   io=%lu calls avg=%luus | audio cb=%lu frames=%lu mix avg=%luus stalls=%lu ticks=%lu",
            (unsigned long)dr3_cnt_total[p][DR3_CNT_IO],
            (unsigned long)dr3_avg(dr3_slot_total[p][DR3_SLOT_IO].sum, dr3_slot_total[p][DR3_SLOT_IO].cnt),
            (unsigned long)dr3_cnt_total[p][DR3_CNT_AUDIO_CB],
            (unsigned long)dr3_cnt_total[p][DR3_CNT_AUDIO_FR],
            (unsigned long)dr3_avg(dr3_slot_total[p][DR3_SLOT_MIX].sum, dr3_slot_total[p][DR3_SLOT_MIX].cnt),
            (unsigned long)dr3_cnt_total[p][DR3_CNT_STALL],
            (unsigned long)dr3_cnt_total[p][DR3_CNT_MUSIC_TICK]);

    dr3_log("[dr3] PROF === %s DONE ===", dr3_phase_name[p]);
    dr3_phase_summarised = 1;
}

/* ------------------------------------------------------------------- second --- */

static void dr3_prof_second(void)
{
    const int         p  = dr3_phase;
    const dr3_var_t  *v  = &dr3_var[p][dr3_variant];
    const dr3_slot_t *pr = &dr3_slot[p][DR3_SLOT_PRESENT];
    const dr3_slot_t *bl = &dr3_slot[p][DR3_SLOT_BLIT];
    const dr3_slot_t *fl = &dr3_slot[p][DR3_SLOT_FLUSH];
    const dr3_slot_t *sw = &dr3_slot[p][DR3_SLOT_SWAP];
    const dr3_slot_t *ga = &dr3_slot[p][DR3_SLOT_GAME];
    const dr3_slot_t *io = &dr3_slot[p][DR3_SLOT_IO];
    const dr3_slot_t *mx = &dr3_slot[p][DR3_SLOT_MIX];

    dr3_log("[dr3] STAT %s %s %dx%d %s | pres=%lu avg=%lu max=%lu blit=%lu flush=%lu swap=%lu | "
            "game=%lu avg=%lu max=%lu io=%lu avg=%lu delay=%lu | frame=%lu max=%lu skip=%lu | "
            "audio cb=%lu fr=%lu mix=%lu stalls=%lu ticks=%lu | hist=%lu/%lu/%lu/%lu",
            dr3_phase_name[p], dr3_var_name[dr3_variant], dr3_mode_w, dr3_mode_h,
            dr3_mode_filtered ? "filter" : "nearest",
            (unsigned long)pr->cnt, (unsigned long)dr3_avg(pr->sum, pr->cnt), (unsigned long)pr->max,
            (unsigned long)dr3_avg(bl->sum, bl->cnt),
            (unsigned long)dr3_avg(fl->sum, fl->cnt),
            (unsigned long)dr3_avg(sw->sum, sw->cnt),
            (unsigned long)ga->cnt, (unsigned long)dr3_avg(ga->sum, ga->cnt), (unsigned long)ga->max,
            (unsigned long)io->cnt, (unsigned long)dr3_avg(io->sum, io->cnt),
            (unsigned long)dr3_cnt[p][DR3_CNT_DELAY],
            (unsigned long)dr3_avg(v->frame_sum, v->frame_cnt), (unsigned long)v->frame_max,
            (unsigned long)dr3_cnt[p][DR3_CNT_SKIP],
            (unsigned long)dr3_cnt[p][DR3_CNT_AUDIO_CB],
            (unsigned long)dr3_cnt[p][DR3_CNT_AUDIO_FR],
            (unsigned long)dr3_avg(mx->sum, mx->cnt),
            (unsigned long)dr3_cnt[p][DR3_CNT_STALL],
            (unsigned long)dr3_cnt[p][DR3_CNT_MUSIC_TICK],
            (unsigned long)v->hist[0], (unsigned long)v->hist[1],
            (unsigned long)v->hist[2], (unsigned long)v->hist[3]);

    dr3_prof_overlay();

    /* start a fresh second - the phase totals above are kept for the summaries */
    memset(dr3_slot, 0, sizeof(dr3_slot));
    memset(dr3_cnt, 0, sizeof(dr3_cnt));
    memset(dr3_var, 0, sizeof(dr3_var));
}

/* -------------------------------------------------------------------- poll --- */

void dr3_prof_poll(void)
{
    uint64_t now;
    int      want;

    /* the on-screen rate buttons must react immediately (they throttle themselves internally) */
    dr3_bottom_touch_ex(70, 100);   /* a tap elsewhere switches the info off/on */
    dr3_prof_touch();               /* audio rate (profiler only)          */

    if (++dr3_poll_div < 32) return;      /* called from the frame limiter - keep it cheap */
    dr3_poll_div = 0;

    now = dr3_now_ms();

    want = dr3_prof_want_variant(now);
    if (want != dr3_variant) {
        dr3_log("[dr3] PROF variant %s -> %s", dr3_var_name[dr3_variant], dr3_var_name[want]);
        dr3_variant = want;
    }

    if (!dr3_phase_summarised && ((now - dr3_phase_ms) >= 20000)) dr3_prof_summary("auto");

    if ((now - dr3_sec_ms) >= 1000) {
        dr3_sec_ms = now;
        dr3_prof_second();
    }
}

#endif /* DR3_PROFILE */

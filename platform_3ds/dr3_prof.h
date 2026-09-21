/*
 * Part of the dRally 3DS port - https://github.com/urxp/dRally
 * SPDX-License-Identifier: MIT (see LICENSE and THIRD_PARTY.md)
 */
/*
 * dr3_prof.h - autonomous profiler for the Nintendo 3DS port.
 *
 * Enabled with -DDR3_PROFILE (see Makefile.3ds: "make -f Makefile.3ds DR3_DEBUG=1").  It measures the
 * whole frame budget with the ARM11 system tick, aggregates per second and per display mode, rotates
 * measurement variants on its own, shows everything on the (unused) bottom screen and writes one log
 * line per second plus phase summaries to sdmc:/drally_3ds.log.  No user interaction required.
 *
 * Without -DDR3_PROFILE every call below compiles away to nothing, so the release build is unaffected.
 */
#ifndef DR3_PROF_H
#define DR3_PROF_H

#include <stdint.h>

/* measurement phases (detected from engine entry points) */
#define DR3_PHASE_BOOT   0
#define DR3_PHASE_INTRO  1
#define DR3_PHASE_MENU   2
#define DR3_PHASE_RACE   3
#define DR3_PHASE_COUNT  4

/* time slots (microseconds) */
#define DR3_SLOT_PRESENT  0   /* whole __PRESENTSCREEN__                     */
#define DR3_SLOT_BLIT     1   /* our conversion + write into the framebuffer  */
#define DR3_SLOT_FLUSH    2   /* GSPGPU_FlushDataCache                        */
#define DR3_SLOT_SWAP     3   /* gfxScreenSwapBuffers                         */
#define DR3_SLOT_GAME     4   /* IRQ0_TimerISR (game frame, incl. present)    */
#define DR3_SLOT_IO       5   /* IO_Loop                                      */
#define DR3_SLOT_MIX      6   /* audio mix callback                           */
#define DR3_SLOT_OVERLAY  7   /* bottom screen update                         */
#define DR3_SLOT_COUNT    8

/* counters */
#define DR3_CNT_PRESENT    0
#define DR3_CNT_SKIP       1  /* frames the engine dropped                    */
#define DR3_CNT_IO         2
#define DR3_CNT_DELAY      3  /* SDL_Delay(1) calls in the frame limiter      */
#define DR3_CNT_AUDIO_CB   4
#define DR3_CNT_AUDIO_FR   5  /* mixed frames                                 */
#define DR3_CNT_MUSIC_TICK 6  /* module player ticks                          */
#define DR3_CNT_STALL      7  /* audio callbacks that came too late           */
#define DR3_CNT_COUNT      8

/* automatic measurement variants */
#define DR3_VAR_NORMAL 0   /* engine decides                                        */
#define DR3_VAR_NOFILT 1   /* force nearest neighbour (cost of the box filter)      */
#define DR3_VAR_NOBLIT 2   /* only flush+swap (the floor we cannot avoid)           */
#define DR3_VAR_COUNT  3

#if defined(DR3_PROFILE)

uint64_t dr3_prof_tick(void);                 /* raw system ticks                    */
uint32_t dr3_prof_us(uint64_t t0);            /* microseconds since t0               */
void     dr3_prof_init(void);                 /* calibrate clock, set up the display */
void     dr3_prof_add(int slot, uint32_t us);
void     dr3_prof_count(int counter, uint32_t n);
void     dr3_prof_frame(uint32_t game_us, uint32_t skip);   /* one engine frame */
uint32_t dr3_prof_frame_delta(void);                        /* us since the last engine frame */
void     dr3_prof_phase(int phase);
void     dr3_prof_present_mode(int w, int h, int filtered);
void     dr3_prof_audio_cb(int samples, uint32_t mix_us);
void     dr3_prof_music_tick(void);
void     dr3_prof_event(const char *fmt, ...);
void     dr3_prof_poll(void);                 /* cheap, call often: rotates + logs   */
int      dr3_prof_variant(void);
int      dr3_prof_skip_blit(void);
int      dr3_prof_force_filter(void);         /* -1 engine decides, 0 nearest, 1 filter */

/* mark/end helper (see the note on the no-op variants below) */
#define DR3_PROF_MARK(name)      uint64_t name = dr3_prof_tick()
#define DR3_PROF_END(slot, name) dr3_prof_add(slot, dr3_prof_us(name))

#else

#define dr3_prof_init()                ((void)0)
#define dr3_prof_add(slot, us)         ((void)0)
#define dr3_prof_count(c, n)           ((void)0)
#define dr3_prof_frame(us, skip)       ((void)(us), (void)(skip))
static inline uint32_t dr3_prof_frame_delta(void) { return 0; }
#define dr3_prof_phase(p)              ((void)0)
#define dr3_prof_present_mode(w,h,f)   ((void)0)
#define dr3_prof_audio_cb(s, us)       ((void)0)
#define dr3_prof_music_tick()          ((void)0)
#define dr3_prof_event(...)            ((void)0)
#define dr3_prof_poll()                ((void)0)
#define dr3_prof_variant()             (DR3_VAR_NORMAL)
#define dr3_prof_skip_blit()           (0)
#define dr3_prof_force_filter()        (-1)

static inline uint64_t dr3_prof_tick(void) { return 0; }
static inline uint32_t dr3_prof_us(uint64_t t0) { (void)t0; return 0; }

/* DR3_PROF_MARK(name) declares a tick mark, DR3_PROF_END(slot, name) reports the elapsed time.
   Both vanish completely when profiling is off, so the engine code stays readable. */
#define DR3_PROF_MARK(name)      do { } while (0)
#define DR3_PROF_END(slot, name) ((void)0)

#endif /* DR3_PROFILE */

#endif /* DR3_PROF_H */

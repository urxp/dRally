# Nintendo 3DS port

Branch `3ds`, worktree `C:\Users\M-PC\rally\dRally-3ds` (5 commits on top of upstream `920d85a`).
Windows remains the reference build — this branch does not touch it.

## Status (2026-09-21): runs on the emulator, playable

| | |
|---|---|
| Runs in **Azahar** | yes — boots, menus, name entry, in-game |
| Runs on real hardware | not tested yet (next step; `3dslink` or copy the `.3dsx` to the SD card) |
| Input | d-pad/circle pad steer, R accelerate, L brake, A confirm, Y turbo, X machine gun, B horn, START pause, SELECT opens the 3DS software keyboard, L+R+START quits |
| Video | direct top-screen framebuffer output, double buffered, box-filtered downscale for the 640x480 menus |
| Speed | engine logic keeps its ~70 fps; presentation is the bottleneck (12-27 fps in the emulator). The emulator itself is a big part of that - measure on hardware |
| Sound | **works** — needs the DSP firmware `sdmc:/3ds/dspfirm.cdc` (Luma3DS provides it on real hardware; for Azahar copy it from your own console to `%APPDATA%\azahar\sdmc\3ds\dspfirm.cdc`). The mixer runs at the DAC's native 32728 Hz: the DOS default of 22050 Hz made everything play 1.48x too fast because the 3DS DAC does not resample |
| Known gaps | `___59720h` was ported (keyboard path only, joystick branches omitted); some menus/dialogs may still be unimplemented upstream (they print `TODO` and `exit(1)`) |

### Release package

`make -f Makefile.3ds` produces `build/3ds/dRally_3ds.smdh` (icon/title metadata) and embeds it into
the `.3dsx` via `3dsxtool --smdh=`. The ready-to-copy SD package (executable + original game data +
`README.txt`) is assembled in `C:\Users\M-PC\rally\3ds-release\dRally_3ds\` (and as a zip next to it).
On the console the folder must end up as `sdmc:/3ds/drally/`.

### Profiler build (autonomous measurement)

```
make -f Makefile.3ds DR3_DEBUG=1        # -> build/3ds_debug/dRally_3ds_debug.3dsx
```

`platform_3ds/dr3_prof.{c,h}` measure the whole frame budget with the ARM11 system tick, aggregate per
second and per display mode, rotate measurement variants on their own and write everything to
`sdmc:/drally_3ds.log` - no user interaction needed:

* phases are detected at the engine entry points (`menu_main`, `race_main`, audio rate changes)
* variants rotate automatically: menu 10 s `normal` -> 10 s `filter-off` -> 10 s `skip-blit`,
  races 15 s `normal` -> 15 s `skip-blit`
* slots: `present` (total) split into `blit` (our conversion + write), `flush`
  (`GSPGPU_FlushDataCache`) and `swap` (`gfxScreenSwapBuffers`), plus `game` (`IRQ0_TimerISR`),
  `IO_Loop`, audio `mix` and the state of the frame-time histogram
* the bottom screen (unused by the game) shows the live numbers; it costs ~1 ms per update and is
  counted separately
* the log gets one `STAT` line per second and a `SUMMARY` block with per-variant averages when a
  phase has run for 20 s or the phase changes ("MENU DONE" / "RACE DONE")
* `scripts/analyze_3ds_profile.ps1 -Log <file>` turns that log into a table

The release build is untouched: without `-DDR3_PROFILE` every profiler call compiles away.

### Things learned the hard way (all handled in the code)

1. **Working directory** — the engine opens `ENGINE.BPA` etc. relative to the CWD; on the 3DS that is
   not the game folder, so the game crashed right after startup. `platform_3ds/dr3_paths.c` fixes it.
2. **Azahar pauses the app at start** (`Debugging_DelayStartForLLEModules`) — with an empty NAND this
   leaves *every* homebrew on a black screen. Set `delay_start_for_lle_modules=false` in
   `%APPDATA%\azahar\config\qt-config.ini` (Azahar must be closed while editing, it rewrites the file
   on exit).
3. **The engine keeps only the last key of a frame**, so typed text must be delivered one character per
   frame, and a dialogue needs exactly one key per press (that is why A emits a single RETURN).
4. **SDL's n3ds present path** copies the window surface pixel by pixel into the rotated hardware
   buffer - far too slow, hence the direct gfx output (with double buffering, otherwise it tears).
5. **Debugging without a console**: Azahar is a GUI application, so guest stdout is lost;
   `platform_3ds/dr3_log.c` writes `sdmc:/drally_3ds.log`, which is readable from the PC.

## Why there is no SDL shim

SDL 2.30.11 already ships a **native Nintendo 3DS backend** — `src/video/n3ds` (GSP framebuffer),
`src/audio/n3ds` (ndsp), `src/joystick/n3ds` (hid), `src/thread/timer/file/filesystem/power/sensor/
locale/main/n3ds`, plus `docs/README-n3ds.md` and CMake support. devkitPro does *not* package SDL2
for the 3DS (only `3ds-sdl` = SDL 1.2), so SDL2 is built from source here.

Consequences that shape this port:

| SDL2-3DS fact | Effect on dRally |
|---|---|
| only the **software renderer** exists | the hot path is index8 → 32-bit conversion; `platform_3ds/dr3_blit.c` does it via a palette LUT (unit-tested) |
| frame-buffer driver (`CreateWindowFramebuffer`) | presenting via a cached streaming texture (as the PS Vita port does) is the plan for the display patch |
| `SDL2main` needed for ROMFS | `LIBS := -lSDL2 -lctru -lm` plus the 3DS rules |
| **cooperative threading on one core** — a thread only yields on `SDL_Delay` / blocking waits | the Vita port's "remove all `SDL_Delay`" patch must NOT be copied blindly: the engine's sound thread would starve. Keep a small yield |
| New 3DS clock boost + extra L2 cache on by default | good for the frame budget; the old 3DS remains the risk case |
| joystick backend reports **buttons**, not keys | `platform_3ds/dr3_input.c` turns the pad into the SDL scancodes the engine expects |

## What was added on this branch

| File | Purpose |
|---|---|
| `Makefile.3ds` | devkitPro/3DS build. **Generated** by `scripts/gen_makefile_3ds.ps1`, which copies the object lists verbatim from the upstream `Makefile` |
| `platform_3ds/dr3_input.c` / `.h` | wraps `SDL_PollEvent`: pad → synthetic `SDL_KEYDOWN/UP` events, plus the `L+R+START` quit combo |
| `platform_3ds/dr3_input_map.c` / `.h` | the button → scancode table (data only, unit-tested) |
| `platform_3ds/dr3_blit.c` / `.h` | palette → 32-bit LUT and an integer-only nearest-neighbour / centred scaler (unit-tested) |
| `platform_3ds/sdl2_net_stub/` | inert SDL_net so the multiplayer code compiles and links |
| `tests/test_dr3.c`, `tests/Dr3Tests.vcxproj`, `tests/build_tests.ps1` | host unit tests (295 checks), runnable **without** a 3DS toolchain |
| `events.c` | engine patch 1: `while(dr3_poll_event(&e))` under `#if defined(__3DS__)` |
| `drally_linux_c.c` | engine patch 2 (display): window created as the fixed 400x240 top screen, **no SDL renderer**, `__PRESENTSCREEN__` converts the 8-bit screen with the palette LUT straight into the window surface and calls `SDL_UpdateWindowSurface`; `SDL_SetWindowSize` calls are skipped |

### Why the multiplayer code stays in

Removing the multiplayer objects was tried and **fails to link**: menus, race code and the chat box
reference multiplayer symbols unconditionally (`___61278h`, `___61518h`, `___618c4h`, `npg_zero`,
`npg_peekb`, `npg_override`, `dRChatbox_clear/getFont/getLine`, plus data from `__mp_data.c`) —
20 unresolved externals. The inert SDL_net stub keeps the object list identical to the working
Windows configuration; multiplayer simply cannot connect (it could not on PC either).

## Controls

| 3DS | Effect (DOS key it synthesises) |
|---|---|
| D-pad / circle pad / c-stick | steer (`LEFT`/`RIGHT`, `KP_4`/`KP_6`), up/down also accelerate/brake (`A`/`Z`) |
| R | accelerate (`A`) |
| L | brake / reverse (`Z`) |
| A | confirm / menu (`RETURN` — exactly one key so dialogues see it) |
| Y | turbo boost (`LSHIFT`) |
| X | machine gun (`LCTRL`) |
| B | horn (`SPACE`) |
| ZL / ZR (New 3DS) | drop mine (`LALT`) / machine gun (`LCTRL`) |
| START | pause / back (`ESCAPE`) |
| **SELECT** | opens the **3DS software keyboard** (type player names, save slots) |
| **L + R + START** | quit |

The defaults are dRally's own (`config_c.c`): accelerate `A`, brake `Z`, arrows steer, turbo
`LSHIFT`, horn `SPACE`, mine `LALT`, machine gun `LCTRL`. Covered by
`tests/test_dr3.c::test_input_map`.

## Building

```bash
export DEVKITPRO=/opt/devkitpro
export DEVKITARM=$DEVKITPRO/devkitARM
export PATH=$DEVKITPRO/tools/bin:$DEVKITARM/bin:$PATH

# 1. SDL2 with the n3ds backend (devkitPro ships no SDL2 for the 3DS)
sudo dkp-pacman -S 3ds-dev 3ds-cmake 3ds-pkg-config
git clone --depth 1 --branch release-2.30.11 https://github.com/libsdl-org/SDL.git
cmake -S SDL -B SDL/build -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/3DS.cmake" \
      -DCMAKE_BUILD_TYPE=Release
cmake --build SDL/build -j4
cmake --install SDL/build            # -> $DEVKITPRO/portlibs/3ds

# 2. the game
make -f Makefile.3ds -j4             # -> build/3ds/dRally_3ds.3dsx
```

## Running

* **Emulator (no hardware needed):** install Azahar (Citra fork, `winget install AzaharEmu.Azahar`),
  load `build/3ds/dRally_3ds.3dsx` and point its SD-card folder at a directory containing the game
  data below. `printf` output shows up in the emulator log.
* **Real hardware:** `3dslink build/3ds/dRally_3ds.3dsx` pushes and boots it over WiFi (needs a
  homebrew-enabled 3DS).

Data layout (`sdmc:/3ds/drally/` or the emulator's SD root). The original game files are required
and are **not** shipped:

```
dRally_3ds.3dsx
ENGINE.BPA  IBFILES.BPA  MENU.BPA  MUSICS.BPA  TR0..TR9.BPA
CDROM.INI                 <- contains: ./CINEM
CINEM/ENDANI.HAF  ENDANI0.HAF  SANIM.HAF
```

## Why there is no SDL renderer on the 3DS

`src/video/n3ds` only registers a *frame-buffer* driver (`CreateWindowFramebuffer` /
`UpdateWindowFramebuffer`) - there is no accelerated renderer. Two further details from that driver:

* The hardware frame buffer is **rotated** (240x400 internally, `src/video/n3ds/SDL_n3dsframebuffer.c`
  uses `GetDestOffset(x, y, dest_width) = dest_width - y - 1 + dest_width * x`) and SDL copies the
  window surface into it, so we only have to fill the window surface - orientation is free.
* `SDL_GetWindowSizeInPixels()` defines the size of that surface, and the copy clamps to
  `min(hardware, surface)`. That is why the window is created with 400x240 and why the
  `SDL_SetWindowSize(1024x768)` calls are skipped on the 3DS - resizing would make SDL copy a
  cropped region.

An active renderer would also block `SDL_GetWindowSurface`, which `__PRESENTSCREEN__` writes into,
so the renderer is not created at all on the 3DS.

## Verification (all runnable without a 3DS toolchain)

| Check | Command | Result |
|---|---|---|
| Portable logic | `tests\build_tests.ps1` (MSVC) | **295 checks, 0 failures** - LUT byte order + masks (`SDL_PIXELFORMAT_RGBA8888` as used by the 3DS), centred/scaled blit pixels, full pad → scancode map, quit combo |
| Whole engine with `-D__3DS__` | `scripts\gen_3ds_check.ps1` → `tests\dRally3DSCheck.vcxproj` | **330 translation units compile and link** (exit 0) - validates every `#if defined(__3DS__)` path with the real SDL2 headers, catching typos/prototype errors before devkitARM exists |
| Windows regression | `scripts\build_windows.ps1 -GameDir dRally-3ds -SkipDeps -SkipStage` | still builds (exit 0) |
| Emulator | `Azahar` in `C:\Program Files\Azahar` | installed, ready for the first `.3dsx` |

Workbench scripts (live outside the repo, in `C:\Users\M-PC\rally\scripts`):
`gen_makefile_3ds.ps1` (Makefile from upstream lists), `patch_3ds_display.ps1` (display patch,
whitespace tolerant + idempotent), `gen_3ds_check.ps1` (`__3DS__` syntax/link check), plus
`build_windows.ps1` / `run_windows.cmd` for the reference build.

## Roadmap

1. ~~branch, makefile, input layer, host tests~~ (done)
2. ~~display patch: renderer-free present path + `dr3_blit` LUT with SDL masks, fixed 400x240
   window~~ (done, verified by the `-D__3DS__` link check)
3. Software keyboard (`SDL_n3dsswkb.c`) for the driver-name / save prompts.
4. Audio sanity check (ndsp) and frame-time measurement; the old 3DS may need a reduced frame rate.
5. Make `cinem.c` (HAF cinematics) skippable - CPU heavy.
6. Packaging (`*.3dsx`, optional `.cia`) and a user-facing README.
7. First real 3DS run: `make -f Makefile.3ds` with devkitARM, then Azahar / `3dslink`.

## Open blocker

`devkitpro.org`, `registry-1.docker.io` and `ghcr.io` are unreachable from this machine, so
devkitARM/SDL2 cannot be fetched or built here yet. Options: VPN/proxy, another machine/network, or
a GitHub Actions workflow (the `dRally-vita` fork has CI examples). See `docs/NETWORK_NOTES.md`.

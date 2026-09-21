# dRally on the Nintendo 3DS

A native port of the dRally engine (Death Rally, 1996) for the Nintendo 3DS, built with devkitARM,
libctru and SDL2 (using SDL2's own n3ds backend).

> This project contains **no game data** and is **not affiliated with Remedy Entertainment**.
> It needs the data files of an original Death Rally copy that you own — exactly like the Linux port.

## What works

* the full game: menus, name entry (3DS software keyboard), shop, races, damage/wrecking
* sound and music (DSP at the DAC's native rate, no resampling)
* the bottom screen shows the controls and the current driver standings, and can be switched off with
  a tap
* a configurable pad mapping (`dr3_controls.txt`)
* an optional profiler build (see `doc/3ds.md`) that measures the frame budget on the console

Not available: multiplayer (the engine's IPX multiplayer cannot work on the 3DS; the code stays in the
build on purpose, it is the same situation as in the other ports), and a few menus of the original
game are still unimplemented upstream (they print a `TODO` and quit).

## Requirements

* a 3DS with homebrew support (Luma3DS + Homebrew Launcher)
* `sdmc:/3ds/dspfirm.cdc` for sound — Luma3DS creates it automatically on real hardware.  Without it
  the game is simply silent.
* your own Death Rally data files

## Installation

1. Copy the contents of the release archive into a folder on the SD card:

       sdmc:/3ds/drally/

   The folder has to contain `dRally_3ds.3dsx` **next to** the game data:

       dRally_3ds.3dsx
       ENGINE.BPA  IBFILES.BPA  MENU.BPA  MUSICS.BPA  TR0.BPA .. TR9.BPA
       CDROM.INI                     (contains "./CINEM")            
       CINEM/SANIM.HAF  CINEM/ENDANI.HAF  CINEM/ENDANI0.HAF

   `README.txt` and `dr3_controls.txt` in the archive are the German quick guide and the optional
   control configuration - they can stay there.

2. Start `dRally_3ds.3dsx` from the Homebrew Launcher.
3. At the first start the game asks for a driver name: press **SELECT** to open the 3DS software
   keyboard, type a name, confirm with OK and then press **A**.

The game writes `DR.CFG` (progress and settings) into the same folder, and a log to
`sdmc:/drally_3ds.log` — that log is the first place to look if something goes wrong.

## Controls (default)

Front end (640x480):

| button | action |
|---|---|
| A | confirm |
| B | select / next |
| START | pause / back |
| D-pad | menu navigation |

Race (320x240):

| button | action |
|---|---|
| D-pad / circle pad | steer, up/down also gas and brake |
| R | gas |
| L | brake / reverse |
| A | horn (and RETURN, so race start dialogs confirm) |
| B | boost / nitro |
| Y | shoot |
| X | drop a mine |
| ZL / ZR (New 3DS) | boost / shoot |
| START | pause |

Everywhere: **SELECT** opens the on-screen keyboard, **L + R + START** quits, a tap on the bottom
screen switches the information there off and on.

## Own mapping - dr3_controls.txt

The mapping is described with *functions*, and every function can be bound to any button:

    FUNCTION = BUTTON[, BUTTON]

| function | applies to |
|---|---|
| `GAS`, `BRAKE`, `BOOST`, `SHOOT`, `MINE`, `HORN` | a race |
| `LEFT`, `RIGHT` | race and front end |
| `PAUSE` | everywhere |
| `CONFIRM`, `MENU_UP`, `MENU_DOWN`, `MENU_NEXT` | front end |

Buttons: `A B X Y L R ZL ZR START UP DOWN LEFT RIGHT STICK_LEFT STICK_RIGHT STICK_UP STICK_DOWN NONE`

So "gas on anything" is simply:

    GAS = R, UP, STICK_UP, B

Functions that are not mentioned keep their default, the same button may do different things in the
front end and in a race, and every recognised line is written to `sdmc:/drally_3ds.log`.

## Building

Needs devkitPro (devkitARM + libctru) and SDL2 for the 3DS, which devkitPro does not package - it is
built from source by the included script:

```sh
git clone --depth 1 --branch SDL2 https://github.com/libsdl-org/SDL third_party/SDL
bash scripts/3ds/build_sdl2_3ds.sh          # -> third_party/SDL2-3ds-install
bash scripts/3ds/build_3ds.sh               # -> build/3ds/dRally_3ds.3dsx
bash scripts/3ds/build_3ds.sh all           # ... and the profiler build
```

`Makefile.3ds` is generated from the upstream `Makefile` by
`powershell -File scripts/3ds/gen_makefile_3ds.ps1` (it reuses the upstream object lists verbatim, so
the 3DS build compiles exactly the same sources as the other platforms).

## Credits

* [urxp/dRally](https://github.com/urxp/dRally) — the engine port this branch is based on
* SDL2 (zlib licence), libctru (zlib licence), devkitARM/newlib
* see `THIRD_PARTY.md`

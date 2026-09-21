# dRally

The main goal of this project is to create a port of Death Rally (1996) running natively on Linux and BSD based operating systems.

#### Nintendo 3DS port (branch `3ds`)

This branch adds a native Nintendo 3DS port of the engine - no SDL shim, it uses SDL2's own n3ds
backend, writes the 8 bit screen straight into the double buffered framebuffer, feeds the DSP at its
native 32728 Hz, translates the pad into the engine's keyboard scancodes (fully remappable through
`dr3_controls.txt`) and uses the otherwise unused bottom screen for the controls and the current
driver standings.  There is also an optional profiler build that measures the frame budget on the
console itself and rotates measurement variants automatically.

* **installation, controls and configuration: [INSTALL_3DS.md](INSTALL_3DS.md)**
* technical notes, measurements and the profiler build: [doc/3ds.md](doc/3ds.md)
* build scripts: [scripts/3ds](scripts/3ds)

This branch contains **no game data** and is **not affiliated with Remedy Entertainment**.  Like the
Linux port it needs the files of an original Death Rally copy (see below for the layout).

#### Linux requirements
* GCC/Clang C compiler
* GNU/Make
* SDL2


#### Building

```sh
FLAGS="YOUR CFLAGS" make
```

#### Installation - needs original game assets

* [Death Rally registered free windows version CHIP](https://www.chip.de/downloads/Death-Rally-Vollversion_38550689.html)

```sh
7z e -o drally DeathRallyWin_10.exe
cd drally && mkdir CINEM && mv ENDANI* CINEM && mv SANIM* CINEM
echo "./CINEM" &> CDROM.INI
```

Only versions including the DR.IDF file are able to use the `FLAGS += -DDR_CDCHECK`

    dRally
    |--CINEM
    |  |--DR.IDF
    |  |--ENDANI.HAF
    |  |--ENDANI0.HAF
    |  |--SANIM.HAF
	|--CDROM.INI        [1]
    |--ENGINE.BPA
    |--IBFILES.BPA
    |--MENU.BPA
    |--MUSICS.BPA
    |--TR[0-9].BPA

    Make sure these file/dir names in dRally directory are in uppercase.

    [1] CDROM.INI contains relative location of CINEM directory (./CINEM)

#### Work in progress
*   Multiplayer not available 

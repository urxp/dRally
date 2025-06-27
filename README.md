# dRally

The main goal of this project is to create a port of Death Rally (1996) running natively on Linux and BSD based operating systems.

#### Linux requirements
* GCC/Clang C compiler supporting C99/POSIX
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

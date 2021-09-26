# dRally

The main goal of this project is to create a port of Death Rally (1996) running natively on Linux and BSD based operating systems.

#### Linux requirements
* GCC/Clang C compiler
* GNU/Make
* SDL2

#### You need original game assets

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

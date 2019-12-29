# dRally

The main goal of this project is to create a port of Death Rally (1996) running natively on Linux and BSD based operating systems.

#### Linux requirements
* GCC/Clang C compiler
* Netwide Assembler (NASM)
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
	|--DR.CFG           [2]
    |--ENGINE.BPA
    |--IBFILES.BPA
    |--MENU.BPA
    |--MUSICS.BPA
    |--TR[0-9].BPA

    Make sure these file/dir names in dRally directory are in uppercase.

    [1] CDROM.INI contains relative location of CINEM directory (./CINEM)
    [2] You may need to create initial DR.CFG in hex editor yourself
        -- make sure it is exactly 7 bytes long
        -- set first byte to 0x00 to disable sound
        -- set first byte to 0x10 to enable sound

#### Work in progress
*   Because of a lot of disassembled code, only 32bit version available at this point
*   Keyboard input not fully covered 
*   Multiplayer not available 

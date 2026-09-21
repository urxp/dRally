# Third party components

The Nintendo 3DS port links the following third party code, all of it under permissive licences:

| component | licence | how it is obtained |
|---|---|---|
| [SDL2](https://github.com/libsdl-org/SDL) | zlib | built from source for the 3DS by `scripts/3ds/build_sdl2_3ds.sh` (devkitPro ships SDL 1.2 for the 3DS, not SDL2); SDL2's own `n3ds` video and audio backends are used |
| [libctru](https://github.com/devkitPro/libctru) | zlib | part of devkitPro (`3ds-dev`) |
| devkitARM / newlib | GPL (with the usual exception for linking) / newlib licence | part of devkitPro |

No game data, no Nintendo firmware and no other proprietary files are part of this repository.  In
particular `dspfirm.cdc` (which libctru's `ndspInit()` needs for sound) is **not** included - Luma3DS
creates it on the console itself.

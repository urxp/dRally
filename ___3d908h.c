#include "drally.h"
#include <SDL2/SDL.h>

	extern byte ___1a0d60h[];

void dRally_Sound_release(void);
void dRally_Sound_stop(void);
dword GET_FILE_SIZE(const char *);
void ___10b80h_cdecl(const char *, dword, const char *, dword, const char *, dword, dword);

void ___3d908h(void){

    char     buffer[0x64];

    strcpy(buffer, ___1a0d60h);
    strcat(buffer, "sanim.haf");

    if(GET_FILE_SIZE(buffer)){

        ___10b80h_cdecl("sanim.haf", 1, "tr0-mus.cmf", 2, "sanim-e.cmf", 1, 0x78);
        //___10b80h_cdecl("endani0.haf", 1, "tr0-mus.cmf", 2, "endani0e.cmf", 1, 0x78);
        //___10b80h_cdecl("endani.haf", 1, "tr0-mus.cmf", 2, "endani-e.cmf", 1, 0x78);
        
        dRally_Sound_stop();
        dRally_Sound_release();
    }
}

#include "drally.h"

	extern char ___1a0d60h[0xc8];

void dRally_Sound_release(void);
__DWORD__ GET_FILE_SIZE(const char *);
void ___10b80h_cdecl(const char *, __DWORD__, const char *, __DWORD__, const char *, __DWORD__, __DWORD__);

void ___3d908h(void){

    char     buffer[0x64];

    strcat(strcpy(buffer, ___1a0d60h), "sanim.haf");

    if(GET_FILE_SIZE(buffer)){

        ___10b80h_cdecl("sanim.haf", 1, "tr0-mus.cmf", 2, "sanim-e.cmf", 1, 0x78);
        
        dRally_Sound_release();
    }
}

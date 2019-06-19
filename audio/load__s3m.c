#include "x86.h"

    extern const char string__SCRM[];     // "SCRM"
    extern void * ___24e868h;

    void * extract__musics_bpa(const char * elm, dword lock);
    int strncmp__clib3r(const char *, const char *, dword);
    void ___58b20h(int errn, ...);
    dword getentrysize__musics_bpa(const char * elm);

// 71590h
void * loadS3M(dword A, const char * cmf, dword * size, dword * instrumentCount){

    byte * scrm;

	scrm = extract__musics_bpa(cmf, 1);

	if(strncmp__clib3r(&scrm[0x2c], string__SCRM, 4)) ___58b20h(0x28, cmf);

	if(A){

        if(scrm[0x60] == 0xff) ___58b20h(0x29, cmf);

        ___24e868h = scrm;
    }

	*size = getentrysize__musics_bpa(cmf);
	*instrumentCount = *(word *)&scrm[0x22];

	return scrm;
}

#include "drally.h"
#include "assets.h"

    extern void * ___1a1e98h;
    extern byte * ___1a1eb8h;
    extern void * ___1a0198h[4];
    extern byte ___1a54d0h[];

void * ___3f71ch__allocateMemory(int);
void bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);

void * dRally_Assets_loadRaw(const char * bpa, const char * name, int size){

	void * 	rslt;

	rslt = ___3f71ch__allocateMemory(size);
	bpa_read(bpa, rslt, name);

	return rslt;
}

void * dRally_Assets_loadDecode(const char * bpa, const char * name, int size){

	void * 	rslt;

    bpa_read(bpa, ___1a54d0h, name);
	rslt = ___3f71ch__allocateMemory(size);
	bpk_decode2(rslt, ___1a54d0h);

	return rslt;
}

void * getAssets(int a){

    switch(a){
    case MENU_BASES4:
        return ___1a1e98h;
    case MENU_MAXI1F:
        return ___1a1eb8h;
    case MENU_TIRE1:
        return ___1a0198h[0];
    case MENU_TIRE2:
        return ___1a0198h[1];
    case MENU_TIRE3:
        return ___1a0198h[2];
    case MENU_TIRE4:
        return ___1a0198h[3];
    default:
        break;
    }

    return (void *)0;
}

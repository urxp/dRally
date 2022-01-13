#include "drally.h"
#include "assets.h"

    extern __POINTER__ ___1a1e98h;
    extern __BYTE__ * ___1a1eb8h;
    extern __POINTER__ ___1a0198h[4];
    extern __BYTE__ ___1a54d0h[];

__POINTER__ ___3f71ch__allocateMemory(int);
void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);

__POINTER__ dRally_Assets_loadRaw(const char * bpa, const char * name, int size){

	__POINTER__ 	rslt;

	rslt = ___3f71ch__allocateMemory(size);
	old_bpa_read(bpa, rslt, name);

	return rslt;
}

__POINTER__ dRally_Assets_loadDecode(const char * bpa, const char * name, int size){

	__POINTER__ 	rslt;

    old_bpa_read(bpa, ___1a54d0h, name);
	rslt = ___3f71ch__allocateMemory(size);
	bpk_decode2(rslt, ___1a54d0h);

	return rslt;
}

__POINTER__ getAssets(int a){

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

    return (__POINTER__)0;
}

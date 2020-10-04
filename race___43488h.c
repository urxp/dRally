#include "drally.h"

typedef struct xc50_s {
	__DWORD__ 	___0;			// +000
	__DWORD__ 	___4;			// +004
	__DWORD__ 	___8[75];		// +008
	__DWORD__ 	_134[75];		// +134
	__DWORD__	_260[75];		// +260
	__DWORD__ 	_38C;			// +38c
	__DWORD__	_390;			// +390
	__DWORD__	_394;			// +394
	__DWORD__ 	_398;			// +398
	__DWORD__	_39C[100];		// +39c
	__DWORD__	_52C[100];		// +52c
	__DWORD__	_6BC[100];		// +6bc
	__DWORD__	_84C[100];		// +84c
	__DWORD__	_9DC;			// +9dc
	__DWORD__ 	_9E0;			// +9e0
	__DWORD__	_9E4;			// +9e4
	__DWORD__	_9E8;			// +9e8
	__DWORD__	_9EC[75];		// +9ec
	__DWORD__	_B18[75];		// +b18
	__DWORD__	_C44;			// +c44
	__DWORD__	_C48;			// +c48
	__DWORD__	_C4C;			// +c4c
} xc50_t;

typedef struct x2c_s {
    __DWORD__   __0;        // +00
    __DWORD__   __4;        // +04
    __DWORD__   __8;        // +08
    __DWORD__   __C;        // +0c
    __DWORD__   _10;        // +10
    __DWORD__   _14;        // +14
    __DWORD__   _18;        // +18
    __DWORD__   _1C;        // +1c
    __DWORD__   _20;        // +20
    __DWORD__   _24;        // +24
    __DWORD__   _28;        // +28
} x2c_t;

    extern dword ___243c88h;
    extern dword ___243c94h;
    extern char ___243dd0h[];
    extern byte ___1a54d0h[];
    extern char ___19bd64h[];
    extern xc50_t ___1f3b08h[];
    extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)
    extern void * ___243d5ch;

void bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);
void bpk_decode4(dword, dword, void *, void *);

void race___43488h(void){

	char    fname[0x10];

    bpa_read(___243dd0h, ___1a54d0h, strcat(strcpy(fname, ___19bd64h), "-SCE.BPK"));

    bpk_decode4(1, 0, &___243c88h, ___1a54d0h);
    bpk_decode4(sizeof(xc50_t)*___243c88h, 1, &___1f3b08h, ___1a54d0h);
    bpk_decode4(1, sizeof(xc50_t)*___243c88h+1, &___243c94h, ___1a54d0h);

    if(___243c94h > 0) bpk_decode4(sizeof(x2c_t)*___243c94h, sizeof(xc50_t)*___243c88h+2, &___240b48h, ___1a54d0h);

    switch((___19bd64h[2]-0x30)&0xff){
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        bpk_decode4(0x493e0, sizeof(x2c_t)*___243c94h+sizeof(xc50_t)*___243c88h+2, ___243d5ch, ___1a54d0h);
        break;
    case 1:
    case 2:
        bpk_decode4(0x5f370, sizeof(x2c_t)*___243c94h+sizeof(xc50_t)*___243c88h+2, ___243d5ch, ___1a54d0h);
        break;
    default: 
        break;
    }
}

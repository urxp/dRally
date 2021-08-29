#include "drally.h"
#include "drally_keyboard.h"
#include "drmemory.h"

	extern byte ___2432cch[];
	extern byte ___2432d0h[];
	extern byte ___2432e0h[];
	extern byte ___2432e8h[];
	extern void * ___2432d8h;
	extern void * ___2432d4h;
	extern void * ___243d80h;
	extern byte ___243e74h[];
	extern int ___1a30a0h[100];
	extern byte kmap[];
	extern byte ___2432e4h[];
	extern byte ___243d14h[];
	extern byte ___243898h[];
	extern byte ___243874h[];
	extern byte ___24330ch[];
	extern byte ___2432dch[];
	extern void * ___243d70h;
	extern byte ___243894h[];
	extern byte ___243878h[];
	extern byte ___243330h[];
	extern byte VGA13_ACTIVESCREEN[];

void ___59cd8h(void);
void * ___3f71ch__allocateMemory(dword);
int rand_watcom106(void);
void dRally_Sound_freeEffectChannel(byte ch_num);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___58c60h(void);
void ___47304h(void);
int ___47620h(void);
void __VGA13_PRESENTSCREEN__(void);

static int r204(unsigned int val){

	val %= 204;

	return (val>101)?(203-val):val;
}

void race___478c8h(dword A1){

	int 	i, j, n;


    D(___2432cch) = 0;
    D(___2432d0h) = 0;
    D(___2432e0h) = 0;
    D(___2432e8h) = 0;
    ___2432d8h = ___3f71ch__allocateMemory(0xfa00);
    ___2432d4h = ___3f71ch__allocateMemory(0xfa00);
    j = 0;
    memset(___2432d8h, 0, 0xfa00);

	n = -1;
    while(++n < 200) memcpy(___2432d4h+0x140*n, ___243d80h+0x200*n+0x60, 0x140);

	n = -1;
    while(++n < 969){

		D(___243e74h+0x21*n) = 0;
		D(___243e74h+0x21*n+4) = 0;
		D(___243e74h+0x21*n+8) = 0;
		D(___243e74h+0x21*n+0xc) = 0;
		B(___243e74h+0x21*n+0x20) = 0x64;
    }

	n = -1;
    while(++n < 100) ___1a30a0h[n] = rand_watcom106()%316;

	memcpy(___2432d8h, ___2432d4h, 0xfa00);
	memcpy(VGA13_ACTIVESCREEN, ___2432d8h, 0xfa00);
    __VGA13_PRESENTSCREEN__();
    dRally_Sound_freeEffectChannel(0x5);
    dRally_Sound_pushEffect(0x5, 0x11, 0, 0x10000, 0x28000, 0x8000);
    memset(kmap, 0, 0x100);
    D(___2432e4h) = 0;

    i = 0;
	n = 0;
	while(n == 0){

		if(((int)D(___2432e4h) >= 0x3c8)&&(i == 0)){
		
		    i = 0x1;
		    dRally_Sound_freeEffectChannel(0x5);
        }

		___59cd8h();
		if((kmap[DR_SCAN_ENTER] != 0)||(kmap[DR_SCAN_KP_ENTER] != 0)||(kmap[DR_SCAN_Y] != 0)||(kmap[DR_SCAN_N] != 0)) n = 0x1;
		if(kmap[DR_SCAN_F1] != 0) j = n = 0x1;
		if((D(___243d14h) == -1)&&(kmap[DR_SCAN_Y] == 1)) D(___243d14h) = 0x1;

		D(___243898h) = 0;
		D(___243874h) = D(___243898h);
		___58c60h();
		memcpy(VGA13_ACTIVESCREEN+0x5000, ___2432d8h+0x5000, 0xaa00);
		__VGA13_PRESENTSCREEN__();
		memcpy(___2432d8h+0x5000, ___2432d4h+0x5000, 0xaa00);
		___47304h();
		D(___24330ch) = D(___243898h);
		if((int)D(___24330ch) < 1) D(___24330ch) = 1;
		if(((int)D(___2432e4h) >= 0x3c8)&&(A1 != 0)) n = 0x1;
	}

	memset(kmap, 0, 0x100);
	dRally_Sound_freeEffectChannel(0x5);

	D(___2432d0h) = 0;
	D(___2432dch) = 0x3333;
	D(___2432cch) = 0;

	i = 0;
	n = -1;
	while(++n < 969){

		D(___243e74h+0x21*n+8) = 0x10000*((rand_watcom106()%4)-2);
		D(___243e74h+0x21*n+0xc) = 0x10000*((rand_watcom106()%3)-r204(D(___2432cch))/25);
		D(___243e74h+0x21*n+0x10) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h)+0*0xcc);
		D(___243e74h+0x21*n+0x14) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h)+1*0xcc);
		D(___243e74h+0x21*n+0x18) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h)+2*0xcc);
		D(___243e74h+0x21*n+0x1c) = D(___243d70h+D(___2432cch)+0xcc*D(___2432d0h)+3*0xcc);
		if(B(___243e74h+0x21*n+0x20) != 0x64) i++;
		D(___2432d0h) += 4;
		
		if(D(___2432d0h) == 0x4c){
		
			D(___2432d0h) = 0;
			D(___2432cch) += 4;
		}
	}

	dRally_Sound_pushEffect(0x5, 0x15, 0, 0x10000, 0x28000, 0x8000);

	while(1){

		D(___243874h) = D(___243898h) = 0;
		___58c60h();
		memcpy(VGA13_ACTIVESCREEN, ___2432d8h, 0xfa00);
		__VGA13_PRESENTSCREEN__();
		memcpy(___2432d8h, ___2432d4h, 0xfa00);
		if(___47620h() >= i) break;
		D(___24330ch) = D(___243898h);
		if((int)D(___24330ch) < 1) D(___24330ch) = 1;
	}

	dRally_Sound_freeEffectChannel(0x5);
	memcpy(VGA13_ACTIVESCREEN, ___2432d4h, 0xfa00);
	__VGA13_PRESENTSCREEN__();
	dRMemory_free(___2432d8h);
	dRMemory_free(___2432d4h);
	D(___243874h) = D(___243898h) = 0;
	D(___243894h) = 0;
	D(___243894h) = D(___243878h);
	D(___243330h) = D(___243894h);
	if(j != 0) kmap[DR_SCAN_F1] = 0x1;
}

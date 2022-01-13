#include "drally.h"
#include "drmemory.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243d28h[];
	extern __BYTE__ ___243d2ch[];
	extern __BYTE__ ___243d04h[];
	extern __BYTE__ ___243d30h[];
	extern __BYTE__ ___243d10h[];
	extern __BYTE__ ___243cf8h[];
	extern __POINTER__ ___243d58h;
	extern __POINTER__ ___243d60h;
	extern __POINTER__ ___243d78h;
	extern __POINTER__ ___243d54h;
	extern __POINTER__ ___243d5ch;
	extern __POINTER__ ___243d80h;
	extern car_spins_t * ___243d74h;
	extern __POINTER__ ___243d50h;
	extern __POINTER__ ___243d6ch;
	extern __POINTER__ ___243d48h;
	extern __POINTER__ ___243d4ch;
	extern __POINTER__ ___243d70h;
	extern __POINTER__ ___243d84h;
	extern __POINTER__ ___243d3ch;
	extern __POINTER__ ___243298h[6];
	extern __POINTER__ ___243d8ch;
	extern __POINTER__ ___243d7ch;
	extern __POINTER__ ___243d34h;
	extern __POINTER__ ___243d88h;
	extern __POINTER__ ___243d38h;
	extern __POINTER__ ___243d40h;
	extern __POINTER__ ___243288h[2];
	extern __POINTER__ ___243290h[2];
	extern __POINTER__ ___243d68h;
	extern __POINTER__ ___243d64h;
	extern __POINTER__ ___243314h;
	extern __POINTER__ ___243310h;

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);

void race_alloc(void){

	___243d58h = ___3f71ch__allocateMemory(D(___243d28h)*D(___243d2ch));
	___243d60h = ___3f71ch__allocateMemory(D(___243d28h)*D(___243d2ch));
	___243d78h = ___3f71ch__allocateMemory(D(___243d30h)*D(___243d04h));
	___243d54h = ___3f71ch__allocateMemory(D(___243cf8h)*D(___243d10h));
	___243d5ch = ___3f71ch__allocateMemory(0x5f370);
	___243d80h = ___3f71ch__allocateMemory(0x19400)+0x200;
	___243d74h = (car_spins_t *)___3f71ch__allocateMemory(4*sizeof(car_spins_t));
	___243d50h = ___3f71ch__allocateMemory(0x4b000);
	___243d6ch = ___3f71ch__allocateMemory(0x3840);
	___243d34h = ___3f71ch__allocateMemory(0x30);
	___243d48h = ___3f71ch__allocateMemory(0x240);
	___243d4ch = ___3f71ch__allocateMemory(0x3c90);
	___243d70h = ___3f71ch__allocateMemory(0x3c90);
	___243d84h = ___3f71ch__allocateMemory(0x800);
	___243d3ch = ___3f71ch__allocateMemory(0x268);
	___243298h[0] = ___3f71ch__allocateMemory(0xc00);
	___243298h[1] = ___3f71ch__allocateMemory(0xc00);
	___243298h[2] = ___3f71ch__allocateMemory(0xc00);
	___243298h[3] = ___3f71ch__allocateMemory(0xc00);
	___243298h[4] = ___3f71ch__allocateMemory(0xc00);
	___243298h[5] = ___3f71ch__allocateMemory(0xc00);
	___243d8ch = ___3f71ch__allocateMemory(0x140);
	___243d7ch = ___3f71ch__allocateMemory(0x600);
	___243d88h = ___3f71ch__allocateMemory(0x480);
	___243d38h = ___3f71ch__allocateMemory(0x800);
	___243d40h = ___3f71ch__allocateMemory(0x2400);
	___243288h[0] = ___3f71ch__allocateMemory(0x800);
	___243288h[1] = ___3f71ch__allocateMemory(0x800);
	___243290h[0] = ___3f71ch__allocateMemory(0x1800);
	___243290h[1] = ___3f71ch__allocateMemory(0x1800);
	___243d68h = ___3f71ch__allocateMemory(0x800);
	___243d64h = ___3f71ch__allocateMemory(0xc0);
}

void race_free(void){

	dRMemory_free(___243d58h);
	dRMemory_free(___243d60h);
	dRMemory_free(___243d78h);
	dRMemory_free(___243d54h);
	dRMemory_free(___243d5ch);
	dRMemory_free(___243d80h-0x200);
	dRMemory_free((__POINTER__)___243d74h);
	dRMemory_free(___243d50h);
	dRMemory_free(___243d34h);
	dRMemory_free(___243d6ch);
	dRMemory_free(___243d48h);
	dRMemory_free(___243d4ch);
	dRMemory_free(___243d70h);
	dRMemory_free(___243d84h);
	dRMemory_free(___243d3ch);
	dRMemory_free(___243298h[0]);
	dRMemory_free(___243298h[1]);
	dRMemory_free(___243298h[2]);
	dRMemory_free(___243298h[3]);
	dRMemory_free(___243298h[4]);
	dRMemory_free(___243298h[5]);
	dRMemory_free(___243d8ch);
	dRMemory_free(___243d7ch);
	dRMemory_free(___243d88h);
	dRMemory_free(___243d38h);
	dRMemory_free(___243d40h);
	dRMemory_free(___243288h[0]);
	dRMemory_free(___243288h[1]);
	dRMemory_free(___243290h[0]);
	dRMemory_free(___243290h[1]);
	dRMemory_free(___243d68h);
	dRMemory_free(___243d64h);
	dRMemory_free(___243314h);
	dRMemory_free(___243310h);
}

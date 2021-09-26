#include "drally.h"

#pragma pack(1)
typedef union struct_120_s {
	__BYTE__ 	raw[0x120];
	struct {
		__DWORD__	x;					// +000
		__DWORD__	y;					// +004
		__DWORD__	type;				// +008
		__DWORD__	__0C;				// +00C
		__DWORD__	__10;				// +010
		__DWORD__	__14;				// +014
		__DWORD__	__18;				// +018
		__DWORD__	__1C;				// +01C
		__BYTE__	__20[0x10][0x10];	// +020
	};
} struct_120_t;

	extern void * ___243d38h;
	extern struct_120_t ___1f2488h[20];
	extern byte ___196dd0h[];
	extern byte ___243d28h[];
	extern void * ___243d58h;
	extern byte ___1de7d0h[];
#if defined(DR_MULTIPLAYER)
	extern byte ___19bd60h[];
#endif // DR_MULTIPLAYER

int rand_watcom106(void);

static void helper00(struct_120_t * p120, int t){

	int 		i, j, n;
	__BYTE__ 	px;


	if((int)p120->x > 0){

		p120->type = t;

		n = -1;
		while(++n < 0x10){
			
			memcpy(p120->__20[n], ___243d58h+D(___243d28h)*(p120->y+n-8)+(p120->x-8), 0x10);
		}

		j = -1;
		while(++j < 0x10){

			i = -1;
			while(++i < 0x10){

				if((px = read_b(___243d38h+0x10*(j+0x10*(p120->type-1))+i)) != 0){
					
					write_b(___243d58h+D(___243d28h)*(j+p120->y-8)+i+(p120->x-8), px);
				}
			}
		}
	}
}

// POWER UPS / PICK UPS
void race___496b0h(void){

	int		n;

	n = -1;
	while(++n < 0x14){
		
		___1f2488h[n].type = 0;
		___1f2488h[n].__0C = 0x64+rand_watcom106()%0x32;
		___1f2488h[n].__10 = 0;
		___1f2488h[n].__14 = 0;
		___1f2488h[n].__18 = 0;
		___1f2488h[n].__1C = 0;
	}

	D(___196dd0h) = 0x15e;

	// BIG WRENCH / DOLLAR SIGN
	if((rand_watcom106()%4) == 0) helper00(&___1f2488h[0xc+rand_watcom106()%2], 7+rand_watcom106()%2);

	// STEROIDS DEAL
	if(D(___1de7d0h+0x4c) == 1){
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			helper00(&___1f2488h[14+rand_watcom106()%2], 6);
			D(___1de7d0h+0x4c) = 0;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}
}

#include "drally.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a0a50h[];
	extern __BYTE__ ___1a01e0h[];

void ___2ec68h_cdecl(void){

	__DWORD__ 	ebx, ecx;
	int 	n;


	ecx = 4;
	while(ecx&&ecx--) D(___1a0a50h+4*ecx) = 1;

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		ecx = 4;
		while(ecx&&ecx--) D(___1a0a50h+4*ecx) = 1;
		D(___1a0a50h+0xc) = 0;
	}
#endif // DR_MULTIPLAYER

	ebx = 0;
	n = -1;
	while(++n < 0x14){

		ecx = D(___1a01e0h+0x6c*n+0x44);
		
		if(((int)ebx < (int)ecx)&&(n != D(___1a1ef8h))) ebx = ecx;
	}

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		D(___1a0a50h+0xc) = 1;
	}
	else {
#endif // DR_MULTIPLAYER

		D(___1a0a50h+0xc) = !((int)ebx < (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44));

#if defined(DR_MULTIPLAYER)
	}

	if(___19bd60h != 0) D(___1a0a50h+0xc) = 0;
#endif // DR_MULTIPLAYER
}

#include "drally.h"
#include "netpage.h"

#if defined(DR_MULTIPLAYER)
	extern NetPage * ___24e4c0h;
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void ___6168ch(void);

void ___23488h_cdecl(__POINTER__ A0, __BYTE__ A1, __BYTE__ A2){

	int 	n;

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		npg_writeb(___24e4c0h, 0xa*A2);
		npg_writeb(___24e4c0h, 0xa*A2+1);

		n = -1;
		while(++n < A1) npg_writeb(___24e4c0h, B(A0+n));

		npg_writeb(___24e4c0h, A1);
		npg_writeb(___24e4c0h, 0xa*A2+2);
		npg_writeb(___24e4c0h, 0xa*A2+3);
		___6168ch();
	}
#endif // DR_MULTIPLAYER
}

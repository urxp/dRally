#include "drally.h"

#if defined(DR_MULTIPLAYER)
#include "netpage.h"
	extern __DWORD__	___19bd60h;
	extern NetPage * 	___24e4c0h;
#endif // DR_MULTIPLAYER

void ___618c4h(void);

void ___47e90h(__BYTE__ A0){
#if defined(DR_MULTIPLAYER)
	int 		n;

	if(___19bd60h != 0){

		n = -1;
		while(++n < 10) npg_writeb(___24e4c0h, A0);

		___618c4h();
	}
#endif // DR_MULTIPLAYER
}

#include "drally.h"
#include "drally_ipx.h"

    extern __DWORD__ ___199fd4h;
    extern __DWORD__ ___199fa0h;
    extern __DWORD__ ___199f9ch;

    extern __POINTER__ ___24e464h;
    extern IPX_Header * ___24e548h;
    extern IPX_EventControlBlock * ___24e45ch;

__WORD__ swap16(__WORD__);

void ___63b20h(__DWORD__ A1, __DWORD__ A2){
#if defined(DR_MULTIPLAYER)
	if((++___199fd4h <= 0x22)&&A1) return;

	___24e464h[0] = 0xb4;		// 180
	___24e464h[1] = 0xb5;		// 181
	___24e464h[2] = --A2;
	___24e464h[3] = A1;
	___24e464h[4] = 2;
	___24e464h[5] = 0xb6;		// 182
	___24e464h[6] = 0xb7;		// 183

	___24e548h->Dst.Socket = swap16(___199fa0h+0x5000);
	
	memset(___24e45ch->ImmediateAddress, 0xff, 6);

	___24e45ch->SocketNumber = swap16(___199fa0h+0x5000);
	___24e45ch->ESRAddress = 0;
	___24e45ch->FragmentCount = 2;

	setIPXFragment(___24e45ch, 0, (__POINTER__)___24e548h, sizeof(IPX_Header));
	setIPXFragment(___24e45ch, 1, (__POINTER__)___24e464h, 7);

	NovellNetWare_IPX_SendPacket(___24e45ch);

	___24e548h->Dst.Socket = swap16(___199fa0h+0x5000+___199f9ch);
	___199fd4h = 0;
#endif // DR_MULTIPLAYER
}
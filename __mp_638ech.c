#include "drally.h"
#include "drally_ipx.h"
#include "dos.h"

    extern IPX_EventControlBlock * ___24cd60h[];
    extern __DWORD__ ___199fa0h;
    extern __DWORD__ ___199f9ch;
    extern IPX_Header * ___24cd00h[];
    extern __POINTER__ ___24cdc0h[];
    extern IPX_Header * ___24e548h;
    extern IPX_EventControlBlock * ___24e54eh;
    extern __POINTER__ ___24e58ah;
    extern __DWORD__ ___199fc0h;


__WORD__ swap16(__WORD__);

__DWORD__ ___638ech(void){
#if defined(DR_MULTIPLAYER)
	int 			n;
	IPX_Fragment *	ipxfrag;

    if(NovellNetWare_IPX_InstallationCheck() == 0xff){

		n = -1;
		while(++n < 0x10){

			___24cd60h[n]->InUse = 1;
			___24cd60h[n]->ESRAddress = 0;
			___24cd60h[n]->SocketNumber = swap16(___199fa0h+0x5000+___199f9ch);
			___24cd60h[n]->FragmentCount = 2;

			ipxfrag = getIPXFragment(___24cd60h[n], 0);
			ipxfrag->Address = (__POINTER__)___24cd00h[n];
			ipxfrag->Size = sizeof(IPX_Header); // 30

			ipxfrag = getIPXFragment(___24cd60h[n], 1);
			ipxfrag->Address = ___24cdc0h[n];
			ipxfrag->Size = 0x222;
		}

		memset(___24e548h->Dst.Address.NetworkNumber, 0, 4);
		memset(___24e548h->Dst.Address.NetworkNode, 0xff, 6);
		___24e548h->Dst.Socket = swap16(___199fa0h+0x5000+___199f9ch);
		___24e548h->PacketType = 4;

		memset(___24e54eh->ImmediateAddress, 0xff, 6);
		___24e54eh->SocketNumber = swap16(___199fa0h+0x5000+___199f9ch);
		___24e54eh->ESRAddress = 0;
		___24e54eh->FragmentCount = 2;

		ipxfrag = getIPXFragment(___24e54eh, 0);
		ipxfrag->Address = (__POINTER__)___24e548h;
		ipxfrag->Size = sizeof(IPX_Header); // 30

		ipxfrag = getIPXFragment(___24e54eh, 1);
		ipxfrag->Address = ___24e58ah;
		ipxfrag->Size = 1;
		___199fc0h = NovellNetWare_IPX_GetDriverMaximumPacketSize()-sizeof(IPX_Header);

		return 1;
	}
#endif // DR_MULTIPLAYER
    return 0;
}

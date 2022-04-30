#include "drally.h"
#include "drmemory.h"
#include "netpage.h"
#include "drally_ipx.h"
#include "dos.h"

    extern struct tm TimeInit;

    extern __DWORD__ ___199fb8h;
    extern __DWORD__ CONNECTION_TYPE;
	extern __DWORD__ MP_ERROR;
    extern NetPage * ___24e4ach;
    extern NetPage * ___24cee0h[4];
    extern NetPage * ___24e4c0h;
    extern IPX_Address * ___24e4b4h;
    extern __DWORD__ ___24e3f0h[];
    extern __DWORD__ ___199fa0h;
    extern __DWORD__ ___199f9ch;
    extern IPX_EventControlBlock * ___24e45ch;
    extern IPX_EventControlBlock * ___24e54eh;
    extern IPX_Header * ___24e548h;
    extern IPX_Header * ___24cd00h[];
    extern __POINTER__ ___24cdc0h[];
    extern IPX_EventControlBlock * ___24cd60h[];
    extern __POINTER__ ___24e58ah;
    extern __POINTER__ ___24e464h;

__WORD__ swap16(__WORD__);
__DWORD__ ___638ech(void);
void _dos_gettime(struct dostime_t * __time);

__DWORD__ ___61cd0h(void){

    __DWORD__   eax, edx;
    int     n;
    struct dostime_t esp;


	if(!(   ___24e4ach = (NetPage *)dRMemory_alloc(sizeof(NetPage)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
    npg_zero(___24e4ach);

	n = -1;
	while(++n < 4){
	
		if(!(___24cee0h[n] = (NetPage *)dRMemory_alloc(sizeof(NetPage)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
		npg_zero(___24cee0h[n]);
	}

	if(!(   ___24e4c0h = (NetPage *)dRMemory_alloc(sizeof(NetPage)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
	npg_zero(___24e4c0h);

    if(CONNECTION_TYPE == 2){

        if(!(___24e4b4h = (IPX_Address *)dRMemory_alloc(sizeof(IPX_Address)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
        if(!(___24e54eh = (IPX_EventControlBlock *)dRMemory_alloc(sizeof(IPX_EventControlBlock)+2*sizeof(IPX_Fragment)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
        if(!(___24e45ch = (IPX_EventControlBlock *)dRMemory_alloc(sizeof(IPX_EventControlBlock)+2*sizeof(IPX_Fragment)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
        if(!(___24e548h = (IPX_Header *)dRMemory_alloc(sizeof(IPX_Header)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
        if(!(___24e58ah = dRMemory_alloc(0x7d0))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
        if(!(___24e464h = dRMemory_alloc(  0xa))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));

		n = -1;
		while(++n < 0x10){

			if(!(___24cd60h[n] = (IPX_EventControlBlock *)dRMemory_alloc(sizeof(IPX_EventControlBlock)+2*sizeof(IPX_Fragment)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
		}

		n = -1;
		while(++n < 0x10){

			if(!(___24cd00h[n] = (IPX_Header *)dRMemory_alloc(sizeof(IPX_Header)))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
		}

		n = -1;
		while(++n < 0x10){

			if(!(___24cdc0h[n] = dRMemory_alloc(0x7d0))) return (CONNECTION_TYPE = !(MP_ERROR = 0x64));
		}

        if(!___638ech()) return (CONNECTION_TYPE = !(MP_ERROR = 0x65));

		NovellNetWare_IPX_GetInternetworkAddress(___24e4b4h);
        if(NovellNetWare_IPX_OpenSocket(swap16(___199fa0h+0x5000+___199f9ch), 0) == 0xfe) return (CONNECTION_TYPE = !(MP_ERROR = 0x66));

		n = -1;
		while(++n < 0x10){
				
			if(NovellNetWare_IPX_ListenForPacket(___24cd60h[n])) MP_ERROR = 0xcb;
            ___24cd60h[n]->InUse = ECB_INUSE_AWAITINGPACKET;
		}
	}

	_dos_gettime(&esp);
	___199fb8h = esp.hour<<0x18;
	___199fb8h += esp.minute<<0x10;
	___199fb8h += esp.second<<8;
	___199fb8h += esp.hsecond;

	//printf("::::::::::::::::::::::: Time= %02d:%02d:%02d\n", esp.hour, esp.minute, esp.second);
	
    eax = 0;
	n = -1;
	while(++n < 0x7530){

		eax += 2;

		//edx = B(eax);		// ??? dont know what this is supposed to mean
		edx = eax&0xff;		// instead
			
		___199fb8h += edx;
    }

	n = -1;
	while(++n < 10) ___24e3f0h[n] = 0;
	___24e3f0h[0] = ___199fb8h;

    return 1;
}

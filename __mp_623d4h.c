#include "drally.h"
#include "drmemory.h"
#include "drally_ipx.h"
#include "dos.h"
#include "netpage.h"

    extern IPX_EventControlBlock * ___24cd60h[16];
    extern __DWORD__ CONNECTION_TYPE;
    extern __DWORD__ ___199fa0h;
    extern __DWORD__ ___199f9ch;
    extern __POINTER__ ___24e4b4h;
    extern __POINTER__ ___24e54eh;
    extern __POINTER__ ___24e45ch;
    extern __POINTER__ ___24e548h;
    extern __POINTER__ ___24e58ah;
    extern __POINTER__ ___24e464h;
    extern __POINTER__ ___24e4ach;
	extern NetPage * ___24cee0h[4];
    extern __POINTER__ ___24e4c0h;
    extern IPX_Header * ___24cd00h[16];
    extern __POINTER__ ___24cdc0h[16];

void ipx_disconnect(void);
__DWORD__ swap16(__DWORD__);

void ___623d4h(void){

    int     n;

    if(CONNECTION_TYPE == 2){

		n = -1;
        while(++n < 0x10) NovellNetWare_IPX_CancelEvent(___24cd60h[n]);

		NovellNetWare_IPX_CloseSocket(swap16(___199fa0h+0x5000+___199f9ch));
		dRMemory_free(___24e4b4h);
		dRMemory_free(___24e54eh);
		dRMemory_free(___24e45ch);
		dRMemory_free(___24e548h);
		dRMemory_free(___24e58ah);
		dRMemory_free(___24e464h);

		n = -1;
        while(++n < 0x10) dRMemory_free((__POINTER__)___24cd60h[n]);

        n = -1;
        while(++n < 0x10) dRMemory_free((__POINTER__)___24cd00h[n]);

		n = -1;
        while(++n < 0x10) dRMemory_free(___24cdc0h[n]);
    }
    
	dRMemory_free(___24e4c0h);
    dRMemory_free(___24e4ach);

    n = -1;
    while(++n < 4) dRMemory_free((__POINTER__)___24cee0h[n]);
}

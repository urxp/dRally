#include "drally.h"
#include "netpage.h"
#include "drally_ipx.h"
#include "dos.h"

    extern __DWORD__ CONNECTION_TYPE;
    extern IPX_EventControlBlock * ___24cd60h[];
    extern __BYTE__ * ___24cdc0h[];
    extern NetPage * ___24e4ach;
    extern IPX_Header * ___24cd00h[];
    extern NetPage * ___24e4c0h;
    extern __POINTER__ ___24e58ah;
    extern __BYTE__ ___199fc0h[];
    extern IPX_EventControlBlock * ___24e54eh;
    extern __DWORD__ MP_ERROR;

__DWORD__ ___612c8h(__DWORD__);
__WORD__ swap16(__WORD__);
void ___636d0h(void);


static void ___618c4h_helper(__WORD__ size){
#if defined(DR_MULTIPLAYER)
    getIPXFragment(___24e54eh, 1)->Size = size;
    
    if(NovellNetWare_IPX_SendPacket(___24e54eh)){
            
		MP_ERROR = 0xca;
    }
    else {

        while(___24e54eh->InUse == ECB_INUSE_SENDINGPACKET){

            NovellNetWare_IPX_RelinquishControl();
        }
    }
#endif // DR_MULTIPLAYER
}

void ___618c4h(void){

    int     n;

	n = 0;
    while(!npg_done(___24e4c0h)){

        if(CONNECTION_TYPE == 2){

			___24e58ah[n++] = npg_peekb(___24e4c0h, 0);
            
            if(n >= (int)D(___199fc0h)) ___618c4h_helper(n);
        }

		npg_skipb(___24e4c0h, 1);
    }

    if(n > 0) ___618c4h_helper(n);

    if(CONNECTION_TYPE == 2) NovellNetWare_IPX_RelinquishControl();
}

void ___6168ch(void){

	int 	n, m, size;

	if(CONNECTION_TYPE == 2){

		n = 0x10;
		while(n--){

			if((___24cd60h[n]->InUse == ECB_INUSE_AVAILABLE)&&(___24cd60h[n]->CompletionCode == ECB_CMPL_SUCCESS)){

				if(___612c8h(n) == 0){

					size = swap16(___24cd00h[n]->Length)-0x1e;

					m = -1;
					while(++m < size){

						npg_writeb(___24e4ach, ___24cdc0h[n][m]);
					}
				}

				___24cd60h[n]->InUse = ECB_INUSE_AWAITINGPACKET;
				if(NovellNetWare_IPX_ListenForPacket(___24cd60h[n])) MP_ERROR = 0xcb;
			}
		}
	}
	
	___618c4h();
}

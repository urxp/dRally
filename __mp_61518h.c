#include "drally.h"
#include "netpage.h"
#include "drally_ipx.h"
#include "dos.h"

    extern __DWORD__ CONNECTION_TYPE;
    extern IPX_EventControlBlock * ___24cd60h[];
    extern IPX_Header * ___24cd00h[];
    extern __BYTE__ * ___24cdc0h[];
    extern IPX_Address * ___24e4b4h;
    extern IPX_Address ___24cef0h[];
    extern NetPage * ___24cee0h[];
	extern __DWORD__ MP_ERROR;

__WORD__ swap16(__WORD__);

static int ipxaddrcmp(IPX_Address * addr1, IPX_Address * addr2){

	int 	n;

	n = -1; while(++n < 4) if(addr1->NetworkNumber[n] != addr2->NetworkNumber[n]) return 0;
	n = -1; while(++n < 6) if(addr1->NetworkNode[n] != addr2->NetworkNode[n]) return 0;

	return 1;
}

__DWORD__ ___612c8h(__DWORD__ A0){

	return ipxaddrcmp(___24e4b4h, &___24cd00h[A0]->Src.Address);
}

__DWORD__ ___61354h(__DWORD__ A0){

    __DWORD__   rslt, n;

	n = -1;
	while(++n < 4){

		if(ipxaddrcmp(&___24cef0h[n], &___24cd00h[A0]->Src.Address)) rslt = n;
	}

    return rslt; 
}

void ___61518h(void){

	int 	n, m, size, slot;

	if(CONNECTION_TYPE == 2){

#if defined(DR_MULTIPLAYER)
		NovellNetWare_IPX_RelinquishControl();

		n = 0x10;
		while(n--){

			if((___24cd60h[n]->InUse == ECB_INUSE_AVAILABLE)&&(___24cd60h[n]->CompletionCode) == ECB_CMPL_SUCCESS){
				
				if(ipxaddrcmp(___24e4b4h, &___24cd00h[n]->Src.Address) == 0){

					slot = ___61354h(n);
					size = swap16(___24cd00h[n]->Length)-0x1e;

					m = -1;
					while(++m < size){

						npg_writeb(___24cee0h[slot], ___24cdc0h[n][m]);
					}
				}

				___24cd60h[n]->InUse = ECB_INUSE_AWAITINGPACKET;
				if(NovellNetWare_IPX_ListenForPacket(___24cd60h[n])) MP_ERROR = 0xcb;
			}
		}
#endif
	}
}

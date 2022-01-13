#include "drally.h"
#include "drally_ipx.h"

    extern __DWORD__ CONNECTION_TYPE;
    extern IPX_EventControlBlock * ___24e54eh;
    extern __POINTER__ ___24e58ah;
    extern __DWORD__ MP_ERROR;

void ___61418h(__DWORD__ A1){
#if defined(DR_MULTIPLAYER)
    if(CONNECTION_TYPE == 2){

        getIPXFragment(___24e54eh, 1)->Size = 1;
        ___24e58ah[0] = A1;

        if(NovellNetWare_IPX_SendPacket(___24e54eh)) MP_ERROR = 0xca;
    }
#endif // DR_MULTIPLAYER
}

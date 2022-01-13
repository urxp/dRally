#include "drally.h"

    extern __DWORD__ CONNECTION_TYPE;
    extern __POINTER__ ___24e4c4h;

__DWORD__ __GET_FRAME_COUNTER(void);

void ___61278h(void){

    __DWORD__   n;


    while((CONNECTION_TYPE != 2)&&(W(___24e4c4h+2) != W(___24e4c4h)));

    if(CONNECTION_TYPE != 2){

        n = __GET_FRAME_COUNTER()+2;

        while(n > __GET_FRAME_COUNTER());
    }
}

#include "drally.h"
#include "drally_ipx.h"

void handleIpxRequest(void);
int ipx_connect(const char *, __DWORD__);

    extern __DWORD__ reg_ax;
    extern __DWORD__ reg_bx;
    extern __DWORD__ reg_cx;
    extern __DWORD__ reg_dx;
    extern __DWORD__ sreg_es;
    extern __POINTER__ sreg_es_vp;
    extern __DWORD__ reg_si;
#define reg_al  B(&reg_ax)

__DWORD__ NovellNetWare_IPX_InstallationCheck(void){

    //  00h not installed
    //  FFh installed

    printf("[dRally.Network] IPX_InstallationCheck\n");

    return ipx_connect("localhost", 8888) ? 0xff : 0;
}

__DWORD__ NovellNetWare_IPX_GetDriverMaximumPacketSize(void){

    printf("[dRally.Network] IPX_GetDriverMaximumPacketSize\n");

    reg_bx = 0x1a;
    handleIpxRequest();

    return reg_ax;
}

void NovellNetWare_IPX_RelinquishControl(void){

    //printf("[dRally.Network] IPX_RelinquishControl\n");

    reg_bx = 0xa;
    handleIpxRequest();
}

__DWORD__ NovellNetWare_IPX_ListenForPacket(IPX_EventControlBlock * ecb){

    printf("[dRally.Network] IPX_ListenForPacket\n");

    reg_bx = 4;
    reg_si = 0;
    //sreg_es = (__DWORD__)ecb >> 4;
    sreg_es_vp = (__POINTER__)ecb;
    handleIpxRequest();

    return reg_al;
}

__DWORD__ NovellNetWare_IPX_SendPacket(IPX_EventControlBlock * ecb){

    reg_bx = 3;
    reg_si = 0;
    //sreg_es = (__DWORD__)ecb >> 4;
    sreg_es_vp = (__POINTER__)ecb;
    handleIpxRequest();
    
    //  AL
    //  00h Success
    //  FFh Failure

    return reg_al;
}

void NovellNetWare_IPX_GetInternetworkAddress(IPX_Address * ia){

    printf("[dRally.Network] IPX_GetInternetworkAddress\n");

    reg_bx = 9;
    reg_si = 0;
    //sreg_es = (__DWORD__)ia >> 4;
    sreg_es_vp = (__POINTER__)ia;
    handleIpxRequest();
}

__DWORD__ NovellNetWare_IPX_OpenSocket(__DWORD__ socket_no, __DWORD__ longevity){

    // socket_no 0x0000 - dynamic allocation

    printf("[dRally.Network] IPX_OpenSocket: 0x%04X\n", socket_no);

    reg_bx = 0;
    reg_dx = socket_no;
    handleIpxRequest();

    //  00h success
    //  FEh socket table full
    //  FFh socket already open

    return reg_al;
}

void NovellNetWare_IPX_CloseSocket(__DWORD__ socket_no){

    printf("[dRally.Network] IPX_CloseSocket\n");

    reg_bx = 1;
    reg_dx = socket_no;
    handleIpxRequest();
}

__DWORD__ NovellNetWare_IPX_CancelEvent(IPX_EventControlBlock * ecb){

    printf("[dRally.Network] IPX_CancelEvent\n");

    reg_bx = 6;
    reg_si = 0;
    //sreg_es = (__DWORD__)ecb >> 4;
    sreg_es_vp = (__POINTER__)ecb;
    handleIpxRequest();

    //  00h    success
    //  F9h    event in use
    //  FCh    event cancelled
    //  FFh    unsuccessful, event not in use, or unrecognized ECB flag

    return reg_al;
}
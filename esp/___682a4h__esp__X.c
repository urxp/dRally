#include "x86.h"

    extern byte MSX_Tracker[];
    extern byte Sound_CardType[];
    extern byte IsSoundEnabled[];
    extern byte ___19a46ch[];
    extern byte ___19a690h[];


static dword ___71a88h(dword A0){

	dword 	eax;

	eax = A0;

//		cmp     byte [__CEXT_V(Sound_CardType)], 0
//		je      ___71aa2h
	if(B(Sound_CardType) == 0) goto ___71aa2h;
//		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
//		je      ___71aa2h
	if(B(IsSoundEnabled) == 0) goto ___71aa2h;
//		mov     [__CEXT_V(___19a46ch)], eax
	D(___19a46ch) = eax;
//		mov     al, 1
	al = 1;
//		retn
	return eax&0xff;
___71aa2h:
//		xor     al, al
	al = 0;
//		retn    
	return eax&0xff;
}

static dword ___75d44h(dword A0){

	dword 	eax;

	eax = A0;

//		cmp     byte [__CEXT_V(Sound_CardType)], 0
//		je      ___75d5eh
	if(B(Sound_CardType) == 0) goto ___75d5eh;
//		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
//		je      ___75d5eh
	if(B(IsSoundEnabled) == 0) goto ___75d5eh;
//		mov     [__CEXT_V(___19a690h)], eax
	D(___19a690h) = eax;
//		mov     al, 1
	al = 1;
//		retn
	return eax&0xff;
___75d5eh:
//		xor     al, al
	al = 0;
//		retn
	return eax&0xff;
}


dword ___682a4h(dword A0){

	dword 	eax, ebx, ecx, edx;

	eax = A0;

//		push    edx
//		mov     edx, [__CEXT_V(MSX_Tracker)]
	edx = D(MSX_Tracker);
//		cmp     edx, byte 1
//		jb      ___682c9h
	if(edx < 1) goto ___682c9h;
//		jbe     ___682bbh
	if(edx <= 1) goto ___682bbh;
//		cmp     edx, byte 2
//		je      ___682c2h
	if(edx == 2) goto ___682c2h;
//		xor     al, al
	al = 0;
//		pop     edx
//		retn
	return eax&0xff;
___682bbh:
//		call    ___71a88h
	eax = ___71a88h(eax);
//		pop     edx
//		retn    
	return eax;
___682c2h:
//		call    ___75d44h
	eax = ___75d44h(eax);
//		pop     edx
//		retn    
	return 	eax;
___682c9h:
//		xor     al, al
	al = 0;
//		pop     edx
//		retn
	return eax&0xff;
}

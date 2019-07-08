/*
------------------------------------------------------------------------------

 ESP Music System v1.29 for Watcom C/C++    Current Revision March 17th, 1996

 Copyright (c) 1995, 1996 by Markus Stein       E-Mail: steinm@cs.uni-bonn.de

------------------------------------------------------------------------------
*/

#include "x86.h"

#pragma enum int
typedef enum TrackerType {
	NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

	extern byte AMP_Volume[];
	extern byte MSX_Volume[];
	extern byte SFX_Volume[];
	extern byte ___24e5c0h[];

	void ___649a8h(void);
	void ___680c8h(void);
	void ___64a28h(void);

	void ___67e48h__esp(TrackerType tMSX, const char * fMSX,
                    TrackerType tSFX, const char * fSFX, int nSFX);

	void __STOSD__clib3r(byte *, dword, dword);
    #pragma aux __STOSD__clib3r parm [eax][edx][ecx]

	void updateVolume(void);

	void ___5fff2h(void (*)(void));
	void ___6000fh(void (*)(void));

// 64864
void ___64864h__esp(dword A1, dword A2, dword A3, dword A4, dword A5){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	__esp[16];

	byte * esp = &__esp[4];

	eax = A1;
	edx = A2;
	ebx = A3;
	ecx = A4;
	D(esp+4) = A5;

//		sub     esp, 4
	esp -= 4;
//		mov     [esp], al
	B(esp) = al;
//		call    __CEXT_F(___649a8h)
	___649a8h();
//		call    __CEXT_F(___680c8h)
	___680c8h();
//		mov     eax, __CEXT_F(___64a28h)
	eax = ___64a28h;
//		call    __CEXT_F(___6000fh)
	___6000fh(eax);
//		xor     eax, eax
	eax = 0;
//		mov     al, [esp+8]
	al = B(esp+8);
//		push    eax
	esp -= 4;
	D(esp) = eax;
//		xor     eax, eax
	eax = 0;
//		and     ebx, 0ffh
	ebx &= 0xff;
//		mov     al, [esp+4]
	al = B(esp+4);
//		call    __CEXT_F(___67e48h__esp)
	___67e48h__esp(eax, edx, ebx, ecx, D(esp));
	esp += 4;
//		mov     ecx, 20h
	ecx = 0x20;
//		mov     edx, 10000h
	edx = 0x10000;
//		mov     eax, __CEXT_V(___24e5c0h)
	eax = ___24e5c0h;
//		call    __CEXT_F(__STOSD__clib3r)
	__STOSD__clib3r(eax, edx, ecx);
//		mov     edx, 10000h
	edx = 0x10000;
//		mov     [__CEXT_V(AMP_Volume)], edx
	D(AMP_Volume) = edx;
//		mov     [__CEXT_V(MSX_Volume)], edx
	D(MSX_Volume) = edx;
//		mov     [__CEXT_V(SFX_Volume)], edx
	D(SFX_Volume) = edx;
//		call    __CEXT_F(updateVolume)
	updateVolume();
//		mov     eax, __CEXT_F(___64a28h)
	eax = ___64a28h;
//		call    __CEXT_F(___5fff2h)
	___5fff2h(eax);
//		add     esp, 4
	esp += 4;
//		ret     4
	return;
}

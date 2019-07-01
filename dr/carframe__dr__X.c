#include "x86.h"

    extern byte ___1a1e7ch[];
    extern byte VGABufferPtr_0[];
    extern byte ___1a1e7ch[];

    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);


// 259e0h
void carAnimFrame(dword A0, dword A1, dword A2, void * A3, void * A4){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	__esp[80];
	byte * 	esp = __esp + 80;

	eax = A0;
	edx = A1;
	ebx = A2;
	ecx = A3;

	PUSH(A4);
	PUSH(0);

//		push    1ch
//		call    __CHK
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, byte 4
	esp -= 0x10;
//		mov     [esp], eax
	D(esp) = eax;
//		mov     edi, edx
	edi = edx;
//		mov     esi, ebx
	esi = ebx;
//		xor     eax, eax
	eax = 0;
//		xor     ebx, ebx
	ebx = 0;
//		test    esi, esi
//		jle     ___25a0fh
	if((int)esi <= 0) goto ___25a0fh;
//		mov     edx, [esp+14h]
	edx = D(esp+0x14);
___25a03h:
//		mov     ebp, [edx]
	ebp = D(edx);
//		add     edx, byte 4
	edx += 4;
//		inc     eax
	eax++;
//		add     ebx, ebp
	ebx += ebp;
//		cmp     eax, esi
//		jl      ___25a03h
	if((int)eax < (int)esi) goto ___25a03h;
___25a0fh:
//		add     ebx, ecx
	ebx += ecx;
//		push    ebx
	PUSH(ebx);
//		mov     eax, [__CEXT_V(___1a1e7ch)]
	eax = D(___1a1e7ch);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, [esp]
	ebx = D(esp);
//		lea     eax, [edi*4+0]
	eax = 4*edi;
//		mov     ecx, 40h
	ecx = 0x40;
//		add     eax, edi
	eax += edi;
//		mov     edx, [__CEXT_V(VGABufferPtr_0)]
	edx = D(VGABufferPtr_0);
//		shl     eax, 7
	eax <<= 7;
//		mov     esi, [__CEXT_V(___1a1e7ch)]
	esi = D(___1a1e7ch);
//		add     eax, edx
	eax += edx;
//		mov     edx, 60h
	edx = 0x60;
//		add     ebx, eax
	ebx += eax;
//		shr     dl, 2
	dl >>= 2;
___25a49h:
//		mov     ch, dl
	ch = dl;
___25a4bh:
//		mov     eax, [esi]
	eax = D(esi);
//		mov     [ebx], eax
	D(ebx) = eax;
//		add     ebx, byte 4
	ebx += 4;
//		add     esi, byte 4
	esi += 4;
//		dec     ch
	ch--;
//		jne     ___25a4bh
	if(ch != 0) goto ___25a4bh;
//		add     ebx, 280h
	ebx += 0x280;
//		shl     dl, 2
	dl <<= 2;
//		sub     ebx, edx
	ebx -= edx;
//		shr     dl, 2
	dl >>= 2;
//		dec     cl
	cl--;
//		jne     ___25a49h
	if(cl != 0) goto ___25a49h;
//		add     esp, byte 4
//		pop     ebp
//		pop     edi
//		pop     esi
//		ret     4
	return;
}

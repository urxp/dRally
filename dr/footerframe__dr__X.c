#include "x86.h"
    
    extern byte p_bpk_menubg5[];
    extern byte VGABufferPtr_0[];
    extern byte p_bpk_chatlin1[];

// ~ 135f1h (+1 label)
void frameFooter__dr(dword eax, dword edx, dword ebx, dword ecx){

	dword 	edi, esi, ebp;
	byte 	__esp[0x80];
	byte * 	esp = __esp + 0x80;

//		push    1ch
//		call    __CHK
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, byte 0ch
	esp -= 0xc;
//		mov     ebp, eax
	ebp = eax;
//		mov     [esp+4], edx
	D(esp+4) = edx;
//		mov     [esp], ecx
	D(esp) = ecx;
//		test    ecx, ecx
//		jle     ___1367eh
	if((int)ecx <= 0) goto ___1367eh;
//		lea     edi, [edx*4+0]
	edi = edx*4;
//		lea     esi, [ecx*4+0]
	esi = ecx*4;
//		add     edi, edx
	edi += edx;
//		add     esi, ecx
	esi += ecx;
//		shl     edi, 7
	edi <<= 7;
//		shl     esi, 7
	esi <<= 7;
//		lea     edx, [edi+0fffff600h]
	edx = edi+0xfffff600;
//		sub     esi, 0a00h
	esi -= 0xa00;
//		add     edi, esi
	edi += esi;
//		sub     ebx, byte 6
	ebx -= 6;
//		mov     [esp+8], edi
	D(esp+8) = edi;
___13646h:
//		mov     esi, [__CEXT_V(p_bpk_menubg5)]
	esi = D(p_bpk_menubg5);
//		mov     edi, [__CEXT_V(VGABufferPtr_0)]
	edi = D(VGABufferPtr_0);
//		mov     ecx, ebx
	ecx = ebx;
//		add     esi, edx
	esi += edx;
//		add     edi, edx
	edi += edx;
//		add     esi, ebp
	esi += ebp;
//		add     edi, ebp
	edi += ebp;
//		add     esi, byte 2
	esi += 2;
//		add     edi, byte 2
	edi += 2;
//		add     edx, 280h
	edx += 0x280;
//		push    edi
	PUSH(edi);
//		mov     eax, ecx
	eax = ecx;
//		shr     ecx, 2
	ecx >>= 2;
//		rep movsd   
	while(ecx&&ecx--){ D(edi) = D(esi); edi += 4; esi += 4; }
//		mov     cl, al
	cl = al;
//		and     cl, 3
	cl &= 3;
//		rep movsb   
	while(ecx&&ecx--) B(edi++) = B(esi++);
//		pop     edi
	POP(edi);
//		cmp     edx, [esp+8]
//		jl      ___13646h
	if((int)edx < (int)D(esp+8)) goto ___13646h;
___1367eh:
//		mov     ebx, [esp+4]
	ebx = D(esp+4);
//		inc     ebx
	ebx++;
//		lea     edx, [ebx*4+0]
	edx = ebx*4;
//		mov     ecx, 0ah
	ecx = 0xa;
//		add     edx, ebx
	edx += ebx;
//		mov     ebx, [__CEXT_V(VGABufferPtr_0)]
	ebx = D(VGABufferPtr_0);
//		shl     edx, 7
	edx <<= 7;
//		mov     esi, [__CEXT_V(p_bpk_chatlin1)]
	esi = D(p_bpk_chatlin1);
//		add     ebx, edx
	ebx += edx;
//		mov     edx, 280h
	edx = 0x280;
___136a7h:
//		mov     edi, edx
	edi = edx;
___136a9h:
//		mov     al, [esi]
	al = B(esi);
//		or      al, al
	al |= al;
//		je      ___136b1h
	if(al == 0) goto ___136b1h;
//		mov     [ebx], al
	B(ebx) = al;
___136b1h:
//		inc     ebx
	ebx++;
//		inc     esi
	esi++;
//		dec     edi
	edi--;
//		jne     ___136a9h
	if(edi != 0) goto ___136a9h;
//		add     ebx, 280h
	ebx += 0x280;
//		sub     ebx, edx
	ebx -= edx;
//		dec     ecx
	ecx--;
//		jne     ___136a7h
	if(ecx != 0) goto ___136a7h;
//		mov     eax, [esp+4]
	eax = D(esp+4);
//		add     eax, [esp]
	eax += D(esp);
//		sub     eax, byte 9
	eax -= 9;
//		lea     edx, [eax*4+0]
	edx = eax*4;
//		mov     ecx, 0ah
	ecx = 0xa;
//		add     edx, eax
	edx += eax;
//		mov     ebx, [__CEXT_V(VGABufferPtr_0)]
	ebx = D(VGABufferPtr_0);
//		shl     edx, 7
	edx <<= 7;
//		mov     esi, [__CEXT_V(p_bpk_chatlin1)]
	esi = D(p_bpk_chatlin1);
//		add     ebx, edx
	ebx += edx;
//		mov     edx, 280h
	edx = 0x280;
___136efh:
//		mov     edi, edx
	edi = edx;
___136f1h:
//		mov     al, [esi]
	al = B(esi);
//		or      al, al
	al |= al;
//		je      ___136f9h
	if(al == 0) goto ___136f9h;
//		mov     [ebx], al
	B(ebx) = al;
___136f9h:
//		inc     ebx
	ebx++;
//		inc     esi
	esi++;
//		dec     edi
	edi--;
//		jne     ___136f1h
	if(edi != 0) goto ___136f1h;
//		add     ebx, 280h
	ebx += 0x280;
//		sub     ebx, edx
	ebx -= edx;
//		dec     ecx
	ecx--;
//		jne     ___136efh
	if(ecx != 0) goto ___136efh;
//		add     esp, byte 0ch
	esp += 0xc;
//		pop     ebp
//		pop     edi
//		pop     esi
//		retn    
	return;
}

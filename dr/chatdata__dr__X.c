#include "x86.h"

    extern byte NetworkConnectionEstablished[];
    extern byte ___24e4ach[];

    void ___6168ch(void);

// 23594h
dword procChatData(void * A0, dword A1){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte	__esp[40];
	byte *	esp = __esp + 0x40;

	eax = A0;
	edx = A1;

	PUSH(0);

//		push    20h
//		call    __CHK
//		push    ebx
	PUSH(ebx);
//		push    ecx
	PUSH(ecx);
//		push    esi
	PUSH(esi);
//		push    edi
	PUSH(edi);
//		push    ebp
	PUSH(ebp);
//		sub     esp, byte 8
	esp -= 8;
//		mov     [esp+4], eax
	D(esp+4) = eax;
//		mov     ebx, edx
	ebx = edx;
//		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
//		je      ___2374bh
	if(D(NetworkConnectionEstablished) == 0) goto ___2374bh;
//		call    __CEXT_F(___6168ch)
	___6168ch();
//		mov     eax, ebx
	eax = ebx;
//		lea     esi, [eax*4+0]
	esi = 4*eax;
//		add     esi, eax
	esi += eax;
//		xor     edx, edx
	edx = 0;
//		add     esi, esi
	esi += esi;
___235cdh:
//		mov     eax, [__CEXT_V(___24e4ach)]
	eax = D(___24e4ach);
//		xor     ecx, ecx
	ecx = 0;
//		mov     cx, [eax]
	cx = W(eax);
//		sub     ecx, edx
	ecx -= edx;
//		lea     ebx, [ecx-3]
	ebx = ecx-3;
//		and     ebx, 0fffh
	ebx &= 0xfff;
//		mov     bl, [ebx+eax+4]
	bl = B(ebx+eax+4);
//		lea     edi, [ecx-1]
	edi = ecx-1;
//		and     edi, 0fffh
	edi &= 0xfff;
//		movzx   edi, byte [edi+eax+4]
	edi = B(edi+eax+4) & 0x000000ff;
//		mov     [esp], edi
	D(esp) = edi;
//		mov     ebp, [esp]
	ebp = D(esp);
//		lea     edi, [esi+3]
	edi = esi+3;
//		and     ebx, 0ffh
	ebx &= 0xff;
//		cmp     edi, ebp
//		jne     ___2373eh
	if(edi != ebp) goto ___2373eh;
//		lea     edi, [ecx-2]
	edi = ecx-2;
//		and     edi, 0fffh
	edi &= 0xfff;
//		movzx   edi, byte [edi+eax+4]
	edi = B(edi+eax+4) & 0x000000ff;
//		mov     [esp], edi
	D(esp) = edi;
//		mov     ebp, [esp]
	ebp = D(esp);
//		lea     edi, [esi+2]
	edi = esi+2;
//		cmp     edi, ebp
//		jne     ___2373eh
	if(edi != ebp) goto ___2373eh;
//		sub     ecx, ebx
	ecx -= ebx;
//		lea     edi, [ecx-4]
	edi = ecx-4;
//		and     edi, 0fffh
	edi &= 0xfff;
//		movzx   edi, byte [edi+eax+4]
	edi = B(edi+eax+4) & 0x000000ff;
//		mov     [esp], edi
	D(esp) = edi;
//		mov     ebp, [esp]
	ebp = D(esp);
//		lea     edi, [esi+1]
	edi = esi+1;
//		cmp     edi, ebp
//		jne     ___2373eh
	if(edi != ebp) goto ___2373eh;
//		sub     ecx, byte 5
	ecx -= 5;
//		and     ecx, 0fffh
	ecx &= 0xfff;
//		mov     al, [ecx+eax+4]
	al = B(ecx+eax+4);
//		and     eax, 0ffh
	eax &= 0xff;
//		cmp     eax, esi
//		jne     ___2373eh
	if(eax != esi) goto ___2373eh;
//		xor     eax, esi
	eax ^= esi;
//		test    ebx, ebx
//		jle     ___23696h
	if((int)ebx <= 0) goto ___23696h;
//		mov     esi, [esp+4]
	esi = D(esp+4);
___2366fh:
//		mov     ecx, [__CEXT_V(___24e4ach)]
	ecx = D(___24e4ach);
//		xor     edi, edi
	edi = 0;
//		mov     di, [ecx]
	di = W(ecx);
//		sub     edi, edx
	edi -= edx;
//		sub     edi, ebx
	edi -= ebx;
//		add     edi, eax
	edi += eax;
//		sub     edi, byte 3
	edi -= 3;
//		and     edi, 0fffh
	edi &= 0xfff;
//		inc     esi
	esi++;
//		mov     cl, [ecx+edi+4]
	cl = B(ecx+edi+4);
//		inc     eax
	eax++;
//		mov     [esi-1], cl
	B(esi-1) = cl;
//		cmp     eax, ebx
//		jl      ___2366fh
	if((int)eax < (int)ebx) goto ___2366fh;
___23696h:
//		mov     eax, [__CEXT_V(___24e4ach)]
	eax = D(___24e4ach);
//		xor     ecx, ecx
	ecx = 0;
//		mov     cx, [eax]
	cx = W(eax);
//		sub     ecx, edx
	ecx -= edx;
//		dec     ecx
	ecx--;
//		and     ecx, 0fffh
	ecx &= 0xfff;
//		mov     byte [ecx+eax+4], 0
	B(ecx+eax+4) = 0;
//		xor     ecx, ecx
	ecx = 0;
//		mov     cx, [eax]
	cx = W(eax);
//		sub     ecx, edx
	ecx -= edx;
//		sub     ecx, byte 2
	ecx -= 2;
//		and     ecx, 0fffh
	ecx &= 0xfff;
//		mov     byte [ecx+eax+4], 0
	B(ecx+eax+4) = 0;
//		xor     ecx, ecx
	ecx = 0;
//		mov     cx, [eax]
	cx = W(eax);
//		sub     ecx, edx
	ecx -= edx;
//		sub     ecx, byte 3
	ecx -= 3;
//		and     ecx, 0fffh
	ecx &= 0xfff;
//		mov     byte [ecx+eax+4], 0
	B(ecx+eax+4) = 0;
//		xor     ecx, ecx
	ecx = 0;
//		mov     cx, [eax]
	cx = W(eax);
//		sub     ecx, edx
	ecx -= edx;
//		sub     ecx, ebx
	ecx -= ebx;
//		sub     ecx, byte 4
	ecx -= 4;
//		and     ecx, 0fffh
	ecx &= 0xfff;
//		mov     byte [ecx+eax+4], 0
	B(ecx+eax+4) = 0;
//		xor     ecx, ecx
	ecx = 0;
//		mov     cx, [eax]
	cx = W(eax);
//		sub     ecx, edx
	ecx -= edx;
//		sub     ecx, ebx
	ecx -= ebx;
//		sub     ecx, byte 5
	ecx -= 5;
//		and     ecx, 0fffh
	ecx &= 0xfff;
//		mov     byte [ecx+eax+4], 0
	B(ecx+eax+4) = 0;
//		xor     eax, eax
	eax = 0;
//		test    ebx, ebx
//		jle     ___23730h
	if((int)ebx <= 0) goto ___23730h;
___2370ch:
//		mov     ecx, [__CEXT_V(___24e4ach)]
	ecx = D(___24e4ach);
//		xor     esi, esi
	esi = 0;
//		mov     si, [ecx]
	si = W(ecx);
//		sub     esi, edx
	esi -= edx;
//		sub     esi, ebx
	esi -= ebx;
//		add     esi, eax
	esi += eax;
//		sub     esi, byte 3
	esi -= 3;
//		and     esi, 0fffh
	esi &= 0xfff;
//		inc     eax
	eax++;
//		mov     byte [ecx+esi+4], 0
	B(ecx+esi+4) = 0;
//		cmp     eax, ebx
//		jl      ___2370ch
	if((int)eax < (int)ebx) goto ___2370ch;
___23730h:
//		mov     eax, 1
	eax = 1;
//		add     esp, byte 8
	esp += 8;
//		pop     ebp
	POP(ebp);
//		pop     edi
	POP(edi);
//		pop     esi
	POP(esi);
//		pop     ecx
	POP(ecx);
//		pop     ebx
	POP(ebx);
//		retn 
	return eax;
___2373eh:
//		inc     edx
	edx++;
//		cmp     edx, 3e8h
//		jl      ___235cdh
	if((int)edx < 0x3e8) goto ___235cdh;
___2374bh:
//		xor     eax, eax
	eax = 0;
//		add     esp, byte 8
	esp += 8;
//		pop     ebp
	POP(ebp);
//		pop     edi
	POP(edi);
//		pop     esi
	POP(esi);
//		pop     ecx
	POP(ecx);
//		pop     ebx
	POP(ebx);
//		retn    
	return eax;
}

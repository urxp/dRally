cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1df738h
	extern	___243c60h
	extern	___1df720h
	extern	___1df724h
	extern	___1e6f88h
	extern	___1e6f84h
	extern	__CHP
	extern	___243d74h
	extern	___1e6ee0h
	extern	___1df734h
	extern	___1e6fdah
	extern	___1de59ch
	extern	___1de598h
	extern	rand_
	extern	___1e6f80h
	extern	___184286h
	extern	___243ce8h
	extern	___1e7222h
	extern	___1e6fd4h
	extern	dRally_Audio_playSoundEffect

section .text

__GDECL(___52ac4h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		xor     esi, esi
		mov     ebp, 7
		xor     edi, edi
___52ae0h:
		cmp     edi, [esi+___1df738h]
		jne     near ___52d60h
		imul    edx, [___243c60h], 35eh
		mov     eax, [esi+___1df720h]
		mov     ecx, [esi+___1df724h]
		add     eax, byte 8
		add     ecx, byte 8
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+8]
		fistp   dword [esp+0ch]
		mov     ebx, [esp+8]
		mov     edx, [esp+0ch]
		sub     ebx, eax
		sub     edx, ecx
		mov     eax, ebx
		test    ebx, ebx
		jge     short ___52b42h
		mov     ecx, ebx
		neg     ecx
		jmp     short ___52b44h
___52b42h:
		mov     ecx, ebx
___52b44h:
		cmp     ecx, byte 14h
		jge     near ___52d60h
		test    edx, edx
		jge     short ___52b57h
		mov     ecx, edx
		neg     ecx
		jmp     short ___52b59h
___52b57h:
		mov     ecx, edx
___52b59h:
		cmp     ecx, byte 14h
		jge     near ___52d60h
		imul    ecx, [___243c60h], 35eh
		add     edx, byte 14h
		imul    edx, edx, byte 28h
		mov     ebx, [___243d74h]
		add     ebx, [ecx+___1e6ee0h]
		add     eax, ebx
		cmp     byte [edx+eax*1+14h], 3
		jbe     near ___52d60h
		mov     eax, 1
		mov     [esi+___1df734h], edi
		mov     edx, [ecx+___1e6fdah]
		mov     [esi+___1df738h], eax
		cmp     edi, edx
		jne     short ___52bcch
		imul    eax, [___243c60h], 94h
		mov     edx, 400h
		sub     edx, [eax+___1de59ch]
		mov     ebx, [eax+___1de598h]
		lea     edx, [edx+edx*2]
		sub     ebx, edx
		mov     [eax+___1de598h], ebx
___52bcch:
		imul    eax, [___243c60h], 94h
		cmp     edi, [eax+___1de598h]
		jle     short ___52be4h
		mov     [eax+___1de598h], edi
___52be4h:
		mov     ebx, [___243c60h]
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ebp
		imul    ecx, ebx, 35eh
		sub     edx, byte 3
		mov     [esp+0ch], edx
		fild    dword [esp+0ch]
		fadd    dword [ecx+___1e6f84h]
		mov     eax, [___243c60h]
		fstp    dword [ecx+___1e6f84h]
		imul    ecx, eax, 35eh
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ebp
		sub     edx, byte 3
		mov     [esp+0ch], edx
		fild    dword [esp+0ch]
		fadd    dword [ecx+___1e6f88h]
		fstp    dword [ecx+___1e6f88h]
		call    near rand_
		mov     edx, eax
		mov     ebx, 0ah
		sar     edx, 1fh
		idiv    ebx
		sub     edx, byte 5
		mov     [esp+0ch], edx
		mov     edx, [___243c60h]
		imul    eax, edx, 35eh
		fld     dword [eax+___1e6f80h]
		fmul    qword [___184286h]
		mov     ebx, 2dh
		mov     ecx, [___243ce8h]
		mov     [eax+___1e7222h], ebx
		fild    dword [esp+0ch]
		fxch    st0, st1
		fsubr   dword [eax+___1e6f80h]
		fxch    st0, st1
		fstp    dword [eax+___1e6fd4h]
		fstp    dword [eax+___1e6f80h]
		cmp     edx, ecx
		jne     short ___52cc8h
		push    8000h
		push    50000h
		call    near rand_
		mov     edx, eax
		mov     ebx, 3
		sar     edx, 1fh
		idiv    ebx
		lea     eax, [edx+7]
		mov     ecx, 9000h
		jmp     near ___52d50h
___52cc8h:
		imul    edx, ecx, 35eh
		fld     dword [eax+___1e6f88h]
		fld     dword [eax+___1e6f84h]
		fsub    dword [edx+___1e6f84h]
		fxch    st0, st1
		fsub    dword [edx+___1e6f88h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+4]
		mov     edx, [esp+4]
		imul    edx, edx
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		imul    eax, eax
		add     edx, eax
		mov     [esp+0ch], edx
		fild    dword [esp+0ch]
		fsqrt   
		call    near __CHP
		fistp   dword [esp+0ch]
		imul    ecx, [esp+0ch], byte 4bh
		mov     eax, 10000h
		sub     eax, ecx
		mov     ecx, eax
		cmp     eax, dword 1000h
		jle     short ___52d60h
		push    8000h
		push    50000h
		call    near rand_
		mov     edx, eax
		mov     ebx, 3
		sar     edx, 1fh
		idiv    ebx
		lea     eax, [edx+7]
___52d50h:
		xor     edx, edx
		mov     ebx, edi
		mov     dl, al
		mov     eax, 3
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
___52d60h:
		add     esi, byte 20h
		cmp     esi, 280h
		jne     near ___52ae0h
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

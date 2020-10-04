/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196e60h
	extern	___243db0h
	extern	___243da5h
	extern	___243c60h
	extern	___1e6fd8h
	extern	___1e6fdah
	extern	___243da1h
	extern	___243da0h
	extern	___1de598h
	extern	___243da2h
	extern	___1de5b4h
	extern	___243da3h
	extern	___1de5b0h
	extern	___243da4h
	extern	___1de5d0h
	extern	___243da6h
	extern	___1e6ed0h
	extern	___243da7h
	extern	___243da8h
	extern	___18345dh
	extern	___243da9h
	extern	___243daah
	extern	___243dabh
	extern	___243dach
	extern	___243dadh
	extern	___243daeh
	extern	___243dafh
	extern	___1e6f84h
	extern	___1e6edch
	extern	___183465h
	extern	___1e6f88h
	extern	___1e701eh
	extern	___1e7022h
	extern	___1e6f7ch
	extern	___1e6ee0h

section .text

__GDECL(___44730h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		cmp     dword [___196e60h], byte 0
		je      near ___44951h
		cmp     byte [___243db0h], 0ffh
		jne     near ___44949h
		mov     al, [___243da5h]
		imul    edx, [___243c60h], 35eh
		and     eax, 0ffh
		mov     ebx, eax
		sar     eax, 3
		sar     ebx, 4
		and     eax, byte 1
		mov     [edx+___1e6fd8h], bl
		mov     ebx, [___243c60h]
		mov     [edx+___1e6fdah], eax
		lea     eax, [ebx*8+0]
		add     eax, ebx
		shl     eax, 2
		add     eax, ebx
		xor     ebx, ebx
		xor     ecx, ecx
		mov     bl, [___243da1h]
		mov     cl, [___243da0h]
		shl     ebx, 8
		mov     [eax*4+___1de598h], ecx
		lea     esi, [ecx+ebx*1]
		mov     edi, esi
		xor     ebx, ebx
		mov     [eax*4+___1de598h], esi
		mov     bl, [___243da2h]
		shl     edi, 4
		mov     ebp, ebx
		mov     [eax*4+___1de5b4h], ebx
		xor     ebx, ebx
		mov     [eax*4+___1de598h], edi
		mov     bl, [___243da3h]
		mov     [eax*4+___1de5b0h], ebx
		shl     ebx, 0ah
		shl     ebp, 0ah
		mov     [eax*4+___1de5b0h], ebx
		xor     ebx, ebx
		mov     [eax*4+___1de5b4h], ebp
		mov     bl, [___243da4h]
		mov     [eax*4+___1de5d0h], ebx
		xor     eax, eax
		mov     al, [___243da6h]
		mov     [edx+___1e6ed0h], eax
		xor     eax, eax
		mov     al, [___243da7h]
		mov     [esp], eax
		xor     eax, eax
		fild    word [esp]
		mov     al, [___243da8h]
		fld     qword [___18345dh]
		fxch    st0, st1
		fmul    st0, st1
		mov     [esp], eax
		xor     eax, eax
		mov     al, [___243da9h]
		mov     [esp+4], eax
		xor     eax, eax
		fild    word [esp+4]
		mov     al, [___243daah]
		fmul    st0, st2
		mov     [esp+4], eax
		xor     eax, eax
		mov     al, [___243dabh]
		mov     [esp+8], eax
		xor     eax, eax
		fild    word [esp+8]
		mov     al, [___243dach]
		fmul    st0, st3
		mov     [esp+8], eax
		xor     eax, eax
		mov     al, [___243dadh]
		mov     [esp+0ch], eax
		xor     eax, eax
		fild    word [esp+0ch]
		mov     al, [___243daeh]
		fmulp   st4, st0
		mov     [esp+0ch], eax
		xor     eax, eax
		mov     al, [___243dafh]
		fxch    st0, st2
		fstp    dword [edx+___1e6f84h]
		mov     [edx+___1e6edch], eax
		fild    word [esp]
		fadd    dword [edx+___1e6f84h]
		fild    dword [edx+___1e6edch]
		fmul    qword [___183465h]
		fxch    st0, st1
		fstp    dword [edx+___1e6f84h]
		fxch    st0, st1
		fstp    dword [edx+___1e6f88h]
		fild    word [esp+4]
		fadd    dword [edx+___1e6f88h]
		mov     ebx, [edx+___1e6edch]
		fstp    dword [edx+___1e6f88h]
		lea     ecx, [ebx*4+0]
		fxch    st0, st1
		fstp    dword [edx+___1e701eh]
		sub     ecx, ebx
		fild    word [esp+8]
		shl     ecx, 3
		fadd    dword [edx+___1e701eh]
		add     ecx, ebx
		mov     ebx, [___243c60h]
		fstp    dword [edx+___1e701eh]
		lea     eax, [ebx*4+0]
		fxch    st0, st1
		fstp    dword [edx+___1e7022h]
		add     eax, ebx
		fild    word [esp+0ch]
		shl     eax, 0bh
		fadd    dword [edx+___1e7022h]
		mov     ebx, eax
		shl     eax, 4
		shl     ecx, 6
		sub     eax, ebx
		fstp    dword [edx+___1e7022h]
		add     eax, ecx
		fstp    dword [edx+___1e6f7ch]
		mov     [edx+___1e6ee0h], eax
___44949h:
		xor     ecx, ecx
		mov     [___196e60h], ecx
___44951h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/

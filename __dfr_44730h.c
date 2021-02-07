/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196e60h
	extern	___243c60h
	extern	___1e6ed0h
	extern	___243d9eh
	extern	___1de580h

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
		cmp     byte [___243d9eh+0x12], 0ffh
		jne     near ___44949h
		mov     al, [___243d9eh+7]
		imul    edx, [___243c60h], 35eh
		and     eax, 0ffh
		mov     ebx, eax
		sar     eax, 3
		sar     ebx, 4
		and     eax, byte 1
		mov     [edx+___1e6ed0h+0x108], bl
		mov     ebx, [___243c60h]
		mov     [edx+___1e6ed0h+0x10a], eax
		lea     eax, [ebx*8+0]
		add     eax, ebx
		shl     eax, 2							
		add     eax, ebx
		xor     ebx, ebx
		xor     ecx, ecx
		mov     bl, [___243d9eh+3]
		mov     cl, [___243d9eh+2]
		shl     ebx, 8
		mov     [eax*4+___1de580h+0x18], ecx
		lea     esi, [ecx+ebx*1]
		mov     edi, esi
		xor     ebx, ebx
		mov     [eax*4+___1de580h+0x18], esi
		mov     bl, [___243d9eh+4]
		shl     edi, 4
		mov     ebp, ebx
		mov     [eax*4+___1de580h+0x34], ebx
		xor     ebx, ebx
		mov     [eax*4+___1de580h+0x18], edi
		mov     bl, [___243d9eh+5]
		mov     [eax*4+___1de580h+0x30], ebx
		shl     ebx, 0ah
		shl     ebp, 0ah
		mov     [eax*4+___1de580h+0x30], ebx
		xor     ebx, ebx
		mov     [eax*4+___1de580h+0x34], ebp
		mov     bl, [___243d9eh+6]
		mov     [eax*4+___1de580h+0x50], ebx
		xor     eax, eax
		mov     al, [___243d9eh+8]
		mov     [edx+___1e6ed0h], eax
		xor     eax, eax
		mov     al, [___243d9eh+9]
		mov     [esp], eax
		xor     eax, eax
		fild    word [esp]
		mov     al, [___243d9eh+0xa]
		fld     qword [__dfr_18345dh]
		fxch    st0, st1
		fmul    st0, st1
		mov     [esp], eax
		xor     eax, eax
		mov     al, [___243d9eh+0xb]
		mov     [esp+4], eax
		xor     eax, eax
		fild    word [esp+4]
		mov     al, [___243d9eh+0xc]
		fmul    st0, st2
		mov     [esp+4], eax
		xor     eax, eax
		mov     al, [___243d9eh+0xd]
		mov     [esp+8], eax
		xor     eax, eax
		fild    word [esp+8]
		mov     al, [___243d9eh+0xe]
		fmul    st0, st3
		mov     [esp+8], eax
		xor     eax, eax
		mov     al, [___243d9eh+0xf]
		mov     [esp+0ch], eax
		xor     eax, eax
		fild    word [esp+0ch]
		mov     al, [___243d9eh+0x10]
		fmulp   st4, st0
		mov     [esp+0ch], eax
		xor     eax, eax
		mov     al, [___243d9eh+0x11]
		fxch    st0, st2
		fstp    dword [edx+___1e6ed0h+0xb4]
		mov     [edx+___1e6ed0h+0xc], eax
		fild    word [esp]
		fadd    dword [edx+___1e6ed0h+0xb4]
		fild    dword [edx+___1e6ed0h+0xc]
		fmul    qword [__dfr_183465h]
		fxch    st0, st1
		fstp    dword [edx+___1e6ed0h+0xb4]
		fxch    st0, st1
		fstp    dword [edx+___1e6ed0h+0xb8]
		fild    word [esp+4]
		fadd    dword [edx+___1e6ed0h+0xb8]
		mov     ebx, [edx+___1e6ed0h+0xc]
		fstp    dword [edx+___1e6ed0h+0xb8]
		lea     ecx, [ebx*4+0]
		fxch    st0, st1
		fstp    dword [edx+___1e6ed0h+0x14e]
		sub     ecx, ebx
		fild    word [esp+8]
		shl     ecx, 3
		fadd    dword [edx+___1e6ed0h+0x14e]
		add     ecx, ebx
		mov     ebx, [___243c60h]
		fstp    dword [edx+___1e6ed0h+0x14e]
		lea     eax, [ebx*4+0]
		fxch    st0, st1
		fstp    dword [edx+___1e6ed0h+0x152]
		add     eax, ebx
		fild    word [esp+0ch]
		shl     eax, 0bh
		fadd    dword [edx+___1e6ed0h+0x152]
		mov     ebx, eax
		shl     eax, 4
		shl     ecx, 6
		sub     eax, ebx
		fstp    dword [edx+___1e6ed0h+0x152]
		add     eax, ecx
		fstp    dword [edx+___1e6ed0h+0xac]
		mov     [edx+___1e6ed0h+0x10], eax
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

section .data
__dfr_18345dh:
	db	0,0,0,0,0,0,70h,40h
__dfr_183465h:
	db	0,0,0,0,0,0,0eh,40h
*/

cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243ca4h
	extern	___243cf4h
	extern	___243c60h
	extern	___243874h
	extern	___1e6ef0h
	extern	___1de580h
	extern	___1e6fdah
	extern	___1e7226h
	extern	___243ce8h
	extern	dRally_Sound_pushEffect
	extern	___1e6f88h
	extern	___1e6f84h
	extern	__CHP
	extern	dRally_Sound____6563ch

section .text

__GDECL(___563ach)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 10h
		cmp     dword [___243ca4h], 0beh
		jle     near ___56589h
		xor     ebx, ebx
		mov     ecx, [___243cf4h]
		mov     [___243c60h], ebx
		test    ecx, ecx
		jle     near ___56589h
___563e4h:
		xor     edx, edx
		xor     ebx, ebx
		cmp     dword [___243874h], byte 0
		jle     short ___5642eh
		imul    eax, [___243c60h], 35eh
___563fbh:
		mov     cl, [eax+___1e6ef0h]
		test    cl, 2
		je      short ___56422h
		test    cl, 40h
		je      short ___56422h
		mov     ecx, [eax+___1e6ef0h]
		and     ecx, 0bdh
		mov     ebx, 1
		mov     [eax+___1e6ef0h], ecx
___56422h:
		add     eax, byte 4
		inc     edx
		cmp     edx, [___243874h]
		jl      short ___563fbh
___5642eh:
		mov     esi, [___243c60h]
		imul    eax, esi, 94h
		cmp     dword [eax+___1de580h], byte 1
		setg    al
		and     eax, 0ffh
		add     eax, byte 21h
		mov     [esp+0ch], eax
		cmp     ebx, byte 1
		jne     near ___56542h
		imul    eax, esi, 35eh
		cmp     dword [eax+___1e6fdah], byte 0
		jne     near ___56542h
		cmp     dword [eax+___1e7226h], byte 0
		jne     near ___5656eh
		mov     edx, [___243c60h]
		mov     ecx, [___243ce8h]
		shl     esi, 0ch
		mov     [eax+___1e7226h], ebx
		mov     bl, [___243c60h]
		add     esi, 21000h
		add     bl, 0bh
		cmp     edx, ecx
		jne     short ___564c2h
		push    8000h
		xor     edx, ecx
		xor     eax, eax
		mov     dl, [esp+10h]
		mov     ecx, 10000h
		push    esi
		mov     al, bl
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		jmp     near ___5656eh
___564c2h:
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
		mov     [esp+8], edx
		fild    dword [esp+8]
		fsqrt   
		call    near __CHP
		fistp   dword [esp+8]
		imul    ecx, [esp+8], byte 58h
		mov     eax, 9500h
		sub     eax, ecx
		mov     ecx, eax
		test    eax, eax
		jle     short ___5656eh
		push    8000h
		xor     edx, edx
		xor     eax, eax
		mov     dl, [esp+10h]
		push    esi
		mov     al, bl
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		jmp     short ___5656eh
___56542h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7226h], byte 1
		jne     short ___5656eh
		xor     esi, esi
		mov     [eax+___1e7226h], esi
		mov     al, [___243c60h]
		add     al, 0bh
		and     eax, 0ffh
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound____6563ch
	add 	esp, 4
	pop 	ecx
	pop 	edx
___5656eh:
		mov     esi, [___243c60h]
		inc     esi
		mov     edi, [___243cf4h]
		mov     [___243c60h], esi
		cmp     esi, edi
		jl      near ___563e4h
___56589h:
		add     esp, byte 10h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

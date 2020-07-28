cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243cf4h
	extern	___1e6fdeh
	extern	___1e6fe2h
	extern	___243d78h
	extern	__CHP
	extern	___243d30h
	extern	___1e6ed0h
	extern	___1e6ff2h
	extern	___1e6feeh
	extern	___1e6f84h
	extern	___1e6f88h
	extern	___243cech
	extern	___1e6fdah
	extern	___1e6fd8h
	extern	___1e6fd9h
	extern	___243c60h
	extern	___196dd4h
	extern	___1de584h
	extern	___243ce8h
	extern	___1a1134h
	extern	dRally_Sound_pushEffect
	extern	___196df0h
	extern	___1a1094h
	extern	___1a109ch
	extern	___1a1034h
	extern	___1a102ch
	extern	___1a108ch
	extern	___1a0ff4h
	extern	___2438bch
	extern	___2438b8h
	extern	___2438c0h
	extern	___19bd66h
	extern	___243ca0h
	extern	___243cb8h
	extern	___243cdch
	extern	___1e721eh
	extern	___182ed4h
	extern	___1de7d0h
	extern	strcmp
	extern	___196ab0h
	extern	___1de580h
	extern	___19bd60h

section .text

__GDECL(race___55ae0h)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     edi, [___243cf4h]
		xor     esi, esi
		test    edi, edi
		jle     near ___55c1dh
		imul    edx, edi, 35eh
		xor     eax, eax
		mov     [esp], edx
___55b0eh:
		fld     dword [eax+___1e6fdeh]
		fld     dword [eax+___1e6fe2h]
		mov     edx, [___243d78h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+8]
		mov     ebx, [esp+8]
		call    near __CHP
		sar     ebx, 2
		fistp   dword [esp+8]
		lea     ecx, [edx+ebx*1]
		mov     ebx, [esp+8]
		mov     ebp, [___243d30h]
		sar     ebx, 2
		imul    ebx, ebp
		mov     cl, [ecx+ebx*1]
		mov     ebx, [eax+___1e6ed0h]
		and     ecx, 0ffh
		inc     ebx
		cmp     ecx, ebx
		je      short ___55ba0h
		fld     dword [eax+___1e6ff2h]
		fld     dword [eax+___1e6feeh]
		call    near __CHP
		fistp   dword [esp+8]
		mov     ecx, [esp+8]
		call    near __CHP
		sar     ecx, 2
		fistp   dword [esp+8]
		add     ecx, edx
		mov     edx, [esp+8]
		sar     edx, 2
		imul    edx, ebp
		mov     dl, [ecx+edx*1]
		and     edx, 0ffh
		cmp     edx, ebx
		jne     short ___55ba6h
___55ba0h:
		inc     dword [eax+___1e6ed0h]
___55ba6h:
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		mov     ebx, [___243d78h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		call    near __CHP
		sar     edx, 2
		fistp   dword [esp+8]
		add     ebx, edx
		mov     edx, [esp+8]
		mov     ecx, [___243d30h]
		sar     edx, 2
		imul    edx, ecx
		mov     dl, [edx+ebx*1]
		and     edx, 0ffh
		mov     ebp, [___243cech]
		mov     [esp+4], edx
		cmp     edx, ebp
		jne     short ___55c0ch
		cmp     ebp, [eax+___1e6ed0h]
		jle     short ___55c0ch
		xor     ecx, ecx
		mov     [eax+___1e6ed0h], ecx
___55c0ch:
		mov     edx, [esp]
		add     eax, 35eh
		inc     esi
		cmp     eax, edx
		jl      near ___55b0eh
___55c1dh:
		xor     esi, esi
		test    edi, edi
		jle     near ___55ca5h
		xor     ebp, ebp
___55c29h:
		xor     ecx, ecx
		test    edi, edi
		jle     near ___55c9ah
		mov     edx, ebp
		xor     eax, eax
___55c37h:
		cmp     dword [eax+___1e6fdah], byte 0
		jne     short ___55c90h
		cmp     ecx, esi
		je      short ___55c90h
		mov     ebx, [edx+___1e6ed0h]
		cmp     ebx, [eax+___1e6ed0h]
		jle     short ___55c90h
		mov     bl, [edx+___1e6fd8h]
		cmp     bl, [eax+___1e6fd8h]
		jb      short ___55c90h
		mov     bl, [edx+___1e6fd9h]
		cmp     bl, [eax+___1e6fd9h]
		jbe     short ___55c90h
		xor     ebx, ebx
		mov     bl, [edx+___1e6fd9h]
		mov     [esp+4], ebx
		mov     bl, [eax+___1e6fd9h]
		mov     [edx+___1e6fd9h], bl
		mov     bl, [esp+4]
		mov     [eax+___1e6fd9h], bl
___55c90h:
		inc     ecx
		add     eax, 35eh
		cmp     ecx, edi
		jl      short ___55c37h
___55c9ah:
		inc     esi
		add     ebp, 35eh
		cmp     esi, edi
		jl      short ___55c29h
___55ca5h:
		xor     esi, esi
		test    edi, edi
		jle     near ___55fb9h
___55cafh:
		imul    eax, esi, 35eh
		mov     ebp, [___243cech]
		mov     [___243cf4h], edi
		mov     edx, [eax+___1e6ed0h]
		mov     [___243c60h], esi
		cmp     edx, ebp
		jne     near ___55fa4h
		cmp     dword [___196dd4h], byte 0
		je      short ___55cf6h
		mov     dword [eax+___1e6fdah], 1
		imul    eax, esi, 94h
		xor     ecx, ecx
		mov     [eax+___1de584h], ecx
___55cf6h:
		cmp     dword [___196dd4h], byte 0
		jne     near ___55ed2h
		imul    eax, esi, 35eh
		mov     dl, [eax+___1e6fd8h]
		inc     dl
		mov     ebx, [___243ce8h]
		mov     [eax+___1e6fd8h], dl
		cmp     esi, ebx
		jne     near ___55ed2h
		mov     al, dl
		mov     ecx, [___1a1134h]
		and     eax, 0ffh
		mov     [___243c60h], ebx
		mov     [___243cf4h], edi
		cmp     eax, ecx
		jne     short ___55d6ah
		push    8000h
		mov     ecx, 10000h
		mov     edx, 2
		xor     ebx, ebx
		push    50000h
		mov     eax, edx
		mov     ebp, 0d2h
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     [___196df0h], ebp
___55d6ah:
		imul    edx, [___1a1094h], 1770h
		imul    eax, [___1a109ch], byte 64h
		mov     ecx, [___1a1034h]
		add     eax, edx
		imul    edx, ecx, 1770h
		mov     ebx, [___1a102ch]
		mov     ebp, [___1a108ch]
		add     ebx, eax
		imul    eax, ebp, byte 64h
		add     eax, edx
		mov     edx, [___1a0ff4h]
		mov     edi, [___243cf4h]
		add     eax, edx
		mov     esi, [___243c60h]
		cmp     ebx, eax
		jl      short ___55dc0h
		test    ecx, ecx
		jne     short ___55ddeh
		test    ebp, ebp
		jne     short ___55ddeh
		test    edx, edx
		jne     short ___55ddeh
___55dc0h:
		mov     eax, [___1a1094h]
		mov     [___1a1034h], eax
		mov     eax, [___1a109ch]
		mov     [___1a108ch], eax
		mov     eax, [___1a102ch]
		mov     [___1a0ff4h], eax
___55ddeh:
		imul    eax, [___1a1094h], 1770h
		imul    edx, [___1a109ch], byte 64h
		mov     ecx, [___2438bch]
		add     eax, edx
		imul    edx, ecx, 1770h
		mov     ebx, [___1a102ch]
		mov     ebp, [___2438b8h]
		add     ebx, eax
		imul    eax, ebp, byte 64h
		add     eax, edx
		mov     edx, [___2438c0h]
		add     eax, edx
		cmp     ebx, eax
		jl      short ___55e30h
		test    ecx, ecx
		jne     near ___55e9ch
		test    ebp, ebp
		jne     near ___55e9ch
		test    edx, edx
		jne     short ___55e9ch
___55e30h:
		mov     dh, [___19bd66h]
		mov     [___243c60h], esi
		mov     [___243cf4h], edi
		cmp     dh, 30h
		je      short ___55e70h
		cmp     dword [___196df0h], byte 0
		jne     short ___55e70h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 4
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___55e70h:
		mov     eax, [___1a1094h]
		mov     [___2438bch], eax
		mov     eax, [___1a109ch]
		mov     edi, [___243cf4h]
		mov     [___2438b8h], eax
		mov     eax, [___1a102ch]
		mov     esi, [___243c60h]
		mov     [___2438c0h], eax
		jmp     short ___55ea3h
___55e9ch:
		xor     eax, eax
		mov     [___196df0h], eax
___55ea3h:
		mov     ebx, 0d2h
		mov     eax, [___243ca0h]
		xor     ecx, ecx
		mov     [___243cb8h], eax
		mov     [___243cdch], ebx
		mov     [___1a102ch], ecx
		mov     [___1a109ch], ecx
		mov     [___1a1094h], ecx
		mov     [___243ca0h], ecx
___55ed2h:
		imul    eax, esi, 35eh
		mov     ecx, [___1a1134h]
		mov     [___243cf4h], edi
		xor     ebx, ebx
		xor     edx, edx
		mov     [___243c60h], esi
		mov     dl, [eax+___1e6fd8h]
		mov     [eax+___1e6ed0h], ebx
		cmp     edx, ecx
		jle     near ___55fa4h
		mov     esi, 1
		mov     dl, [___1a1134h]
		mov     ebp, [___243ce8h]
		mov     [eax+___1e6fdah], esi
		mov     esi, [___243c60h]
		mov     [eax+___1e6fd8h], dl
		cmp     esi, ebp
		jne     short ___55f3ah
		mov     edx, 270fh
		mov     [eax+___1e721eh], ebx
		mov     [___243cdch], edx
___55f3ah:
		imul    eax, esi, 94h
		xor     ecx, ecx
		mov     [eax+___1de584h], ecx
		imul    eax, esi, byte 54h
		mov     ebp, 1
		mov     edx, ___182ed4h
		mov     [___196dd4h], ebp
		add     eax, ___1de7d0h
		mov     [___243c60h], esi

	push 	ecx
	push 	edx
	push 	eax
		call    strcmp
	add 	esp,8
	pop 	ecx

		mov     esi, [___243c60h]
		test    eax, eax
		jne     short ___55fa4h
		imul    eax, esi, 35eh
		cmp     byte [eax+___1e6fd9h], 1
		jne     short ___55fa4h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 1fh
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___55fa4h:
		mov     esi, [___243c60h]
		mov     edi, [___243cf4h]
		inc     esi
		cmp     esi, edi
		jl      near ___55cafh
___55fb9h:
		xor     esi, esi
		xor     ebp, ebp
		test    edi, edi
		jle     short ___55ff2h
		mov     ebx, [___243cech]
		xor     eax, eax
___55fc9h:
		xor     edx, edx
		mov     dl, [eax+___1e6fd8h]
		imul    edx, ebx
		add     edx, [eax+___1e6ed0h]
		cmp     edx, ebp
		jle     short ___55fe8h
		cmp     esi, [___243ce8h]
		je      short ___55fe8h
		mov     ebp, edx
___55fe8h:
		inc     esi
		add     eax, 35eh
		cmp     esi, edi
		jl      short ___55fc9h
___55ff2h:
		imul    eax, [___243ce8h], 35eh
		xor     edx, edx
		mov     dl, [eax+___1e6fd8h]
		mov     ebx, [___243cech]
		inc     edx
		imul    edx, ebx
		mov     eax, [eax+___1e6ed0h]
		mov     [___243c60h], esi
		add     eax, edx
		mov     [___243cf4h], edi
		cmp     ebp, eax
		jle     short ___5606ch
		cmp     dword [___196ab0h], byte 0
		jne     short ___5606ch
		cmp     dword [___1de580h], byte 6
		je      short ___5606ch
		cmp     dword [___19bd60h], byte 0
		jne     short ___5606ch
		mov     ebx, 1
		push    8000h
		mov     ecx, 10000h
		mov     edx, 16h
		mov     eax, 2
		push    50000h
		mov     [___196ab0h], ebx
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___5606ch:
		imul    eax, [___243ce8h], 35eh
		xor     edx, edx
		mov     dl, [eax+___1e6fd8h]
		mov     ebx, [___243cech]
		inc     edx
		imul    edx, ebx
		mov     eax, [eax+___1e6ed0h]
		mov     edi, [___243cf4h]
		add     eax, edx
		mov     esi, [___243c60h]
		cmp     ebp, eax
		jge     short ___560c0h
		cmp     dword [___196ab0h], byte 1
		jne     short ___560c0h
		cmp     dword [___1de580h], byte 6
		je      short ___560c0h
		mov     eax, [___19bd60h]
		test    eax, eax
		jne     short ___560c0h
		mov     [___196ab0h], eax
___560c0h:
		mov     [___243cf4h], edi
		mov     [___243c60h], esi
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

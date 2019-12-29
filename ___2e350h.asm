cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1a1ef0h
	extern	___1a0218h
	extern	___1854bch
	extern	___24cc54h
	extern	dRally_Audio_playSoundEffect
	extern	___1a0214h
	extern	___1a0210h
	extern	___26fach
	extern	___185a38h
	extern	___25330h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___1854a4h
	extern	___2d618h
	extern	___1822aeh
	extern	___1822b6h
	extern	___1822beh
	extern	__CHP
	extern	___1822c6h
	extern	___1822ceh
	extern	___1822d6h
	extern	___1822deh
	extern	___1822e6h
	extern	___2d6a0h
	extern	___1a0a50h
	extern	___1a0170h
	extern	___28ab4h
	extern	___1854b8h
	extern	___2d728h
	extern	___1a023ch
	extern	___2d0ech
	extern	___1a0a54h
	extern	___1a0174h
	extern	___2d898h
	extern	___1a0240h
	extern	___1a0a58h
	extern	___1a0178h
	extern	___2da10h
	extern	___1a0244h
	extern	___1a0a5ch
	extern	___1a017ch
	extern	___2db88h
	extern	___1a0248h
	extern	___1a01ech
	extern	___13248h
	extern	___1820b0h
	extern	___13094h
	extern	___180130h
	extern	___18224ch
	extern	___182270h
	extern	___182294h
	extern	___1854a8h
	extern	___19bd60h
	extern	___196adch
	extern	___33010h
	extern	___1a0224h
	extern	___31008h
	extern	___3266ch
	extern	___185a20h

section .text

___2e338h:
dd	___2e3abh
dd	___2e7adh
dd	___2e885h
dd	___2e959h
dd	___2ea30h
dd	___2eb07h
__GDECL(___2e350h)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     dl, 5
		mov     dh, [eax*4+___1a01fch]
		sub     dl, dh
		mov     [esp+8], dl
		cmp     dword [eax*4+___1a01fch], byte 0
		jne     short ___2e395h
		mov     byte [esp+8], 4
___2e395h:
		mov     eax, [___1a1ef0h]
		cmp     eax, byte 5
		ja      near ___2ec5eh
		jmp     near dword [cs:eax*4+___2e338h]
___2e3abh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a0218h], byte 0ffffffffh
		jne     near ___2e4f7h
		cmp     dword [eax+___1a01fch], byte 0
		je      near ___2e4f7h
		push    8000h
		mov     eax, 1
		mov     edx, [___1854bch]
		mov     ecx, [___24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 1dh
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     ebx, 1
		sub     eax, edx
		xor     edx, edx
		shl     eax, 2
		mov     dl, [esp+8]
		mov     [eax+___1a0218h], ebx
		mov     [eax+___1a0214h], edx
		test    dl, dl
		jne     short ___2e43bh
		add     dword [eax+___1a0210h], 2ee0h
___2e43bh:
		cmp     byte [esp+8], 1
		jne     short ___2e461h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     dword [eax*4+___1a0210h], 2328h
___2e461h:
		cmp     byte [esp+8], 2
		jne     short ___2e487h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     dword [eax*4+___1a0210h], 1770h
___2e487h:
		cmp     byte [esp+8], 3
		jne     short ___2e4adh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     dword [eax*4+___1a0210h], 0bb8h
___2e4adh:
		cmp     byte [esp+8], 4
		jne     short ___2e4d3h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     dword [eax*4+___1a0210h], 5dch
___2e4d3h:
		mov     ebx, 136h
		call    near ___26fach
		mov     [___185a38h], ebx
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e4f7h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a0218h], byte 0ffffffffh
		jne     short ___2e558h
		cmp     dword [eax+___1a01fch], byte 0
		jne     short ___2e558h
		push    8000h
		mov     edx, 17h
		mov     eax, 2
		mov     esi, [___1854a4h]
		mov     ecx, [___24cc54h]
		push    esi
		xor     ebx, ebx
		mov     edi, 136h
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		mov     [___185a38h], edi
		call    near ___2d618h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___2e558h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     ebp, [eax+___1a0218h]
		cmp     ebp, byte 0ffffffffh
		je      near ___2ec5eh
		mov     edx, [eax+___1a0214h]
		xor     bl, bl
		test    edx, edx
		jne     short ___2e5aeh
		lea     eax, [ebp-1]
		mov     [esp], eax
		fild    dword [esp]
		fdiv    qword [___1822aeh]
		fmul    qword [___1822b6h]
		fadd    qword [___1822beh]
		call    near __CHP
		fistp   dword [esp+4]
___2e5aeh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     ecx, [eax+___1a0214h]
		cmp     ecx, byte 1
		jne     short ___2e5f9h
		mov     eax, [eax+___1a0218h]
		sub     eax, ecx
		mov     [esp], eax
		fild    dword [esp]
		fdiv    qword [___1822aeh]
		fmul    qword [___1822c6h]
		fadd    qword [___1822ceh]
		call    near __CHP
		fistp   dword [esp+4]
___2e5f9h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 2
		jne     short ___2e641h
		mov     eax, [eax+___1a0218h]
		dec     eax
		mov     [esp], eax
		fild    dword [esp]
		fdiv    qword [___1822aeh]
		fmul    qword [___1822d6h]
		fadd    qword [___1822b6h]
		call    near __CHP
		fistp   dword [esp+4]
___2e641h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 3
		jne     short ___2e689h
		mov     eax, [eax+___1a0218h]
		dec     eax
		mov     [esp], eax
		fild    dword [esp]
		fdiv    qword [___1822aeh]
		fmul    qword [___1822deh]
		fadd    qword [___1822d6h]
		call    near __CHP
		fistp   dword [esp+4]
___2e689h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 4
		jne     short ___2e6d1h
		mov     eax, [eax+___1a0218h]
		dec     eax
		mov     [esp], eax
		fild    dword [esp]
		fdiv    qword [___1822aeh]
		fmul    qword [___1822e6h]
		fadd    qword [___1822deh]
		call    near __CHP
		fistp   dword [esp+4]
___2e6d1h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [esp+4]
		cmp     edx, [eax*4+___1a0210h]
		jle     short ___2e6f4h
		mov     bl, 1
___2e6f4h:
		test    bl, bl
		jne     near ___2e780h
		push    8000h
		mov     edx, 1dh
		mov     ecx, [___1854bch]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [___24cc54h]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edx, [eax*4+0]
		mov     edi, 0ffffffffh
		mov     [edx+___1a0218h], edi
		mov     eax, [esp+4]
		mov     esi, [edx+___1a0210h]
		mov     [edx+___1a0214h], edi
		sub     esi, eax
		mov     eax, 136h
		mov     [edx+___1a0210h], esi
		mov     [___185a38h], eax
		call    near ___2d6a0h
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e780h:
		push    8000h
		mov     edx, 17h
		mov     ebx, [___1854a4h]
		mov     eax, 2
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e7adh:
		mov     ebp, [___1a0a50h]
		cmp     ebp, byte 1
		jne     short ___2e7c6h
		mov     eax, [___1a0170h]
		call    near ___28ab4h
		test    eax, eax
		je      short ___2e7f3h
___2e7c6h:
		push    8000h
		mov     edx, 17h
		mov     edi, [___1854a4h]
		mov     eax, 2
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e7f3h:
		push    8000h
		mov     edx, 1ch
		mov     eax, [___1854b8h]
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, ebp
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		xor     edx, edx
		mov     [___1a0a50h], edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [___1a0170h]
		sub     [eax*4+___1a0210h], edx
		call    near ___2d728h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     dword [eax*4+___1a023ch], 8
		xor     eax, eax
		mov     esi, 136h
		call    near ___2d0ech
		mov     [___185a38h], esi
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e885h:
		mov     ebp, [___1a0a54h]
		cmp     ebp, byte 1
		jne     short ___2e89eh
		mov     eax, [___1a0174h]
		call    near ___28ab4h
		test    eax, eax
		je      short ___2e8cbh
___2e89eh:
		push    8000h
		mov     edx, 17h
		mov     edi, [___1854a4h]
		mov     eax, 2
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e8cbh:
		push    8000h
		mov     edx, 1ch
		mov     eax, [___1854b8h]
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, ebp
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		xor     edx, edx
		mov     [___1a0a54h], edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [___1a0174h]
		sub     [eax*4+___1a0210h], edx
		call    near ___2d898h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     [eax*4+___1a0240h], ebp
		mov     eax, ebp
		mov     esi, 136h
		call    near ___2d0ech
		mov     [___185a38h], esi
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e959h:
		mov     ebp, [___1a0a58h]
		cmp     ebp, byte 1
		jne     short ___2e972h
		mov     eax, [___1a0178h]
		call    near ___28ab4h
		test    eax, eax
		je      short ___2e99fh
___2e972h:
		push    8000h
		mov     edx, 17h
		mov     edi, [___1854a4h]
		mov     eax, 2
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e99fh:
		push    8000h
		mov     edx, 1ch
		mov     eax, [___1854b8h]
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, ebp
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		xor     edx, edx
		mov     [___1a0a58h], edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [___1a0178h]
		sub     [eax*4+___1a0210h], edx
		call    near ___2da10h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     [eax*4+___1a0244h], ebp
		mov     eax, 2
		mov     esi, 136h
		call    near ___2d0ech
		mov     [___185a38h], esi
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2ea30h:
		mov     ebp, [___1a0a5ch]
		cmp     ebp, byte 1
		jne     short ___2ea49h
		mov     eax, [___1a017ch]
		call    near ___28ab4h
		test    eax, eax
		je      short ___2ea76h
___2ea49h:
		push    8000h
		mov     edx, 17h
		mov     edi, [___1854a4h]
		mov     eax, 2
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2ea76h:
		push    8000h
		mov     edx, 1ch
		mov     eax, [___1854b8h]
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, ebp
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		xor     edx, edx
		mov     [___1a0a5ch], edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [___1a017ch]
		sub     [eax*4+___1a0210h], edx
		call    near ___2db88h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     [eax*4+___1a0248h], ebp
		mov     eax, 3
		mov     esi, 136h
		call    near ___2d0ech
		mov     [___185a38h], esi
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2eb07h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 64h
		jne     near ___2ebc1h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, 136aah
		mov     eax, ___1820b0h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___180130h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___18224ch
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___182270h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___182294h
		xor     ebx, ebx
		call    near ___13094h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		push    8000h
		mov     edi, [___1854a4h]
		mov     edx, 17h
		push    edi
		mov     eax, 2
		mov     ecx, [___24cc54h]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2ebc1h:
		push    8000h
		mov     edx, 18h
		mov     ecx, [___1854a8h]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [___24cc54h]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		cmp     dword [___19bd60h], byte 0
		je      short ___2ebf9h
		mov     eax, [___196adch]
		call    near ___33010h
		jmp     short ___2ec49h
___2ebf9h:
		mov     ebp, [___1a1ef8h]
		xor     al, al
		xor     ecx, ecx
___2ec03h:
		xor     ebx, ebx
		mov     bl, al
		imul    edx, ebx, byte 6ch
		mov     edi, [edx+___1a0224h]
		cmp     ecx, edi
		jge     short ___2ec1ah
		cmp     ebx, ebp
		je      short ___2ec1ah
		mov     ecx, edi
___2ec1ah:
		inc     al
		cmp     al, 14h
		jb      short ___2ec03h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     ecx, [eax*4+___1a0224h]
		jge     short ___2ec44h
		call    near ___31008h
		jmp     short ___2ec49h
___2ec44h:
		call    near ___3266ch
___2ec49h:
		mov     edx, 1
		mov     eax, 4
		mov     [___185a20h], edx
		mov     [___1a1ef0h], eax
___2ec5eh:
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

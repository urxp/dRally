cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	__DISPLAY_SET_PALETTE_COLOR
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___135fch
	extern	___23230h
	extern	___25330h
	extern	___1a0f90h
	extern	___1a0f88h
	extern	___1a0f84h
	extern	___27f80h
	extern	___1a1100h__VESA101h_DefaultScreenBuffer
	extern	___3a6a4h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	___5994ch
	extern	___1a1028h
	extern	___1a103ch
	extern	___196af0h
	extern	___196aech
	extern	___33010h_cdecl
	extern	___196ae8h
	extern	___1866b8h
	extern	___1807ech
	extern	___185a48h
	extern	___185a44h
	extern	___185a40h
	extern	___185a3ch
	extern	___185b59h
	extern	___185b62h
	extern	___1866b8h
	extern	___180814h
	extern	___185b65h
	extern	___185b63h
	extern	___2415ch
	extern	___243d44h
	extern	___185a90h
	extern	___185a2ch
	extern	___1854a4h
	extern	___24cc54h
	extern	dRally_Sound_pushEffect
	extern	___2b318h
	extern	___185a14h
	extern	___185a4ch
	extern	dRally_Sound_setMasterVolume
	extern	___58c60h
	extern	___1a1ef4h
	extern	dRally_Sound_setPosition
	extern	___185a28h
	extern	dRally_Sound_freeEffectChannel
	extern	___12940h
	extern	___3079ch
	extern	___1a1f67h
	extern	___1a1f68h
	extern	___1a1f69h
	extern	__STOSB
	extern	rand_watcom106
	extern	___1de810h
	extern	___3892ch
	extern	___1a1ef8h
	extern	___1a0224h
	extern	___19bd60h
	extern	___1a0a5ch
	extern	___185a20h
	extern 	restoreDefaultScreenBuffer

section .text

__GDECL(___31008h)
		push    5ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 30h
		mov     edx, 0b0h
		mov     esi, 840h
		mov     [esp+28h], edx
		mov     edi, 640000h
___3102eh:
		xor     eax, eax
		mov     al, [esp+28h]
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     ebx, [esp+28h]
		inc     ebx
		add     esi, byte 0ch
		mov     [esp+28h], ebx
		cmp     ebx, 0b7h
		jl      near ___3102eh
		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		call 	__MOVS
		mov     ecx, 2aa80h
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		add     esi, 0e100h
		lea     edi, [eax+0e100h]
		mov     ebx, 27fh
		call 	__MOVS
		mov     ecx, 2800h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 39580h
		add     edi, 39580h
		mov     edx, 173h
		call 	__MOVS
		mov     ecx, 6dh
		xor     eax, eax

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		call    near ___25330h
		mov     ecx, 10h
		mov     edx, 1b8h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0f90h]
		add     ebx, 0e628h
___31179h:
		mov     edi, edx
___3117bh:
		mov     al, [esi]
		or      al, al
		je      short ___31183h
		mov     [ebx], al
___31183h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3117bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___31179h
		mov     ecx, 0e4h
		mov     edx, 100h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0f88h]
		add     ebx, 140b0h
___311afh:
		mov     edi, edx
___311b1h:
		mov     al, [esi]
		or      al, al
		je      short ___311b9h
		mov     [ebx], al
___311b9h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___311b1h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___311afh
		mov     ecx, 68h
		mov     edx, 73h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0f84h]
		add     ebx, 25d1ch
___311e5h:
		mov     edi, edx
___311e7h:
		mov     al, [esi]
		or      al, al
		je      short ___311efh
		mov     [ebx], al
___311efh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___311e7h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___311e5h
		mov     ecx, 0f4h
		mov     ebx, 10ch
		mov     edx, 78h
		mov     eax, 0aah
		call    near ___27f80h
		xor     esi, esi
		mov     [esp+28h], esi
		call 	restoreDefaultScreenBuffer

	push 	edx
	push 	ecx
	push 	eax
		call    ___3a6a4h
	pop 	eax
	pop		ecx
	pop		edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     al, al
___31234h:
		cmp     al, 1ch
		je      short ___3125bh
		cmp     al, 9ch
		je      short ___3125bh
		cmp     al, 1
		je      short ___3125bh
		mov     edi, [esp+28h]

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		inc     edi

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     [esp+28h], edi
		cmp     edi, 1e0h
		jl      short ___31234h
___3125bh:
		cmp     al, 1
		je      near ___31320h
		mov     edx, 3
		mov     ebx, 1
		mov     eax, 2
		xor     ecx, ecx
		mov     [___1a1028h], edx
		mov     [___1a103ch], ebx
		mov     [___196af0h], ecx
		mov     [___196aech], ecx

	push 	edx
	push 	ecx
	push 	eax
		call    ___33010h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx

		cmp     ebx, [___196ae8h]
		jne     near ___3157eh
		mov     ah, 1
		mov     edi, ___1866b8h+1c2h
		mov     esi, ___1807ech
		mov     [___185a48h], ecx
		mov     [___185a44h], ecx
		mov     [___185a40h], ecx
		mov     [___185a3ch], ecx
		xor     dl, dl
		xor     bl, bl
		xor     ebp, ebp
		mov     ecx, 1
		mov     [___185b59h], ah
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		mov     [___185b62h], dl
		mov     edi, ___1866b8h
		mov     esi, ___180814h
		xor     dh, dh
		mov     [___185b65h], bl
		mov     [___185b63h], dh
		movsd   
		movsd   
		movsd   
		movsb   

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [___243d44h], ecx
		mov     [___185a90h], ebp
		mov     [___185a2ch], ecx
		mov     [___196ae8h], ebp
		add     esp, byte 30h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___31320h:
		push    8000h
		mov     eax, [___1854a4h]
		mov     edx, 17h
		sub     eax, 1000h
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, 1
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     eax, 0ffdch
		mov     ebp, 640000h
		mov     [esp+2ch], eax
___3135ah:
		cmp     dword [___185a14h], byte 0
		je      short ___31375h
		cmp     dword [___185a4ch], byte 0
		je      short ___31375h
		mov     eax, [esp+2ch]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___31375h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, ebp
		xor     ebx, ebx
		xor     edi, edi
		mov     [esp+28h], ebx
___31384h:
		xor     eax, eax
		mov     al, [esp+28h]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     ecx, [esp+28h]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp+28h], ecx
		cmp     ecx, 100h
		jl      near ___31384h
		mov     edx, [esp+2ch]
		sub     edx, 51eh
		sub     ebp, 20000h
		mov     [esp+2ch], edx
		cmp     ebp, 0fffe0000h
		jne     near ___3135ah
		cmp     dword [___185a14h], byte 0
		je      short ___31462h
		cmp     dword [___185a4ch], byte 0
		je      short ___31462h
		mov     eax, [___1a1ef4h]
		mov     esi, 1
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, esi
		mov     [___185a28h], esi
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
___31462h:
		xor     edi, edi

	push 	edx
	push 	ecx
	push 	eax
		call    ___12940h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [esp+28h], edi
		xor     esi, esi
___3146fh:
		xor     eax, eax
		mov     al, [esp+28h]
		push    eax
		push    esi
		mov     ebp, [esp+30h]
		push    esi
		inc     ebp
		push    esi
		mov     [esp+38h], ebp

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		cmp     ebp, 100h
		jl      short ___3146fh
		mov     dl, 4
		mov     ebx, 1
___31496h:
		mov     eax, ebx
		call    near ___3079ch
		cmp     dl, [___1a1f67h]
		ja      short ___31496h
		cmp     dl, [___1a1f68h]
		ja      short ___31496h
		cmp     dl, [___1a1f69h]
		ja      short ___31496h
		mov     ecx, 4
		mov     eax, esp
		xor     edx, edx
		mov     ebx, 4

	push 	ecx
	push 	edx
	push 	eax
		call    __STOSB
	add 	esp, 0ch

		xor     esi, esi
___314cah:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		inc     edx
		mov     eax, edx
		mov     [esi+___1de810h], edx
		cmp     byte [esp+edx*1-1], 0
		jne     short ___314cah
		mov     dh, 1
		add     esi, byte 54h
		mov     [esp+eax*1-1], dh
		cmp     esi, 150h
		jne     short ___314cah
		mov     eax, 1
		call    near ___3892ch
		mov     edx, ebx
		mov     [esp+28h], ebx
		mov     esi, [___1a1ef8h]
		xor     edx, ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     [esp+28h], ebx
___31517h:
		mov     ecx, [eax+___1a0224h]
		cmp     edx, ecx
		jge     short ___31529h
		cmp     esi, [esp+28h]
		je      short ___31529h
		mov     edx, ecx
___31529h:
		mov     edi, [esp+28h]
		inc     edi
		add     eax, byte 6ch
		mov     [esp+28h], edi
		cmp     edi, byte 14h
		jl      short ___31517h
		cmp     dword [___19bd60h], byte 0
		jne     short ___3156ah
		mov     esi, [___1a1ef8h]
		lea     eax, [esi*8+0]
		sub     eax, esi
		shl     eax, 2
		sub     eax, esi
		cmp     edx, [eax*4+___1a0224h]
		jge     short ___3156ah
		xor     esi, esi
		mov     [___1a0a5ch], esi
		jmp     short ___31574h
___3156ah:
		mov     dword [___1a0a5ch], 1
___31574h:
		mov     dword [___185a20h], 1
___3157eh:
		add     esp, byte 30h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

    extern  __CHK
	extern 	__MOVS
    extern  ___2b318h
    extern  ___58c60h
    extern  ___13a98h_cdecl
    extern  ___19eb50h
    extern  ___19eb54h
    extern  ___19eb58h
    extern  __DISPLAY_SET_PALETTE_COLOR
    extern  ___59b3ch
    extern  ___5994ch
    extern  ___3892ch
    extern  ___1a1138h__VESA101h_DefaultScreenBufferB
    extern  ___1a112ch__VESA101_ACTIVESCREEN_PTR
    extern  ___13710h
    extern  ___135fch
    extern  ___19bd60h
    extern  ___1807cch
    extern  ___185c0bh
    extern  ___1a10fch
    extern  ___12e78h_cdecl
    extern  ___1807e8h
    extern  ___1a1108h
    extern  ___23230h
    extern  ___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___190c4h)
		push    38h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     edx, 640000h
		mov     ebp, 32h
		mov     [esp+8], edx
___190eah:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		je      short ___1910bh
		mov     eax, 1

	push 	edx
	push 	ecx
	push 	eax
		call    ___13a98h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx 
	
___1910bh:
		xor     edi, edi
		mov     esi, [esp+8]
		mov     [esp+4], edi
___19115h:
		xor     eax, eax
		mov     al, [esp+4]
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
		
		mov     eax, [esp+4]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+4], eax
		cmp     eax, byte 60h
		jl      near ___19115h
		mov     ebx, 80h
		mov     esi, [esp+8]
		mov     edi, 600h
		mov     [esp+4], ebx
___191b4h:
		xor     eax, eax
		mov     al, [esp+4]
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
		
		mov     ecx, [esp+4]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp+4], ecx
		cmp     ecx, 100h
		jl      near ___191b4h
		mov     ebx, [esp+8]
		sub     ebx, 20000h
		dec     ebp
		mov     [esp+8], ebx
		test    ebp, ebp
		jge     near ___190eah

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     eax, 2
		mov     ecx, 4b000h
		call    near ___3892ch
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1
		mov     ebx, 27fh
		mov     eax, edx
		mov     ecx, 6dh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 173h
		xor     eax, eax

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

		cmp     dword [___19bd60h], byte 0
		je      short ___192f6h
		mov     ecx, 390a3h
		mov     ebx, ___1807cch
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 390d9h
		mov     ebx, ___1807e8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___192f6h:
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     ebp, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [esp], ebp
___1930ah:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		je      short ___1932bh
		mov     eax, 1

	push 	edx
	push 	ecx
	push 	eax
		call    ___13a98h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx 
	
___1932bh:
		mov     esi, [esp]
		xor     edx, edx
		xor     edi, edi
		mov     [esp+4], edx
___19336h:
		xor     eax, eax
		mov     al, [esp+4]
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
		
		mov     ebx, [esp+4]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp+4], ebx
		cmp     ebx, byte 60h
		jl      near ___19336h
		mov     esi, 80h
		mov     edi, 600h
		mov     [esp+4], esi
		mov     esi, [esp]
___193d4h:
		xor     eax, eax
		mov     al, [esp+4]
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
		
		mov     eax, [esp+4]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+4], eax
		cmp     eax, dword 100h
		jl      near ___193d4h
		mov     edx, [esp+2]
		add     edx, byte 2
		inc     ebp
		mov     [esp+2], dx
		cmp     ebp, byte 32h
		jl      near ___1930ah
	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

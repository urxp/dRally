/*
cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern 	___185a54h
	extern 	itoa_watcom106
	extern 	___3f71ch__allocateMemory
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___13710h
	extern 	___13248h_cdecl
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___12e78h_cdecl
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___196ab8h
	extern 	___1a2010h
	extern 	___1a116ch
	extern 	___185a14h_UseWeapons
	extern 	___1a1f4eh
	extern 	___1a1ef8h
	extern 	___1a01e0h
	extern 	___23488h
	extern 	___23230h
	extern 	___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	extern 	___24e4ach
	extern 	memset
	extern 	___196a84h
	extern 	___5994ch
	extern 	___2ab50h
	extern 	___13bd4h_cdecl
	extern 	___23594h
	extern 	___13c9ch_cdecl
	extern 	dRMemory_free
	extern 	___196adch
	extern 	___19bd60h
	extern 	___1c6bch
	extern 	shop_main
	extern 	___185a24h

section .text

__GDECL(___1bc20h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     edx, 97h
		mov     ebx, 0c5h
		mov     eax, [___185a54h]
		mov     [esp+14h], edx
		mov     [esp+18h], ebx
		mov     ebx, 0ah
		lea     edx, [esp+0ch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     eax, 12h
		mov     ecx, 28f00h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ebp, eax
		mov     eax, 12h
		xor     edx, edx
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		mov     [esp+1ch], eax
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ebx, 14eh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 4
		xor     edx, edx
		mov     ecx, 41h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0c5h
		mov     eax, 97h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 20dbfh
		mov     ebx, __dfr_180aa8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 2383fh
		mov     ebx, __dfr_180ac8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     ebx, ebp
		xor     edx, edx
___1bd16h:
		inc     ebx
		mov     al, [esp+edx*1+0ch]
		inc     edx
		mov     [ebx-1], al
		cmp     edx, byte 7
		jl      short ___1bd16h
		mov     al, [___196ab8h]
		mov     ebx, ebp
		xor     edx, edx
		mov     [ebp+7], al
___1bd30h:
		inc     ebx
		mov     al, [edx+___1a2010h+1]
		inc     edx
		mov     [ebx+7], al
		cmp     edx, byte 9
		jl      short ___1bd30h
		mov     ecx, ___1a116ch
		mov     al, [___185a14h_UseWeapons]
		xor     edx, edx
		lea     ebx, [ecx+96h]
		mov     [ebp+11h], al
___1bd55h:
		mov     esi, ebx
		mov     edi, ecx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh+1]
		add     ebx, 96h
		mov     [edx+___1a1f4eh], al
		inc     edx
		cmp     edx, byte 15h
		jl      short ___1bd55h
		mov     eax, [ddash]
		mov     edx, [___1a1ef8h]
		mov     [___1a116ch+0c4eh], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a116ch+0c4eh
		add     esi, eax
		call 	__STRCAT
		mov     esi, __dfr_180adch
		mov     ebx, 6
		call 	__STRCAT
		xor     ah, ah
		mov     esi, [esp+14h]
		mov     [___1a1f4eh+15h], ah
		call 	__STRLEN
		mov     eax, ___1a116ch+0c4eh
		lea     edx, [ecx+1]
		add     esi, byte 0fh
		call    near ___23488h

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
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		mov     ecx, [esp+18h]
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		add     ecx, byte 13h
___1be57h:
		cmp     dword [___196a84h], byte 0
		jne     near ___1c058h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		movzx   edi, al

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     edx, ecx
		mov     eax, esi
		mov     ebx, 0bh
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		mov     edx, 12h
		mov     eax, ebp
		call    near ___23488h
		mov     edx, 0ah
		mov     eax, [esp+1ch]
		call    near ___23594h
		test    eax, eax
		jne     short ___1beach
		cmp     edi, byte 1
		jne     short ___1be57h
		jmp     near ___1c058h
___1beach:
		mov     edx, ecx
		mov     eax, esi
		mov     ebx, ___1a116ch
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13c9ch_cdecl
	add 	esp, 8
	pop 	ecx

		lea     ecx, [ebx+96h]
		xor     edx, edx
___1bec2h:
		mov     esi, ecx
		mov     edi, ebx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh+1]
		add     ecx, 96h
		mov     [edx+___1a1f4eh], 
		inc     edx
		cmp     edx, byte 15h
		jl      short ___1bec2h
		mov     eax, [ddash]
		mov     edx, [___1a1ef8h]
		mov     [___1a116ch+0c4eh], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a116ch+0c4eh
		add     esi, eax
		mov     ebx, 0ah
		call 	__STRCAT
		mov     esi, __dfr_180afch
		mov     edx, esp
		call 	__STRCAT
		mov     eax, [___196ab8h]
		mov     esi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     esi, __dfr_180974h
		mov     ebx, 6
		xor     dh, dh
		call 	__STRCAT
		mov     [___1a1f4eh+15h], dh
	
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
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		call 	__STRLEN
		mov     eax, ___1a116ch+0c4eh
		lea     edx, [ecx+1]
		call    near ___23488h
		mov     eax, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    dRMemory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [esp+1ch]
		mov     ebx, 1000h

	push 	edx
	push 	ecx
	push 	eax
		call    dRMemory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     eax, 2
		mov     ebp, 1
		mov     [___196adch], eax
		mov     eax, [___185a54h]
		mov     [___19bd60h], ebp
		call    near ___1c6bch

	push 	edx
	push 	ecx
	push 	eax
		call    shop_main
	pop		eax
	pop 	ecx
	pop 	edx

		mov     eax, ebp
		mov     [___185a24h], ebp
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1c058h:
		mov     ebx, ___1a116ch
		xor     edx, edx
		lea     ecx, [ebx+96h]
___1c065h:
		mov     esi, ecx
		mov     edi, ebx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh+1]
		add     ecx, 96h
		mov     [edx+___1a1f4eh], al
		inc     edx
		cmp     edx, byte 15h
		jl      short ___1c065h
		mov     eax, [ddash]
		mov     edx, [___1a1ef8h]
		mov     [___1a116ch+0c4eh], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a116ch+0c4eh
		add     esi, eax
		mov     ebx, 6
		call 	__STRCAT
		mov     esi, __dfr_180980h
		xor     dl, dl
		call 	__STRCAT
		mov     [___1a1f4eh+15h], dl
	
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

	push 	edx
	push 	ecx
	push 	eax
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

	pop		eax
	pop 	ecx
	pop		edx

		call 	__STRLEN
		mov     eax, ___1a116ch+0c4eh
		lea     edx, [ecx+1]
		call    near ___23488h
		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     eax, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    dRMemory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [esp+1ch]

	push 	edx
	push 	ecx
	push 	eax
		call    dRMemory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		xor     eax, eax
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
ddash:
	db 	"-- ",0
__dfr_180974h:
	db	20h,74h,72h,61h,63h,6bh,28h,73h,29h,2eh,0,0
__dfr_180980h:
	db	20h,63h,6ch,6fh,73h,65h,64h,20h,74h,68h,65h,20h,6eh,65h,74h,67h,61h,6dh,65h,2eh,0,0,0,0
__dfr_180aa8h:
	db 	"Waiting for remote player...",0,0,0,0
__dfr_180ac8h:
	db 	"Press ESC to abort",0,0
__dfr_180adch:
	db	20h,68h,61h,73h,20h,69h,6eh,69h,74h,69h,61h,6ch,69h,7ah,65h,64h,20h,61h,20h,6eh,65h,77h,20h,6eh,65h,74h,67h,61h,6dh,65h,2eh,0
__dfr_180afch:
	db	27h,73h,20h,67h,61h,6dh,65h,20h,73h,74h,61h,72h,74h,65h,64h,20h,77h,69h,74h,68h,20h,32h,20h,70h,6ch,61h,79h,65h,72h,73h,20h,61h,6eh,64h,20h,0
*/

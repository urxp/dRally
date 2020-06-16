cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___24cc58h
	extern	___24cc54h
	extern	___196a84h
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___146c4h
	extern	___13248h
	extern	___181bfch
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___1a1ea4h
	extern	___5994ch
	extern	___19bd60h
	extern	___23758h
	extern	memset_
	extern	___1a1ebch
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___181c66h
	extern	___181c14h
	extern	__CHP
	extern	itoa_
	extern	___185ba9h
	extern	___1f094h
	extern	___1a10cch
	extern	dRally_Sound_setMusicVolume
	extern	___2ab50h
	extern	___1854b8h
	extern	dRally_Sound_pushEffect
	extern	CONFIG_WRITE
	extern	___181c18h
	extern	dRally_Sound_setEffectsVolume
	extern	___204fch
	extern	___210b4h
	extern	___19bd58h
	extern	___59db8h
	extern	___217b0h
	extern	___1866b8h
	extern	___181c30h
	extern	___596f0h
	extern	___181c4ch
	extern	___185ac8h
	extern	___185b73h
	extern	___185ab0h

section .text

___2189ch:
dd	___21976h
dd	___21c52h
dd	___21f17h
dd	___21f21h
dd	___21f2bh
dd	___21f93h
__GDECL(___218b4h)
		push    44h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 20h
		and     esp, byte 0fffffff8h
		mov     eax, [___24cc58h]
		mov     edx, eax
		sar     edx, 1fh
		shl     edx, 9
		sbb     eax, edx
		sar     eax, 9
		mov     [esp+1ch], eax
		mov     eax, [___24cc54h]
		mov     edx, eax
		sar     edx, 1fh
		shl     edx, 9
		sbb     eax, edx
		sar     eax, 9
		mov     [esp+18h], eax
		cmp     ebx, byte 0ffffffffh
		je      near ___21c44h
___21901h:
		mov     edx, [___196a84h]
		test    edx, edx
		jne     near ___21c44h
		mov     ecx, 2c380h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0d200h
		add     edi, 0d200h
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1
		mov     eax, 3

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, 3
		call    near ___146c4h
		mov     [esp+0ch], eax
		cmp     eax, byte 5
		ja      near ___21c39h
		jmp     near dword [cs:eax*4+___2189ch]
___21976h:
		mov     eax, 3
		mov     ecx, 46h
		xor     edx, edx
		mov     ebx, 14ah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0dah
		mov     eax, 0d6h
		call    near ___13248h
		mov     ecx, 235e0h
		mov     ebx, ___181bfch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 18h
		mov     edx, 0ach
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1ea4h]
		add     ebx, 2723ah
___219d2h:
		mov     edi, edx
___219d4h:
		mov     al, [esi]
		or      al, al
		je      short ___219dch
		mov     [ebx], al
___219dch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___219d4h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___219d2h
		xor     dl, dl

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     [esp+14h], dl
___219f7h:
		mov     dh, [esp+14h]
		cmp     dh, 9ch
		je      near ___21c0bh
		cmp     dh, 1
		je      near ___21c0bh
		cmp     dword [___196a84h], byte 0
		jne     near ___21c0bh

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     [esp+14h], al
		cmp     al, 0cbh
		jne     short ___21a36h
		mov     ebx, [esp+1ch]
		test    ebx, ebx
		jle     short ___21a36h
		lea     ecx, [ebx-2]
		mov     [esp+1ch], ecx
___21a36h:
		cmp     byte [esp+14h], 4bh
		jne     short ___21a4ch
		mov     esi, [esp+1ch]
		test    esi, esi
		jle     short ___21a4ch
		lea     edi, [esi-2]
		mov     [esp+1ch], edi
___21a4ch:
		cmp     byte [esp+14h], 0cdh
		jne     short ___21a65h
		mov     eax, [esp+1ch]
		cmp     eax, dword 80h
		jge     short ___21a65h
		lea     edx, [eax+2]
		mov     [esp+1ch], edx
___21a65h:
		cmp     byte [esp+14h], 4dh
		jne     short ___21a7fh
		mov     ebx, [esp+1ch]
		cmp     ebx, 80h
		jge     short ___21a7fh
		lea     ecx, [ebx+2]
		mov     [esp+1ch], ecx
___21a7fh:
		cmp     byte [esp+14h], 3bh
		jne     short ___21a94h
		cmp     dword [___19bd60h], byte 0
		je      short ___21a94h
		call    near ___23758h
___21a94h:
		mov     ecx, 26700h
		mov     edi, 0c4h
		mov     esi, 113h
___21aa3h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, esi
		add     eax, ecx
		mov     edx, edi
		add     eax, 0dch
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 2b200h
		jne     short ___21aa3h
		mov     ecx, 18h
		mov     edx, 0ach
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1ea4h]
		add     ebx, 2723ah
___21ae2h:
		mov     edi, edx
___21ae4h:
		mov     al, [esi]
		or      al, al
		je      short ___21aech
		mov     [ebx], al
___21aech:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___21ae4h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___21ae2h
		mov     edi, [esp+1ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 18h
		add     eax, 2723ah
		mov     edx, 0ah
		add     eax, edi
		mov     esi, [___1a1ebch]
		lea     ebx, [eax+0fh]
___21b1fh:
		mov     edi, edx
___21b21h:
		mov     al, [esi]
		or      al, al
		je      short ___21b29h
		mov     [ebx], al
___21b29h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___21b21h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___21b1fh
		mov     edx, [esp+1ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 18h
		add     eax, 2723ah
		mov     ebx, 0eh
		add     edx, eax
		mov     eax, [esp+1ch]
		add     edx, byte 0dh
		add     eax, 27247h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		fild    dword [esp+1ch]
		fmul    qword [___181c66h]
		mov     esi, ___181c14h
		mov     ebx, 0ah
		mov     edx, esp
		call    near __CHP
		fistp   dword [esp+10h]
		mov     eax, [esp+10h]
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		mov     eax, esp
		mov     ecx, 265b5h
		mov     ebx, esp
		mov     edx, ___185ba9h
		call    near ___1f094h
		sub     ecx, eax
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 20h
		mov     ebx, 78h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 26560h
		add     edx, 26560h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     eax, [esp+1ch]
		shl     eax, 9
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMusicVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		call    near ___2ab50h
		cmp     byte [esp+14h], 1ch
		jne     near ___219f7h
___21c0bh:
		mov     eax, [esp+1ch]
		push    8000h
		shl     eax, 9
		mov     edx, 16h
		mov     [___24cc58h], eax
		mov     eax, [___1854b8h]
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
___21c39h:
		cmp     dword [esp+0ch], byte 0ffffffffh
		jne     near ___21901h
___21c44h:

	push 	edx
	push 	ecx
	push 	eax
		call    CONFIG_WRITE
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___21c52h:
		mov     eax, 3
		mov     ecx, 46h
		xor     edx, edx
		mov     ebx, 14ah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0dah
		mov     eax, 0d6h
		call    near ___13248h
		mov     ecx, 235e0h
		mov     ebx, ___181c18h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 18h
		mov     edx, 0ach
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1ea4h]
		add     ebx, 2723ah
___21caeh:
		mov     edi, edx
___21cb0h:
		mov     al, [esi]
		or      al, al
		je      short ___21cb8h
		mov     [ebx], al
___21cb8h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___21cb0h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___21caeh

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     ah, ah
		mov     [esp+14h], ah
___21cd3h:
		mov     bl, [esp+14h]
		cmp     bl, 9ch
		je      near ___21ee9h
		cmp     bl, 1
		je      near ___21ee9h
		cmp     dword [___196a84h], byte 0
		jne     near ___21ee9h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     [esp+14h], al
		cmp     al, 0cbh
		jne     short ___21d12h
		mov     ebx, [esp+18h]
		test    ebx, ebx
		jle     short ___21d12h
		lea     ecx, [ebx-2]
		mov     [esp+18h], ecx
___21d12h:
		cmp     byte [esp+14h], 4bh
		jne     short ___21d28h
		mov     esi, [esp+18h]
		test    esi, esi
		jle     short ___21d28h
		lea     edi, [esi-2]
		mov     [esp+18h], edi
___21d28h:
		cmp     byte [esp+14h], 0cdh
		jne     short ___21d41h
		mov     eax, [esp+18h]
		cmp     eax, dword 80h
		jge     short ___21d41h
		lea     edx, [eax+2]
		mov     [esp+18h], edx
___21d41h:
		cmp     byte [esp+14h], 4dh
		jne     short ___21d5bh
		mov     ebx, [esp+18h]
		cmp     ebx, 80h
		jge     short ___21d5bh
		lea     ecx, [ebx+2]
		mov     [esp+18h], ecx
___21d5bh:
		cmp     byte [esp+14h], 3bh
		jne     short ___21d70h
		cmp     dword [___19bd60h], byte 0
		je      short ___21d70h
		call    near ___23758h
___21d70h:
		mov     ecx, 26700h
		mov     esi, 0c4h
		mov     edi, 113h
___21d7fh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, edi
		add     eax, ecx
		mov     edx, esi
		add     eax, 0dch
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 2b200h
		jne     short ___21d7fh
		mov     ecx, 18h
		mov     edx, 0ach
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1ea4h]
		add     ebx, 2723ah
___21dbeh:
		mov     edi, edx
___21dc0h:
		mov     al, [esi]
		or      al, al
		je      short ___21dc8h
		mov     [ebx], al
___21dc8h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___21dc0h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___21dbeh
		mov     edi, [esp+18h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 18h
		add     eax, 2723ah
		mov     edx, 0ah
		add     eax, edi
		mov     esi, [___1a1ebch]
		lea     ebx, [eax+0fh]
___21dfbh:
		mov     edi, edx
___21dfdh:
		mov     al, [esi]
		or      al, al
		je      short ___21e05h
		mov     [ebx], al
___21e05h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___21dfdh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___21dfbh
		mov     edx, [esp+18h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 18h
		add     eax, 2723ah
		mov     ebx, 0eh
		add     edx, eax
		mov     eax, [esp+18h]
		add     edx, byte 0dh
		add     eax, 27247h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		fild    dword [esp+18h]
		fmul    qword [___181c66h]
		mov     esi, ___181c14h
		mov     ebx, 0ah
		mov     edx, esp
		call    near __CHP
		fistp   dword [esp+10h]
		mov     eax, [esp+10h]
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		mov     eax, esp
		mov     ecx, 265b5h
		mov     ebx, esp
		mov     edx, ___185ba9h
		call    near ___1f094h
		sub     ecx, eax
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 20h
		mov     ebx, 78h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 26560h
		add     edx, 26560h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     eax, [esp+18h]
		shl     eax, 9
		mov     dl, [esp+14h]
	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Sound_setEffectsVolume
	add 	esp, 4
	pop		edx
	pop 	ecx
		call    near ___2ab50h
		cmp     dl, 1ch
		jne     near ___21cd3h
___21ee9h:
		mov     ecx, [esp+18h]
		push    8000h
		mov     edx, 16h
		mov     eax, [___1854b8h]
		xor     ebx, ebx
		shl     ecx, 9
		push    eax
		mov     eax, 1
		mov     [___24cc54h], ecx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		jmp     near ___21c39h
___21f17h:
		call    near ___204fch
		jmp     near ___21c39h
___21f21h:
		call    near ___210b4h
		jmp     near ___21c39h
___21f2bh:
		cmp     dword [___19bd58h], byte 0
		setz    al
		and     eax, 0ffh
		mov     [___19bd58h], eax
		cmp     eax, byte 1
		jne     short ___21f6eh
		call    near ___59db8h
		cmp     dword [___19bd58h], byte 0
		jne     short ___21f57h
		call    near ___217b0h
___21f57h:
		mov     ecx, 6
		mov     edi, ___1866b8h+60eh
		mov     esi, ___181c30h

	push 	edx
	push 	ecx
	push 	eax
		call    near ___596f0h
	pop		eax
	pop 	ecx
	pop 	edx

		rep movsd   
		movsb   
___21f6eh:
		cmp     dword [___19bd58h], byte 0
		jne     near ___21c39h
		mov     ecx, 6
		mov     edi, ___1866b8h+60eh
		mov     esi, ___181c4ch
		rep movsd   
		movsw   
		jmp     near ___21c39h
___21f93h:
		mov     ebx, 0ffffffffh
		xor     ecx, ecx
		mov     [esp+0ch], ebx
		mov     [___185ac8h], ecx
		xor     ebx, ebx
___21fa6h:
		mov     eax, [___185ac8h]
		cmp     bl, [eax+___185b73h]
		jne     near ___21c39h
		mov     edx, [___185ab0h]
		dec     edx
		cmp     eax, edx
		jge     short ___21fcah
		inc     eax
		mov     [___185ac8h], eax
		jmp     short ___21fa6h
___21fcah:
		mov     [___185ac8h], ebx
		jmp     short ___21fa6h

cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___182744h
	extern	open_
	extern	filelength_
	extern	___5ec04h_freeMemPool
	extern	___5a101h
	extern	VGA3_SETMODE
	extern	___18274ch
	extern	printf_
	extern	close_
	extern	exit_
	extern	___180134h
	extern	fopen_
	extern	CONFIG_SOUND_TYPE
	extern	fread_
	extern	CONFIG_SOUND_IRQ
	extern	CONFIG_SOUND_DMA
	extern	CONFIG_SOUND_ADDR
	extern	fclose_
	extern	___3c668h
	extern	___3f71ch__allocateMemory
	extern	fgetc_
	extern	___24cc58h
	extern	___24cc54h
	extern	___185b38h
	extern	___196a94h
	extern	___19bd58h
	extern	___1a201ah
	extern	___1a1ffch
	extern	___196a90h
	extern	___1a1e50h
	extern	___199fa4h
	extern	___199fa8h
	extern	___19f750h
	extern	___1a0e28h
	extern	___1a1158h
	extern	___1a1150h
	extern	___1a1148h
	extern	___1a114ch
	extern	___1a1140h
	extern	___1a115ch
	extern	___1a1154h
	extern	___1a1144h
	extern	___1a1164h
	extern	___1a113ch
	extern	___1a1110h
	extern	___1a1130h
	extern	___1a1120h
	extern	___1a1118h
	extern	___1a111ch
	extern	___1a1f3ch
	extern	___658d0h_cdecl
	extern 	GET_FILE_SIZE

section .text

___3bb34h:
dd	___3c0b9h
dd	___3c0d9h
dd	___3c0fbh
dd	___3c11eh
__GDECL(CONFIG_READ)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
;		push    200h
		mov     edx, 1388h
;		push    ___182744h
;		mov     [esp+8], edx
	mov 	[esp], edx
;		call    near open_
;		add     esp, byte 8

	mov 	eax, ___182744h
	call 	GET_FILE_SIZE

;		mov     edi, eax
;		mov     esi, eax
;		call    near filelength_
		test    eax, eax
		jg      short ___3bbach
		call    near ___5ec04h_freeMemPool
		call    near ___5a101h
		call    near VGA3_SETMODE
		push    ___18274ch
		call    near printf_
		add     esp, byte 4
;		mov     eax, edi
;		call    near close_
		mov     eax, 70h
		call    near exit_
___3bbach:
;		mov     eax, esi
;		call    near filelength_
		cmp     eax, byte 7
		jne     short ___3bc30h
;		mov     eax, esi
		mov     edx, ___180134h
;		call    near close_
		mov     eax, ___182744h
		mov     ebx, 1
		call    near fopen_
		mov     esi, eax
		mov     ecx, eax
		mov     edx, ebx
		mov     eax, CONFIG_SOUND_TYPE
		call    near fread_
		mov     ebx, 1
		mov     eax, CONFIG_SOUND_IRQ
		mov     ecx, esi
		mov     edx, ebx
		call    near fread_
		mov     ebx, 1
		mov     eax, CONFIG_SOUND_DMA
		mov     ecx, esi
		mov     edx, ebx
		call    near fread_
		mov     ebx, 1
		mov     edx, 4
		mov     eax, CONFIG_SOUND_ADDR
		mov     ecx, esi
		call    near fread_
		mov     eax, esi
		call    near fclose_
		call    near ___3c668h
		jmp     near ___3c13ah
___3bc30h:
;		mov     eax, esi
;		call    near close_
		mov     eax, [esp]
		mov     edx, ___180134h
		call    near ___3f71ch__allocateMemory
		mov     ebp, eax
		mov     eax, ___182744h
		mov     ebx, 1
		call    near fopen_
		mov     esi, eax
		mov     ecx, eax
		mov     edx, ebx
		mov     eax, CONFIG_SOUND_TYPE
		call    near fread_
		mov     ebx, 1
		mov     eax, CONFIG_SOUND_IRQ
		mov     ecx, esi
		mov     edx, ebx
		call    near fread_
		mov     ebx, 1
		mov     eax, CONFIG_SOUND_DMA
		mov     ecx, esi
		mov     edx, ebx
		call    near fread_
		mov     ebx, 1
		mov     edx, 4
		mov     eax, CONFIG_SOUND_ADDR
		mov     ecx, esi
		call    near fread_
		mov     ebx, [esp]
		mov     eax, esi
		mov     edx, 1
		call    near fgetc_
		mov     ecx, esi
		mov     [esp+8], al
		mov     eax, ebp
		call    near fread_
		mov     edx, eax
		mov     edi, eax
		mov     eax, esi
		xor     ebx, ebx
		call    near fclose_
		mov     [esp+4], ebx
		test    edx, edx
		jle     short ___3bd28h
		mov     al, [esp+4]
		mov     ah, 0ch
		mul     ah
		mov     esi, ebp
		mov     [esp+0ch], al
___3bce0h:
		mov     eax, [esp+4]
		mov     edx, eax
		mov     ebx, 5
		sar     edx, 1fh
		idiv    ebx
		mov     ecx, edx
		mov     ebx, esi
		mov     eax, [ebx]
		rol     al, cl
		mov     [ebx], eax
		mov     al, [esp+0ch]
		mov     ah, [esi]
		sub     ah, al
		mov     [esi], ah
		mov     al, [esp+8]
		mov     dl, ah
		inc     esi
		add     dl, al
		mov     ecx, [esp+4]
		mov     [esi-1], dl
		mov     dh, [esp+0ch]
		inc     ecx
		add     dh, 0ch
		mov     [esp+4], ecx
		mov     [esp+0ch], dh
		cmp     edi, ecx
		jg      short ___3bce0h
___3bd28h:
		mov     ecx, 4
		mov     edi, ___24cc58h
		mov     esi, ebp
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___24cc54h
		lea     esi, [ebp+4]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___185b38h
		lea     esi, [ebp+8]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___196a94h
		lea     esi, [ebp+0ch]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___19bd58h
		lea     esi, [ebp+10h]
		call 	__MOVS
		mov     ecx, 15h
		mov     edi, ___1a201ah
		lea     esi, [ebp+14h]
		call 	__MOVS
		mov     ecx, 15h
		mov     edi, ___1a1ffch
		lea     esi, [ebp+29h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___196a90h
		lea     esi, [ebp+3eh]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1e50h
		lea     esi, [ebp+42h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___199fa4h
		lea     esi, [ebp+46h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___199fa8h
		lea     esi, [ebp+4ah]
		call 	__MOVS
		mov     ecx, 0a20h
		mov     edi, ___19f750h
		lea     esi, [ebp+4eh]
		call 	__MOVS
		mov     ecx, 0c8h
		mov     edi, ___1a0e28h
		lea     esi, [ebp+0a6eh]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1158h
		lea     esi, [ebp+0b36h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1150h
		lea     esi, [ebp+0b3ah]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1148h
		lea     esi, [ebp+0b3eh]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a114ch
		lea     esi, [ebp+0b42h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1140h
		lea     esi, [ebp+0b46h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a115ch
		lea     esi, [ebp+0b4ah]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1154h
		lea     esi, [ebp+0b4eh]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1144h
		lea     esi, [ebp+0b52h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1164h
		lea     esi, [ebp+0b56h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a113ch
		lea     esi, [ebp+0b5ah]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1110h
		lea     esi, [ebp+0b5eh]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1130h
		lea     esi, [ebp+0b62h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1120h
		lea     esi, [ebp+0b66h]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1118h
		lea     esi, [ebp+0b6ah]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a111ch
		lea     esi, [ebp+0b6eh]
		call 	__MOVS
		mov     ecx, 4
		mov     edi, ___1a1f3ch
		lea     esi, [ebp+0b72h]
		call 	__MOVS
		mov     eax, [___185b38h]
		cmp     eax, byte 3
		ja      near ___3c13ah
		jmp     near dword [cs:eax*4+___3bb34h]
___3c0b9h:
		mov     esi, 3f8h
		mov     edi, 4
		xor     ecx, ecx
		mov     [___199fa4h], esi
		mov     [___199fa8h], edi
		mov     [___1a1e50h], ecx
		jmp     short ___3c13ah
___3c0d9h:
		mov     edx, 2f8h
		mov     ebx, 3
		mov     eax, 1
		mov     [___199fa4h], edx
		mov     [___199fa8h], ebx
		mov     [___1a1e50h], eax
		jmp     short ___3c13ah
___3c0fbh:
		mov     edi, 3e8h
		mov     ebp, 4
		mov     esi, 2
		mov     [___199fa4h], edi
		mov     [___199fa8h], ebp
		mov     [___1a1e50h], esi
		jmp     short ___3c13ah
___3c11eh:
		mov     ebx, 2e8h
		mov     edx, 3
		mov     [___199fa4h], ebx
		mov     [___199fa8h], edx
		mov     [___1a1e50h], edx
___3c13ah:
		xor     ecx, ecx
		xor     ebx, ebx
		xor     edx, edx
		xor     eax, eax
		mov     cl, [CONFIG_SOUND_DMA]
		mov     bl, [CONFIG_SOUND_IRQ]
		mov     dx, [CONFIG_SOUND_ADDR]
		mov     al, [CONFIG_SOUND_TYPE]
	push	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    near ___658d0h_cdecl
	add 	esp, 10h
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

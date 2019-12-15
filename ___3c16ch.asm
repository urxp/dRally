cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	rand_
	extern	___24cc58h
	extern	___3f71ch__allocateMemory
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
	extern	___180134h
	extern	___182744h
	extern	fopen_
	extern	CONFIG_SOUND_TYPE
	extern	fread_
	extern	CONFIG_SOUND_IRQ
	extern	CONFIG_SOUND_DMA
	extern	CONFIG_SOUND_ADDR
	extern	___1807bch
	extern	fclose_
	extern	fwrite_
	extern	fputc_

section .text

__GDECL(CONFIG_WRITE)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		call    near rand_
		mov     ecx, 4
		mov     [esp+4], al
		mov     eax, 1388h
		mov     esi, ___24cc58h
		call    near ___3f71ch__allocateMemory
		mov     edx, eax
		mov     edi, eax
		mov     ebp, eax
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___24cc54h
		lea     edi, [edx+4]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___185b38h
		lea     edi, [edx+8]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___196a94h
		lea     edi, [edx+0ch]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___19bd58h
		lea     edi, [edx+10h]
		call 	__MOVS
		mov     ecx, 15h
		mov     esi, ___1a201ah
		lea     edi, [edx+14h]
		call 	__MOVS
		mov     ecx, 15h
		mov     esi, ___1a1ffch
		lea     edi, [edx+29h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___196a90h
		lea     edi, [edx+3eh]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1e50h
		lea     edi, [edx+42h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___199fa4h
		lea     edi, [edx+46h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___199fa8h
		lea     edi, [edx+4ah]
		call 	__MOVS
		mov     ecx, 0a20h
		mov     esi, ___19f750h
		lea     edi, [edx+4eh]
		call 	__MOVS
		mov     ecx, 0c8h
		mov     esi, ___1a0e28h
		lea     edi, [edx+0a6eh]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1158h
		lea     edi, [edx+0b36h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1150h
		lea     edi, [edx+0b3ah]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1148h
		lea     edi, [edx+0b3eh]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a114ch
		lea     edi, [edx+0b42h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1140h
		lea     edi, [edx+0b46h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a115ch
		lea     edi, [edx+0b4ah]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1154h
		lea     edi, [edx+0b4eh]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1144h
		lea     edi, [edx+0b52h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1164h
		lea     edi, [edx+0b56h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a113ch
		lea     edi, [edx+0b5ah]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1110h
		lea     edi, [edx+0b5eh]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1130h
		lea     edi, [edx+0b62h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1120h
		lea     edi, [edx+0b66h]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1118h
		lea     edi, [edx+0b6ah]
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a111ch
		lea     edi, [edx+0b6eh]
		xor     ebx, ebx
		call 	__MOVS
		mov     ecx, 4
		mov     esi, ___1a1f3ch
		lea     edi, [edx+0b72h]
		mov     [esp], ebx
		call 	__MOVS
		mov     al, [esp]
		mov     ah, 0ch
		mul     ah
		mov     edi, 0b76h
		mov     esi, edx
		mov     [esp+8], al
___3c528h:
		mov     al, [esp+4]
		mov     ah, [esi]
		sub     ah, al
		mov     [esi], ah
		mov     al, [esp+8]
		mov     dl, ah
		add     dl, al
		mov     eax, [esp]
		mov     [esi], dl
		mov     edx, eax
		mov     ebx, 5
		sar     edx, 1fh
		idiv    ebx
		mov     ecx, edx
		mov     ebx, esi
		mov     eax, [ebx]
		ror     al, cl
		mov     [ebx], eax
		mov     dh, [esp+8]
		mov     ecx, [esp]
		inc     esi
		add     dh, 0ch
		inc     ecx
		mov     [esp+8], dh
		mov     [esp], ecx
		cmp     ecx, 0b76h
		jl      short ___3c528h
		mov     edx, ___180134h
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
		mov     edx, ___1807bch
		call    near fclose_
		mov     eax, ___182744h
		mov     ebx, 1
		call    near fopen_
		mov     esi, eax
		mov     ecx, eax
		mov     edx, ebx
		mov     eax, CONFIG_SOUND_TYPE
		call    near fwrite_
		mov     ebx, 1
		mov     eax, CONFIG_SOUND_IRQ
		mov     ecx, esi
		mov     edx, ebx
		call    near fwrite_
		mov     ebx, 1
		mov     eax, CONFIG_SOUND_DMA
		mov     ecx, esi
		mov     edx, ebx
		call    near fwrite_
		mov     ebx, 1
		mov     edx, 4
		mov     eax, CONFIG_SOUND_ADDR
		mov     ecx, esi
		call    near fwrite_
		mov     ebx, 1
		xor     eax, eax
		mov     edx, esi
		mov     al, [esp+4]
		mov     ecx, esi
		call    near fputc_
		mov     edx, edi
		mov     eax, ebp
		call    near fwrite_
		mov     eax, esi
		call    near fclose_
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

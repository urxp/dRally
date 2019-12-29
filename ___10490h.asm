cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___180124h
	extern 	entrysize_bpa
	extern 	___5ed38h_allocMemory
	extern 	___180124h
	extern 	bpa_read

section .text

;;	load_musics_bpa(file_name, ???)
__GDECL(load_musics_bpa)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ebx, eax
		mov     [esp+4], dl
		mov     edx, eax
		mov     eax, ___180124h		;; "MUSICS.BPA"
		call    near entrysize_bpa
		xor     edx, edx
		mov     ecx, eax
		mov     dl, [esp+4]
		mov     edi, eax
		call    near ___5ed38h_allocMemory
		mov     esi, eax
		mov     ebp, eax
		mov     edx, eax
		mov     eax, ___180124h		;; "MUSICS.BPA"
		call    near bpa_read
		xor     edx, edx
		mov     [esp], edx
		test    ecx, ecx
		jbe     short ___10527h
		mov     al, [esp]
		mov     dl, 11h
		mul     dl
		mov     [esp+8], al
___104e7h:
		mov     eax, [esp]
		mov     edx, eax
		mov     ebx, 7
		sar     edx, 1fh
		idiv    ebx
		mov     ecx, edx
		mov     ebx, esi
		mov     eax, [ebx]
		rol     al, cl
		mov     [ebx], eax
		mov     ah, [esi]
		add     ah, 93h
		mov     [esi], ah
		mov     al, [esp+8]
		mov     dl, ah
		inc     esi
		sub     dl, al
		mov     ebx, [esp]
		mov     [esi-1], dl
		mov     dh, al
		inc     ebx
		add     dh, 11h
		mov     [esp], ebx
		mov     [esp+8], dh
		cmp     edi, ebx
		ja      short ___104e7h
___10527h:
		mov     eax, ebp
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

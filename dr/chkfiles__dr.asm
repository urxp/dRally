
	extern 	__CHK
	extern 	getFileSize__dr
	extern 	___182a30h
	extern 	___182a5ch
	extern 	printf__clib3r
	extern 	restore__keyboard
	extern 	drfile_size
	extern 	drfiles_list
	extern 	___182aach
	extern 	___182ae4h
	extern 	___5ec04h
	extern 	cdrom_ini
	extern 	animfiles_list
	extern 	___180130h
	extern 	___1a214ah
	extern 	animfile_size
	extern 	exit__clib3r
	extern 	___182b34h
	extern 	___182b6ch

%include "layout.inc"

section @text

global chkfiles__dr
chkfiles__dr:
		push    124h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 100h
		mov     ebx, drfiles_list
		xor     edx, edx
		mov     ebp, 70h
@file_chk:
		mov     eax, ebx
		call    near getFileSize__dr
		mov     edi, eax
		cmp     eax, byte 1
		jge     short @file_exists
		push    ebx
		push    ___182a30h
		call    near printf__clib3r
		add     esp, byte 8
		push    ___182a5ch
		call    near printf__clib3r
		add     esp, byte 4
		call    near restore__keyboard
		call    near ___5ec04h
		mov     eax, ebp
		call    near exit__clib3r
@file_exists:
		cmp     edi, [edx+drfile_size]
		je      short @file_original
		mov     eax, drfiles_list
		add     eax, edx
		push    eax
		push    ___182aach
		call    near printf__clib3r
		add     esp, byte 8
		push    ___182ae4h
		call    near printf__clib3r
		add     esp, byte 4
		call    near restore__keyboard
		call    near ___5ec04h
		mov     eax, ebp
		call    near exit__clib3r
@file_original:
		add     edx, byte 11h
		add     ebx, byte 11h
		cmp     edx, 0eeh
		jne     near @file_chk
		mov     ah, 2
		mov     esi, cdrom_ini
		mov     edi, esp
		mov     [___1a214ah], ah
		push    edi
___3e27dh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      short ___3e295h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     short ___3e27dh
___3e295h:
		pop     edi
		mov     esi, animfiles_list
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3e2a6h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      short ___3e2beh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     short ___3e2a6h
___3e2beh:
		pop     edi
		mov     eax, esp
		call    near getFileSize__dr
		cmp     eax, byte 1
		jge     short ___3e2d2h
		mov     byte [___1a214ah], 1
___3e2d2h:
		mov     edx, animfiles_list
		xor     ebx, ebx
@anim_chk:
		mov     al, [___180130h]
		mov     cl, [___1a214ah]
		mov     [esp], al
		cmp     cl, 2
		jne     short ___3e315h
		mov     esi, cdrom_ini
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3e2fch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      short ___3e314h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     short ___3e2fch
___3e314h:
		pop     edi
___3e315h:
		imul    ebp, ebx, byte 11h
		mov     edi, esp
		mov     esi, edx
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3e325h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      short ___3e33dh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     short ___3e325h
___3e33dh:
		pop     edi
		mov     eax, esp
		call    near getFileSize__dr
		test    eax, eax
		jle     short @anim_original
		cmp     eax, [ebp+animfile_size]
		je      short @anim_original
		push    edx
		push    ___182b34h
		call    near printf__clib3r
		add     esp, byte 8
		push    ___182b6ch
		call    near printf__clib3r
		add     esp, byte 4
		call    near restore__keyboard
		call    near ___5ec04h
		mov     eax, 70h
		call    near exit__clib3r
@anim_original:
		inc     ebx
		add     edx, byte 11h
		cmp     ebx, byte 3
		jl      near @anim_chk
		add     esp, 100h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn

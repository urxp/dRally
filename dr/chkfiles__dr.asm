%include "macros.inc"

	extern 	__CHK
	extern 	__CEXT_F(getFileSize__dr)
	extern 	__CEXT_V(___182a30h)
	extern 	__CEXT_V(___182a5ch)
	extern 	__CEXT_F(printf__clib3r)
	extern 	__CEXT_F(restore__keyboard)
	extern 	__CEXT_V(drfile_size)+0dh
	extern 	__CEXT_V(drfiles_list)
	extern 	__CEXT_V(___182aach)
	extern 	__CEXT_V(___182ae4h)
	extern 	__CEXT_F(___5ec04h)
	extern 	__CEXT_V(cdrom_ini)
	extern 	__CEXT_V(animfiles_list)
	extern 	__CEXT_V(___180130h)
	extern 	__CEXT_V(CDPath)
	extern 	__CEXT_V(animfile_size)+0dh
	extern 	__CEXT_F(exit__clib3r)
	extern 	__CEXT_V(___182b34h)
	extern 	__CEXT_V(___182b6ch)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(chkfiles__dr))
		push    124h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 100h
		mov     ebx, __CEXT_V(drfiles_list)
		xor     edx, edx
		mov     ebp, 70h
@file_chk:
		mov     eax, ebx
		call    __CEXT_F(getFileSize__dr)
		mov     edi, eax
		cmp     eax, 1
		jge     @file_exists
		push    ebx
		push    __CEXT_V(___182a30h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 8
		push    __CEXT_V(___182a5ch)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		call    __CEXT_F(restore__keyboard)
		call    __CEXT_F(___5ec04h)
		mov     eax, ebp
		call    __CEXT_F(exit__clib3r)
@file_exists:
		cmp     edi, [edx+__CEXT_V(drfile_size)+0dh]
		je      @file_original
		mov     eax, __CEXT_V(drfiles_list)
		add     eax, edx
		push    eax
		push    __CEXT_V(___182aach)
		call    __CEXT_F(printf__clib3r)
		add     esp, 8
		push    __CEXT_V(___182ae4h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		call    __CEXT_F(restore__keyboard)
		call    __CEXT_F(___5ec04h)
		mov     eax, ebp
		call    __CEXT_F(exit__clib3r)
@file_original:
		add     edx, 11h
		add     ebx, 11h
		cmp     edx, 0eeh
		jne     @file_chk
		mov     ah, 2
		mov     esi, __CEXT_V(cdrom_ini)
		mov     edi, esp
		mov     [__CEXT_V(CDPath)], ah
		push    edi
___3e27dh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e295h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e27dh
___3e295h:
		pop     edi
		mov     esi, __CEXT_V(animfiles_list)
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
		je      ___3e2beh
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e2a6h
___3e2beh:
		pop     edi
		mov     eax, esp
		call    __CEXT_F(getFileSize__dr)
		cmp     eax, 1
		jge     ___3e2d2h
		mov     byte [__CEXT_V(CDPath)], 1
___3e2d2h:
		mov     edx, __CEXT_V(animfiles_list)
		xor     ebx, ebx
@anim_chk:
		mov     al, [__CEXT_V(___180130h)]
		mov     cl, [__CEXT_V(CDPath)]
		mov     [esp], al
		cmp     cl, 2
		jne     ___3e315h
		mov     esi, __CEXT_V(cdrom_ini)
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
		je      ___3e314h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e2fch
___3e314h:
		pop     edi
___3e315h:
		imul    ebp, ebx, 11h
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
		je      ___3e33dh
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e325h
___3e33dh:
		pop     edi
		mov     eax, esp
		call    __CEXT_F(getFileSize__dr)
		test    eax, eax
		jle     @anim_original
		cmp     eax, [ebp+__CEXT_V(animfile_size)+0dh]
		je      @anim_original
		push    edx
		push    __CEXT_V(___182b34h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 8
		push    __CEXT_V(___182b6ch)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		call    __CEXT_F(restore__keyboard)
		call    __CEXT_F(___5ec04h)
		mov     eax, 70h
		call    __CEXT_F(exit__clib3r)
@anim_original:
		inc     ebx
		add     edx, 11h
		cmp     ebx, 3
		jl      @anim_chk
		add     esp, 100h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn

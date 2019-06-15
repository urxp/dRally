%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(string__MUSICS_BPA)
    extern  __CEXT_F(getentrysize__bpa)
    extern  __CEXT_F(allocMemoryLock)
    extern  __CEXT_V(string__MUSICS_BPA)
    extern  __CEXT_F(read__bpa)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(extract__musics_bpa))
		push    24h
		call    __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, 0ch
		mov     ebx, eax
		mov     [esp+4], dl
		mov     edx, eax
		mov     eax, __CEXT_V(string__MUSICS_BPA)
		call    __CEXT_F(getentrysize__bpa)
		xor     edx, edx
		mov     ecx, eax
		mov     dl, [esp+4]
		mov     edi, eax
		call    __CEXT_F(allocMemoryLock)
		mov     esi, eax
		mov     ebp, eax
		mov     edx, eax
		mov     eax, __CEXT_V(string__MUSICS_BPA)
		call    __CEXT_F(read__bpa)
		xor     edx, edx
		mov     [esp], edx
		test    ecx, ecx
		jbe     ___10527h
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
		ja      ___104e7h
___10527h:
		mov     eax, ebp
		add     esp, 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

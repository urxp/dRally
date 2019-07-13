%include "macros.inc"

    extern  __CHK

%include "layout.inc"

section @text

;; 10534h, NOT USED
__GDECL(__CEXT_F(___10534h))
		push    1ch
		call    __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 8
		mov     edi, eax
		xor     ebx, ebx
		mov     [esp], ebx
		test    eax, eax
		jle     ___1059dh
		mov     al, [esp]
		mov     ah, 11h
		mul     ah
		mov     esi, edx
		mov     [esp+4], al
___1055dh:
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
		mov     al, [esp+4]
		mov     dl, ah
		inc     esi
		sub     dl, al
		mov     ecx, [esp]
		mov     [esi-1], dl
		mov     dh, al
		inc     ecx
		add     dh, 11h
		mov     [esp], ecx
		mov     [esp+4], dh
		cmp     edi, ecx
		jg      ___1055dh
___1059dh:
		add     esp, byte 8
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

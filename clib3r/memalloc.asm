%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__MemAllocator)
		push    esi
		push    edi
		push    ecx
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		or      eax, eax
		je      ___6dc83h
		add     eax, byte 0bh
		jb      ___6dc83h
		and     al, 0f8h
		mov     edx, 10h
		sub     eax, edx
		cmc     
		sbb     ecx, ecx
		and     eax, ecx
		add     eax, edx
		cmp     eax, [ebx+14h]
		ja      ___6dc83h
		mov     esi, [ebx+0ch]
		mov     edi, [ebx+10h]
		cmp     eax, edi
		ja      ___6dc67h
		mov     esi, [ebx+28h]
		sub     edi, edi
___6dc67h:
		mov     edx, [esi]
		cmp     eax, edx
		jbe     ___6dc87h
		sub     edi, edx
		cmc     
		sbb     ecx, ecx
		and     edi, ecx
		add     edi, edx
		lea     edx, [ebx+20h]
		mov     esi, [esi+8]
		cmp     esi, edx
		jne     ___6dc67h
		mov     [ebx+14h], edi
___6dc83h:
		sub     eax, eax
		jmp     ___6dcd2h
___6dc87h:
		sub     edx, eax
		mov     [ebx+10h], edi
		inc     dword [ebx+18h]
		mov     ecx, [esi+8]
		cmp     edx, byte 10h
		jb      ___6dcb5h
		mov     edi, esi
		add     edi, eax
		mov     [ebx+0ch], edi
		mov     [edi], edx
		mov     [esi], eax
		mov     ebx, [esi+4]
		mov     [edi+4], ebx
		mov     [edi+8], ecx
		mov     [ebx+8], edi
		mov     ebx, ecx
		mov     [ebx+4], edi
		jmp     ___6dccah
___6dcb5h:
		dec     dword [ebx+1ch]
		mov     eax, esi
		mov     edi, ecx
		mov     esi, [esi+4]
		mov     [esi+8], edi
		mov     [edi+4], esi
		mov     [ebx+0ch], esi
		mov     esi, eax
___6dccah:
		or      dword [esi], byte 1
		mov     eax, esi
		add     eax, byte 4
___6dcd2h:
		pop     ds
		pop     ecx
		pop     edi
		pop     esi
		retn    
___6dcd7h:
		jmp     ___6dde2h
__GDECL(__MemFree)
		push    esi
		push    edi
		push    ecx
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		or      eax, eax
		je      ___6dcd7h
		mov     esi, eax
		sub     esi, byte 4
		mov     eax, [esi]
		test    al, 1
		je      ___6dcd7h
		and     al, 0feh
		mov     edi, esi
		add     edi, eax
		test    dword [edi], 1
		jne     ___6dd1eh
		cmp     edi, [ebx+0ch]
		jne     ___6dd07h
		mov     [ebx+0ch], esi
___6dd07h:
		add     eax, [edi]
		mov     [esi], eax
		push    ebx
		mov     ebx, [edi+4]
		mov     edi, [edi+8]
		mov     [ebx+8], edi
		mov     [edi+4], ebx
		pop     ebx
		dec     dword [ebx+1ch]
		jmp     ___6dd9ah
___6dd1eh:
		mov     [esi], eax
		mov     edi, [ebx+0ch]
		cmp     esi, edi
		jae     ___6dd35h
		cmp     esi, [edi+4]
		ja      ___6dd9ah
		mov     edi, [ebx+28h]
		cmp     esi, edi
		jb      ___6dd9ah
		jmp     ___6dd44h
___6dd35h:
		mov     edi, [edi+8]
		cmp     esi, edi
		jb      ___6dd9ah
		lea     edi, [ebx+20h]
		cmp     esi, [ebx+24h]
		ja      ___6dd9ah
___6dd44h:
		sub     edx, edx
		mov     eax, [ebx+18h]
		mov     ecx, [ebx+1ch]
		inc     ecx
		div     ecx
		dec     ecx
		cmp     eax, ecx
		jae     ___6dd79h
		mov     edx, [ebx+18h]
		sub     edx, ecx
		add     eax, eax
		cmp     edx, ecx
		ja      ___6dd61h
		sub     eax, eax
___6dd61h:
		mov     edi, esi
		add     edi, [esi]
___6dd65h:
		mov     edx, [edi]
		test    dl, 1
		je      ___6dd9ah
		cmp     edx, byte 0ffffffffh
		je      ___6dd79h
		and     dl, 0feh
		add     edi, edx
		dec     eax
		jne     ___6dd65h
___6dd79h:
		mov     edi, [ebx+0ch]
		cmp     esi, edi
		jae     ___6dd83h
		mov     edi, [ebx+28h]
___6dd83h:
		cmp     esi, edi
		jb      ___6dd9ah
		mov     edi, [edi+8]
		cmp     esi, edi
		jb      ___6dd9ah
		mov     edi, [edi+8]
		cmp     esi, edi
		jb      ___6dd9ah
		mov     edi, [edi+8]
		jmp     ___6dd83h
___6dd9ah:
		mov     edx, [edi+4]
		mov     ecx, [esi]
		xchg    edi, edx
		mov     eax, edi
		add     eax, [edi]
		cmp     eax, esi
		jne     ___6ddb9h
		add     ecx, [edi]
		mov     [edi], ecx
		cmp     esi, [ebx+0ch]
		jne     ___6ddb5h
		mov     [ebx+0ch], edi
___6ddb5h:
		mov     esi, edi
		jmp     ___6ddcah
___6ddb9h:
		inc     dword [ebx+1ch]
		mov     [esi+8], edx
		mov     [esi+4], edi
		mov     [edi+8], esi
		mov     edi, edx
		mov     [edi+4], esi
___6ddcah:
		dec     dword [ebx+18h]
		cmp     esi, [ebx+0ch]
		jae     ___6dddah
		cmp     ecx, [ebx+10h]
		jbe     ___6dddah
		mov     [ebx+10h], ecx
___6dddah:
		cmp     ecx, [ebx+14h]
		jbe     ___6dde2h
		mov     [ebx+14h], ecx
___6dde2h:
		pop     ds
		pop     ecx
		pop     edi
		pop     esi
		retn    

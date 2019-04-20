cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __MemAllocator
__MemAllocator:
		push    esi
		push    edi
		push    ecx
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		or      eax, eax
		je      short dr@6dc83h
		add     eax, byte 0bh
		jb      short dr@6dc83h
		and     al, 0f8h
		mov     edx, 10h
		sub     eax, edx
		cmc     
		sbb     ecx, ecx
		and     eax, ecx
		add     eax, edx
		cmp     eax, [ebx+14h]
		ja      short dr@6dc83h
		mov     esi, [ebx+0ch]
		mov     edi, [ebx+10h]
		cmp     eax, edi
		ja      short dr@6dc67h
		mov     esi, [ebx+28h]
		sub     edi, edi
dr@6dc67h:
		mov     edx, [esi]
		cmp     eax, edx
		jbe     short dr@6dc87h
		sub     edi, edx
		cmc     
		sbb     ecx, ecx
		and     edi, ecx
		add     edi, edx
		lea     edx, [ebx+20h]
		mov     esi, [esi+8]
		cmp     esi, edx
		jne     short dr@6dc67h
;30:0006dc80
		mov     [ebx+14h], edi
dr@6dc83h:
		sub     eax, eax
		jmp     short dr@6dcd2h
dr@6dc87h:
		sub     edx, eax
		mov     [ebx+10h], edi
		inc     dword [ebx+18h]
		mov     ecx, [esi+8]
		cmp     edx, byte 10h
		jb      short dr@6dcb5h
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
		jmp     short dr@6dccah
dr@6dcb5h:
		dec     dword [ebx+1ch]
		mov     eax, esi
		mov     edi, ecx
		mov     esi, [esi+4]
		mov     [esi+8], edi
		mov     [edi+4], esi
		mov     [ebx+0ch], esi
		mov     esi, eax
dr@6dccah:
		or      dword [esi], byte 1
		mov     eax, esi
		add     eax, byte 4
dr@6dcd2h:
		pop     ds
		pop     ecx
		pop     edi
		pop     esi
		retn    
dr@6dcd7h:
		jmp     near dr@6dde2h
global __MemFree
__MemFree:
		push    esi
		push    edi
		push    ecx
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		or      eax, eax
		je      short dr@6dcd7h
		mov     esi, eax
		sub     esi, byte 4
		mov     eax, [esi]
		test    al, 1
		je      short dr@6dcd7h
		and     al, 0feh
		mov     edi, esi
		add     edi, eax
		test    dword [edi], 1
		jne     short dr@6dd1eh
		cmp     edi, [ebx+0ch]
		jne     short dr@6dd07h
		mov     [ebx+0ch], esi
dr@6dd07h:
		add     eax, [edi]
		mov     [esi], eax
		push    ebx
		mov     ebx, [edi+4]
		mov     edi, [edi+8]
		mov     [ebx+8], edi
		mov     [edi+4], ebx
		pop     ebx
		dec     dword [ebx+1ch]
		jmp     short dr@6dd9ah
dr@6dd1eh:
		mov     [esi], eax
		mov     edi, [ebx+0ch]
		cmp     esi, edi
		jae     short dr@6dd35h
		cmp     esi, [edi+4]
		ja      short dr@6dd9ah
		mov     edi, [ebx+28h]
		cmp     esi, edi
		jb      short dr@6dd9ah
		jmp     short dr@6dd44h
dr@6dd35h:
		mov     edi, [edi+8]
		cmp     esi, edi
		jb      short dr@6dd9ah
		lea     edi, [ebx+20h]
		cmp     esi, [ebx+24h]
		ja      short dr@6dd9ah
dr@6dd44h:
		sub     edx, edx
		mov     eax, [ebx+18h]
		mov     ecx, [ebx+1ch]
		inc     ecx
		div     ecx
		dec     ecx
		cmp     eax, ecx
		jae     short dr@6dd79h
		mov     edx, [ebx+18h]
		sub     edx, ecx
		add     eax, eax
		cmp     edx, ecx
		ja      short dr@6dd61h
		sub     eax, eax
dr@6dd61h:
		mov     edi, esi
		add     edi, [esi]
dr@6dd65h:
		mov     edx, [edi]
		test    dl, 1
		je      short dr@6dd9ah
		cmp     edx, byte 0ffffffffh
		je      short dr@6dd79h
		and     dl, 0feh
		add     edi, edx
		dec     eax
		jne     short dr@6dd65h
dr@6dd79h:
		mov     edi, [ebx+0ch]
		cmp     esi, edi
		jae     short dr@6dd83h
;30:0006dd80
		mov     edi, [ebx+28h]
dr@6dd83h:
		cmp     esi, edi
		jb      short dr@6dd9ah
		mov     edi, [edi+8]
		cmp     esi, edi
		jb      short dr@6dd9ah
		mov     edi, [edi+8]
		cmp     esi, edi
		jb      short dr@6dd9ah
		mov     edi, [edi+8]
		jmp     short dr@6dd83h
dr@6dd9ah:
		mov     edx, [edi+4]
		mov     ecx, [esi]
		xchg    edi, edx
		mov     eax, edi
		add     eax, [edi]
		cmp     eax, esi
		jne     short dr@6ddb9h
		add     ecx, [edi]
		mov     [edi], ecx
		cmp     esi, [ebx+0ch]
		jne     short dr@6ddb5h
		mov     [ebx+0ch], edi
dr@6ddb5h:
		mov     esi, edi
		jmp     short dr@6ddcah
dr@6ddb9h:
		inc     dword [ebx+1ch]
		mov     [esi+8], edx
		mov     [esi+4], edi
		mov     [edi+8], esi
		mov     edi, edx
		mov     [edi+4], esi
dr@6ddcah:
		dec     dword [ebx+18h]
		cmp     esi, [ebx+0ch]
		jae     short dr@6dddah
		cmp     ecx, [ebx+10h]
		jbe     short dr@6dddah
		mov     [ebx+10h], ecx
dr@6dddah:
		cmp     ecx, [ebx+14h]
		jbe     short dr@6dde2h
		mov     [ebx+14h], ecx
dr@6dde2h:
		pop     ds
		pop     ecx
		pop     edi
		pop     esi
		retn
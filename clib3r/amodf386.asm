%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__ModF)
		push    ebp
		push    esi
		push    edi
		push    ecx
		push    ebx
		mov     esi, edx
		mov     ebp, eax
		mov     eax, [ebp+0]
		mov     edx, [ebp+4]
		xchg    ebp, esi
		mov     [ebp+0], eax
		mov     [ebp+4], edx
		mov     ecx, edx
		and     ecx, 7ff00000h
		je      ___7e211h
		cmp     ecx, 43300000h
		jb      ___7e21fh
		xchg    esi, ebp
___7e211h:
		sub     eax, eax
		mov     [ebp+4], eax
		mov     [ebp+0], eax
		pop     ebx
		pop     ecx
		pop     edi
		pop     esi
		pop     ebp
		retn    
___7e21fh:
		mov     edi, ecx
		shr     ecx, 14h
		sub     cx, 3ffh
		jb      ___7e211h
		push    edx
		sub     eax, eax
		mov     edx, 0fff00000h
		cmp     cl, 14h
		jbe     ___7e244h
		sar     edx, 15h
		rcr     eax, 1
		sub     cl, 15h
		sar     eax, cl
		jmp     ___7e246h
___7e244h:
		sar     edx, cl
___7e246h:
		and     [ebp+4], edx
		and     [ebp+0], eax
		not     edx
		not     eax
		mov     ebp, esi
		and     edx, [ebp+4]
		and     eax, [ebp+0]
		call    ___7e2c1h
		pop     esi
		or      edx, edx
		je      ___7e26ah
		and     esi, 80000000h
		or      edx, esi
___7e26ah:
		mov     [ebp+4], edx
		mov     [ebp+0], eax
		pop     ebx
		pop     ecx
		pop     edi
		pop     esi
		pop     ebp
		retn    
__GDECL(__ZBuf2F)
		push    ebp
		push    esi
		push    edi
		push    ecx
		push    ebx
		push    edx
		mov     esi, eax
		sub     edx, edx
		sub     ecx, ecx
		sub     eax, eax
___7e284h:
		mov     al, [esi]
		cmp     al, 0
		je      ___7e2a8h
		mov     edi, edx
		mov     ebx, ecx
		add     ecx, ecx
		adc     edx, edx
		add     ecx, ecx
		adc     edx, edx
		add     ecx, ebx
		adc     edx, edi
		add     ecx, ecx
		adc     edx, edx
		and     al, 0fh
		add     ecx, eax
		adc     edx, byte 0
		inc     esi
		jmp     ___7e284h
___7e2a8h:
		mov     eax, ecx
		mov     edi, 43300000h
		call    ___7e2c1h
		pop     ebp
		mov     [ebp+4], edx
		mov     [ebp+0], eax
		pop     ebx
		pop     ecx
		pop     edi
		pop     esi
		pop     ebp
		retn    
___7e2c1h:
		sub     esi, esi
		or      esi, eax
		or      esi, edx
		je      ___7e311h
		test    edx, 0fff00000h
		jne     ___7e2e5h
___7e2d1h:
		sub     edi, 100000h
		add     eax, eax
		adc     edx, edx
		test    edx, 0fff00000h
		je      ___7e2d1h
		jmp     ___7e309h
___7e2e5h:
		test    edx, 0ffe00000h
		je      ___7e309h
___7e2edh:
		add     edi, 100000h
		shr     edx, 1
		rcr     eax, 1
		rcr     esi, 1
		test    edx, 0ffe00000h
		jne     ___7e2edh
		adc     esi, esi
		adc     eax, byte 0
		adc     edx, byte 0
___7e309h:
		and     edx, 0fffffh
		or      edx, edi
___7e311h:
		retn    

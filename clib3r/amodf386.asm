cpu 386

DGROUP		GROUP	_DATA
SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __ModF
__ModF:
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
		je      short dr@7e211h
		cmp     ecx, 43300000h
		jb      short dr@7e21fh
		xchg    esi, ebp
dr@7e211h:
		sub     eax, eax
		mov     [ebp+4], eax
		mov     [ebp+0], eax
		pop     ebx
		pop     ecx
		pop     edi
		pop     esi
		pop     ebp
		retn    
dr@7e21fh:
		mov     edi, ecx
		shr     ecx, 14h
		sub     cx, 3ffh
		jb      short dr@7e211h
		push    edx
		sub     eax, eax
		mov     edx, 0fff00000h
		cmp     cl, 14h
		jbe     short dr@7e244h
		sar     edx, 15h
		rcr     eax, 1
		sub     cl, 15h
		sar     eax, cl
		jmp     short dr@7e246h
dr@7e244h:
		sar     edx, cl
dr@7e246h:
		and     [ebp+4], edx
		and     [ebp+0], eax
		not     edx
		not     eax
		mov     ebp, esi
		and     edx, [ebp+4]
		and     eax, [ebp+0]
		call    near dr@7e2c1h
		pop     esi
		or      edx, edx
		je      short dr@7e26ah
		and     esi, 80000000h
		or      edx, esi
dr@7e26ah:
		mov     [ebp+4], edx
		mov     [ebp+0], eax
		pop     ebx
		pop     ecx
		pop     edi
		pop     esi
		pop     ebp
		retn    
global __ZBuf2F
__ZBuf2F:
		push    ebp
		push    esi
		push    edi
		push    ecx
		push    ebx
		push    edx
		mov     esi, eax
		sub     edx, edx
;33:0007e280
		sub     ecx, ecx
		sub     eax, eax
dr@7e284h:
		mov     al, [esi]
		cmp     al, 0
		je      short dr@7e2a8h
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
		jmp     short dr@7e284h
dr@7e2a8h:
		mov     eax, ecx
		mov     edi, 43300000h
		call    near dr@7e2c1h
		pop     ebp
		mov     [ebp+4], edx
		mov     [ebp+0], eax
		pop     ebx
		pop     ecx
		pop     edi
		pop     esi
		pop     ebp
		retn    
dr@7e2c1h:
		sub     esi, esi
		or      esi, eax
		or      esi, edx
		je      short dr@7e311h
		test    edx, 0fff00000h
		jne     short dr@7e2e5h
dr@7e2d1h:
		sub     edi, 100000h
		add     eax, eax
		adc     edx, edx
		test    edx, 0fff00000h
		je      short dr@7e2d1h
		jmp     short dr@7e309h
dr@7e2e5h:
		test    edx, 0ffe00000h
		je      short dr@7e309h
dr@7e2edh:
		add     edi, 100000h
		shr     edx, 1
		rcr     eax, 1
		rcr     esi, 1
		test    edx, 0ffe00000h
		jne     short dr@7e2edh
		adc     esi, esi
		adc     eax, byte 0
		adc     edx, byte 0
dr@7e309h:
		and     edx, 0fffffh
		or      edx, edi
dr@7e311h:
		retn
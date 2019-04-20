cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global strcat
strcat:
		push    ecx
		push    esi
		push    edi
		mov     esi, edx
		mov     edi, eax
		push    es
		push    ds
		pop     es
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@67068h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      short dr@67080h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     short dr@67068h
dr@67080h:
		pop     edi
		pop     es
		mov     eax, edi
		pop     edi
		pop     esi
		pop     ecx
		retn
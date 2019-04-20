cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=16 CLASS=CODE

global strcmp
strcmp:
		push    ebx
		push    ecx
		mov     ebx, eax
		cmp     eax, edx
		je      short dr@645b4h
dr@64548h:
		mov     eax, [ebx]
		mov     ecx, [edx]
		cmp     ecx, eax
		jne     short dr@645b9h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		jne     short dr@645b4h
		mov     eax, [ebx+4]
		mov     ecx, [edx+4]
		cmp     ecx, eax
		jne     short dr@645b9h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		jne     short dr@645b4h
		mov     eax, [ebx+8]
		mov     ecx, [edx+8]
;26:00064580
		cmp     ecx, eax
		jne     short dr@645b9h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		jne     short dr@645b4h
		mov     eax, [ebx+0ch]
		mov     ecx, [edx+0ch]
		cmp     ecx, eax
		jne     short dr@645b9h
		add     ebx, byte 10h
		add     edx, byte 10h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		je      short dr@64548h
dr@645b4h:
		sub     eax, eax
		pop     ecx
		pop     ebx
		retn    
dr@645b9h:
		cmp     al, cl
		jne     short dr@645dah
		cmp     al, 0
		je      short dr@645b4h
		cmp     ah, ch
		jne     short dr@645dah
		cmp     ah, 0
		je      short dr@645b4h
		shr     eax, 10h
		shr     ecx, 10h
		cmp     al, cl
		jne     short dr@645dah
		cmp     al, 0
		je      short dr@645b4h
		cmp     ah, ch
dr@645dah:
		sbb     eax, eax
		or      al, 1
		pop     ecx
		pop     ebx
		retn
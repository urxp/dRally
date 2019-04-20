cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global strcpy
strcpy:
		push    ecx
		push    eax
dr@67038h:
		mov     cl, [edx]
		mov     [eax], cl
		cmp     cl, 0
		je      short dr@67052h
		mov     cl, [edx+1]
		add     edx, byte 2
		mov     [eax+1], cl
		add     eax, byte 2
		cmp     cl, 0
		jne     short dr@67038h
dr@67052h:
		pop     eax
		pop     ecx
		retn
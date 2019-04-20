cpu 386

	extern	isatty

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __chktty
__chktty:
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		test    byte [eax+0dh], 20h
		jne     short dr@6756ch
		mov     eax, [edx+10h]
		call    near isatty
		test    eax, eax
		je      short dr@6756ch
		mov     bl, [edx+0dh]
		or      bl, 20h
		mov     [edx+0dh], bl
		test    bl, 7
		jne     short dr@6756ch
		mov     cl, bl
		or      cl, 2
		mov     [edx+0dh], cl
dr@6756ch:
		pop     edx
		pop     ecx
		pop     ebx
		retn
cpu 386

	extern	tell
	extern	fflush

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global ftell
ftell:
		push    ebx
		push    edx
		mov     edx, eax
		mov     eax, [eax+10h]
		call    near tell
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@67722h
		test    byte [edx+0ch], 80h
		je      short dr@6770bh
		test    byte [edx+0dh], 10h
		je      short dr@6770bh
		mov     eax, edx
		call    near fflush
dr@6770bh:
		cmp     dword [edx+4], byte 0
		je      short dr@67722h
		test    byte [edx+0dh], 10h
		je      short dr@6771fh
		add     ebx, [edx+4]
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn    
dr@6771fh:
		sub     ebx, [edx+4]
dr@67722h:
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn
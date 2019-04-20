cpu 386

	extern	___iob
	extern	fputc

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global putchar
putchar:
		push    ebx
		push    ecx
		push    edx
		test    byte [___iob+27h], 4
		jne     short dr@6673eh
		mov     edx, [___iob+2eh]
		mov     ebx, [___iob+1eh]
		sub     edx, ebx
		cmp     edx, byte 1
		ja      short dr@6674ch
dr@6673eh:
		mov     edx, ___iob+1ah
		call    near fputc
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@6674ch:
		mov     edx, [___iob+1ah]
		mov     [edx], al
		and     eax, 0ffh
		cmp     eax, byte 0ah
		jne     short dr@6676ch
		mov     edx, ___iob+1ah
		call    near fputc
		mov     edx, eax
		jmp     short dr@66793h
dr@6676ch:
		mov     dh, [___iob+27h]
		or      dh, 10h
		mov     eax, [___iob+1ah]
		mov     [___iob+27h], dh
		xor     edx, edx
		lea     ecx, [ebx+1]
		mov     dl, [eax]
		inc     eax
		mov     [___iob+1eh], ecx
		mov     [___iob+1ah], eax
dr@66793h:
		mov     eax, edx
		pop     edx
		pop     ecx
		pop     ebx
		retn
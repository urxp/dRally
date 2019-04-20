cpu 386

	extern	__IsTable

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global atoi
atoi:
		push    ebx
		push    ecx
		push    edx
dr@65ed0h:
		mov     dl, [eax]
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 2
		and     edx, 0ffh
		je      short dr@65eeeh
		inc     eax
		jmp     short dr@65ed0h
dr@65eeeh:
		mov     cl, [eax]
		mov     dl, cl
		cmp     edx, byte 2bh
		je      short dr@65efch
		cmp     edx, byte 2dh
		jne     short dr@65efdh
dr@65efch:
		inc     eax
dr@65efdh:
		xor     ebx, ebx
dr@65effh:
		mov     dl, [eax]
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 20h
		and     edx, 0ffh
		je      short dr@65f29h
		imul    ebx, ebx, byte 0ah
		xor     edx, edx
		mov     dl, [eax]
		add     ebx, edx
		inc     eax
		sub     ebx, byte 30h
		jmp     short dr@65effh
dr@65f29h:
		xor     eax, eax
		mov     al, cl
		cmp     eax, byte 2dh
		jne     short dr@65f34h
		neg     ebx
dr@65f34h:
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn
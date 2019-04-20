cpu 386

    extern	__Extender
    extern	__amblksiz
    extern	__DPMI_hosted_
    extern	___GETDSEnd_
    extern	___GETDSStart_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __CommonInit_
__CommonInit_:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		xor     eax, eax
		mov     edx, 8000h
		mov     al, [__Extender]
		mov     [__amblksiz], edx
		cmp     eax, byte 2
		jl      short dr@6ec73h
		cmp     eax, byte 8
		jle     short dr@6ec7ah
dr@6ec73h:
		mov     eax, 1
		jmp     short dr@6ec7ch
dr@6ec7ah:
		xor     eax, eax
dr@6ec7ch:
		test    eax, eax
		je      short dr@6ecb5h
		call    near __DPMI_hosted_
		cmp     eax, byte 1
		jne     short dr@6ecb5h
		mov     edx, ___GETDSEnd_
		mov     eax, ___GETDSStart_
		sub     edx, ___GETDSStart_
		mov     di, dx
		shr     edx, 10h
		mov     si, dx
		mov     bx, ax
		shr     eax, 10h
		mov     cx, ax
		mov     ax, 600h
		int     31h
		sbb     ax, ax
dr@6ecb5h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
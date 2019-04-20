cpu 386

    extern  isatty

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __IOMode
__IOMode:
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		cmp     eax, [___NFiles]
		jb      short dr@6db5ah
		xor     eax, eax
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@6db5ah:
		cmp     eax, byte 5
		jg      short dr@6db90h
		mov     ebx, eax
		mov     eax, [__iomode]
		shl     ebx, 2
		add     eax, ebx
		mov     cl, [eax+1]
		test    cl, 40h
		jne     short dr@6db90h
		mov     ch, cl
		or      ch, 40h
		mov     [eax+1], ch
		mov     eax, edx
		call    near isatty
		test    eax, eax
		je      short dr@6db90h
		mov     eax, [__iomode]
		or      byte [ebx+eax*1+1], 20h
dr@6db90h:
		mov     eax, [__iomode]
		mov     eax, [eax+edx*4]
		pop     edx
		pop     ecx
		pop     ebx
		retn
global __SetIOMode
__SetIOMode:
		push    ebx
		or      dh, 40h
		mov     ebx, edx
		mov     edx, eax
		mov     eax, [__iomode]
		shl     edx, 2
		mov     [edx+eax*1], ebx
		pop     ebx
		retn


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA

global ___NFiles
___NFiles:
    db	14h, 0, 0, 0
global ___init_mode
___init_mode:
        db	1,0,0,0,2,0,0,0
        db	2,0,0,0,3,0,0,0
        db	2,0,0,0,0,0,0,0
times 7 db  0,0,0,0,0,0,0,0
global __iomode
__iomode:
    dd	___init_mode
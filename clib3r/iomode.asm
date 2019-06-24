%include "macros.inc"

    extern  isatty

%include "layout.inc"

section @text

__GDECL(__IOMode)
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		cmp     eax, [___NFiles]
		jb      ___6db5ah
		xor     eax, eax
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___6db5ah:
		cmp     eax, byte 5
		jg      ___6db90h
		mov     ebx, eax
		mov     eax, [__iomode]
		shl     ebx, 2
		add     eax, ebx
		mov     cl, [eax+1]
		test    cl, 40h
		jne     ___6db90h
		mov     ch, cl
		or      ch, 40h
		mov     [eax+1], ch
		mov     eax, edx
		call    isatty
		test    eax, eax
		je      ___6db90h
		mov     eax, [__iomode]
		or      byte [ebx+eax+1], 20h
___6db90h:
		mov     eax, [__iomode]
		mov     eax, [eax+edx*4]
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(__SetIOMode)
		push    ebx
		or      dh, 40h
		mov     ebx, edx
		mov     edx, eax
		mov     eax, [__iomode]
		shl     edx, 2
		mov     [edx+eax], ebx
		pop     ebx
		retn    


section @data

__GDECL(___NFiles)
db	14h,0,0,0
__GDECL(___init_mode)
db	1,0,0,0,2,0,0,0,2,0,0,0,3,0,0,0
db	2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
__GDECL(__iomode)
dd	___init_mode

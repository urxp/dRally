%include "macros.inc"

    extern  __CEXT_F(__STOSB__clib3r)

%include "layout.inc"

section @text

__GDECL(memset__clib3r)
		push    eax
		push    ecx
		mov     dh, dl
		shl     edx, 8
		mov     dl, dh
		shl     edx, 8
		mov     dl, dh
		mov     ecx, ebx
		call    __CEXT_F(__STOSB__clib3r)
		pop     ecx
		pop     eax
		retn    

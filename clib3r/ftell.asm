%include "macros.inc"

    extern  tell__clib3r
    extern  fflush__clib3r

%include "layout.inc"

section @text

__GDECL(ftell__clib3r)
		push    ebx
		push    edx
		mov     edx, eax
		mov     eax, [eax+10h]
		call    tell__clib3r
		mov     ebx, eax
		cmp     eax, 0ffffffffh
		je      ___67722h
		test    byte [edx+0ch], 80h
		je      ___6770bh
		test    byte [edx+0dh], 10h
		je      ___6770bh
		mov     eax, edx
		call    fflush__clib3r
___6770bh:
		cmp     dword [edx+4], 0
		je      ___67722h
		test    byte [edx+0dh], 10h
		je      ___6771fh
		add     ebx, [edx+4]
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn    
___6771fh:
		sub     ebx, [edx+4]
___67722h:
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn

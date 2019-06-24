%include "macros.inc"

    extern  __get_errno_ptr__clib3r
    extern  __get_doserrno_ptr

%include "layout.inc"

section @text

__GDECL(__set_EDOM)
		mov     eax, 0dh
__GDECL(__set_errno__clib3r)
		push    edx
		mov     edx, eax
		call    __get_errno_ptr__clib3r
		mov     [eax], edx
		pop     edx
		retn    
__GDECL(__set_ERANGE)
		mov     eax, 0eh
		jmp     __set_errno__clib3r
__GDECL(__set_EINVAL)
		mov     eax, 9
		call    __set_errno__clib3r
		mov     eax, 0ffffffffh
		retn    
__GDECL(__set_doserrno)
		push    edx
		mov     edx, eax
		call    __get_doserrno_ptr
		mov     [eax], edx
		pop     edx
		retn    

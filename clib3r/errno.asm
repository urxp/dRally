%include "macros.inc"

    extern  _errno
    extern  __doserrno

%include "layout.inc"

section @text

__GDECL(__get_errno_ptr__clib3r)
		mov     eax, _errno
		retn    
__GDECL(__get_doserrno_ptr)
		mov     eax, __doserrno
		retn    


section @bss

__GDECL(_errno)
	resb	4
__GDECL(__doserrno)
	resb	4

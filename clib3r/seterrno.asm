cpu 386

	extern	__get_errno_ptr
	extern	__get_doserrno_ptr

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __set_EDOM
__set_EDOM:
		mov     eax, 0dh
global __set_errno
__set_errno:
		push    edx
		mov     edx, eax
		call    near __get_errno_ptr
		mov     [eax], edx
		pop     edx
		retn    
global __set_ERANGE
__set_ERANGE:
		mov     eax, 0eh
		jmp     short __set_errno
global __set_EINVAL
__set_EINVAL:
		mov     eax, 9
		call    near __set_errno
		mov     eax, 0ffffffffh
		retn    
global __set_doserrno
__set_doserrno:
		push    edx
		mov     edx, eax
		call    near __get_doserrno_ptr
		mov     [eax], edx
		pop     edx
		retn
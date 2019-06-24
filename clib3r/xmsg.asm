%include "macros.inc"

    extern  __do_exit_with_msg__
    extern  __EnterWVIDEO

%include "layout.inc"

section @text

__exit_with_msg:
		jmp     __do_exit_with_msg__
__GDECL(__fatal_runtime_error)
		push    ebx
		push    ecx
		mov     ebx, eax
		mov     ecx, edx
		;mov     edx, ds
		db	8ch,0dah
		call    __EnterWVIDEO
		test    eax, eax
		jne     ___66ea3h
		mov     edx, ecx
		mov     eax, ebx
		call    __do_exit_with_msg__
___66ea3h:
		pop     ecx
		pop     ebx
		retn    

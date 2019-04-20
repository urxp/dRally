cpu 386

    extern	__do_exit_with_msg__
    extern	__EnterWVIDEO

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __exit_with_msg
__exit_with_msg:
		jmp     near __do_exit_with_msg__
global __fatal_runtime_error
__fatal_runtime_error:
		push    ebx
		push    ecx
		mov     ebx, eax
		mov     ecx, edx
		;mov     edx, ds
		db	8ch,0dah
		call    near __EnterWVIDEO
		test    eax, eax
		jne     short dr@66ea3h
		mov     edx, ecx
		mov     eax, ebx
		call    near __do_exit_with_msg__
dr@66ea3h:
		pop     ecx
		pop     ebx
		retn
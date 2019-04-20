cpu 386

    extern	___FPE_handler_exit
    extern	__Fini_FPE_handler
    extern	__sigfpe_handler
    extern	___FPE_handler
    extern	__Init_FPE_handler
    extern	__Enable_FPE

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __GrabFP87
__GrabFP87:
		push    ebx
		push    ecx
		cmp     dword [___FPE_handler_exit], __Fini_FPE_handler
		je      short dr@7ecech
		mov     ebx, __sigfpe_handler
		mov     ecx, __Fini_FPE_handler
		mov     [___FPE_handler], ebx
		call    near __Init_FPE_handler
		mov     [___FPE_handler_exit], ecx
dr@7ecech:
		call    near __Enable_FPE
		pop     ecx
		pop     ebx
		retn
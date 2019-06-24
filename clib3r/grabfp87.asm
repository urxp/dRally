%include "macros.inc"

    extern  __sigfpe_handler
    extern  __Fini_FPE_handler
    extern  __FPE_handler
    extern  __Init_FPE_handler
    extern  ___FPE_handler_exit
    extern  __Enable_FPE

%include "layout.inc"

section @text

__GDECL(__GrabFP87)
		push    ebx
		push    ecx
		cmp     dword [___FPE_handler_exit], __Fini_FPE_handler
		je      ___7ecech
		mov     ebx, __sigfpe_handler
		mov     ecx, __Fini_FPE_handler
		mov     [__FPE_handler], ebx
		call    __Init_FPE_handler
		mov     [___FPE_handler_exit], ecx
___7ecech:
		call    __Enable_FPE
		pop     ecx
		pop     ebx
		retn    

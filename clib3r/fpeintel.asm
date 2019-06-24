%include "macros.inc"

    extern  ___PMAddr
    extern  ___PMSeg
    extern  ___RMAddr
    extern  ___MST_pic
    extern  __FPEHandler
    extern  __FPE2Handler
    extern  ___FPE_int

%include "layout.inc"

section @text

__GDECL(__Intel_hook_init)
		mov     ax, 204h
		mov     bl, [___FPE_int]
		int     31h
		mov     [___PMAddr], edx
		mov     [___PMSeg], cx
		mov     ax, 200h
		mov     bl, [___FPE_int]
		int     31h
		shl     ecx, 10h
		mov     cx, dx
		mov     [___RMAddr], ecx
		;mov     cx, cs
		db	66h,8ch,0c9h
		cmp     byte [___MST_pic], 20h
		jne     ___7f399h
		lea     edx, [__FPEHandler]
		jmp     ___7f39fh
___7f399h:
		lea     edx, [__FPE2Handler]
___7f39fh:
		mov     ax, 205h
		mov     bl, [___FPE_int]
		int     31h
		retn    
__GDECL(__Intel_hook_fini)
		retn    

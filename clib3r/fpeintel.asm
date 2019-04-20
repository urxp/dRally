cpu 386

    extern	___FPE_int
    extern	___PMAddr
    extern	___PMSeg
    extern	___RMAddr
    extern	___MST_pic
    extern	__FPEHandler
    extern	__FPE2Handler

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __Intel_hook_init
__Intel_hook_init:
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
		jne     short dr@7f399h
		lea     edx, [__FPEHandler]
		jmp     short dr@7f39fh
dr@7f399h:
		lea     edx, [__FPE2Handler]
dr@7f39fh:
		mov     ax, 205h
		mov     bl, [___FPE_int]
		int     31h
		retn
global __Intel_hook_fini    
__Intel_hook_fini:
		retn
%include "macros.inc"

    extern  __ASTACKSIZ
    extern  stackavail_
    extern  __ASTACKSIZ
    extern  __ASTACKPTR
    extern  __CommonInit__clib3r
    extern  ____Argv
    extern  ____Argc
    extern  __CEXT_F(main)
    extern  __CEXT_F(exit__clib3r)

%include "layout.inc"

section @text

__GDECL(__CMain)
		push    edx
		push    ebp
		mov     ebp, esp
		mov     edx, [__ASTACKSIZ]
		add     edx, byte 3
		and     dl, 0fch
		call    stackavail_
		cmp     edx, eax
		jae     ___67167h
		mov     eax, edx
		sub     esp, eax
		mov     eax, esp
		jmp     ___67169h
___67167h:
		xor     eax, eax
___67169h:
		mov     edx, [__ASTACKSIZ]
		add     eax, edx
		mov     [__ASTACKPTR], eax
		call    __CommonInit__clib3r
		mov     edx, [____Argv]
		mov     eax, [____Argc]
		call    __CEXT_F(main)
		call    __CEXT_F(exit__clib3r)
		mov     esp, ebp
		pop     ebp
		pop     edx
		retn    

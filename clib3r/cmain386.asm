cpu 386

    extern	__ASTACKSIZ
    extern	stackavail_
    extern	__ASTACKPTR
    extern	__CommonInit_
    extern	____Argv
    extern	____Argc
    extern	main_
    extern	exit_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __CMain
__CMain:
		push    edx
		push    ebp
		mov     ebp, esp
		mov     edx, [__ASTACKSIZ]
		add     edx, byte 3
		and     dl, 0fch
		call    near stackavail_
		cmp     edx, eax
		jae     short dr@67167h
		mov     eax, edx
		sub     esp, eax
		mov     eax, esp
		jmp     short dr@67169h
dr@67167h:
		xor     eax, eax
dr@67169h:
		mov     edx, [__ASTACKSIZ]
		add     eax, edx
		mov     [__ASTACKPTR], eax
		call    near __CommonInit_
		mov     edx, [____Argv]
		mov     eax, [____Argc]
		call    near main_
		call    near exit_
		mov     esp, ebp
		pop     ebp
		pop     edx
		retn
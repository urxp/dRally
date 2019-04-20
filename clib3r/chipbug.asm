cpu 386

    extern	__real87
    extern	___chipbug
    extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global verify_pentium_fdiv_bug_
verify_pentium_fdiv_bug_:
		sub     esp, byte 10h
		mov     dword [esp+8], 0c0000000h
		mov     dword [esp+0ch], 4150017eh
		mov     dword [esp], 80000000h
		mov     dword [esp+4], 4147ffffh
		xor     eax, eax
		mov     al, [__real87]
		cmp     eax, byte 3
		jl      short dr@7ee2ah
		fld     qword [esp+8]
		fld     st0
		fld     qword [esp]
		fxch    st0, st1
		fdiv    st0, st1
		fmulp   st1, st0
		fsubp   st1, st0
		fcomp   qword [L$2]
		fnstsw  ax
		sahf    
		jbe     short dr@7ee2ah
		or      byte [___chipbug], 1
dr@7ee2ah:
		add     esp, byte 10h
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$2:
    DB	3aH, 8cH, 30H, 0e2H, 8eH, 79H, 45H, 3eH


SEGMENT XI      PUBLIC USE32 ALIGN=1 CLASS=DATA
___anon42:
    DB	0, 3
    DD	verify_pentium_fdiv_bug_

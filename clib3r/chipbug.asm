%include "macros.inc"

    extern  __real87
    extern  __chipbug
	extern	__8087

%include "layout.inc"

section @text

__GDECL(verify_pentium_fdiv_bug_)
		sub     esp, byte 10h
		mov     dword [esp+8], 0c0000000h
		mov     dword [esp+0ch], 4150017eh
		mov     dword [esp], 80000000h
		mov     dword [esp+4], 4147ffffh
		xor     eax, eax
		mov     al, [__real87]
		cmp     eax, byte 3
		jl      ___7ee2ah
		fld     qword [esp+8]
		fld     st0
		fld     qword [esp]
		fxch    st0, st1
		fdiv    st0, st1
		fmulp   st1, st0
		fsubp   st1, st0
		fcomp   qword [___185210h]
		fnstsw  ax
		sahf    
		jbe     ___7ee2ah
		or      byte [__chipbug], 1
___7ee2ah:
		add     esp, byte 10h
		retn


section @const

___185210h:
db	3ah,8ch,30h,0e2h,8eh,79h,45h,3eh


section @xi

___anon42:
db	0,3
dd	verify_pentium_fdiv_bug_

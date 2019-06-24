%include "macros.inc"
%include "layout.inc"

section @text

fdiv_main_routine:
		fld     tword [esp+10h]
		fld     tword [esp+4]
___7e540h:
		mov     eax, [esp+8]
		add     eax, eax
		jae     ___7e5d2h
		xor     eax, 0e000000h
		test    eax, 0e000000h
		je      ___7e55bh
		fdivp   st1, st0
		retn    
___7e55bh:
		shr     eax, 1ch
		cmp     byte [eax+___19bbf8h], 0
		jne     ___7e56ah
		fdivp   st1, st0
		retn    
___7e56ah:
		mov     eax, [esp+0ch]
		and     eax, 7fffh
		je      ___7e5dch
		cmp     eax, dword 7fffh
		je      ___7e5dch
		fnstcw  word [esp+1ch]
		mov     eax, [esp+1ch]
		or      eax, 33fh
		and     eax, 0f3ffh
		mov     [esp+20h], eax
		fldcw   word [esp+20h]
		mov     eax, [esp+18h]
		and     eax, 7fffh
		cmp     eax, byte 1
		je      ___7e5bbh
		fmul    dword [___19bc08h]
		fxch    st0, st1
		fmul    dword [___19bc08h]
		fxch    st0, st1
		fldcw   word [esp+1ch]
		fdivp   st1, st0
		retn    
___7e5bbh:
		fmul    dword [___19bc0ch]
		fxch    st0, st1
		fmul    dword [___19bc0ch]
		fxch    st0, st1
		fldcw   word [esp+1ch]
		fdivp   st1, st0
		retn    
___7e5d2h:
		mov     eax, [esp+4]
		or      eax, [esp+8]
		jne     ___7e5dfh
___7e5dch:
		fdivp   st1, st0
		retn    
___7e5dfh:
		mov     eax, [esp+0ch]
		and     eax, 7fffh
		jne     ___7e5dch
		fnstcw  word [esp+1ch]
		mov     eax, [esp+1ch]
		or      eax, 33fh
		and     eax, 0f3ffh
		mov     [esp+20h], eax
		fldcw   word [esp+20h]
		mov     eax, [esp+18h]
		and     eax, 7fffh
		je      ___7e620h
		cmp     eax, dword 7fffh
		je      ___7e648h
		mov     eax, [esp+14h]
		add     eax, eax
		jae     ___7e648h
		jmp     ___7e628h
___7e620h:
		mov     eax, [esp+14h]
		add     eax, eax
		jb      ___7e648h
___7e628h:
		fxch    st0, st1
		fstp    st0
		fld     st0
		fmul    dword [___19bc10h]
		fstp    tword [esp+4]
		fld     tword [esp+10h]
		fxch    st0, st1
		wait    
		fldcw   word [esp+1ch]
		jmp     ___7e540h
___7e648h:
		fldcw   word [esp+1ch]
		fdivp   st1, st0
		retn    
__GDECL(__fdiv_fpr)
		sub     esp, byte 2ch
		jmp     dword [eax*4+___19bc14h]
___7e659h:
		fdiv    st0, st0
		add     esp, byte 2ch
		retn    
___7e65fh:
		add     esp, byte 2ch
		int     6
___7e664h:
		fdivr   st0, st0
		add     esp, byte 2ch
		retn    
___7e66ah:
		add     esp, byte 2ch
		int     6
___7e66fh:
		fdiv    st0, st0
		add     esp, byte 2ch
		retn    
___7e675h:
		fdivp   st0, st0
		add     esp, byte 2ch
		retn    
___7e67bh:
		fdivr   st0, st0
		add     esp, byte 2ch
		retn    
___7e681h:
		fdivrp  st0, st0
		add     esp, byte 2ch
		retn    
___7e687h:
		fstp    tword [esp+0ch]
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fld     tword [esp+20h]
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
___7e6a3h:
		add     esp, byte 2ch
		int     6
___7e6a8h:
		fstp    tword [esp]
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fld     tword [esp+0ch]
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
___7e6beh:
		add     esp, byte 2ch
		int     6
___7e6c3h:
		fxch    st0, st1
		fstp    tword [esp+0ch]
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
___7e6dfh:
		fstp    tword [esp]
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		add     esp, byte 2ch
		retn    
___7e6efh:
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    fdiv_main_routine
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
___7e703h:
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    fdiv_main_routine
		add     esp, byte 2ch
		retn    
___7e713h:
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+20h]
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
___7e733h:
		add     esp, byte 2ch
		int     6
___7e738h:
		fstp    tword [esp]
		fxch    st0, st1
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+0ch]
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
___7e752h:
		add     esp, byte 2ch
		int     6
___7e757h:
		fxch    st0, st2
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
___7e777h:
		fstp    tword [esp]
		fxch    st0, st1
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
___7e78bh:
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
___7e7a3h:
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
___7e7b7h:
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+20h]
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
___7e7d7h:
		add     esp, byte 2ch
		int     6
___7e7dch:
		fstp    tword [esp]
		fxch    st0, st2
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+0ch]
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
___7e7f6h:
		add     esp, byte 2ch
		int     6
___7e7fbh:
		fxch    st0, st3
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
___7e81bh:
		fstp    tword [esp]
		fxch    st0, st2
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
___7e82fh:
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
___7e847h:
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
___7e85bh:
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+20h]
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
___7e87bh:
		add     esp, byte 2ch
		int     6
___7e880h:
		fstp    tword [esp]
		fxch    st0, st3
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+0ch]
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
___7e89ah:
		add     esp, byte 2ch
		int     6
___7e89fh:
		fxch    st0, st4
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
___7e8bfh:
		fstp    tword [esp]
		fxch    st0, st3
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
___7e8d3h:
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
___7e8ebh:
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
___7e8ffh:
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+20h]
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
___7e91fh:
		add     esp, byte 2ch
		int     6
___7e924h:
		fstp    tword [esp]
		fxch    st0, st4
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+0ch]
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
___7e93eh:
		add     esp, byte 2ch
		int     6
___7e943h:
		fxch    st0, st5
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
___7e963h:
		fstp    tword [esp]
		fxch    st0, st4
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
___7e977h:
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
___7e98fh:
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
___7e9a3h:
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+20h]
		fxch    st0, st6
		add     esp, byte 2ch
		retn    
___7e9c3h:
		add     esp, byte 2ch
		int     6
___7e9c8h:
		fstp    tword [esp]
		fxch    st0, st5
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+0ch]
		fxch    st0, st6
		add     esp, byte 2ch
		retn    
___7e9e2h:
		add     esp, byte 2ch
		int     6
___7e9e7h:
		fxch    st0, st6
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
___7ea07h:
		fstp    tword [esp]
		fxch    st0, st5
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
___7ea1bh:
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
___7ea33h:
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
___7ea47h:
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+20h]
		fxch    st0, st7
		add     esp, byte 2ch
		retn    
___7ea67h:
		add     esp, byte 2ch
		int     6
___7ea6ch:
		fstp    tword [esp]
		fxch    st0, st6
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+0ch]
		fxch    st0, st7
		add     esp, byte 2ch
		retn    
___7ea86h:
		add     esp, byte 2ch
		int     6
___7ea8bh:
		fxch    st0, st7
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
___7eaabh:
		fstp    tword [esp]
		fxch    st0, st6
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		fxch    st0, st6
		add     esp, byte 2ch
		retn    
___7eabfh:
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
___7ead7h:
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fstp    tword [esp]
		call    fdiv_main_routine
		fxch    st0, st6
		add     esp, byte 2ch
		retn    
__fdivp_sti_st:
		sub     esp, byte 2ch
		fstp    tword [esp]
		fstp    tword [esp+0ch]
		call    fdiv_main_routine
		add     esp, byte 2ch
		retn    
__fdivrp_sti_st:
		sub     esp, byte 2ch
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    fdiv_main_routine
		add     esp, byte 2ch
		retn    
__GDECL(__fdiv_chk)
		sub     esp, byte 2ch
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    fdiv_main_routine
		add     esp, byte 2ch
		retn    
__GDECL(__fdiv_m32)
		push    eax
		mov     eax, [esp+8]
		and     eax, 7f800000h
		cmp     eax, dword 7f800000h
		je      ___7eb68h
		fnstsw  ax
		and     eax, 3800h
		je      ___7eb4bh
		fld     dword [esp+8]
		call    __fdivp_sti_st
		pop     eax
		ret     4
___7eb4bh:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     dword [esp+14h]
		call    __fdivp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     4
___7eb68h:
		fdiv    dword [esp+8]
		pop     eax
		ret     4
__GDECL(__fdiv_m64)
		push    eax
		mov     eax, [esp+0ch]
		and     eax, 7ff00000h
		cmp     eax, dword 7ff00000h
		je      ___7ebb4h
		fnstsw  ax
		and     eax, 3800h
		je      ___7eb97h
		fld     qword [esp+8]
		call    __fdivp_sti_st
		pop     eax
		ret     8
___7eb97h:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     qword [esp+14h]
		call    __fdivp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     8
___7ebb4h:
		fdiv    qword [esp+8]
		pop     eax
		ret     8
__GDECL(__fdiv_m32r)
		push    eax
		mov     eax, [esp+8]
		and     eax, 7f800000h
		cmp     eax, dword 7f800000h
		je      ___7ec00h
		fnstsw  ax
		and     eax, 3800h
		je      ___7ebe3h
		fld     dword [esp+8]
		call    __fdivrp_sti_st
		pop     eax
		ret     4
___7ebe3h:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     dword [esp+14h]
		call    __fdivrp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     4
___7ec00h:
		fdivr   dword [esp+8]
		pop     eax
		ret     4
__GDECL(__fdiv_m64r)
		push    eax
		mov     eax, [esp+0ch]
		and     eax, 7ff00000h
		cmp     eax, dword 7ff00000h
		je      ___7ec4ch
		fnstsw  ax
		and     eax, 3800h
		je      ___7ec2fh
		fld     qword [esp+8]
		call    __fdivrp_sti_st
		pop     eax
		ret     8
___7ec2fh:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     qword [esp+14h]
		call    __fdivrp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     8
___7ec4ch:
		fdivr   qword [esp+8]
		pop     eax
		ret     8


section @data

___19bbf8h:
db	0,1,0,0,4,0,0,7,0,0,0ah,0,0,0dh,0,0
___19bc08h:
db	0,0,70h,3fh
___19bc0ch:
db	0,0,88h,3fh
___19bc10h:
db	0,0,0,5fh
___19bc14h:
dd	___7e659h
dd	___7e65fh
dd	___7e664h
dd	___7e66ah
dd	___7e66fh
dd	___7e675h
dd	___7e67bh
dd	___7e681h
dd	___7e687h
dd	___7e6a3h
dd	___7e6a8h
dd	___7e6beh
dd	___7e6c3h
dd	___7e6dfh
dd	___7e6efh
dd	___7e703h
dd	___7e713h
dd	___7e733h
dd	___7e738h
dd	___7e752h
dd	___7e757h
dd	___7e777h
dd	___7e78bh
dd	___7e7a3h
dd	___7e7b7h
dd	___7e7d7h
dd	___7e7dch
dd	___7e7f6h
dd	___7e7fbh
dd	___7e81bh
dd	___7e82fh
dd	___7e847h
dd	___7e85bh
dd	___7e87bh
dd	___7e880h
dd	___7e89ah
dd	___7e89fh
dd	___7e8bfh
dd	___7e8d3h
dd	___7e8ebh
dd	___7e8ffh
dd	___7e91fh
dd	___7e924h
dd	___7e93eh
dd	___7e943h
dd	___7e963h
dd	___7e977h
dd	___7e98fh
dd	___7e9a3h
dd	___7e9c3h
dd	___7e9c8h
dd	___7e9e2h
dd	___7e9e7h
dd	___7ea07h
dd	___7ea1bh
dd	___7ea33h
dd	___7ea47h
dd	___7ea67h
dd	___7ea6ch
dd	___7ea86h
dd	___7ea8bh
dd	___7eaabh
dd	___7eabfh
dd	___7ead7h

cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

fdiv_main_routine:
		fld     tword [esp+10h]
		fld     tword [esp+4]
dr@7e540h:
		mov     eax, [esp+8]
		add     eax, eax
		jae     near dr@7e5d2h
		xor     eax, 0e000000h
		test    eax, 0e000000h
		je      short dr@7e55bh
		fdivp   st1, st0
		retn    
dr@7e55bh:
		shr     eax, 1ch
		cmp     byte [eax+L$83], 0
		jne     short dr@7e56ah
		fdivp   st1, st0
		retn    
dr@7e56ah:
		mov     eax, [esp+0ch]
		and     eax, 7fffh
		je      short dr@7e5dch
		cmp     eax, dword 7fffh
		je      short dr@7e5dch
		fnstcw  word [esp+1ch]
;33:0007e580
		mov     eax, [esp+1ch]
		or      eax, 33fh
		and     eax, 0f3ffh
		mov     [esp+20h], eax
		fldcw   word [esp+20h]
		mov     eax, [esp+18h]
		and     eax, 7fffh
		cmp     eax, byte 1
		je      short dr@7e5bbh
		fmul    dword [L$84]
		fxch    st0, st1
		fmul    dword [L$84]
		fxch    st0, st1
		fldcw   word [esp+1ch]
		fdivp   st1, st0
		retn    
dr@7e5bbh:
		fmul    dword [L$85]
		fxch    st0, st1
		fmul    dword [L$85]
		fxch    st0, st1
		fldcw   word [esp+1ch]
		fdivp   st1, st0
		retn    
dr@7e5d2h:
		mov     eax, [esp+4]
		or      eax, [esp+8]
		jne     short dr@7e5dfh
dr@7e5dch:
		fdivp   st1, st0
		retn    
dr@7e5dfh:
		mov     eax, [esp+0ch]
		and     eax, 7fffh
		jne     short dr@7e5dch
		fnstcw  word [esp+1ch]
		mov     eax, [esp+1ch]
		or      eax, 33fh
		and     eax, 0f3ffh
		mov     [esp+20h], eax
;33:0007e600
		fldcw   word [esp+20h]
		mov     eax, [esp+18h]
		and     eax, 7fffh
		je      short dr@7e620h
		cmp     eax, dword 7fffh
		je      short dr@7e648h
		mov     eax, [esp+14h]
		add     eax, eax
		jae     short dr@7e648h
		jmp     short dr@7e628h
dr@7e620h:
		mov     eax, [esp+14h]
		add     eax, eax
		jb      short dr@7e648h
dr@7e628h:
		fxch    st0, st1
		fstp    st0
		fld     st0
		fmul    dword [L$86]
		fstp    tword [esp+4]
		fld     tword [esp+10h]
		fxch    st0, st1
		wait    
		fldcw   word [esp+1ch]
		jmp     near dr@7e540h
dr@7e648h:
		fldcw   word [esp+1ch]
		fdivp   st1, st0
		retn  
global __fdiv_fpr  
__fdiv_fpr:
		sub     esp, byte 2ch
		jmp     near dword [eax*4+L$87]
L$11:
		fdiv    st0, st0
		add     esp, byte 2ch
		retn    
L$12:
		add     esp, byte 2ch
		int     6
L$13:
		fdivr   st0, st0
		add     esp, byte 2ch
		retn    
L$14:
		add     esp, byte 2ch
		int     6
L$15:
		fdiv    st0, st0
		add     esp, byte 2ch
		retn    
L$16:
		fdivp   st0, st0
		add     esp, byte 2ch
		retn    
L$17:
		fdivr   st0, st0
		add     esp, byte 2ch
;33:0007e680
		retn    
L$18:
		fdivrp  st0, st0
		add     esp, byte 2ch
		retn    
L$19:
		fstp    tword [esp+0ch]
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fld     tword [esp+20h]
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
L$20:
		add     esp, byte 2ch
		int     6
L$21:
		fstp    tword [esp]
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fld     tword [esp+0ch]
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
L$22:
		add     esp, byte 2ch
		int     6
L$23:
		fxch    st0, st1
		fstp    tword [esp+0ch]
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
L$24:
		fstp    tword [esp]
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		add     esp, byte 2ch
		retn    
L$25:
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    near fdiv_main_routine
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
L$26:
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    near fdiv_main_routine
		add     esp, byte 2ch
		retn    
L$27:
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+20h]
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
L$28:
		add     esp, byte 2ch
		int     6
L$29:
		fstp    tword [esp]
		fxch    st0, st1
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+0ch]
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
L$30:
		add     esp, byte 2ch
		int     6
L$31:
		fxch    st0, st2
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
L$32:
		fstp    tword [esp]
		fxch    st0, st1
		fstp    tword [esp+0ch]
;33:0007e780
		call    near fdiv_main_routine
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
L$33:
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st1
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
L$34:
		fstp    tword [esp+0ch]
		fxch    st0, st1
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st1
		add     esp, byte 2ch
		retn    
L$35:
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+20h]
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
L$36:
		add     esp, byte 2ch
		int     6
L$37:
		fstp    tword [esp]
		fxch    st0, st2
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+0ch]
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
L$38:
		add     esp, byte 2ch
		int     6
L$39:
		fxch    st0, st3
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
L$40:
		fstp    tword [esp]
		fxch    st0, st2
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
L$41:
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st2
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
L$42:
		fstp    tword [esp+0ch]
		fxch    st0, st2
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st2
		add     esp, byte 2ch
		retn    
L$43:
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+20h]
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
L$44:
		add     esp, byte 2ch
		int     6
;33:0007e880
L$45:
		fstp    tword [esp]
		fxch    st0, st3
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+0ch]
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
L$46:
		add     esp, byte 2ch
		int     6
L$47:
		fxch    st0, st4
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
L$48:
		fstp    tword [esp]
		fxch    st0, st3
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
L$49:
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st3
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
L$50:
		fstp    tword [esp+0ch]
		fxch    st0, st3
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st3
		add     esp, byte 2ch
		retn    
L$51:
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+20h]
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
L$52:
		add     esp, byte 2ch
		int     6
L$53:
		fstp    tword [esp]
		fxch    st0, st4
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+0ch]
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
L$54:
		add     esp, byte 2ch
		int     6
L$55:
		fxch    st0, st5
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
L$56:
		fstp    tword [esp]
		fxch    st0, st4
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
L$57:
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fstp    tword [esp]
;33:0007e980
		call    near fdiv_main_routine
		fxch    st0, st4
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
L$58:
		fstp    tword [esp+0ch]
		fxch    st0, st4
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st4
		add     esp, byte 2ch
		retn    
L$59:
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+20h]
		fxch    st0, st6
		add     esp, byte 2ch
		retn    
L$60:
		add     esp, byte 2ch
		int     6
L$61:
		fstp    tword [esp]
		fxch    st0, st5
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+0ch]
		fxch    st0, st6
		add     esp, byte 2ch
		retn    
L$62:
		add     esp, byte 2ch
		int     6
L$63:
		fxch    st0, st6
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
L$64:
		fstp    tword [esp]
		fxch    st0, st5
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
L$65:
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st5
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
L$66:
		fstp    tword [esp+0ch]
		fxch    st0, st5
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st5
		add     esp, byte 2ch
		retn    
L$67:
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+20h]
		fxch    st0, st7
		add     esp, byte 2ch
		retn    
L$68:
		add     esp, byte 2ch
		int     6
L$69:
		fstp    tword [esp]
		fxch    st0, st6
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+0ch]
;33:0007ea80
		fxch    st0, st7
		add     esp, byte 2ch
		retn    
L$70:
		add     esp, byte 2ch
		int     6
L$71:
		fxch    st0, st7
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fld     st0
		fstp    tword [esp]
		fstp    tword [esp+20h]
		call    near fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+20h]
		add     esp, byte 2ch
		retn    
L$72:
		fstp    tword [esp]
		fxch    st0, st6
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		fxch    st0, st6
		add     esp, byte 2ch
		retn    
L$73:
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st6
		fld     tword [esp+0ch]
		add     esp, byte 2ch
		retn    
L$74:
		fstp    tword [esp+0ch]
		fxch    st0, st6
		fstp    tword [esp]
		call    near fdiv_main_routine
		fxch    st0, st6
		add     esp, byte 2ch
		retn 
__fdivp_sti_st:
		sub     esp, byte 2ch
		fstp    tword [esp]
		fstp    tword [esp+0ch]
		call    near fdiv_main_routine
		add     esp, byte 2ch
		retn    
__fdivrp_sti_st:
		sub     esp, byte 2ch
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    near fdiv_main_routine
		add     esp, byte 2ch
		retn  
global __fdiv_chk  
__fdiv_chk:
		sub     esp, byte 2ch
		fstp    tword [esp+0ch]
		fstp    tword [esp]
		call    near fdiv_main_routine
		add     esp, byte 2ch
		retn  
global __fdiv_m32  
__fdiv_m32:
		push    eax
		mov     eax, [esp+8]
		and     eax, 7f800000h
		cmp     eax, dword 7f800000h
		je      short dr@7eb68h
		fnstsw  ax
		and     eax, 3800h
		je      short dr@7eb4bh
		fld     dword [esp+8]
		call    near __fdivp_sti_st
		pop     eax
		ret     4
dr@7eb4bh:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     dword [esp+14h]
		call    near __fdivp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     4
dr@7eb68h:
		fdiv    dword [esp+8]
		pop     eax
		ret     4
global __fdiv_m64
__fdiv_m64:
		push    eax
		mov     eax, [esp+0ch]
		and     eax, 7ff00000h
		cmp     eax, dword 7ff00000h
		je      short dr@7ebb4h
		fnstsw  ax
		and     eax, 3800h
		je      short dr@7eb97h
		fld     qword [esp+8]
		call    near __fdivp_sti_st
		pop     eax
		ret     8
dr@7eb97h:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     qword [esp+14h]
		call    near __fdivp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     8
dr@7ebb4h:
		fdiv    qword [esp+8]
		pop     eax
		ret     8
global __fdiv_m32r
__fdiv_m32r:
		push    eax
		mov     eax, [esp+8]
		and     eax, 7f800000h
		cmp     eax, dword 7f800000h
		je      short dr@7ec00h
		fnstsw  ax
		and     eax, 3800h
		je      short dr@7ebe3h
		fld     dword [esp+8]
		call    near __fdivrp_sti_st
		pop     eax
		ret     4
dr@7ebe3h:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     dword [esp+14h]
		call    near __fdivrp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     4
;33:0007ec00
dr@7ec00h:
		fdivr   dword [esp+8]
		pop     eax
		ret     4
global __fdiv_m64r
__fdiv_m64r:
		push    eax
		mov     eax, [esp+0ch]
		and     eax, 7ff00000h
		cmp     eax, dword 7ff00000h
		je      short dr@7ec4ch
		fnstsw  ax
		and     eax, 3800h
		je      short dr@7ec2fh
		fld     qword [esp+8]
		call    near __fdivrp_sti_st
		pop     eax
		ret     8
dr@7ec2fh:
		fxch    st0, st1
		sub     esp, byte 0ch
		fstp    tword [esp]
		fld     qword [esp+14h]
		call    near __fdivrp_sti_st
		fld     tword [esp]
		fxch    st0, st1
		add     esp, byte 0ch
		pop     eax
		ret     8
dr@7ec4ch:
		fdivr   qword [esp+8]
		pop     eax
		ret     8
        

SEGMENT DATA32  PUBLIC USE32 ALIGN=4 CLASS=DATA
L$83:
    DB	0, 1, 0, 0, 4, 0, 0, 7
    DB	0, 0, 0aH, 0, 0, 0dH, 0, 0
L$84:
    DB	0, 0, 70H, 3fH
L$85:
    DB	0, 0, 88H, 3fH
L$86:
    DB	0, 0, 0, 5fH
L$87:
    DD	L$11
    DD	L$12
    DD	L$13
    DD	L$14
    DD	L$15
    DD	L$16
    DD	L$17
    DD	L$18
    DD	L$19
    DD	L$20
    DD	L$21
    DD	L$22
    DD	L$23
    DD	L$24
    DD	L$25
    DD	L$26
    DD	L$27
    DD	L$28
    DD	L$29
    DD	L$30
    DD	L$31
    DD	L$32
    DD	L$33
    DD	L$34
    DD	L$35
    DD	L$36
    DD	L$37
    DD	L$38
    DD	L$39
    DD	L$40
    DD	L$41
    DD	L$42
    DD	L$43
    DD	L$44
    DD	L$45
    DD	L$46
    DD	L$47
    DD	L$48
    DD	L$49
    DD	L$50
    DD	L$51
    DD	L$52
    DD	L$53
    DD	L$54
    DD	L$55
    DD	L$56
    DD	L$57
    DD	L$58
    DD	L$59
    DD	L$60
    DD	L$61
    DD	L$62
    DD	L$63
    DD	L$64
    DD	L$65
    DD	L$66
    DD	L$67
    DD	L$68
    DD	L$69
    DD	L$70
    DD	L$71
    DD	L$72
    DD	L$73
    DD	L$74
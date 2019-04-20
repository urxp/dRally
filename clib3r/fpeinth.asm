cpu 386

	extern	__GETDS
	extern	__STACKLOW
	extern	__FPE_handler
	extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __Enable_FPE
__Enable_FPE:
		sub     esp, byte 4
		wait    
		fnstcw  word [esp]
		wait    
		and     word [esp], byte 0fff2h
		fldcw   word [esp]
		wait    
		add     esp, byte 4
		retn  
global __FPEHandler 
__FPEHandler:
		push    eax
		mov     al, 20h
;33:0007ef00
		out     20h, al
		out     0a0h, al
		xor     ax, ax
		out     0f0h, al
		pop     eax
global __FPE2Handler 
__FPE2Handler:
		push    eax
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		push    ds
		push    es
		sub     esp, byte 1ch
		mov     ebp, esp
		fnstenv [ebp+0]
		wait    
		wait    
		fnclex  
		wait    
		fndisi  
		sti     
		call    near __GETDS
		mov     edx, [ebp+0]
		not     edx
		mov     dh, 0ffh
		and     edx, [ebp+4]
		;mov     es, [ebp+10h]
		db	8eh,45h,10h
		mov     edi, [ebp+0ch]
dr@7ef38h:
		mov     bx, [es:edi]
		inc     edi
		cmp     bl, 0d8h
		jb      short dr@7ef38h
		cmp     bl, 0dfh
		ja      short dr@7ef38h
		;mov     es, [ebp+18h]
		db	8eh,45h,18h
		mov     edi, [ebp+14h]
		xchg    bh, bl
		mov     cl, 0
		test    dl, 20h
		je      short dr@7ef5ah
		mov     cl, 86h
		jmp     short dr@7efa6h
dr@7ef5ah:
		test    dl, 40h
		je      short dr@7ef6eh
		test    dx, 200h
		jne     short dr@7ef6ah
		mov     cl, 8bh
		jmp     short dr@7ef6ch
dr@7ef6ah:
		mov     cl, 8ah
dr@7ef6ch:
		jmp     short dr@7efa6h
dr@7ef6eh:
		test    dl, 1
		je      short dr@7ef7ah
		call    near dr@7f010h
		jmp     short dr@7efa6h
dr@7ef7ah:
		test    dl, 2
		je      short dr@7ef83h
		mov     cl, 82h
		jmp     short dr@7efa6h
dr@7ef83h:
		test    dl, 8
		je      short dr@7ef91h
		call    near dr@7f09dh
		mov     cl, 84h
		jmp     short dr@7efa6h
dr@7ef91h:
		test    dl, 10h
		je      short dr@7ef9ah
		mov     cl, 85h
		jmp     short dr@7efa6h
dr@7ef9ah:
		test    dl, 4
		je      short dr@7efa6h
		call    near dr@7f0efh
		mov     cl, 83h
dr@7efa6h:
		cmp     cl, 0
		je      short dr@7eff6h
		push    dword [__STACKLOW]
		;mov     [L$47], ss
		db	66h,8ch,15h
		dd	L$47
		mov     [L$48], esp
		push    ds
		pop     ss
		lea     esp, [L$47]
		lea     eax, [L$46]
		mov     [__STACKLOW], eax
		movzx   eax, cl
		call    dword [__FPE_handler]
		;mov     ss, [L$47]
		db	66h,8eh,15h
		dd	L$47
		mov     esp, [L$48]
		pop     dword [__STACKLOW]
		mov     word [L$47], 0
dr@7eff6h:
		wait    
		fnclex  
		and     word [ebp+0], 0ff72h
		fldcw   word [ebp+0]
		wait    
		add     esp, byte 1ch
		pop     es
		pop     ds
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		pop     eax
		iret    
dr@7f010h:
		mov     cl, 81h
		cmp     bx, 0d9fah
		jne     short dr@7f01ch
		mov     cl, 88h
		retn    
dr@7f01ch:
		cmp     bx, 0d9f1h
		jne     short dr@7f026h
		mov     cl, 8eh
		retn    
dr@7f026h:
		cmp     bx, 0d9f8h
		je      short dr@7f032h
		cmp     bx, 0d9f5h
dr@7f032h:
		jne     short dr@7f038h
		mov     cl, 8fh
		jmp     short dr@7f09ch
dr@7f038h:
		mov     dx, bx
		and     dx, 310h
		cmp     dx, 310h
		jne     short dr@7f04bh
		mov     cl, 8dh
		jmp     short dr@7f09ch
dr@7f04bh:
		and     dx, 110h
		cmp     dx, 110h
		jne     short dr@7f075h
		fstp    st0
		fldz    
		mov     dl, bl
		and     dl, 0c0h
		cmp     dl, 0c0h
		je      short dr@7f06ah
		call    near dr@7f13ah
dr@7f06ah:
		test    bl, 8
		je      short dr@7f071h
		fstp    st0
dr@7f071h:
		mov     cl, 85h
		jmp     short dr@7f09ch
dr@7f075h:
		mov     dx, bx
		and     dx, 130h
		cmp     dx, byte 30h
		jne     short dr@7f09ch
		mov     dx, [ebp+8]
		mov     cl, ah
		and     cl, 38h
		shr     cl, 2
		ror     dx, cl
		and     dl, 5
		cmp     dl, 5
		jne     short dr@7f09ch
		mov     cl, 83h
dr@7f09ch:
		retn    
dr@7f09dh:
		cmp     bx, 0d9fdh
		jne     short dr@7f0a6h
		jmp     short dr@7f0eeh
dr@7f0a6h:
		mov     dx, bx
		and     dx, 110h
		cmp     dx, 110h
		jne     short dr@7f0d2h
		call    near dr@7f0efh
		mov     dl, bl
		and     dl, 0c0h
		cmp     dl, 0c0h
		je      short dr@7f0c9h
		call    near dr@7f13ah
dr@7f0c9h:
		test    bl, 8
		je      short dr@7f0d0h
		fstp    st0
dr@7f0d0h:
		jmp     short dr@7f0eeh
dr@7f0d2h:
		mov     dl, bl
		and     dl, 0c0h
		cmp     dl, 0c0h
		jne     short dr@7f0e9h
		lea     esi, [L$43]
		call    near dr@7f115h
		jmp     short dr@7f0eeh
dr@7f0e9h:
		call    near dr@7f0efh
dr@7f0eeh:
		retn    
dr@7f0efh:
		ftst    
		wait    
		fnstsw  word [ebp+14h]
		fstp    st0
		test    bh, 4
		je      short dr@7f104h
		fld     qword [L$44]
		jmp     short dr@7f10ah
dr@7f104h:
		fld     dword [L$45]
dr@7f10ah:
		test    word [ebp+14h], 100h
		je      short dr@7f114h
		fchs    
dr@7f114h:
		retn    
dr@7f115h:
		test    bh, 4
		jne     short dr@7f11eh
		mov     dl, 0
		jmp     short dr@7f123h
dr@7f11eh:
		mov     dl, bl
		and     dl, 7
dr@7f123h:
		push    edx
dr@7f124h:
		dec     dl
		jl      short dr@7f12ch
		fincstp 
		jmp     short dr@7f124h
dr@7f12ch:
		fstp    st0
		fld     tword [esi]
		pop     edx
dr@7f131h:
		dec     dl
		jl      short dr@7f139h
		fdecstp 
		jmp     short dr@7f131h
dr@7f139h:
		retn    
dr@7f13ah:
		test    bl, 4
		je      short dr@7f144h
		fst     qword [es:edi]
		jmp     short dr@7f147h
dr@7f144h:
		fst     dword [es:edi]
dr@7f147h:
		retn


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$43:
    db	0,0,0,0,0,0,0,80h,0ffh,7fh
L$44:
    db	0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0efh,7fh
L$45:
    db	0ffh,0ffh,7fh,7fh
L$46:
times 200h   db  0
L$47:
    db	0,0
L$48:
    db	0,0,0,0
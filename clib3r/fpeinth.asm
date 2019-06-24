%include "macros.inc"

	extern	__GETDS
	extern	__STACKLOW
	extern	__FPE_handler
	extern	__8087

%include "layout.inc"

section @text

__GDECL(__Enable_FPE)
		sub     esp, byte 4
		wait    
		fnstcw  word [esp]
		wait    
		and     word [esp], byte 0fff2h
		fldcw   word [esp]
		wait    
		add     esp, byte 4
		retn    
__GDECL(__FPEHandler)
		push    eax
		mov     al, 20h
		out     20h, al
		out     0a0h, al
		xor     ax, ax
		out     0f0h, al
		pop     eax
__GDECL(__FPE2Handler)
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
		call    __GETDS
		mov     edx, [ebp+0]
		not     edx
		mov     dh, 0ffh
		and     edx, [ebp+4]
		;mov     es, [ebp+10h]
		db	8eh,45h,10h
		mov     edi, [ebp+0ch]
___7ef38h:
		mov     bx, [es:edi]
		inc     edi
		cmp     bl, 0d8h
		jb      ___7ef38h
		cmp     bl, 0dfh
		ja      ___7ef38h
		;mov     es, [ebp+18h]
		db	8eh,45h,18h
		mov     edi, [ebp+14h]
		xchg    bh, bl
		mov     cl, 0
		test    dl, 20h
		je      ___7ef5ah
		mov     cl, 86h
		jmp     ___7efa6h
___7ef5ah:
		test    dl, 40h
		je      ___7ef6eh
		test    dx, 200h
		jne     ___7ef6ah
		mov     cl, 8bh
		jmp     ___7ef6ch
___7ef6ah:
		mov     cl, 8ah
___7ef6ch:
		jmp     ___7efa6h
___7ef6eh:
		test    dl, 1
		je      ___7ef7ah
		call    ___7f010h
		jmp     ___7efa6h
___7ef7ah:
		test    dl, 2
		je      ___7ef83h
		mov     cl, 82h
		jmp     ___7efa6h
___7ef83h:
		test    dl, 8
		je      ___7ef91h
		call    ___7f09dh
		mov     cl, 84h
		jmp     ___7efa6h
___7ef91h:
		test    dl, 10h
		je      ___7ef9ah
		mov     cl, 85h
		jmp     ___7efa6h
___7ef9ah:
		test    dl, 4
		je      ___7efa6h
		call    ___7f0efh
		mov     cl, 83h
___7efa6h:
		cmp     cl, 0
		je      ___7eff6h
		push    dword [__STACKLOW]
		;mov     [___19bbaah], ss
		db	66h,8ch,15h
		dd	___19bbaah
		mov     [___19bbach], esp
		push    ds
		pop     ss
		lea     esp, [___19bbaah]
		lea     eax, [___19b9aah]
		mov     [__STACKLOW], eax
		movzx   eax, cl
		call    dword [__FPE_handler]
		;mov     ss, [___19bbaah]
		db	66h,8eh,15h
		dd	___19bbaah
		mov     esp, [___19bbach]
		pop     dword [__STACKLOW]
		mov     word [___19bbaah], 0
___7eff6h:
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
___7f010h:
		mov     cl, 81h
		cmp     bx, 0d9fah
		jne     ___7f01ch
		mov     cl, 88h
		retn    
___7f01ch:
		cmp     bx, 0d9f1h
		jne     ___7f026h
		mov     cl, 8eh
		retn    
___7f026h:
		cmp     bx, 0d9f8h
		je      ___7f032h
		cmp     bx, 0d9f5h
___7f032h:
		jne     ___7f038h
		mov     cl, 8fh
		jmp     ___7f09ch
___7f038h:
		mov     dx, bx
		and     dx, 310h
		cmp     dx, 310h
		jne     ___7f04bh
		mov     cl, 8dh
		jmp     ___7f09ch
___7f04bh:
		and     dx, 110h
		cmp     dx, 110h
		jne     ___7f075h
		fstp    st0
		fldz    
		mov     dl, bl
		and     dl, 0c0h
		cmp     dl, 0c0h
		je      ___7f06ah
		call    ___7f13ah
___7f06ah:
		test    bl, 8
		je      ___7f071h
		fstp    st0
___7f071h:
		mov     cl, 85h
		jmp     ___7f09ch
___7f075h:
		mov     dx, bx
		and     dx, 130h
		cmp     dx, byte 30h
		jne     ___7f09ch
		mov     dx, [ebp+8]
		mov     cl, ah
		and     cl, 38h
		shr     cl, 2
		ror     dx, cl
		and     dl, 5
		cmp     dl, 5
		jne     ___7f09ch
		mov     cl, 83h
___7f09ch:
		retn    
___7f09dh:
		cmp     bx, 0d9fdh
		jne     ___7f0a6h
		jmp     ___7f0eeh
___7f0a6h:
		mov     dx, bx
		and     dx, 110h
		cmp     dx, 110h
		jne     ___7f0d2h
		call    ___7f0efh
		mov     dl, bl
		and     dl, 0c0h
		cmp     dl, 0c0h
		je      ___7f0c9h
		call    ___7f13ah
___7f0c9h:
		test    bl, 8
		je      ___7f0d0h
		fstp    st0
___7f0d0h:
		jmp     ___7f0eeh
___7f0d2h:
		mov     dl, bl
		and     dl, 0c0h
		cmp     dl, 0c0h
		jne     ___7f0e9h
		lea     esi, [___19b994h]
		call    ___7f115h
		jmp     ___7f0eeh
___7f0e9h:
		call    ___7f0efh
___7f0eeh:
		retn    
___7f0efh:
		ftst    
		wait    
		fnstsw  word [ebp+14h]
		fstp    st0
		test    bh, 4
		je      ___7f104h
		fld     qword [___19b99eh]
		jmp     ___7f10ah
___7f104h:
		fld     dword [___19b9a6h]
___7f10ah:
		test    word [ebp+14h], 100h
		je      ___7f114h
		fchs    
___7f114h:
		retn    
___7f115h:
		test    bh, 4
		jne     ___7f11eh
		mov     dl, 0
		jmp     ___7f123h
___7f11eh:
		mov     dl, bl
		and     dl, 7
___7f123h:
		push    edx
___7f124h:
		dec     dl
		jl      ___7f12ch
		fincstp 
		jmp     ___7f124h
___7f12ch:
		fstp    st0
		fld     tword [esi]
		pop     edx
___7f131h:
		dec     dl
		jl      ___7f139h
		fdecstp 
		jmp     ___7f131h
___7f139h:
		retn    
___7f13ah:
		test    bl, 4
		je      ___7f144h
		fst     qword [es:edi]
		jmp     ___7f147h
___7f144h:
		fst     dword [es:edi]
___7f147h:
		retn    


section @data

___19b994h:
db	0,0,0,0,0,0,0,80h,0ffh,7fh
___19b99eh:
db	0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0efh,7fh
___19b9a6h:
db	0ffh,0ffh,7fh,7fh
___19b9aah:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
___19bbaah:
db	0,0
___19bbach:
db	0,0,0,0

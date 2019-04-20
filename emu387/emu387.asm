cpu 386

	extern	__GETDS
	extern	___FPE_handler


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$1:
times 0fh   db  0,0,0,0,0,0,0,0
            db	0,0


SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE
dr@78528h:
db	0,0,0,0
dr@7852ch:
db	0,0,0,0
dr@78530h:
db	0,0
dr@78532h:
db	0ah,0
dr@78534h:
db	46h,0
dr@78536h:
db	0,0,0,0,0,0,14h,0,0,0,0,8,1,0,0,0
db	1eh,0,0ah,0,0,10h,2,0,0,0,28h,0,14h,0,0,18h
db	3,0,0,0,32h,0,1eh,0,0,20h,4,0,0,0,3ch,0
db	28h,0,0,28h,5,0,0,0,46h,0,32h,0,0,30h,6,0
db	0,0,0,0,3ch,0,0,38h,7,0
;33:00078580
db	0,0
dr@78582h:
db	0fch,0ffh
dr@78584h:
db	1,0,0,0
dr@78588h:
db	2,0
dr@7858ah:
db	3,0,0f3h,0ffh,4,0,0,0,8,0,0ch,0,0cfh,0ffh,10h,0
db	0,0,20h,0,30h,0,3fh,0ffh,40h,0,0,0,80h,0,0c0h,0
db	0ffh,0fch,0,1,0,0,0,2,0,3,0ffh,0f3h,0,4,0,0
db	0,8,0,0ch,0ffh,0cfh,0,10h,0,0,0,20h,0,30h,0ffh,3fh
db	0,40h,0,0,0,80h,0,0c0h
dr@785d2h:
db	1,40h,0,45h
dr@785d6h:
db	0,2,40h,42h,1,3,41h,43h,87h,0dbh
dr@785e0h:
dd	dr@78b92h
dd	dr@78b98h
dd	dr@78b9eh
dd	dr@78ba4h
dd	dr@78c54h
dd	dr@78bb2h
dd	dr@78bb8h
dd	dr@78bbeh
;33:00078600
dd	dr@78bc4h
dd	dr@78bcch
dd	dr@78bd4h
dd	dr@78bdch
dd	dr@78c54h
dd	dr@78beeh
dd	dr@78bf8h
dd	dr@78c00h
dd	dr@78c08h
dd	dr@78c11h
dd	dr@78c1ah
dd	dr@78c23h
dd	dr@78c54h
dd	dr@78c37h
dd	dr@78c42h
dd	dr@78c4bh
dr@78640h:
dd	dr@78b92h
dd	dr@78b98h
dd	dr@78b9eh
dd	dr@78ba4h
dd	dr@78baah
dd	dr@78bb2h
dd	dr@78bb8h
dd	dr@78bbeh
dd	dr@78bc4h
dd	dr@78bcch
dd	dr@78bd4h
dd	dr@78bdch
dd	dr@78be4h
dd	dr@78beeh
dd	dr@78bf8h
dd	dr@78c00h
;33:00078680
dd	dr@78c08h
dd	dr@78c11h
dd	dr@78c1ah
dd	dr@78c23h
dd	dr@78c2ch
dd	dr@78c37h
dd	dr@78c42h
dd	dr@78c4bh
dr@786a0h:
dd	dr@78c91h
dd	dr@78d83h
dd	dr@78e5fh
dd	dr@78f51h
dd	dr@78febh
dd	dr@79144h
dd	dr@7924ah
dd	dr@7934ch
dd	dr@78cb0h
dd	dr@78c8ch
dd	dr@78e7eh
dd	dr@78c8ch
dd	dr@7900eh
dd	dr@78c8ch
dd	dr@7926bh
dd	dr@78c8ch
dd	dr@78ccfh
dd	dr@78dbdh
dd	dr@78e9dh
dd	dr@78f8bh
dd	dr@79031h
dd	dr@79182h
dd	dr@7928ch
dd	dr@79388h
;33:00078700
dd	dr@78cebh
dd	dr@78dceh
dd	dr@78eb9h
dd	dr@78fc7h
dd	dr@79051h
dd	dr@791b5h
dd	dr@792aah
dd	dr@793d0h
dd	dr@78d07h
dd	dr@78ddfh
dd	dr@78ed5h
dd	dr@78c8ch
dd	dr@79071h
dd	dr@791cah
dd	dr@792c8h
dd	dr@79400h
dd	dr@78d26h
dd	dr@78dfdh
dd	dr@78ef4h
dd	dr@790fdh
dd	dr@79094h
dd	dr@78c8ch
dd	dr@792e9h
dd	dr@79405h
dd	dr@78d45h
dd	dr@78e3dh
dd	dr@78f13h
dd	dr@78c8ch
dd	dr@790b7h
dd	dr@79211h
dd	dr@7930ah
dd	dr@7943fh
;33:00078780
dd	dr@78d64h
dd	dr@78e51h
dd	dr@78f32h
dd	dr@79197h
dd	dr@790dah
dd	dr@7923ch
dd	dr@7932bh
dd	dr@79444h
dr@787a0h:
dd	dr@7949ah
dd	dr@7953ch
dd	dr@79468h
dd	dr@79468h
dd	dr@79b4dh
dd	dr@79bcbh
dd	dr@79c66h
dd	dr@79bcbh
dd	dr@794afh
dd	dr@79584h
dd	dr@79468h
dd	dr@79468h
dd	dr@79b62h
dd	dr@79584h
dd	dr@79cb1h
dd	dr@79584h
dd	dr@794c4h
dd	dr@7946dh
dd	dr@79468h
dd	dr@79468h
dd	dr@794c4h
dd	dr@79beah
dd	dr@79468h
dd	dr@79beah
;33:00078800
dd	dr@794d6h
dd	dr@79c3ah
dd	dr@79468h
dd	dr@79468h
dd	dr@794d6h
dd	dr@79c3ah
dd	dr@79cfch
dd	dr@79c3ah
dd	dr@794e8h
dd	dr@795ach
dd	dr@79468h
dd	dr@79af3h
dd	dr@79b77h
dd	dr@79c16h
dd	dr@79d85h
dd	dr@79eb1h
dd	dr@794fdh
dd	dr@7962dh
dd	dr@79a6ah
dd	dr@79468h
dd	dr@79b8ch
dd	dr@79c28h
dd	dr@79dd0h
dd	dr@79468h
dd	dr@79512h
dd	dr@79848h
dd	dr@79468h
dd	dr@79468h
dd	dr@79ba1h
dd	dr@79468h
dd	dr@79e1bh
dd	dr@79468h
;33:00078880
dd	dr@79527h
dd	dr@79952h
dd	dr@79468h
dd	dr@79468h
dd	dr@79bb6h
dd	dr@79468h
dd	dr@79e66h
dd	dr@79468h
global __int7_pl3
__int7_pl3:
		sti     
		pushad  
		mov     ebp, esp
		push    dword [ebp+40h]
		push    dword [ebp+44h]
		mov     cx, [ebp+3ch]
		mov     [ebp-6], cx
		mov     ecx, [ebp+38h]
		mov     [ebp+0ch], ecx
		call    near dr@78934h
		pop     ds
		pop     es
		popad   
		iret    
db	87h,0dbh,90h
global __int7_X32VM
__int7_X32VM:
		sti     
		mov     eax, [esp+0ch]
		push    dword [ss:eax+14h]
		push    dword [ss:eax+10h]
		push    eax
		push    eax
		push    eax
		push    dword [ss:eax]
		push    ecx
		push    edx
		push    ebx
		push    dword [ss:eax+1ch]
		mov     eax, ebp
		push    eax
		push    esi
		push    edi
		push    es
		push    ds
		;mov     [esp+2], ss
		db	8ch,54h,24h,2
		call    near dr@78934h
		pop     ds
		pop     es
		pop     edi
		pop     esi
		pop     eax
		mov     ebp, eax
		pop     eax
		pop     ebx
		pop     edx
		pop     ecx
		pop     eax
		xchg    eax, [esp]
		pop     dword [ss:eax]
;33:00078900
		add     esp, byte 8
		pop     dword [ss:eax+10h]
		add     esp, byte 4
		mov     eax, [ss:eax]
		iret    
db	87h,0dbh
global __int7
__int7:
		sti     
		sub     esp, byte 0ch
		push    eax
		mov     eax, esp
		add     eax, byte 1ch
		push    ecx
		push    edx
		push    ebx
		push    eax
		push    ebp
		push    esi
		push    edi
		push    es
		push    ds
		;mov     [esp+2], ss
		db	8ch,54h,24h,2
		call    near dr@78934h
		pop     ds
		pop     es
		popad   
		add     esp, byte 0ch
		iret    
db	90h
dr@78934h:
		mov     ebp, esp
		mov     esi, [ebp+38h]
		;mov     ds, [ebp+3ch]
		db	8eh,5dh,3ch
		mov     cx, [ebp+4]
		mov     dx, [ebp+6]
		mov     al, [esi]
		cmp     al, 9bh
		jbe     near dr@789c0h
dr@7894eh:
		mov     bl, al
		and     bl, 0f8h
		cmp     bl, 0d8h
		jne     near dr@78a67h
		mov     ah, [esi+1]
		add     esi, byte 2
		and     al, 7
		cmp     ah, 0c0h
		jae     near dr@78a1dh
		mov     bl, ah
		mov     bh, ah
		shr     bh, 3
		and     ebx, 1807h
		or      bl, bh
		mov     bh, 0
		call    dword [cs:ebx*4+dr@785e0h]
		;mov     es, cx
		db	66h,8eh,0c1h
		mov     [ebp+38h], esi
		mov     esi, ebx
		mov     bl, ah
		and     ebx, byte 38h
		or      bl, al
		call    near __GETDS
		lea     ebp, [L$1]
		mov     edi, [ds:ebp+4]
		and     edi, 3800h
		shr     edi, 0bh
		lea     edi, [edi+edi*4]
		add     edi, edi
		jmp     near dword [cs:ebx*4+dr@786a0h]
dr@789bah:
		mov     al, [esi]
		cmp     al, 9bh
		ja      short dr@7894eh
dr@789c0h:
		je      short dr@789e6h
		cmp     al, 26h
		je      short dr@78a04h
		cmp     al, 2eh
		je      short dr@789e9h
		cmp     al, 36h
		je      short dr@789fbh
		cmp     al, 3eh
		je      short dr@789f2h
		cmp     al, 64h
		je      short dr@78a0dh
		cmp     al, 65h
		je      short dr@78a15h
		cmp     al, 66h
		je      short dr@789e6h
		cmp     al, 67h
		jne     near dr@7894eh
dr@789e6h:
		inc     esi
		jmp     short dr@789bah
dr@789e9h:
		mov     cx, [ebp+3ch]
		mov     edx, ecx
		inc     esi
		jmp     short dr@789bah
dr@789f2h:
		mov     cx, [ebp+4]
		mov     edx, ecx
		inc     esi
		jmp     short dr@789bah
dr@789fbh:
		mov     cx, [ebp+6]
		mov     edx, ecx
		inc     esi
		jmp     short dr@789bah
dr@78a04h:
		mov     cx, [ebp+8]
		mov     edx, ecx
		inc     esi
		jmp     short dr@789bah
dr@78a0dh:
		;mov     cx, fs
		db	66h,8ch,0e1h
		mov     edx, ecx
		inc     esi
		jmp     short dr@789bah
dr@78a15h:
		;mov     cx, gs
		db	66h,8ch,0e9h
		mov     edx, ecx
		inc     esi
		jmp     short dr@789bah
dr@78a1dh:
		mov     [ebp+38h], esi
		call    near __GETDS
		lea     ebp, [L$1]
		mov     dl, ah
		and     edx, byte 38h
		or      dl, al
		mov     edi, [ds:ebp+4]
		and     edi, 3800h
		shr     edi, 0bh
		mov     bl, ah
		and     ebx, byte 7
		mov     esi, ebx
		cmp     ax, word 0f801h
		jne     short dr@78a50h
		mov     si, 1
dr@78a50h:
		add     esi, edi
		and     esi, byte 7
		lea     edi, [edi+edi*4]
		add     edi, edi
		lea     esi, [esi+esi*4]
		add     esi, esi
		jmp     near dword [cs:edx*4+dr@787a0h]
dr@78a67h:
		retn    
dr@78a68h:
		lea     ebx, [edi+ebp*1+1ch]
		mov     edx, 0ffffff00h
		mov     eax, [ebx+4]
		shl     eax, 19h
		jae     short dr@78a96h
		jne     short dr@78a82h
		cmp     dword [ebx], byte 0
		jne     short dr@78a82h
;33:00078a80
		add     edx, edx
dr@78a82h:
		add     dword [ebx+4], 100h
		jae     short dr@78a96h
		mov     dword [ebx+4], 80000000h
		inc     word [ebx+8]
dr@78a96h:
		and     [ebx+4], edx
		mov     dword [ebx], 0
		jmp     near dr@78934h
dr@78aa4h:
		lea     ebx, [edi+ebp*1+1ch]
		mov     edx, 0fffff800h
		mov     eax, [ebx]
		shl     eax, 16h
		jae     short dr@78acfh
		jne     short dr@78ab8h
		add     edx, edx
dr@78ab8h:
		add     dword [ebx], 800h
		adc     dword [ebx+4], byte 0
		jae     short dr@78acfh
		mov     dword [ebx+4], 80000000h
		inc     word [ebx+8]
dr@78acfh:
		and     [ebx], edx
		jmp     near dr@78934h
dr@78ad6h:
		inc     eax
		mov     dx, [ds:ebp+4]
		and     dx, 0b8ffh
		or      dh, [cs:eax+dr@785d2h]
		mov     [ds:ebp+4], dx
dr@78aedh:
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dr@78934h
dr@78b28h:
		inc     eax
		mov     dx, [ds:ebp+4]
		and     dx, 0b8ffh
		or      dh, [cs:eax+dr@785d2h]
		mov     [ds:ebp+4], dx
		jmp     near dr@78934h
dr@78b44h:
		or      [ds:ebp+4], al
		test    [ds:ebp+0], al
		jne     short dr@78b91h
		push    esi
		push    edi
		push    ecx
		push    es
		push    ds
		sub     esp, byte 6ch
		;mov     cx, ss
		db	66h,8ch,0d1h
		;mov     es, cx
		db	66h,8eh,0c1h
		mov     esi, ebp
		mov     edi, esp
		mov     ecx, 1bh
		cld     
		rep movsd   
		movzx   eax, ah
		call    dword [___FPE_handler]
		;mov     cx, ds
		db	66h,8ch,0d9h
		;mov     es, cx
		db	66h,8eh,0c1h
		;mov     cx, ss
		db	66h,8ch,0d1h
		;mov     ds, cx
		db	66h,8eh,0d9h
		mov     edi, ebp
		mov     esi, esp
		mov     ecx, 1bh
		cld     
		rep movsd   
		add     esp, byte 6ch
		pop     ds
		pop     es
		pop     ecx
		pop     edi
		pop     esi
dr@78b91h:
		retn    
dr@78b92h:
		xor     ebx, ebx
		add     ebx, [ebp+28h]
		retn    
dr@78b98h:
		xor     ebx, ebx
		add     ebx, [ebp+24h]
		retn    
dr@78b9eh:
		xor     ebx, ebx
		add     ebx, [ebp+20h]
		retn    
dr@78ba4h:
		xor     ebx, ebx
		add     ebx, [ebp+1ch]
		retn    
dr@78baah:
		xor     ebx, ebx
		add     ebx, [ebp+18h]
		mov     ecx, edx
		retn    
dr@78bb2h:
		mov     ebx, [esi]
		add     esi, byte 4
		retn    
dr@78bb8h:
		xor     ebx, ebx
		add     ebx, [ebp+10h]
		retn    
dr@78bbeh:
		xor     ebx, ebx
		add     ebx, [ebp+0ch]
		retn    
dr@78bc4h:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+28h]
		retn    
dr@78bcch:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+24h]
		retn    
dr@78bd4h:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+20h]
		retn    
dr@78bdch:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+1ch]
		retn    
dr@78be4h:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+18h]
		mov     ecx, edx
		retn    
dr@78beeh:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+14h]
		mov     ecx, edx
		retn    
dr@78bf8h:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+10h]
		retn    
;33:00078c00
dr@78c00h:
		movsx   ebx, byte [esi]
		inc     esi
		add     ebx, [ebp+0ch]
		retn    
dr@78c08h:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+28h]
		retn    
dr@78c11h:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+24h]
		retn    
dr@78c1ah:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+20h]
		retn    
dr@78c23h:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+1ch]
		retn    
dr@78c2ch:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+18h]
		mov     ecx, edx
		retn    
dr@78c37h:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+14h]
		mov     ecx, edx
		retn    
dr@78c42h:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+10h]
		retn    
dr@78c4bh:
		mov     ebx, [esi]
		add     esi, byte 4
		add     ebx, [ebp+0ch]
		retn    
dr@78c54h:
		mov     bl, [esi]
		inc     esi
		push    ebx
		and     bl, 7
		mov     bh, ah
		shr     bh, 3
		and     bh, 18h
		or      bl, bh
		mov     bh, 0
		call    dword [cs:ebx*4+dr@78640h]
		pop     edx
		push    ecx
		mov     ecx, edx
		and     dl, 38h
		cmp     dl, 20h
		je      short dr@78c8ah
		shr     edx, 1
		neg     edx
		mov     edx, [ebp+edx*1+28h]
		shr     cl, 6
		shl     edx, cl
		add     ebx, edx
dr@78c8ah:
		pop     ecx
		retn    
dr@78c8ch:
		jmp     near dr@78934h
dr@78c91h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a058h
		jmp     near dword [ds:ebp+76h]
dr@78cb0h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a48ch
		jmp     near dword [ds:ebp+76h]
dr@78ccfh:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78b28h
dr@78cebh:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78ad6h
dr@78d07h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@78d26h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@78d45h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@78d64h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a882h
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@78d83h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     eax, [es:esi]
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7a882h
		jmp     near dr@78934h
dr@78dbdh:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a73ch
		mov     [es:esi], eax
		jmp     near dr@78934h
dr@78dceh:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a73ch
		mov     [es:esi], eax
		jmp     near dr@78aedh
dr@78ddfh:
		mov     ecx, 7
		push    ds
		push    es
		;mov     ax, es
		db	66h,8ch,0c0h
		;mov     dx, ds
		db	66h,8ch,0dah
		;mov     es, dx
		db	66h,8eh,0c2h
		;mov     ds, ax
		db	66h,8eh,0d8h
		mov     edi, ebp
		rep movsd   
		pop     es
		pop     ds
		jmp     near dr@78934h
dr@78dfdh:
		mov     ax, [es:esi]
		mov     [ds:ebp+0], ax
		and     ax, 300h
		cmp     ax, word 300h
		jne     short dr@78e1ch
		lea     edx, [dr@78934h]
		mov     [ds:ebp+76h], edx
		jmp     short dr@78e38h
dr@78e1ch:
		cmp     ax, word 200h
		jne     short dr@78e2eh
		lea     edx, [dr@78aa4h]
		mov     [ds:ebp+76h], edx
		jmp     short dr@78e38h
dr@78e2eh:
		lea     edx, [dr@78a68h]
		mov     [ds:ebp+76h], edx
dr@78e38h:
		jmp     near dr@78934h
dr@78e3dh:
		mov     ecx, 7
		mov     ebx, edi
		mov     edi, esi
		mov     esi, ebp
		rep movsd   
		mov     edi, ebx
		jmp     near dr@78934h
dr@78e51h:
		mov     ax, [ds:ebp+0]
		mov     [es:esi], ax
		jmp     near dr@78934h
dr@78e5fh:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a058h
		jmp     near dword [ds:ebp+76h]
dr@78e7eh:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a48ch
		jmp     near dword [ds:ebp+76h]
dr@78e9dh:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78b28h
dr@78eb9h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78ad6h
dr@78ed5h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@78ef4h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@78f13h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@78f32h:
		mov     eax, [es:esi]
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@78f51h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     eax, [es:esi]
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7a676h
		jmp     near dr@78934h
dr@78f8bh:
		lea     ebx, [edi+ebp*1+1ch]
		push    dword [ebx]
		push    dword [ebx+4]
		push    dword [ebx+6]
		lea     eax, [edi+ebp*1+1ch]
		mov     dx, [ds:ebp+0]
		and     dx, 0c00h
		call    near dr@7a947h
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a607h
		mov     [es:esi], eax
		lea     ebx, [edi+ebp*1+1ch]
		pop     dword [ebx+6]
		pop     dword [ebx+4]
		pop     dword [ebx]
		jmp     near dr@78934h
dr@78fc7h:
		lea     eax, [edi+ebp*1+1ch]
		mov     dx, [ds:ebp+0]
		and     dx, 0c00h
		call    near dr@7a947h
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a607h
		mov     [es:esi], eax
		jmp     near dr@78aedh
dr@78febh:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a058h
		jmp     near dword [ds:ebp+76h]
dr@7900eh:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a48ch
		jmp     near dword [ds:ebp+76h]
dr@79031h:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78b28h
dr@79051h:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78ad6h
dr@79071h:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
;33:00079080
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@79094h:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@790b7h:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@790dah:
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [ebp+6ch]
		call    near dr@7a6bch
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@790fdh:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     eax, [es:esi]
		mov     [edi+ebp*1+1ch], eax
		mov     eax, [es:esi+4]
		mov     [edi+ebp*1+20h], eax
		mov     ax, [es:esi+8]
		mov     [edi+ebp*1+24h], ax
		jmp     near dr@78934h
dr@79144h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     eax, [es:esi]
		mov     edx, [es:esi+4]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a6bch
		jmp     near dr@78934h
dr@79182h:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a7bbh
		mov     [es:esi], eax
		mov     [es:esi+4], edx
		jmp     near dr@78934h
dr@79197h:
		mov     eax, [edi+ebp*1+1ch]
		mov     [es:esi], eax
		mov     eax, [edi+ebp*1+20h]
		mov     [es:esi+4], eax
		mov     ax, [edi+ebp*1+24h]
		mov     [es:esi+8], ax
		jmp     near dr@78aedh
dr@791b5h:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a7bbh
		mov     [es:esi], eax
		mov     [es:esi+4], edx
		jmp     near dr@78aedh
dr@791cah:
		mov     ecx, 7
		push    ds
		push    es
		;mov     ax, es
		db	66h,8ch,0c0h
		;mov     dx, ds
		db	66h,8ch,0dah
		;mov     es, dx
		db	66h,8eh,0c2h
		;mov     ds, ax
		db	66h,8eh,0d8h
		mov     edi, ebp
		rep movsd   
		mov     ebx, [es:ebp+4]
		and     ebx, 3800h
		shr     ebx, 0bh
		lea     ebx, [ebx+ebx*4]
		add     ebx, ebx
		mov     ecx, 8
dr@791f8h:
		lea     edi, [ebp+ebx*1+1ch]
		movsd   
		movsd   
		movsw   
;33:00079200
		movzx   ebx, word [cs:ebx+dr@78532h]
		loop    dr@791f8h
		pop     es
		pop     ds
		jmp     near dr@78934h
dr@79211h:
		mov     ecx, 7
		mov     ebx, edi
		mov     edi, esi
		mov     esi, ebp
		rep movsd   
		mov     ecx, 8
dr@79223h:
		lea     esi, [ebx+ebp*1+1ch]
		movsd   
		movsd   
		movsw   
		movzx   ebx, word [cs:ebx+dr@78532h]
		loop    dr@79223h
		mov     edi, ebx
		jmp     near dr@79b27h
dr@7923ch:
		mov     ax, [ds:ebp+4]
		mov     [es:esi], ax
		jmp     near dr@78934h
dr@7924ah:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a058h
		jmp     near dword [ds:ebp+76h]
dr@7926bh:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a48ch
		jmp     near dword [ds:ebp+76h]
dr@7928ch:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78b28h
dr@792aah:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78ad6h
dr@792c8h:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@792e9h:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@7930ah:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@7932bh:
		mov     ax, [es:esi]
		cwde    
		lea     edx, [ebp+6ch]
		call    near dr@7a676h
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@7934ch:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     ax, [es:esi]
		cwde    
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7a676h
		jmp     near dr@78934h
dr@79388h:
		lea     ebx, [edi+ebp*1+1ch]
		push    dword [ebx]
		push    dword [ebx+4]
		push    dword [ebx+6]
		lea     eax, [edi+ebp*1+1ch]
		mov     dx, [ds:ebp+0]
		and     dx, 0c00h
		call    near dr@7a947h
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a607h
		mov     edx, eax
		cwde    
		cmp     eax, edx
		je      short dr@793bbh
		mov     ax, 8000h
dr@793bbh:
		mov     [es:esi], ax
		lea     ebx, [edi+ebp*1+1ch]
		pop     dword [ebx+6]
		pop     dword [ebx+4]
		pop     dword [ebx]
		jmp     near dr@78934h
dr@793d0h:
		lea     eax, [edi+ebp*1+1ch]
		mov     dx, [ds:ebp+0]
		and     dx, 0c00h
		call    near dr@7a947h
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a607h
		mov     edx, eax
		cwde    
		cmp     eax, edx
		je      short dr@793f7h
		mov     ax, 8000h
dr@793f7h:
		mov     [es:esi], ax
		jmp     near dr@78aedh
;33:00079400
dr@79400h:
		jmp     near dr@78934h
dr@79405h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     eax, [es:esi]
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7a687h
		jmp     near dr@78934h
dr@7943fh:
		jmp     near dr@78aedh
dr@79444h:
		lea     eax, [edi+ebp*1+1ch]
		mov     dx, [ds:ebp+0]
		and     dx, 0c00h
		call    near dr@7a947h
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7a60ch
		mov     [es:esi], eax
		jmp     near dr@78aedh
dr@79468h:
		jmp     near dr@78934h
dr@7946dh:
		jmp     near dword [cs:ebx*4+dr@79475h]
dr@79475h:
dd	dr@79495h
dd	dr@79468h
dd	dr@79468h
;33:00079480+3
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dr@79495h:
		jmp     near dr@78934h
dr@7949ah:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a058h
		jmp     near dword [ds:ebp+76h]
dr@794afh:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a48ch
		jmp     near dword [ds:ebp+76h]
dr@794c4h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		call    near dr@7a21eh
		jmp     near dr@78b28h
dr@794d6h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		call    near dr@7a21eh
		jmp     near dr@78ad6h
dr@794e8h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@794fdh:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@79512h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@79527h:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [edi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@7953ch:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     eax, [esi+ebp*1+1ch]
		mov     [edi+ebp*1+1ch], eax
		mov     eax, [esi+ebp*1+20h]
		mov     [edi+ebp*1+20h], eax
		mov     ax, [esi+ebp*1+24h]
		mov     [edi+ebp*1+24h], ax
		jmp     near dr@78934h
dr@79584h:
		lea     ebx, [edi+ebp*1+1ch]
		lea     esi, [esi+ebp*1+1ch]
		mov     eax, [esi]
		xchg    eax, [ebx]
		mov     [esi], eax
		mov     eax, [esi+4]
		xchg    eax, [ebx+4]
		mov     [esi+4], eax
		mov     ax, [esi+8]
		xchg    ax, [ebx+8]
		mov     [esi+8], ax
		jmp     near dr@78934h
dr@795ach:
		jmp     near dword [cs:ebx*4+dr@795b4h]
dr@795b4h:
dd	dr@795d4h
dd	dr@795e1h
dd	dr@79468h
dd	dr@79468h
dd	dr@795eeh
dd	dr@7961fh
dd	dr@79468h
dd	dr@79468h
dr@795d4h:
		lea     eax, [edi+ebp*1+1ch]
		xor     byte [eax+9], 80h
		jmp     near dr@78934h
dr@795e1h:
		lea     eax, [edi+ebp*1+1ch]
		and     byte [eax+9], 7fh
		jmp     near dr@78934h
dr@795eeh:
		mov     eax, [cs:dr@78528h]
		mov     [ds:ebp+6ch], eax
		mov     eax, [cs:dr@7852ch]
		mov     [ds:ebp+70h], eax
		mov     ax, [cs:dr@78530h]
		mov     [ds:ebp+74h], ax
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [ebp+6ch]
		call    near dr@7a21eh
		jmp     near dr@78b28h
dr@7961fh:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7adceh
		jmp     near dr@78934h
dr@7962dh:
		jmp     near dword [cs:ebx*4+dr@79635h]
dr@79635h:
dd	dr@79655h
dd	dr@79698h
dd	dr@796ddh
dd	dr@79722h
dd	dr@79767h
dd	dr@797ach
dd	dr@797f1h
dd	dr@79468h
dr@79655h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		sub     eax, eax
		mov     [esi], eax
		mov     dword [esi+4], 80000000h
		mov     word [esi+8], 3fffh
		jmp     near dr@78934h
dr@79698h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		mov     dword [esi], 0cd1b8afeh
		mov     dword [esi+4], 0d49a784bh
		mov     word [esi+8], 4000h
		jmp     near dr@78934h
dr@796ddh:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		mov     dword [esi], 5c17f0bch
		mov     dword [esi+4], 0b8aa3b29h
		mov     word [esi+8], 3fffh
		jmp     near dr@78934h
dr@79722h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		mov     dword [esi], 2168c235h
		mov     dword [esi+4], 0c900daa2h
		mov     word [esi+8], 4000h
		jmp     near dr@78934h
dr@79767h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		mov     dword [esi], 0fbcff799h
		mov     dword [esi+4], 9a209a84h
		mov     word [esi+8], 3ffdh
		jmp     near dr@78934h
dr@797ach:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		mov     dword [esi], 0d1cf79ach
		mov     dword [esi+4], 0b17217f7h
		mov     word [esi+8], 3ffeh
		jmp     near dr@78934h
dr@797f1h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		sub     eax, eax
		mov     [esi], eax
		mov     [esi+4], eax
		mov     [esi+8], ax
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@78584h]
		or      [ds:ebp+8], bx
		jmp     near dr@78934h
dr@79848h:
		jmp     near dword [cs:ebx*4+dr@79850h]
dr@79850h:
dd	dr@79870h
dd	dr@7987dh
dd	dr@798c4h
dd	dr@79ed9h
dd	dr@79f22h
dd	dr@79f87h
dd	dr@79910h
dd	dr@79931h
dr@79870h:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7b3f4h
		jmp     near dword [ds:ebp+76h]
dr@7987dh:
		lea     eax, [edi+ebp*1+1ch]
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7aed5h
		jmp     near dword [ds:ebp+76h]
dr@798c4h:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7b3beh
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     esi, [edi+ebp*1+1ch]
		sub     eax, eax
		mov     [esi], eax
		mov     dword [esi+4], 80000000h
		mov     word [esi+8], 3fffh
		jmp     near dr@78934h
dr@79910h:
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dr@78934h
dr@79931h:
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dr@78934h
dr@79952h:
		jmp     near dword [cs:ebx*4+dr@7995ah]
dr@7995ah:
dd	dr@7997ah
dd	dr@799a4h
dd	dr@799ebh
dd	dr@799f8h
dd	dr@79fb1h
dd	dr@79fc9h
dd	dr@79a50h
dd	dr@79a5dh
dr@7997ah:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		call    near dr@7acedh
		and     eax, byte 7
		mov     dx, [ds:ebp+4]
		and     dx, 0b8ffh
		or      dh, [cs:eax+dr@785d6h]
		mov     [ds:ebp+4], dx
		jmp     near dword [ds:ebp+76h]
dr@799a4h:
		lea     eax, [edi+ebp*1+1ch]
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7aebch
		jmp     near dword [ds:ebp+76h]
dr@799ebh:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7b5c8h
		jmp     near dword [ds:ebp+76h]
dr@799f8h:
		lea     ebx, [edi+ebp*1+1ch]
		push    dword [ebx]
		push    dword [ebx+4]
		push    dword [ebx+6]
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7b3a7h
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     ebx, [edi+ebp*1+1ch]
		pop     dword [ebx+6]
		pop     dword [ebx+4]
		pop     dword [ebx]
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7b3b1h
		jmp     near dr@78934h
dr@79a50h:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7b3a7h
		jmp     near dword [ds:ebp+76h]
dr@79a5dh:
		lea     eax, [edi+ebp*1+1ch]
		call    near dr@7b3b1h
		jmp     near dword [ds:ebp+76h]
dr@79a6ah:
		jmp     near dword [cs:ebx*4+dr@79a72h]
dr@79a72h:
dd	dr@79468h
dd	dr@79a92h
dd	dr@79468h
dd	dr@79468h
;33:00079a80+2
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dr@79a92h:
		mov     eax, [edi+ebp*1+1ch]
		mov     [ds:ebp+6ch], eax
		mov     eax, [edi+ebp*1+20h]
		mov     [ds:ebp+70h], eax
		mov     ax, [edi+ebp*1+24h]
		mov     [ds:ebp+74h], ax
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7a21eh
		jmp     near dr@78ad6h
dr@79af3h:
		jmp     near dword [cs:ebx*4+dr@79afbh]
dr@79afbh:
dd	dr@79468h
dd	dr@79468h
;33:00079b00+1
dd	dr@79b1bh
dd	dr@79b27h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dr@79b1bh:
		and     word [ds:ebp+4], 7f00h
		jmp     near dr@78934h
dr@79b27h:
		mov     word [ds:ebp+0], 33fh
		mov     word [ds:ebp+4], 0
		mov     word [ds:ebp+8], 0ffffh
		lea     edx, [dr@78934h]
		mov     [ds:ebp+76h], edx
		sub     edi, edi
		jmp     near dr@78934h
dr@79b4dh:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a058h
		jmp     near dword [ds:ebp+76h]
dr@79b62h:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a48ch
		jmp     near dword [ds:ebp+76h]
dr@79b77h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@79b8ch:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a04ah
		jmp     near dword [ds:ebp+76h]
dr@79ba1h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@79bb6h:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a2b7h
		jmp     near dword [ds:ebp+76h]
dr@79bcbh:
		mov     bx, [cs:esi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:esi+dr@7858ah]
		or      [ds:ebp+8], bx
		jmp     near dr@78934h
dr@79beah:
		mov     eax, [edi+ebp*1+1ch]
		mov     [esi+ebp*1+1ch], eax
		mov     eax, [edi+ebp*1+20h]
		mov     [esi+ebp*1+20h], eax
		mov     ax, [edi+ebp*1+24h]
		mov     [esi+ebp*1+24h], ax
		mov     bx, [cs:esi+dr@78582h]
		and     [ds:ebp+8], bx
		jmp     near dr@78934h
dr@79c16h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		call    near dr@7a21eh
		jmp     near dr@78b28h
dr@79c28h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		call    near dr@7a21eh
		jmp     near dr@78ad6h
dr@79c3ah:
		mov     eax, [edi+ebp*1+1ch]
		mov     [esi+ebp*1+1ch], eax
		mov     eax, [edi+ebp*1+20h]
		mov     [esi+ebp*1+20h], eax
		mov     ax, [edi+ebp*1+24h]
		mov     [esi+ebp*1+24h], ax
		mov     bx, [cs:esi+dr@78582h]
		and     [ds:ebp+8], bx
		jmp     near dr@78aedh
dr@79c66h:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a058h
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dword [ds:ebp+76h]
dr@79cb1h:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a48ch
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dword [ds:ebp+76h]
dr@79cfch:
		jmp     near dword [cs:ebx*4+dr@79d04h]
dr@79d04h:
dd	dr@79468h
dd	dr@79d24h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dr@79d24h:
		mov     eax, [edi+ebp*1+1ch]
		mov     [ds:ebp+6ch], eax
		mov     eax, [edi+ebp*1+20h]
		mov     [ds:ebp+70h], eax
		mov     ax, [edi+ebp*1+24h]
		mov     [ds:ebp+74h], ax
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		lea     eax, [ebp+6ch]
		lea     edx, [edi+ebp*1+1ch]
		call    near dr@7a21eh
;33:00079d80
		jmp     near dr@78ad6h
dr@79d85h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a04ah
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dword [ds:ebp+76h]
dr@79dd0h:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a04ah
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dword [ds:ebp+76h]
dr@79e1bh:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a2b7h
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dword [ds:ebp+76h]
dr@79e66h:
		lea     eax, [esi+ebp*1+1ch]
		lea     edx, [edi+ebp*1+1ch]
		lea     ebx, [esi+ebp*1+1ch]
		call    near dr@7a2b7h
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		jmp     near dword [ds:ebp+76h]
dr@79eb1h:
		jmp     near dword [cs:ebx*4+dr@79eb9h]
dr@79eb9h:
dd	dr@7a03ah
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dd	dr@79468h
dr@79ed9h:
		lea     edx, [edi+ebp*1+1ch]
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		mov     bx, [cs:edi+dr@7858ah]
		or      [ds:ebp+8], bx
		movzx   edi, word [cs:edi+dr@78532h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		lea     eax, [edi+ebp*1+1ch]
		mov     ebx, eax
		call    near dr@7aad4h
		jmp     near dword [ds:ebp+76h]
dr@79f22h:
		lea     esi, [edi+ebp*1+1ch]
		movzx   edi, word [cs:edi+dr@78534h]
		mov     bx, [cs:edi+dr@78536h]
		and     word [ds:ebp+4], 0c7ffh
		or      [ds:ebp+4], bx
		mov     bx, [cs:edi+dr@78582h]
		and     [ds:ebp+8], bx
		lea     ebx, [edi+ebp*1+1ch]
		mov     eax, [esi]
		mov     [ebx], eax
		mov     eax, [esi+4]
		mov     [ebx+4], eax
		mov     ax, [esi+8]
		mov     dx, ax
		and     dx, 8000h
		or      dx, 3fffh
		mov     [ebx+8], dx
		and     ax, 7fffh
		sub     ax, 3fffh
		cwde    
		mov     edx, esi
		call    near dr@7a607h
		jmp     near dr@78934h
dr@79f87h:
		lea     eax, [edi+ebp*1+1ch]
		lea     edx, [esi+ebp*1+1ch]
		call    near dr@7acedh
		and     eax, byte 7
		mov     dx, [ds:ebp+4]
		and     dx, 0b8ffh
		or      dh, [cs:eax+dr@785d6h]
		mov     [ds:ebp+4], dx
		jmp     near dword [ds:ebp+76h]
dr@79fb1h:
		lea     eax, [edi+ebp*1+1ch]
		mov     dx, [ds:ebp+0]
		and     dx, 0c00h
		call    near dr@7a947h
		jmp     near dr@78934h
dr@79fc9h:
		mov     esi, edi
		movzx   edi, word [cs:edi+dr@78532h]
		lea     eax, [edi+ebp*1+1ch]
		mov     cx, [eax+8]
		call    near dr@7a607h
		mov     edi, esi
		lea     ebx, [edi+ebp*1+1ch]
		mov     edx, eax
		cwde    
		cmp     eax, edx
		je      short dr@7a008h
		or      ch, ch
		jns     short dr@79ff9h
		sub     dx, dx
		sub     cx, cx
		jmp     short dr@7a006h
dr@79ff9h:
		mov     dx, 7fffh
		mov     cx, [ebx+8]
		and     cx, 8000h
dr@7a006h:
		jmp     short dr@7a02eh
dr@7a008h:
		mov     dx, [ebx+8]
		mov     cx, dx
		and     cx, 8000h
		and     dx, 7fffh
		add     dx, ax
		jns     short dr@7a02eh
		or      ah, ah
		jns     short dr@7a02ah
		sub     dx, dx
		sub     cx, cx
		jmp     short dr@7a02eh
dr@7a02ah:
		mov     dx, 7fffh
dr@7a02eh:
		or      dx, cx
		mov     [ebx+8], dx
		jmp     near dr@78934h
dr@7a03ah:
		mov     ax, [ds:ebp+4]
		mov     ebp, esp
		mov     [ebp+28h], ax
		jmp     near dr@78934h
dr@7a04ah:
		push    esi
		push    ecx
		push    ebx
		mov     si, [edx+8]
		xor     si, 8000h
		jmp     short dr@7a05fh
dr@7a058h:
		push    esi
		push    ecx
		push    ebx
		mov     si, [edx+8]
dr@7a05fh:
		mov     ecx, [edx+4]
		mov     ebx, [edx]
		shl     esi, 10h
		mov     si, [eax+8]
		mov     edx, [eax+4]
		mov     eax, [eax]
		call    near dr@7a0b2h
		pop     ebx
		mov     [ebx], eax
		mov     [ebx+4], edx
		mov     [ebx+8], si
		pop     ecx
;33:0007a080
		pop     esi
		retn    
dr@7a082h:
		push    esi
		push    ecx
		push    ebx
		mov     si, [esp+18h]
		mov     ecx, [esp+14h]
		mov     ebx, [esp+10h]
		shl     esi, 10h
		mov     si, [eax+8]
		mov     edx, [eax+4]
		mov     eax, [eax]
		call    near dr@7a0b2h
		pop     ebx
		mov     [ebx], eax
		mov     [ebx+4], edx
		mov     [ebx+8], si
		pop     ecx
		pop     esi
		ret     0ch
dr@7a0b2h:
		or      eax, eax
		jne     short dr@7a0d5h
		or      edx, edx
		jne     short dr@7a0d5h
		add     si, si
		jne     short dr@7a0d2h
		shr     esi, 10h
		mov     eax, ebx
		mov     edx, ecx
		add     esi, esi
		or      bx, si
		or      ebx, edx
		je      short dr@7a0d1h
		shr     esi, 1
dr@7a0d1h:
		retn    
dr@7a0d2h:
		rcr     si, 1
dr@7a0d5h:
		or      ecx, ecx
		jne     short dr@7a0e6h
		or      ebx, ebx
		jne     short dr@7a0e6h
		test    esi, 7fff0000h
		jne     short dr@7a0e6h
		retn    
dr@7a0e6h:
		push    ebp
		push    edi
		xchg    ecx, esi
		mov     edi, ecx
		rol     edi, 10h
		sar     edi, 10h
		sar     ecx, 10h
		and     edi, 80007fffh
		and     ecx, 80007fffh
		mov     ebp, ecx
		rol     edi, 10h
		rol     ecx, 10h
		add     cx, di
		rol     edi, 10h
		rol     ecx, 10h
		sub     cx, di
		je      short dr@7a135h
		jae     short dr@7a121h
		mov     ebp, edi
		neg     cx
		xchg    ebx, eax
		xchg    edx, esi
dr@7a121h:
		cmp     cx, byte 40h
		jbe     short dr@7a135h
		add     ebp, ebp
		rcr     bp, 1
		mov     eax, ebx
		mov     edx, esi
		mov     esi, ebp
		pop     edi
		pop     ebp
		retn    
dr@7a135h:
		mov     ch, 0
		or      ecx, ecx
		jns     short dr@7a14ah
		mov     ch, 0ffh
		neg     esi
		neg     ebx
		sbb     esi, byte 0
		xor     ebp, 80000000h
dr@7a14ah:
		sub     edi, edi
		cmp     cl, 0
		je      short dr@7a17dh
		push    ebx
		sub     ebx, ebx
		cmp     cl, 20h
		jb      short dr@7a16fh
		or      eax, eax
		setnz   bl
		mov     edi, ebx
		sub     ebx, ebx
		cmp     cl, 40h
		jne     short dr@7a16bh
		or      edi, edx
		sub     edx, edx
dr@7a16bh:
		mov     eax, edx
		sub     edx, edx
dr@7a16fh:
		shrd    ebx, eax, cl
		or      edi, ebx
		sub     ebx, ebx
		shrd    eax, edx, cl
		shrd    edx, ebx, cl
		pop     ebx
dr@7a17dh:
		add     eax, ebx
		adc     edx, esi
		adc     ch, 0
		jns     short dr@7a1aeh
		cmp     cl, 40h
		jne     short dr@7a19fh
		test    edi, 7fffffffh
		setnz   bl
		shr     ebx, 1
		adc     eax, byte 0
		adc     edx, byte 0
		adc     ch, 0
dr@7a19fh:
		neg     edx
		neg     eax
		sbb     edx, byte 0
		mov     ch, 0
		xor     ebp, 80000000h
dr@7a1aeh:
		mov     ebx, eax
		or      bl, ch
		or      ebx, edx
		je      short dr@7a205h
		or      bp, bp
		je      short dr@7a207h
		cmp     ch, 0
		jne     short dr@7a1ceh
		rol     edi, 1
		ror     edi, 1
dr@7a1c4h:
		dec     bp
		je      short dr@7a207h
		adc     eax, eax
		adc     edx, edx
		jae     short dr@7a1c4h
dr@7a1ceh:
		inc     bp
		cmp     bp, 7fffh
		je      near dr@7a211h
		stc     
		rcr     edx, 1
		rcr     eax, 1
		jae     short dr@7a203h
		add     edi, edi
		jne     short dr@7a1eah
		ror     eax, 1
		rol     eax, 1
dr@7a1eah:
		adc     eax, byte 0
		adc     edx, byte 0
		jae     short dr@7a203h
		rcr     edx, 1
		rcr     eax, 1
		inc     bp
		cmp     bp, 7fffh
		je      near dr@7a211h
dr@7a203h:
		jmp     short dr@7a207h
dr@7a205h:
		mov     ebp, ebx
dr@7a207h:
		add     ebp, ebp
		rcr     bp, 1
		mov     esi, ebp
		pop     edi
		pop     ebp
		retn    
dr@7a211h:
		mov     bp, 7fffh
		sub     eax, eax
		mov     edx, 80000000h
		jmp     short dr@7a207h
dr@7a21eh:
		push    edi
		push    esi
		mov     si, [eax+8]
		or      si, 8000h
		inc     si
		jne     short dr@7a236h
		mov     esi, [eax+4]
		add     esi, esi
		or      esi, [eax]
		jne     short dr@7a289h
dr@7a236h:
		mov     si, [edx+8]
		or      si, 8000h
		inc     si
		jne     short dr@7a24ch
		mov     esi, [edx+4]
		add     esi, esi
		or      esi, [edx]
		jne     short dr@7a289h
dr@7a24ch:
		mov     esi, [eax+6]
		mov     edi, [edx+6]
		xor     edi, esi
		mov     edi, 0
		js      short dr@7a291h
		mov     si, [eax+8]
		cmp     si, [edx+8]
		jne     short dr@7a271h
		mov     edi, [eax+4]
		cmp     edi, [edx+4]
		jne     short dr@7a271h
		mov     edi, [eax]
		cmp     edi, [edx]
dr@7a271h:
		mov     edi, 0
		je      short dr@7a284h
		rcr     eax, 1
		xor     esi, eax
dr@7a27ch:
		add     esi, esi
		sbb     edi, byte 0
		add     edi, edi
		inc     edi
dr@7a284h:
		mov     eax, edi
		pop     esi
		pop     edi
		retn    
dr@7a289h:
		mov     eax, 2
		pop     esi
		pop     edi
		retn    
dr@7a291h:
		or      edi, [eax]
		or      edi, [edx]
		or      edi, [eax+4]
		or      edi, [edx+4]
		mov     ax, [eax+8]
		shl     eax, 10h
		mov     ax, [edx+8]
		and     eax, 7fff7fffh
		or      eax, edi
		mov     edi, 0
		jne     short dr@7a27ch
		pop     esi
		pop     edi
		retn    
dr@7a2b7h:
		push    esi
		push    ecx
		push    ebx
		mov     si, [edx+8]
		mov     ecx, [edx+4]
		mov     ebx, [edx]
		shl     esi, 10h
		mov     si, [eax+8]
		mov     edx, [eax+4]
		mov     eax, [eax]
		call    near dr@7a2e1h
		pop     ebx
		mov     [ebx], eax
		mov     [ebx+4], edx
		mov     [ebx+8], si
		pop     ecx
		pop     esi
		retn    
dr@7a2e1h:
		or      ecx, ecx
		jne     short dr@7a32ch
		or      ebx, ebx
		jne     short dr@7a32ch
		test    esi, 7fff0000h
		jne     short dr@7a32ch
		or      eax, eax
		jne     short dr@7a316h
		or      edx, edx
		jne     short dr@7a316h
		mov     eax, esi
		add     ax, ax
		jne     short dr@7a316h
;33:0007a300
		mov     al, 1
		mov     ah, 81h
		call    near dr@78b44h
		mov     edx, 0c0000000h
		sub     eax, eax
		mov     si, 0ffffh
		jmp     short dr@7a32bh
dr@7a316h:
		mov     al, 4
		mov     ah, 83h
		call    near dr@78b44h
		mov     edx, 80000000h
		sub     eax, eax
		or      si, 7fffh
dr@7a32bh:
		retn    
dr@7a32ch:
		or      eax, eax
		jne     short dr@7a33dh
		or      edx, edx
		jne     short dr@7a33dh
		add     si, si
		jne     short dr@7a33ah
		retn    
dr@7a33ah:
		rcr     si, 1
dr@7a33dh:
		push    ebp
		mov     ebp, esp
		push    edi
		xchg    ecx, esi
		mov     edi, ecx
		rol     edi, 10h
		sar     edi, 10h
		sar     ecx, 10h
		and     edi, 80007fffh
		and     ecx, 80007fffh
		rol     edi, 10h
		rol     ecx, 10h
		add     di, cx
		rol     edi, 10h
		rol     ecx, 10h
		or      di, di
		jne     short dr@7a378h
dr@7a36eh:
		add     eax, eax
		adc     edx, edx
		dec     di
		or      edx, edx
		jns     short dr@7a36eh
dr@7a378h:
		or      cx, cx
		jne     short dr@7a387h
dr@7a37dh:
		add     ebx, ebx
		adc     esi, esi
		dec     cx
		or      esi, esi
		jns     short dr@7a37dh
dr@7a387h:
		sub     di, cx
		add     di, 3fffh
		js      short dr@7a3aah
		cmp     di, 7fffh
		jb      short dr@7a3aah
		mov     edi, ecx
		mov     di, 7fffh
		mov     edx, 80000000h
		sub     eax, eax
		jmp     near dr@7a482h
dr@7a3aah:
		cmp     di, byte 0ffc0h
		jge     short dr@7a3bbh
		sub     eax, eax
		sub     edx, edx
		sub     edi, edi
		jmp     near dr@7a482h
dr@7a3bbh:
		push    edi
		push    esi
		push    ebx
		mov     ecx, esi
		mov     edi, edx
		mov     esi, eax
		sub     eax, eax
		cmp     ecx, edi
		ja      short dr@7a3cdh
		sub     edx, ecx
		inc     eax
dr@7a3cdh:
		push    eax
		mov     eax, esi
		div     ecx
		push    eax
		xchg    ebx, eax
		mul     ebx
		xchg    ecx, eax
		xchg    ebx, edx
		mul     edx
		add     eax, ebx
		adc     edx, byte 0
		mov     ebx, [ebp-10h]
		test    byte [ebp-14h], 1
		je      short dr@7a3eeh
		add     eax, ebx
		adc     edx, [ebp-0ch]
dr@7a3eeh:
		neg     ecx
		sbb     esi, eax
		sbb     edi, edx
		je      short dr@7a408h
dr@7a3f6h:
		sub     dword [ebp-18h], byte 1
		sbb     dword [ebp-14h], byte 0
		add     ecx, ebx
;33:0007a400
		adc     esi, [ebp-0ch]
		adc     edi, byte 0
		jne     short dr@7a3f6h
dr@7a408h:
		mov     edi, esi
		mov     esi, ecx
		mov     ecx, [ebp-0ch]
		cmp     ecx, edi
		ja      short dr@7a41dh
		sub     edi, ecx
		add     dword [ebp-18h], byte 1
		adc     dword [ebp-14h], byte 0
dr@7a41dh:
		mov     edx, edi
		mov     eax, esi
		div     ecx
		push    eax
		or      eax, eax
		je      short dr@7a454h
		xchg    ebx, eax
		mul     ebx
		xchg    ecx, eax
		xchg    ebx, edx
		mul     edx
		add     eax, ebx
		adc     edx, byte 0
		neg     ecx
		sbb     esi, eax
		sbb     edi, edx
		je      short dr@7a454h
dr@7a43dh:
		sub     dword [ebp-1ch], byte 1
		sbb     dword [ebp-18h], byte 0
		sbb     dword [ebp-14h], byte 0
		add     ecx, [ebp-10h]
		adc     esi, [ebp-0ch]
		adc     edi, byte 0
		jne     short dr@7a43dh
dr@7a454h:
		pop     eax
		pop     edx
		pop     ebx
		add     esp, byte 8
		pop     edi
		dec     di
		shr     ebx, 1
		jae     short dr@7a466h
		rcr     edx, 1
		rcr     eax, 1
		inc     edi
dr@7a466h:
		or      di, di
		jg      short dr@7a482h
		jne     short dr@7a471h
		mov     cl, 1
		jmp     short dr@7a477h
dr@7a471h:
		neg     di
		mov     cx, di
dr@7a477h:
		sub     ebx, ebx
		shrd    eax, edx, cl
		shrd    edx, ebx, cl
		sub     di, di
dr@7a482h:
		add     edi, edi
		rcr     di, 1
		mov     esi, edi
		pop     edi
		pop     ebp
		retn    
dr@7a48ch:
		push    esi
		push    ecx
		push    ebx
		mov     si, [edx+8]
		mov     ecx, [edx+4]
		mov     ebx, [edx]
		shl     esi, 10h
		mov     si, [eax+8]
		mov     edx, [eax+4]
		mov     eax, [eax]
		call    near dr@7a4b6h
		pop     ebx
		mov     [ebx], eax
		mov     [ebx+4], edx
		mov     [ebx+8], si
		pop     ecx
		pop     esi
		retn    
dr@7a4b6h:
		or      eax, eax
		jne     short dr@7a4c7h
		or      edx, edx
		jne     short dr@7a4c7h
		add     si, si
		jne     short dr@7a4c4h
		retn    
dr@7a4c4h:
		rcr     si, 1
dr@7a4c7h:
		or      ecx, ecx
		jne     short dr@7a4deh
		or      ebx, ebx
		jne     short dr@7a4deh
		test    esi, 7fff0000h
		jne     short dr@7a4deh
		sub     eax, eax
		sub     edx, edx
		sub     esi, esi
		retn    
dr@7a4deh:
		push    ebp
		push    edi
		xchg    ecx, esi
		mov     edi, ecx
		rol     edi, 10h
		sar     edi, 10h
		sar     ecx, 10h
		and     edi, 80007fffh
		and     ecx, 80007fffh
		add     ecx, edi
		sub     cx, 3ffeh
;33:0007a500
		jb      short dr@7a50eh
		cmp     cx, 7fffh
		jb      short dr@7a50eh
		jmp     near dr@7a5a5h
dr@7a50eh:
		cmp     cx, byte 0ffc0h
		jge     short dr@7a51fh
		sub     eax, eax
		sub     edx, edx
		sub     ecx, ecx
		jmp     short dr@7a59bh
db	90h,90h,90h
dr@7a51fh:
		push    ecx
		sub     ebp, ebp
		push    esi
		push    edx
		push    eax
		mul     ebx
		xchg    esi, eax
		mov     ecx, edx
		pop     edx
		mul     edx
		mov     edi, edx
		add     ecx, eax
		adc     edi, ebp
		adc     ebp, ebp
		pop     eax
		xchg    ebx, eax
		mul     ebx
		add     ecx, eax
		adc     edi, edx
		adc     ebp, byte 0
		mov     eax, ebx
		pop     edx
		mul     edx
		add     eax, edi
		adc     edx, ebp
		mov     ebx, ecx
		pop     ecx
		js      short dr@7a556h
		add     ebx, ebx
		adc     eax, eax
		adc     edx, edx
		dec     cx
dr@7a556h:
		add     ebx, ebx
		jae     short dr@7a582h
		jne     short dr@7a569h
		or      esi, esi
		setnz   bl
		shr     ebx, 1
		jb      short dr@7a569h
		mov     esi, eax
		shr     esi, 1
dr@7a569h:
		adc     eax, byte 0
		adc     edx, byte 0
		jae     short dr@7a582h
		rcr     edx, 1
		rcr     eax, 1
		inc     cx
		cmp     cx, 7fffh
		je      near dr@7a5a5h
dr@7a582h:
		or      cx, cx
		jg      short dr@7a59bh
		jne     short dr@7a58dh
		mov     cl, 1
		jmp     short dr@7a590h
dr@7a58dh:
		neg     cx
dr@7a590h:
		sub     ebx, ebx
		shrd    eax, edx, cl
		shrd    edx, ebx, cl
		sub     cx, cx
dr@7a59bh:
		add     ecx, ecx
		rcr     cx, 1
		mov     esi, ecx
		pop     edi
		pop     ebp
		retn    
dr@7a5a5h:
		mov     cx, 7fffh
		mov     edx, 80000000h
		sub     eax, eax
		jmp     short dr@7a59bh
		push    ebx
		mov     bl, 0a0h
		jmp     short dr@7a60fh
		push    ebx
		mov     bh, [eax+9]
		push    ecx
		mov     cx, [eax+8]
		and     cx, 7fffh
		jne     short dr@7a5cbh
		sub     eax, eax
		jmp     short dr@7a604h
dr@7a5cbh:
		sub     cx, 3ffeh
		jg      short dr@7a5d8h
		add     bh, bh
		sbb     eax, eax
		jmp     short dr@7a604h
dr@7a5d8h:
		cmp     cx, byte 1fh
		jle     short dr@7a5e5h
		mov     eax, 80000000h
		jmp     short dr@7a604h
dr@7a5e5h:
		mov     ch, bh
		mov     ebx, [eax]
		mov     eax, [eax+4]
		push    edx
		sub     edx, edx
		shld    edx, eax, cl
		shl     eax, cl
		or      ebx, eax
		mov     eax, edx
		pop     edx
		add     ch, ch
		jae     short dr@7a604h
		or      ebx, ebx
		je      short dr@7a602h
		inc     eax
dr@7a602h:
		neg     eax
dr@7a604h:
		pop     ecx
		pop     ebx
		retn    
dr@7a607h:
		push    ebx
		mov     bl, 1fh
		jmp     short dr@7a60fh
dr@7a60ch:
		push    ebx
		mov     bl, 20h
dr@7a60fh:
		mov     bh, [eax+9]
		shr     bh, 1
		or      bh, bl
		push    ecx
		mov     cx, [eax+8]
		and     cx, 7fffh
		sub     cx, 3ffeh
		jl      short dr@7a671h
		cmp     cx, byte 20h
		jg      short dr@7a669h
		and     bl, 3fh
		cmp     cl, bl
		jg      short dr@7a669h
		mov     ch, bh
		mov     ebx, [eax]
		mov     eax, [eax+4]
		add     ebx, ebx
		rcr     ch, 1
		cmp     cl, 20h
		jne     short dr@7a648h
		add     ch, ch
		jmp     short dr@7a655h
dr@7a648h:
		sub     ebx, ebx
		shld    ebx, eax, cl
		shl     eax, cl
		add     ch, ch
		add     eax, eax
		mov     eax, ebx
dr@7a655h:
		mov     cl, 0ffh
		rcr     cl, 1
		and     ch, cl
		add     ch, ch
		adc     eax, byte 0
		add     ch, ch
		jae     short dr@7a666h
		neg     eax
dr@7a666h:
		pop     ecx
		pop     ebx
		retn    
dr@7a669h:
		mov     eax, 80000000h
		pop     ecx
		pop     ebx
		retn    
dr@7a671h:
		sub     eax, eax
		pop     ecx
		pop     ebx
		retn    
dr@7a676h:
		push    ebx
		mov     ebx, edx
		or      eax, eax
		jns     short dr@7a686h
		neg     eax
		mov     edx, 0bfffh
		jmp     short dr@7a68fh
dr@7a686h:
		pop     ebx
dr@7a687h:
		push    ebx
		mov     ebx, edx
		mov     edx, 3fffh
dr@7a68fh:
		push    ecx
		or      eax, eax
		je      short dr@7a6aah
		bsr     ecx, eax
		mov     ch, cl
		mov     cl, 1fh
		sub     cl, ch
		shl     eax, cl
		mov     cl, ch
		movzx   ecx, ch
		add     ecx, edx
		mov     edx, eax
		jmp     short dr@7a6aeh
dr@7a6aah:
		sub     edx, edx
		sub     ecx, ecx
dr@7a6aeh:
		sub     eax, eax
		mov     [ebx], eax
		mov     [ebx+4], edx
		mov     [ebx+8], cx
		pop     ecx
		pop     ebx
		retn    
dr@7a6bch:
		push    ecx
		mov     ecx, edx
		shld    edx, eax, 0bh
		shl     eax, 0bh
		sar     ecx, 14h
		and     cx, 7ffh
		je      short dr@7a707h
		cmp     cx, 7ffh
		je      short dr@7a6deh
		add     cx, 3c00h
		jmp     short dr@7a6ffh
dr@7a6deh:
		mov     cx, 7fffh
		test    edx, 7fffffffh
		jne     short dr@7a6ech
		or      eax, eax
dr@7a6ech:
		je      short dr@7a6ffh
		push    eax
		mov     al, 1
		mov     ah, 81h
		call    near dr@78b44h
		pop     eax
		or      edx, 40000000h
dr@7a6ffh:
		or      edx, 80000000h
		jmp     short dr@7a72ch
dr@7a707h:
		or      edx, edx
		jne     short dr@7a713h
		or      eax, eax
		jne     short dr@7a713h
		sub     ecx, ecx
		jmp     short dr@7a72ch
dr@7a713h:
		mov     cx, 3c01h
		or      edx, edx
		jne     short dr@7a720h
		xchg    edx, eax
		sub     cx, byte 20h
dr@7a720h:
		or      edx, edx
		js      short dr@7a72ch
		add     eax, eax
		adc     edx, edx
		dec     cx
		jmp     short dr@7a720h
dr@7a72ch:
		mov     [ebx], eax
		mov     [ebx+4], edx
		add     ecx, ecx
		rcr     cx, 1
		mov     [ebx+8], cx
		pop     ecx
		retn    
dr@7a73ch:
		push    edx
		push    ecx
		push    ebx
		mov     ebx, eax
		mov     edx, 0ffffff00h
		mov     eax, [ebx+4]
		mov     ecx, eax
		shl     ecx, 19h
		mov     cx, [ebx+8]
		jae     short dr@7a76bh
		jne     short dr@7a75dh
		cmp     dword [ebx], byte 0
		jne     short dr@7a75dh
		add     edx, edx
dr@7a75dh:
		add     eax, 100h
		jae     short dr@7a76bh
		mov     eax, 80000000h
		inc     cx
dr@7a76bh:
		and     eax, edx
		mov     ebx, ecx
		and     cx, 7fffh
		je      short dr@7a7b7h
		cmp     cx, 7fffh
		jne     short dr@7a78eh
		add     eax, eax
		shr     eax, 8
		or      eax, 0ff000000h
		add     bx, bx
		rcr     eax, 1
		jmp     short dr@7a7b7h
dr@7a78eh:
		add     cx, 0c080h
		jns     short dr@7a799h
		sub     eax, eax
		jmp     short dr@7a7b7h
dr@7a799h:
		cmp     cx, 0ffh
		jl      short dr@7a7ach
		mov     eax, 0ff000000h
		add     bx, bx
		rcr     eax, 1
		jmp     short dr@7a7b7h
dr@7a7ach:
		add     eax, eax
		shrd    eax, ecx, 8
		add     bx, bx
		rcr     eax, 1
dr@7a7b7h:
		pop     ebx
		pop     ecx
		pop     edx
		retn    
dr@7a7bbh:
		push    ecx
		push    ebx
		push    esi
		mov     cx, [eax+8]
		mov     edx, [eax+4]
		mov     eax, [eax]
		mov     esi, 0fffff800h
		mov     ebx, eax
		shl     ebx, 16h
		jae     short dr@7a7e8h
		jne     short dr@7a7d7h
		add     esi, esi
dr@7a7d7h:
		add     eax, 800h
		adc     edx, byte 0
		jae     short dr@7a7e8h
		mov     edx, 80000000h
		inc     cx
dr@7a7e8h:
		and     eax, esi
		mov     ebx, ecx
		and     cx, 7fffh
		add     cx, 0c400h
		cmp     cx, 7ffh
		jae     short dr@7a81eh
		or      cx, cx
;33:0007a800
		jne     short dr@7a80dh
		shrd    eax, edx, 0ch
		add     edx, edx
		shr     edx, 0ch
		jmp     short dr@7a817h
dr@7a80dh:
		shrd    eax, edx, 0bh
		add     edx, edx
		shrd    edx, ecx, 0bh
dr@7a817h:
		add     bx, bx
		rcr     edx, 1
		jmp     short dr@7a87eh
dr@7a81eh:
		cmp     cx, 0c400h
		jb      short dr@7a858h
		cmp     cx, byte 0ffcch
		jl      short dr@7a852h
		sub     cx, byte 0ch
		neg     cx
		cmp     cl, 20h
		jb      short dr@7a840h
		sub     cl, 20h
		mov     esi, eax
		mov     eax, edx
		sub     edx, edx
dr@7a840h:
		shrd    esi, eax, cl
		shrd    eax, edx, cl
		shr     edx, cl
		add     esi, esi
		adc     eax, byte 0
		adc     edx, byte 0
		jmp     short dr@7a856h
dr@7a852h:
		sub     eax, eax
		sub     edx, edx
dr@7a856h:
		jmp     short dr@7a87eh
dr@7a858h:
		shrd    eax, edx, 0bh
		add     edx, edx
		shr     edx, 0bh
		add     bx, bx
		rcr     edx, 1
		or      edx, 7ff00000h
		cmp     cx, 43ffh
		je      short dr@7a87eh
		push    eax
		mov     al, 8
		mov     ah, 84h
		call    near dr@78b44h
		pop     eax
dr@7a87eh:
		pop     esi
		pop     ebx
;33:0007a880
		pop     ecx
		retn    
dr@7a882h:
		push    ecx
		push    ebx
		mov     ebx, edx
		sub     edx, edx
		mov     ecx, eax
		sar     ecx, 17h
		and     cx, 0ffh
		je      short dr@7a8bbh
		shl     eax, 8
		cmp     cl, 0ffh
		je      short dr@7a8a3h
		add     cx, 3f80h
		jmp     short dr@7a8b1h
dr@7a8a3h:
		mov     ch, 0ffh
		and     eax, 7fffffffh
		je      short dr@7a8b1h
		or      eax, 40000000h
dr@7a8b1h:
		add     ecx, ecx
		rcr     cx, 1
		or      eax, 80000000h
dr@7a8bbh:
		mov     [ebx], edx
		mov     [ebx+4], eax
		mov     [ebx+8], cx
		pop     ebx
		pop     ecx
		retn    
dr@7a8c7h:
db	0ffh,0ffh,0ffh,7fh,0ffh,0ffh,0ffh,3fh,0ffh,0ffh,0ffh,1fh,0ffh,0ffh,0ffh,0fh
db	0ffh,0ffh,0ffh,7,0ffh,0ffh,0ffh,3,0ffh,0ffh,0ffh,1,0ffh,0ffh,0ffh,0
db	0ffh,0ffh,7fh,0,0ffh,0ffh,3fh,0,0ffh,0ffh,1fh,0,0ffh,0ffh,0fh,0
db	0ffh,0ffh,7,0,0ffh,0ffh,3,0,0ffh
;33:0007a900
db	0ffh,1,0,0ffh,0ffh,0,0,0ffh,7fh,0,0,0ffh,3fh,0,0,0ffh
db	1fh,0,0,0ffh,0fh,0,0,0ffh,7,0,0,0ffh,3,0,0,0ffh
db	1,0,0,0ffh,0,0,0,7fh,0,0,0,3fh,0,0,0,1fh
db	0,0,0,0fh,0,0,0,7,0,0,0,3,0,0,0,1
db	0,0,0,0,0,0,0
dr@7a947h:
		push    edi
		mov     edi, eax
		sub     ebx, ebx
		mov     bx, [edi+8]
		cmp     dx, 400h
		je      short dr@7a95ch
		cmp     dx, 800h
dr@7a95ch:
		jne     short dr@7a967h
		or      bh, bh
		jns     short dr@7a967h
		xor     dx, 0c00h
dr@7a967h:
		cmp     dx, 0c00h
		jne     short dr@7a972h
		mov     dx, 400h
dr@7a972h:
		and     bx, 7fffh
		sub     bx, 403fh
		jl      short dr@7a980h
		pop     edi
		retn    
;33:0007a980
dr@7a980h:
		mov     ecx, [edi]
		add     bx, byte 20h
		jl      short dr@7a9d6h
		mov     eax, [cs:ebx*4+dr@7a8c7h]
		and     ecx, eax
		xor     [edi], ecx
		inc     eax
		cmp     dx, 400h
		je      short dr@7a9d4h
		cmp     dx, byte 0
		jne     short dr@7a9c1h
		add     ecx, ecx
		cmp     eax, ecx
		ja      near dr@7a9d4h
		jne     short dr@7a9c1h
		rol     eax, 1
		jae     short dr@7a9b7h
		test    [edi+4], eax
		jmp     short dr@7a9b9h
dr@7a9b7h:
		test    [edi], eax
dr@7a9b9h:
		je      near dr@7a9d4h
		ror     eax, 1
dr@7a9c1h:
		or      ecx, ecx
		je      short dr@7a9d4h
		add     [edi], eax
		adc     dword [edi+4], byte 0
		jae     short dr@7a9d4h
		rcr     dword [edi+4], 1
		inc     word [edi+8]
dr@7a9d4h:
		pop     edi
		retn    
dr@7a9d6h:
		push    esi
		mov     dword [edi], 0
		mov     esi, [edi+4]
		add     bx, byte 20h
		jl      short dr@7aa39h
		mov     eax, [cs:ebx*4+dr@7a8c7h]
		and     esi, eax
		xor     [edi+4], esi
		inc     eax
		cmp     dx, 400h
		je      short dr@7aa36h
		cmp     dx, byte 0
		jne     short dr@7aa26h
		rol     ecx, 1
		adc     esi, esi
		cmp     eax, esi
		ja      near dr@7aa36h
		jne     short dr@7aa26h
		or      ecx, ecx
		jne     near dr@7aa2ah
		add     eax, eax
		jb      short dr@7aa1eh
		test    [edi+4], eax
dr@7aa1eh:
		je      near dr@7aa36h
		shr     eax, 1
dr@7aa26h:
		or      ecx, esi
		je      short dr@7aa36h
dr@7aa2ah:
		add     [edi+4], eax
		jae     short dr@7aa36h
		rcr     dword [edi+4], 1
		inc     word [edi+8]
dr@7aa36h:
		pop     esi
		pop     edi
		retn    
dr@7aa39h:
		cmp     dx, 400h
		je      short dr@7aa6eh
		cmp     dx, byte 0
		jne     short dr@7aa5eh
		inc     bx
		jne     near dr@7aa6eh
		cmp     esi, 80000000h
		jne     short dr@7aa5eh
		or      ecx, ecx
		je      near dr@7aa6eh
dr@7aa5eh:
		mov     dword [edi+4], 80000000h
		or      word [edi+8], 3fffh
		pop     esi
		pop     edi
		retn    
dr@7aa6eh:
		sub     eax, eax
		mov     [edi+4], eax
		mov     [edi+8], ax
		pop     esi
		pop     edi
		retn    
dr@7aa7ah:
db	4eh,18h,0e6h,0c0h,0e4h,0c7h
;33:0007aa80
db	0d1h,0b5h,0fah,3fh,29h,0bh,1,8,8,9bh,0c6h,84h,0fbh,0bfh,1ah,26h
db	0c5h,6ch,2eh,2,46h,9dh,0fbh,3fh,2ah,98h,6bh,0ah,9dh,0b9h,2bh,0bah
db	0fbh,0bfh,71h,1,2bh,95h,27h,27h,8eh,0e3h,0fbh,3fh,0fch,68h,9ch,0ddh
db	72h,24h,49h,92h,0fch,0bfh,0c1h,0adh,0ebh,94h,0cch,0cch,0cch,0cch,0fch,3fh
db	0f2h,81h,97h,0aah,0aah,0aah,0aah,0aah,0fdh,0bfh,0,0,0,0,0,0
db	0,80h,0ffh,3fh
dr@7aad4h:
		push    edi
		push    esi
		push    ecx
		mov     edi, eax
		mov     cx, [edi+8]
		shl     cx, 1
		jne     short dr@7ab12h
		test    byte [edx+9], 80h
		je      short dr@7aafdh
		mov     word [ebx+8], 4000h
		mov     dword [ebx+4], 0c90fdaa2h
		mov     dword [ebx], 2168c235h
		jmp     short dr@7ab10h
dr@7aafdh:
		mov     word [ebx+8], 0
		mov     dword [ebx+4], 0
		mov     dword [ebx], 0
dr@7ab10h:
		jmp     short dr@7ab86h
dr@7ab12h:
		mov     cx, [edx+8]
		shl     cx, 1
		jne     short dr@7ab3ah
		mov     ax, [edi+8]
		and     ax, 8000h
		or      ax, 3fffh
		mov     [ebx+8], ax
		mov     dword [ebx+4], 0c90fdaa2h
		mov     dword [ebx], 2168c235h
		jmp     short dr@7ab86h
dr@7ab3ah:
		mov     ch, [edi+9]
		call    near dr@7a2b7h
		mov     eax, ebx
		call    near dr@7ab8ah
		mov     dl, [ebx+9]
		or      ch, ch
		js      short dr@7ab6ch
		or      dl, dl
		jns     short dr@7ab6ah
		mov     eax, ebx
		push    4000h
		push    0c90fdaa2h
		push    2168c235h
		call    near dr@7a082h
dr@7ab6ah:
		jmp     short dr@7ab86h
dr@7ab6ch:
		or      dl, dl
		jle     short dr@7ab86h
		mov     eax, ebx
		push    0c000h
		push    0c90fdaa2h
		push    2168c235h
		call    near dr@7a082h
dr@7ab86h:
		pop     ecx
		pop     esi
		pop     edi
		retn    
dr@7ab8ah:
		push    edi
		push    esi
		push    ecx
		mov     edi, eax
		mov     ch, 0
		mov     cl, [edi+9]
		and     byte [edi+9], 7fh
		cmp     word [edi+8], 3fffh
		jne     short dr@7abcch
		cmp     dword [edi+4], 80000000h
		jne     short dr@7abcch
		cmp     dword [edi], byte 0
		jne     short dr@7abcch
		mov     dword [edi], 2168c235h
		mov     dword [edi+4], 0c90fdaa2h
		mov     ax, 3ffeh
		and     cl, 80h
		or      ah, cl
		mov     [edi+8], ax
		pop     ecx
		pop     esi
		pop     edi
		retn    
dr@7abcch:
		push    edx
		push    ebx
		cmp     word [edi+8], 3fffh
		jl      short dr@7ac02h
		push    ecx
		mov     si, [edi+8]
		mov     ecx, [edi+4]
		mov     ebx, [edi]
		shl     esi, 10h
		mov     si, 3fffh
		mov     edx, 80000000h
		mov     eax, 0
		call    near dr@7a2e1h
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		pop     ecx
;33:0007ac00
		mov     ch, 2
dr@7ac02h:
		mov     ax, [edi+8]
		cmp     ax, word 3ffdh
		jne     short dr@7ac1dh
		mov     eax, [edi+4]
		cmp     eax, dword 8930a2f4h
		jne     short dr@7ac1dh
		mov     eax, [edi]
		cmp     eax, dword 0f66ab09bh
dr@7ac1dh:
		jbe     short dr@7ac90h
		push    ecx
		mov     ebx, 0c265539eh
		mov     ecx, 0ddb3d742h
		mov     esi, 3fff0000h
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		call    near dr@7a0b2h
		push    eax
		push    edx
		push    esi
		mov     ebx, 0c265539eh
		mov     ecx, 0ddb3d742h
		mov     esi, 3fff0000h
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		call    near dr@7a4b6h
		sub     ebx, ebx
		mov     ecx, 80000000h
		rol     esi, 10h
		mov     si, 0bfffh
		rol     esi, 10h
		call    near dr@7a0b2h
		pop     ebx
		shl     ebx, 10h
		mov     bx, si
		mov     esi, ebx
		pop     ecx
		pop     ebx
		call    near dr@7a2e1h
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		pop     ecx
		or      ch, 1
dr@7ac90h:
		mov     eax, edi
		lea     edx, [dr@7aa7ah]
		mov     ebx, 8
		call    near dr@7b706h
		shr     ch, 1
		jae     short dr@7acbeh
		mov     eax, edi
		push    3ffeh
		push    860a91c1h
		push    6b9b2c23h
		mov     ebx, edi
		call    near dr@7a082h
dr@7acbeh:
		shr     ch, 1
		jae     short dr@7acdeh
		push    0bfffh
		push    0c90fdaa2h
		push    2168c235h
		mov     eax, edi
		mov     ebx, edi
		call    near dr@7a082h
		xor     byte [ebx+9], 80h
dr@7acdeh:
		cmp     cl, 0
		jns     short dr@7ace7h
		xor     byte [edi+9], 80h
dr@7ace7h:
		pop     ebx
		pop     edx
		pop     ecx
		pop     esi
		pop     edi
		retn    
dr@7acedh:
		cmp     word [eax+8], byte 0
		jne     short dr@7ad02h
		cmp     dword [eax+4], byte 0
		jne     short dr@7ad02h
		cmp     dword [eax], byte 0
		jne     short dr@7ad02h
		sub     eax, eax
		retn    
dr@7ad02h:
		cmp     word [edx+8], byte 0
		jne     short dr@7ad22h
		cmp     dword [edx+4], byte 0
		jne     short dr@7ad22h
		cmp     dword [edx], byte 0
		jne     short dr@7ad22h
		sub     edx, edx
		mov     [eax], edx
		mov     [eax+4], edx
		mov     [eax+8], dx
		sub     eax, eax
		retn    
dr@7ad22h:
		push    ebp
		push    esi
		push    edi
		push    edx
		push    ecx
		push    ebx
		push    eax
		mov     si, [eax+8]
		mov     di, [edx+8]
		mov     ecx, [edx+4]
		mov     ebx, [edx]
		mov     edx, [eax+4]
		mov     eax, [eax]
		call    near dr@7ad53h
		pop     ecx
		mov     [ecx], eax
		mov     [ecx+4], edx
		mov     [ecx+8], si
		mov     eax, edi
		pop     ebx
		pop     ecx
		pop     edx
		pop     edi
		pop     esi
		pop     ebp
		retn    
dr@7ad53h:
		push    esi
		push    edi
		and     esi, 7fffh
		and     edi, 7fffh
		sub     esi, edi
		jl      short dr@7adb2h
		sub     edi, edi
dr@7ad67h:
		cmp     ecx, edx
		jne     short dr@7ad73h
		cmp     ebx, eax
		je      near dr@7ad75h
dr@7ad73h:
		jae     short dr@7ad7ah
dr@7ad75h:
		sub     eax, ebx
		sbb     edx, ecx
		stc     
dr@7ad7ah:
		adc     edi, edi
		dec     esi
		jl      near dr@7ad8fh
		add     eax, eax
		adc     edx, edx
		jb      short dr@7ad75h
		or      edx, edx
		js      short dr@7ad67h
		jmp     short dr@7ad7ah
dr@7ad8fh:
		sub     esi, esi
		or      eax, eax
		jne     short dr@7ad9bh
		or      edx, edx
		jne     short dr@7ad9bh
		jmp     short dr@7adb0h
dr@7ad9bh:
		or      edx, edx
		js      short dr@7ada6h
		adc     eax, eax
		adc     edx, edx
		dec     esi
		jmp     short dr@7ad9bh
dr@7ada6h:
		pop     ecx
		push    ecx
		and     ecx, 7fffh
		add     esi, ecx
dr@7adb0h:
		jmp     short dr@7adb6h
dr@7adb2h:
		add     esi, edi
		sub     edi, edi
dr@7adb6h:
		pop     ecx
		pop     ebx
		and     ebx, 8000h
		or      esi, ebx
		or      edx, edx
		jne     short dr@7adc6h
		sub     esi, esi
dr@7adc6h:
		xor     bx, cx
		jns     short dr@7adcdh
		neg     edi
dr@7adcdh:
		retn    
dr@7adceh:
		push    ebx
		push    edx
		mov     ebx, eax
		mov     ax, [cs:edi+dr@7858ah]
		mov     edx, eax
		and     ax, [ds:ebp+8]
		cmp     ax, dx
		jne     short dr@7adech
		mov     al, 41h
		mov     dh, 0
		jmp     short dr@7ae5fh
dr@7adech:
		not     edx
		and     [ds:ebp+8], dx
		mov     ax, [ebx+8]
		mov     edx, eax
		and     dh, 80h
		rol     dh, 1
		shl     dh, 1
;33:0007ae00
		and     ax, 7fffh
		jne     short dr@7ae20h
		mov     eax, [ebx+4]
		or      eax, [ebx]
		mov     al, 44h
		jne     short dr@7ae1eh
		mov     ax, [cs:edi+dr@78584h]
		or      [ds:ebp+8], ax
		mov     al, 40h
dr@7ae1eh:
		jmp     short dr@7ae5fh
dr@7ae20h:
		cmp     ax, word 7fffh
		jne     short dr@7ae48h
		mov     ax, [cs:edi+dr@78588h]
		or      [ds:ebp+8], ax
		cmp     dword [ebx], byte 0
		jne     short dr@7ae40h
		mov     eax, [ebx+4]
		cmp     eax, dword 80000000h
dr@7ae40h:
		mov     al, 1
		jne     short dr@7ae46h
		mov     al, 5
dr@7ae46h:
		jmp     short dr@7ae5fh
dr@7ae48h:
		test    byte [ebx+7], 80h
		mov     al, 4
		jne     short dr@7ae5fh
		mov     ax, [cs:edi+dr@78588h]
		or      [ds:ebp+8], ax
		mov     al, 44h
dr@7ae5fh:
		or      al, dh
		mov     dx, [ds:ebp+4]
		and     dx, 0b8ffh
		or      dh, al
		mov     [ds:ebp+4], dx
		pop     edx
		pop     ebx
		retn    
db	90h
dr@7ae76h:
db	0e9h,46h,0e9h,0b5h,9ah,0adh,20h,0cah,0feh,0bfh
;33:0007ae80
db	9,65h,7fh,0b5h,0,51h,12h,83h,3,40h,28h,0d2h,0ach,9dh,95h,0f8h
db	3fh,80h,5,0c0h
dr@7ae94h:
db	0,0,0,0,0,0,0,80h,0ffh,3fh,0bbh,76h,70h,3eh,5bh,2
db	0ach,8eh,4,0c0h,60h,0efh,33h,0a9h,0d0h,1fh,4,9ch,7,40h,96h,0bbh
db	83h,6ch,0e0h,0f4h,5fh,0c0h,8,0c0h
dr@7aebch:
		push    ebx
		push    edx
		push    eax
		push    3fffh
		push    80000000h
		push    byte 0
		mov     ebx, eax
		call    near dr@7a082h
		pop     eax
		pop     edx
		pop     ebx
dr@7aed5h:
		push    edi
		push    esi
		push    edx
		push    ecx
		push    ebx
		push    eax
		call    near dr@7af18h
		pop     eax
		mov     ebx, edx
		push    edx
		call    near dr@7a48ch
		pop     edi
		mov     si, [edi+8]
		mov     ecx, [edi+4]
		mov     ebx, [edi]
		shl     esi, 10h
		mov     si, 3fffh
		mov     edx, 0b8aa3b29h
		mov     eax, 5c17f0bdh
		call    near dr@7a4b6h
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		pop     ebx
		pop     ecx
		pop     edx
		pop     esi
		pop     edi
		retn    
dr@7af18h:
		push    edi
		push    esi
		push    edx
		push    ecx
		push    ebx
		sub     ecx, ecx
		mov     cx, [eax+8]
		or      cx, cx
		js      short dr@7af2ah
		jmp     short dr@7af2ah
dr@7af2ah:
		mov     edi, eax
		mov     edx, 3ffeh
		sub     ecx, 3ffeh
		push    ecx
		mov     [edi+8], dx
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     esi, 0bffe3ffeh
		mov     ecx, 80000000h
		sub     ebx, ebx
		call    near dr@7a0b2h
		cmp     word [edi+8], 3ffeh
		jne     short dr@7af69h
		cmp     dword [edi+4], 0b504f333h
		jne     short dr@7af69h
		cmp     dword [edi], 0f9de6484h
dr@7af69h:
		jbe     short dr@7af85h
		and     esi, 0ffffh
		or      esi, 0bffe0000h
		mov     ecx, 80000000h
		sub     ebx, ebx
		call    near dr@7a0b2h
		jmp     short dr@7af91h
dr@7af85h:
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		dec     dword [esp]
dr@7af91h:
		push    eax
		push    edx
		push    esi
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		dec     si
		and     esi, 0ffffh
		or      esi, 3ffe0000h
		mov     ecx, 80000000h
		sub     ebx, ebx
		call    near dr@7a0b2h
		shl     esi, 10h
		mov     ecx, edx
		mov     ebx, eax
		pop     eax
		mov     si, ax
		pop     edx
		pop     eax
		call    near dr@7a2e1h
		push    eax
		push    edx
		push    esi
		mov     ecx, esi
		shl     esi, 10h
		mov     si, cx
		mov     ecx, edx
		mov     ebx, eax
		call    near dr@7a4b6h
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		mov     ebx, 3
		lea     ecx, [dr@7ae94h]
		call    near dr@7b6b4h
		push    eax
		push    edx
		push    esi
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		lea     ecx, [dr@7ae76h]
		mov     ebx, 2
		call    near dr@7b6b4h
		pop     ecx
		rol     esi, 10h
		mov     si, cx
		rol     esi, 10h
		pop     ecx
		pop     ebx
		call    near dr@7a2e1h
		mov     ebx, [edi]
		mov     ecx, [edi+4]
		rol     esi, 10h
		mov     si, [edi+8]
		rol     esi, 10h
		call    near dr@7a4b6h
		rol     esi, 10h
		mov     si, [esp]
		rol     esi, 10h
		mov     ecx, [esp+4]
		mov     ebx, [esp+8]
		call    near dr@7a4b6h
		rol     esi, 10h
		pop     ecx
		mov     si, cx
		rol     esi, 10h
		pop     ecx
		pop     ebx
		call    near dr@7a0b2h
		pop     ecx
		or      ecx, ecx
		je      short dr@7b0dah
		push    eax
		push    edx
		push    esi
		mov     edx, edi
		mov     eax, ecx
		call    near dr@7a676h
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		and     esi, 0ffffh
		or      esi, 0bff20000h
		mov     ecx, 0de8082e3h
		mov     ebx, 865435ch
		call    near dr@7a4b6h
		pop     ecx
		rol     esi, 10h
		mov     si, cx
		rol     esi, 10h
		pop     ecx
		pop     ebx
		call    near dr@7a0b2h
		push    eax
		push    edx
		push    esi
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		and     esi, 0ffffh
		or      esi, 3ffe0000h
		mov     ecx, 0b1800000h
		sub     ebx, ebx
		call    near dr@7a4b6h
		pop     ecx
		rol     esi, 10h
		mov     si, cx
		rol     esi, 10h
		pop     ecx
		pop     ebx
		call    near dr@7a0b2h
dr@7b0dah:
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		pop     ebx
		pop     ecx
		pop     edx
		pop     esi
		pop     edi
		retn    
db	90h
dr@7b0eah:
db	59h,53h,6ah,85h,81h,3bh,96h,0cah,0ceh,3fh,8fh,0f8h,0c0h,9dh,39h,9fh
db	3fh,0d7h,0d6h,0bfh,0e5h,4bh
;33:0007b100
db	68h,43h,9dh,30h,92h,0b0h,0deh,3fh,7fh,1ch,27h,0aah,3fh,2bh,32h,0d7h
db	0e5h,0bfh,7dh,9ch,39h,0b6h,2ah,1dh,0efh,0b8h,0ech,3fh,0ch,0d0h,0,0dh
db	0d0h,0,0dh,0d0h,0f2h,0bfh,88h,88h,88h,88h,88h,88h,88h,88h,0f8h,3fh
db	0aah,0aah,0aah,0aah,0aah,0aah,0aah,0aah,0fch,0bfh,0,0,0,0,0,0
db	0,80h,0ffh,3fh
dr@7b144h:
db	8fh,0f8h,0c0h,9dh,39h,9fh,3fh,0d7h,0d2h,3fh,5,0e9h,0e4h,3,46h,0a5h
db	0cbh,0c9h,0dah,0bfh,0aah,0bdh,0c4h,0c6h,7fh,0c7h,76h,8fh,0e2h,3fh,97h,0e3h
db	0fah,0c4h,0bbh,7dh,0f2h,93h,0e9h,0bfh,0dh,0d0h,0,0dh,0d0h,0,0dh,0d0h
db	0efh,3fh,0bh,0b6h,60h,0bh,0b6h,60h,0bh,0b6h,0f5h,0bfh
;33:0007b180
db	0aah,0aah,0aah,0aah,0aah,0aah,0aah,0aah,0fah,3fh,0,0,0,0,0,0
db	0,80h,0feh,0bfh,0,0,0,0,0,0,0,80h,0ffh,3fh
dr@7b19eh:
db	0,0,1,0,2,0,3,0,4,0,4,0,5,0,5,0
db	6,0
dr@7b1b0h:
		push    ebp
		push    edi
		push    edx
		push    ecx
		push    ebx
		mov     ebp, esp
		sub     esp, byte 0ch
		mov     edi, eax
		sub     ecx, ecx
		mov     cx, [eax+8]
		and     cx, 7fffh
		sub     cx, 3ffeh
		cmp     cx, byte 20h
		jl      short dr@7b1d2h
dr@7b1d2h:
		push    ecx
		push    esi
		push    edi
		mov     si, [eax+8]
		mov     di, 3ffeh
		mov     ecx, 0c90fdaa2h
		mov     ebx, 2168c235h
		mov     edx, [eax+4]
		mov     eax, [eax]
		call    near dr@7ad53h
		pop     ecx
		mov     [ecx], eax
		mov     [ecx+4], edx
		mov     [ecx+8], si
		mov     eax, edi
		mov     edi, ecx
		pop     esi
;33:0007b200
		test    byte [edi+9], 80h
		je      short dr@7b221h
		push    eax
		mov     ebx, edi
		mov     eax, edi
		push    3ffeh
		push    0c90fdaa2h
		push    2168c235h
		call    near dr@7a082h
		pop     eax
		dec     eax
dr@7b221h:
		mov     ebx, esi
		mov     ah, bl
		and     bl, 2
		add     al, bl
		and     al, 7
		push    eax
		test    al, 1
		je      short dr@7b24dh
		push    0bffeh
		push    0c90fdaa2h
		push    2168c235h
		mov     eax, edi
		mov     ebx, edi
		call    near dr@7a082h
		xor     byte [ebx+9], 80h
dr@7b24dh:
		sub     ecx, ecx
		mov     cx, [edi+8]
		sub     cx, 3ffeh
		cmp     cx, byte 0ffe0h
		jge     short dr@7b277h
		mov     dword [ebp-0ch], 0
		mov     dword [ebp-8], 80000000h
		mov     word [ebp-4], 3fffh
		jmp     near dr@7b30eh
dr@7b277h:
		or      cx, cx
		js      short dr@7b280h
		mov     cx, 0
;33:0007b280
dr@7b280h:
		neg     cx
		cmp     cx, byte 8
		jle     short dr@7b28dh
		mov     cx, 8
dr@7b28dh:
		mov     cx, [cs:NoSplit ecx*2+dr@7b19eh]
		push    ecx
		mov     eax, [ebp-14h]
		inc     al
		and     al, 2
		jne     short dr@7b2a7h
		cmp     ah, 1
		je      short dr@7b2a7h
		jmp     short dr@7b2e5h
dr@7b2a7h:
		push    eax
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		shl     esi, 10h
		mov     si, [edi+8]
		mov     ebx, eax
		mov     ecx, edx
		call    near dr@7a4b6h
		mov     ecx, [ebp-18h]
		mov     ebx, 8
		sub     ebx, ecx
		lea     ecx, [ecx+ecx*4]
		lea     ecx, [NoSplit ecx*2+dr@7b144h]
		call    near dr@7b6b4h
		mov     [ebp-0ch], eax
		mov     [ebp-8], edx
		mov     [ebp-4], si
		pop     eax
dr@7b2e5h:
		cmp     al, 0
		je      short dr@7b2f0h
		cmp     ah, 1
		je      short dr@7b2f0h
		jmp     short dr@7b30eh
dr@7b2f0h:
		mov     eax, edi
		mov     ecx, [ebp-18h]
		mov     ebx, 8
		sub     ebx, ecx
		lea     ecx, [ecx+ecx*4]
		add     ecx, ecx
		lea     edx, [dr@7b0eah]
		add     edx, ecx
		call    near dr@7b706h
dr@7b30eh:
		mov     eax, [ebp-14h]
		inc     al
		and     al, 2
		je      short dr@7b323h
		mov     eax, [ebp-0ch]
		mov     edx, [ebp-8]
		mov     si, [ebp-4]
		jmp     short dr@7b32ch
dr@7b323h:
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
dr@7b32ch:
		mov     ecx, [ebp-14h]
		test    cl, 4
		je      short dr@7b339h
		xor     si, 8000h
dr@7b339h:
		cmp     ch, 1
		jne     short dr@7b396h
		rol     esi, 10h
		add     cl, 2
		mov     bl, cl
		inc     bl
		and     bl, 2
		je      short dr@7b35ch
		and     cl, 4
		mov     ebx, [ebp-0ch]
		mov     ecx, [ebp-8]
		mov     si, [ebp-4]
		jmp     short dr@7b368h
dr@7b35ch:
		and     cl, 4
		mov     ebx, [edi]
		mov     ecx, [edi+4]
		mov     si, [edi+8]
dr@7b368h:
		je      short dr@7b370h
		xor     esi, 8000h
dr@7b370h:
		rol     esi, 10h
		or      ebx, ebx
		jne     short dr@7b391h
		or      ecx, ecx
		jne     short dr@7b391h
		test    esi, 7fff0000h
		jne     short dr@7b391h
		sub     eax, eax
		mov     edx, 80000000h
		or      si, 7fffh
		jmp     short dr@7b396h
dr@7b391h:
		call    near dr@7a2e1h
dr@7b396h:
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		mov     esp, ebp
		pop     ebx
		pop     ecx
		pop     edx
		pop     edi
		pop     ebp
		retn    
dr@7b3a7h:
		push    esi
		sub     esi, esi
		call    near dr@7b1b0h
		pop     esi
		retn    
dr@7b3b1h:
		push    esi
		mov     esi, 2
		call    near dr@7b1b0h
		pop     esi
		retn    
dr@7b3beh:
		push    esi
		mov     esi, 1
		call    near dr@7b1b0h
		pop     esi
		retn    
db	90h
dr@7b3cch:
db	15h,7bh,48h,0cch,67h,0c3h,0aah,85h,0ffh,3fh,0e7h,0d6h,8bh,0eah,0e3h,0c1h
db	95h,8bh,0ffh,3fh,6fh,0a9h,0b8h,8dh,51h,0f0h,37h,98h,0ffh,3fh,84h,64h
db	0deh,0f9h,33h,0f3h,4,0b5h,0ffh,3fh
dr@7b3f4h:
		push    ebp
		push    edi
		push    esi
		push    edx
		push    ecx
		push    ebx
		mov     edi, eax
		sub     esi, esi
		mov     cx, [edi+8]
		and     byte [edi+9], 7fh
		cmp     word [edi+8], byte 0
		jne     short dr@7b416h
		cmp     dword [edi+4], byte 0
		jne     short dr@7b416h
		cmp     dword [edi], byte 0
dr@7b416h:
		je      short dr@7b47eh
		or      cx, cx
		jns     short dr@7b437h
		dec     esi
		push    0bfffh
		push    80000000h
		push    byte 0
		mov     eax, edi
		mov     ebx, edi
		call    near dr@7a082h
		xor     byte [ebx+9], 80h
dr@7b437h:
		mov     bx, [edi+8]
		add     bx, byte 4
		sub     ecx, ecx
		mov     edx, [edi+4]
		mov     eax, [edi]
dr@7b446h:
		cmp     bx, 3fffh
		jb      short dr@7b457h
		add     eax, eax
		adc     edx, edx
		adc     ecx, ecx
		dec     bx
		jmp     short dr@7b446h
dr@7b457h:
		or      edx, edx
		jne     short dr@7b45dh
		or      eax, eax
dr@7b45dh:
		jne     short dr@7b463h
		sub     ebx, ebx
		jmp     short dr@7b473h
dr@7b463h:
		or      edx, edx
		js      short dr@7b46fh
		add     eax, eax
		adc     edx, edx
		dec     bx
		jmp     short dr@7b463h
dr@7b46fh:
		sub     bx, byte 4
dr@7b473h:
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], bx
		jmp     short dr@7b480h
dr@7b47eh:
		sub     ecx, ecx
;33:0007b480
dr@7b480h:
		push    esi
		push    ecx
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		shl     esi, 10h
		mov     si, [edi+8]
		mov     ebx, eax
		mov     ecx, edx
		call    near dr@7a4b6h
		push    eax
		push    edx
		push    esi
		mov     ecx, 0a6829a79h
		mov     ebx, 1bf21f8ch
		and     esi, 0ffffh
		or      esi, 40030000h
		call    near dr@7a0b2h
		mov     ebp, esp
		xchg    eax, [ebp+8]
		xchg    edx, [ebp+4]
		xchg    esi, [ebp+0]
		mov     ecx, 0ec96f0d6h
		mov     ebx, 9d7bfdbh
		and     esi, 0ffffh
		or      esi, 3ffa0000h
		call    near dr@7a4b6h
		mov     ecx, 0e6d5051ah
		mov     ebx, 0e536e187h
		and     esi, 0ffffh
		or      esi, 40010000h
		call    near dr@7a0b2h
		mov     ebx, [edi]
		mov     ecx, [edi+4]
		rol     esi, 10h
		mov     si, [edi+8]
		rol     esi, 10h
		call    near dr@7a4b6h
		push    eax
		push    edx
		push    esi
		xor     esi, 8000h
		rol     esi, 10h
		mov     si, [ebp+0]
		rol     esi, 10h
		mov     ebx, [ebp+8]
		mov     ecx, [ebp+4]
		call    near dr@7a0b2h
		xchg    eax, [ebp-4]
		xchg    edx, [ebp-8]
		xchg    esi, [ebp-0ch]
		rol     esi, 10h
		mov     si, [ebp+0]
		rol     esi, 10h
		mov     ebx, [ebp+8]
		mov     ecx, [ebp+4]
		call    near dr@7a0b2h
		rol     esi, 10h
		mov     si, [ebp-0ch]
		rol     esi, 10h
		pop     ecx
		pop     ecx
		pop     ebx
		call    near dr@7a2e1h
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		add     esp, byte 0ch
		pop     ecx
		lea     esi, [dr@7b3cch]
dr@7b56fh:
		or      ecx, ecx
		je      short dr@7b5a7h
		shr     ecx, 1
		jae     short dr@7b5a2h
		push    ecx
		push    esi
		mov     ax, [edi+8]
		mov     ecx, [edi+4]
;33:0007b580
		mov     ebx, [edi]
		shl     eax, 10h
		mov     ax, [cs:esi+8]
		mov     edx, [cs:esi+4]
		mov     esi, [cs:esi]
		xchg    esi, eax
		call    near dr@7a4b6h
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		pop     esi
		pop     ecx
dr@7b5a2h:
		lea     esi, [esi+0ah]
		jmp     short dr@7b56fh
dr@7b5a7h:
		pop     esi
		add     [edi+8], si
		mov     eax, edi
		push    0bfffh
		push    80000000h
		push    byte 0
		mov     ebx, edi
		call    near dr@7a082h
		pop     ebx
		pop     ecx
		pop     edx
		pop     esi
		pop     edi
		pop     ebp
		retn    
dr@7b5c8h:
		push    edi
		push    esi
		push    edx
		push    ecx
		push    ebx
		mov     cx, [eax+8]
		mov     edx, [eax+4]
		mov     ebx, [eax]
		or      ebx, ebx
		jne     short dr@7b60eh
		or      edx, edx
		jne     short dr@7b603h
		add     cx, cx
		je      near dr@7b68eh
dr@7b5e7h:
		mov     word [eax+8], 0ffffh
		mov     dword [eax+4], 0
		mov     dword [eax], 0
dr@7b5fah:
		or      byte [eax+7], 0c0h
		jmp     near dr@7b68eh
dr@7b603h:
		cmp     cx, 7fffh
		je      near dr@7b68eh
dr@7b60eh:
		mov     edx, ecx
		and     dh, 7fh
		cmp     dx, 7fffh
		je      short dr@7b5fah
		add     cx, cx
		jb      short dr@7b5fah
		shr     cx, 1
		je      short dr@7b62bh
		mov     edx, [eax+4]
		add     edx, edx
		jae     short dr@7b5e7h
dr@7b62bh:
		mov     edx, [eax+4]
		sub     edi, edi
		push    eax
		sub     cx, 3fffh
		sar     cx, 1
		jb      short dr@7b641h
		shr     edx, 1
		rcr     ebx, 1
		rcr     edi, 1
dr@7b641h:
		add     cx, 3fffh
		mov     [eax+8], cx
		mov     ecx, edx
		mov     eax, ebx
		mov     esi, edx
		stc     
		rcr     esi, 1
		inc     edx
		je      short dr@7b674h
		dec     edx
dr@7b657h:
		div     esi
		dec     esi
		cmp     esi, eax
		jbe     short dr@7b669h
		inc     esi
		add     esi, eax
		rcr     esi, 1
		mov     edx, ecx
		mov     eax, ebx
		jmp     short dr@7b657h
dr@7b669h:
		inc     esi
		mov     ecx, eax
		mov     eax, edi
		div     esi
		add     esi, ecx
		jmp     short dr@7b67dh
dr@7b674h:
		cmp     eax, esi
		je      short dr@7b686h
		xchg    edx, eax
		mov     eax, edi
		div     esi
dr@7b67dh:
		sub     edx, edx
		stc     
;33:0007b680
		rcr     esi, 1
		rcr     eax, 1
		adc     eax, edx
dr@7b686h:
		adc     edx, esi
		pop     esi
		mov     [esi], eax
		mov     [esi+4], edx
dr@7b68eh:
		pop     ebx
		pop     ecx
		pop     edx
		pop     esi
		pop     edi
		retn    
		push    esi
		push    ecx
		push    eax
		mov     ecx, edx
		mov     si, [eax+8]
		mov     edx, [eax+4]
		mov     eax, [eax]
		call    near dr@7b6b4h
		pop     ecx
		mov     [ecx], eax
		mov     [ecx+4], edx
		mov     [ecx+8], si
		pop     ecx
		pop     esi
		retn    
dr@7b6b4h:
		push    ebp
		push    edi
		push    ecx
		push    ebx
		push    esi
		push    edx
		push    eax
		mov     ebp, esp
		mov     edi, ecx
		mov     eax, [cs:edi]
		mov     edx, [cs:edi+4]
		mov     si, [cs:edi+8]
dr@7b6cbh:
		rol     esi, 10h
		mov     si, [ebp+8]
		rol     esi, 10h
		mov     ebx, [ebp+0]
		mov     ecx, [ebp+4]
		call    near dr@7a4b6h
		lea     edi, [edi+0ah]
		mov     ebx, [cs:edi]
		mov     ecx, [cs:edi+4]
		rol     esi, 10h
		mov     si, [cs:edi+8]
		rol     esi, 10h
		call    near dr@7a0b2h
		dec     dword [ebp+0ch]
		jne     short dr@7b6cbh
		add     esp, byte 10h
		pop     ecx
		pop     edi
		pop     ebp
		retn    
dr@7b706h:
		push    edi
		push    esi
		push    ecx
		push    ebx
		push    edx
		mov     edi, eax
		mov     eax, [edi]
		mov     edx, [edi+4]
		mov     si, [edi+8]
		shl     esi, 10h
		mov     si, [edi+8]
		mov     ebx, eax
		mov     ecx, edx
		call    near dr@7a4b6h
		pop     ecx
		pop     ebx
		call    near dr@7b6b4h
		rol     esi, 10h
		mov     ebx, [edi]
		mov     ecx, [edi+4]
		mov     si, [edi+8]
		rol     esi, 10h
		call    near dr@7a4b6h
		mov     [edi], eax
		mov     [edi+4], edx
		mov     [edi+8], si
		pop     ecx
		pop     esi
		pop     edi
		retn
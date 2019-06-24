%include "macros.inc"
%include "layout.inc"

section @text

___7c8b0h:
db	0ch,0,0,0,0ch,0,0,0,0ch,0,0,0,0ch,0,0,0
db	0d8h,0,0,0,0d8h,0,0,0,0d8h,0,0,0,0d8h,0,0,0
___7c8d0h:
db	0ah,0,0,0,0ah,0,0,0,0ah,0,0,0,0ah,0,0,0
db	0d4h,0,0,0,0d4h,0,0,0,0d4h,0,0,0,0d4h,0,0,0
___7c8f0h:
db	0bh,0,0,0,0bh,0,0,0,0bh,0,0,0,0bh,0,0,0
db	0d6h,0,0,0,0d6h,0,0,0,0d6h,0,0,0,0d6h,0,0,0
___7c910h:
db	87h,0,0,0,83h,0,0,0,81h,0,0,0,82h,0,0,0
db	8fh,0,0,0,8bh,0,0,0,89h,0,0,0,8ah,0,0,0
___7c930h:
db	0,0,0,0,2,0,0,0,4,0,0,0,6,0,0,0
db	0c0h,0,0,0,0c4h,0,0,0,0c8h,0,0,0,0cch,0,0,0
___7c950h:
db	1,0,0,0,3,0,0,0,5,0,0,0,7,0,0,0
db	0c2h,0,0,0,0c6h,0,0,0,0cah,0,0,0,0ceh,0,0,0

;; 7c970h
__GDECL(___7c970h__dma)
		pushad  
		cmp     al, 3
		jbe     ___7c97eh
		shr     ecx, 1
		mov     ebx, esi
		shr     ebx, 1
		mov     si, bx
___7c97eh:
		dec     ecx
		push    edx
		movzx   ebx, al
		mov     edx, [ebx*4+___7c8d0h]
		mov     al, bl
		and     al, 3
		or      al, 4
		out     dx, al
		mov     edx, [ebx*4+___7c8b0h]
		xor     al, al
		out     dx, al
		pop     edx
		mov     al, bl
		and     al, 3
		or      al, dl
		mov     edx, [ebx*4+___7c8f0h]
		out     dx, al
		mov     edx, [ebx*4+___7c910h]
		shld    eax, esi, 10h
		out     dx, al
		shr     eax, 10h
		mov     edx, [ebx*4+___7c930h]
		xchg    esi, eax
		out     dx, al
		mov     al, ah
		out     dx, al
		mov     eax, esi
		mov     edx, [ebx*4+___7c950h]
		mov     al, cl
		out     dx, al
		mov     al, ch
		out     dx, al
		mov     edx, [ebx*4+___7c8d0h]
		mov     al, bl
		and     al, 3
		out     dx, al
		popad   
		retn    

;; 7c9e2h
__GDECL(___7c9e2h__dma)
		push    ebx
		push    edx
		movzx   ebx, al
		mov     edx, [ebx*4+___7c8b0h]
		xor     al, al
		out     dx, al
		mov     edx, [ebx*4+___7c950h]
		in      al, dx
		mov     ah, al
		in      al, dx
		xchg    al, ah
		mov     bx, ax
		in      al, dx
		mov     ah, al
		in      al, dx
		xchg    al, ah
		sub     bx, ax
		cmp     bx, byte 7fh
		jbe     ___7ca16h
		in      al, dx
		mov     ah, al
		in      al, dx
		xchg    al, ah
___7ca16h:
		movzx   eax, ax
		inc     eax
		pop     edx
		pop     ebx
		retn    

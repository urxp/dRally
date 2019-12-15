cpu 386
%include "macros.inc"

	extern	___24f7d8h
	extern	___5f734h
	extern	___24f7c8h
	extern	___24f760h
	extern	___5f7fch
	extern	memset_
	extern	___68d40h
	extern	___5eefch
	extern	___68d48h
	extern	___691b8h
	extern	___68d3ch
	extern	___5ed38h
	extern	___68d44h
	extern	___68d5eh
	extern	___68d38h
	extern	___68d5ch
	extern	___68d34h
	extern	___68d5dh
	extern	___6bd2eh
	extern	___688cch
	extern	___68d30h

section .text

__GDECL(___7c4d0h)
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     [esp], al
		mov     ecx, edx
		mov     [esp+4], bl
		cmp     edx, 8000h
		ja      near ___7c596h
		mov     ebx, 1
		mov     eax, ___24f7d8h
		call    near ___5f734h
		mov     ebx, 1
		mov     eax, ___24f7c8h
		mov     edx, ecx
		call    near ___5f734h
		mov     eax, [___24f7d8h]
		add     eax, ecx
		and     eax, 0ffffh
		cmp     eax, ecx
		jb      short ___7c53ch
		movzx   esi, byte [esp]
		lea     eax, [esi*4+0]
		sub     eax, esi
		lea     edi, [esi+eax*4+___24f760h]
		mov     esi, ___24f7d8h
		mov     eax, ___24f7c8h
		jmp     short ___7c55ah
___7c53ch:
		movzx   esi, byte [esp]
		lea     eax, [esi*4+0]
		sub     eax, esi
		lea     edi, [esi+eax*4+___24f760h]
		mov     esi, ___24f7c8h
		mov     eax, ___24f7d8h
___7c55ah:
		movsd   
		movsd   
		movsd   
		movsb   
		call    near ___5f7fch
		movzx   esi, byte [esp]
		lea     eax, [esi*4+0]
		sub     eax, esi
		shl     eax, 2
		xor     edx, edx
		add     esi, eax
		mov     ebx, ecx
		mov     dl, [esp+4]
		mov     eax, [esi+___24f760h]
		call    near memset_
		mov     eax, [esi+___24f760h]
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
___7c596h:
		mov     ebx, 1
		lea     ebp, [edx+10000h]
		mov     eax, ___24f7d8h
		mov     edx, ebp
		movzx   esi, byte [esp]
		call    near ___5f734h
		lea     edi, [esi*4+0]
		mov     eax, 10000h
		mov     ebx, 1
		mov     edx, [___24f7d8h]
		sub     edi, esi
		and     edx, 0ffffh
		shl     edi, 2
		sub     eax, edx
		add     edi, esi
		mov     edx, eax
		mov     eax, ___24f7d8h
		mov     esi, ___24f760h
		call    near ___5f7fch
		sub     edx, byte 10h
		mov     eax, ___24f7d8h
		add     esi, edi
		call    near ___5f734h
		mov     ebx, 1
		mov     edx, ecx
		mov     eax, esi
		call    near ___5f734h
		mov     eax, ___24f7d8h
		call    near ___5f7fch
		test    word [edi+___24f760h], 0ffffh
		jne     short ___7c63bh
		mov     ebx, ecx
		xor     edx, edx
		mov     eax, [edi+___24f760h]
		mov     dl, [esp+4]
		call    near memset_
		mov     eax, [edi+___24f760h]
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
___7c63bh:
		mov     eax, esi
		mov     ebx, 1
		call    near ___5f7fch
		mov     edx, ebp
		mov     eax, esi
		call    near ___5f734h
		mov     esi, [edi+___24f760h]
		test    si, 0ffffh
		je      short ___7c66fh
		mov     eax, esi
		mov     edx, 10000h
		and     eax, 0ffffh
		sub     edx, eax
		add     ecx, edx
		add     esi, edx
___7c66fh:
		movzx   edi, byte [esp]
		lea     eax, [edi*4+0]
		xor     edx, edx
		sub     eax, edi
		mov     ebx, ecx
		mov     dl, [esp+4]
		mov     eax, [edi+eax*4+___24f760h]
		call    near memset_
		mov     eax, esi
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
db	8bh,0c0h
__GDECL(___7c69ch)
		push    edx
		xor     edx, edx
		mov     dl, al
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		add     eax, edx
		add     eax, ___24f760h
		call    near ___5f7fch
		pop     edx
		retn    
db	0,0,0,0,0
__GDECL(___7c6c0h)
		mov     eax, [___68d40h]
		call    near ___5eefch
		mov     eax, [___68d48h]
		jmp     near ___5eefch
__GDECL(___7c6d4h)
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ebp, [___68d48h]
		mov     esi, eax
		mov     [esp+8], dl
		mov     [esp+0ch], bl
		call    near ___691b8h
		mov     edx, 1
		mov     eax, 23e00h
		shl     esi, 2
		mov     ebx, 23e00h
		mov     [___68d3ch], esi
		call    near ___5ed38h
		xor     edx, edx
		mov     [___68d40h], eax
		call    near memset_
		mov     eax, [___68d40h]
		lea     edx, [eax+20000h]
		mov     [___68d44h], edx
		lea     edx, [eax+22000h]
		add     eax, 22f00h
		mov     [___68d5eh], cl
		mov     [___68d38h], eax
		mov     al, [esp+8]
		mov     ebx, [___68d44h]
		mov     [___68d5ch], al
		mov     al, [esp+0ch]
		mov     [___68d34h], edx
		mov     [___68d5dh], al
___7c75dh:
		mov     eax, [___68d44h]
		add     eax, 0f81h
		mov     ebp, [___68d48h]
		cmp     ebx, eax
		je      short ___7c77bh
		inc     ebx
		mov     al, [esp+20h]
		mov     [ebx-1], al
		jmp     short ___7c75dh
___7c77bh:
		cmp     byte [esp+20h], 0
		jne     short ___7c79ch
		cmp     byte [esp+24h], 0ffh
		jne     short ___7c79ch
		mov     ecx, 1
___7c78eh:
		mov     [ebx], cl
		inc     ecx
		inc     ebx
		cmp     ecx, 0feh
		je      short ___7c7ceh
		jmp     short ___7c78eh
___7c79ch:
		mov     ecx, 1
		movzx   esi, byte [esp+20h]
		mov     edi, 0ffh
___7c7abh:
		xor     eax, eax
		mov     al, [esp+24h]
		mov     edx, eax
		sub     edx, esi
		imul    edx, ecx
		mov     eax, edx
		sar     edx, 1fh
		idiv    edi
		inc     ebx
		add     eax, esi
		inc     ecx
		mov     [ebx-1], al
		cmp     ecx, 0feh
		jne     short ___7c7abh
___7c7ceh:
		mov     eax, [___68d44h]
		add     eax, 2000h
		cmp     ebx, eax
		je      short ___7c7e6h
		inc     ebx
		mov     al, [esp+24h]
		mov     [ebx-1], al
		jmp     short ___7c7ceh
___7c7e6h:
		mov     edx, 1
		mov     eax, 3fe0h
		mov     ebx, 0ffffe040h
		mov     [___68d48h], ebp
		call    near ___5ed38h
		mov     edx, 0ffffff01h
		mov     ebp, eax
		mov     [esp], ebx
		mov     [esp+4], edx
___7c80eh:
		mov     ebx, [esp+4]
		mov     ecx, [esp+4]
		mov     esi, [esp]
		shl     ebx, 10h
		shl     ecx, 5
		mov     edi, ebx
		imul    ebx, ebx, byte 0
___7c824h:
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		shl     edx, 5
		sbb     eax, edx
		sar     eax, 5
		add     eax, 8000h
		sar     eax, 10h
		inc     ecx
		mov     dl, al
		mov     eax, ebp
		add     ebx, edi
		mov     [ecx+eax*1+1fdfh], dl
		cmp     ecx, esi
		jne     short ___7c824h
		mov     esi, [esp+4]
		mov     ecx, [esp]
		inc     esi
		add     ecx, byte 20h
		mov     [esp+4], esi
		mov     [esp], ecx
		cmp     esi, 0ffh
		jle     short ___7c80eh
		mov     eax, [___68d44h]
		add     eax, 1000h
		mov     [___68d48h], ebp
		mov     [___68d44h], eax
		call    near ___6bd2eh
		mov     eax, 56220000h
		xor     ebx, ebx
		mov     edx, eax
		mov     bx, [___688cch]
		sar     edx, 1fh
		idiv    ebx
		mov     ebp, [___68d48h]
		mov     [___68d30h], eax
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		ret     8
db	0,0,0,0,0,0
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
__GDECL(___7c970h)
		pushad  
		cmp     al, 3
		jbe     short ___7c97eh
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
;__GDECL(___7c9e2h)
;		push    ebx
;		push    edx
;		movzx   ebx, al
;		mov     edx, [ebx*4+___7c8b0h]
;		xor     al, al
;		out     dx, al
;		mov     edx, [ebx*4+___7c950h]
;		in      al, dx
;		mov     ah, al
;		in      al, dx
;		xchg    al, ah
;		mov     bx, ax
;		in      al, dx
;		mov     ah, al
;		in      al, dx
;		xchg    al, ah
;		sub     bx, ax
;		cmp     bx, byte 7fh
;		jbe     short ___7ca16h
;		in      al, dx
;		mov     ah, al
;		in      al, dx
;		xchg    al, ah
;___7ca16h:
;		movzx   eax, ax
;		inc     eax
;		pop     edx
;		pop     ebx
;		retn    

__GDECL(___7c9e2h_DMA5)
		push    ebx
		push    edx
	mov 	dx, 0d8h
		xor     al, al
		out     dx, al
	mov 	dx, 0c6h
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
		jbe     short ___7ca16h_2
		in      al, dx
		mov     ah, al
		in      al, dx
		xchg    al, ah
___7ca16h_2:
		movzx   eax, ax
		inc     eax
		pop     edx
		pop     ebx
		retn    
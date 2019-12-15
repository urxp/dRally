cpu 386
%include "macros.inc"

section .text

__GDECL(___5ff99h)
		pushad  
		mov     edi, ___5fccah
___5ff9fh:
		cmp     edi, ___5fbcah
		je      short ___5ffbbh
		sub     edi, byte 4
		cmp     dword [edi], byte 0
		je      short ___5ff9fh
		push    edi
		call    dword [edi]
		pop     edi
		mov     dword [edi], 0
		jmp     short ___5ff9fh
___5ffbbh:
		popad   
		retn    
___5ffbdh:
		pushad  
		mov     esi, ___5fbcah
		mov     edi, esi
___5ffc5h:
		cmp     esi, ___5fccah
		je      short ___5ffddh
		mov     eax, [esi]
		add     esi, byte 4
		or      eax, eax
		je      short ___5ffc5h
		mov     [edi], eax
		add     edi, byte 4
		jmp     short ___5ffc5h
___5ffddh:
		cmp     edi, ___5fccah
		je      short ___5fff0h
		mov     dword [edi], 0
		add     edi, byte 4
		jmp     short ___5ffddh
___5fff0h:
		popad   
		retn    
__GDECL(___5fff2h)
		pushad  
		mov     edi, ___5fbcah
___5fff8h:
		cmp     dword [edi], byte 0
		je      short ___60006h
		cmp     [edi], eax
		je      short ___60008h
		add     edi, byte 4
		jmp     short ___5fff8h
___60006h:
		mov     [edi], eax
___60008h:
		call    near ___5ffbdh
		popad   
		retn    
__GDECL(___6000fh)
		pushad  
		mov     edi, ___5fbcah
___60015h:
		cmp     dword [edi], byte 0
		je      short ___60029h
		cmp     [edi], eax
		je      short ___60023h
		add     edi, byte 4
		jmp     short ___60015h
___60023h:
		mov     dword [edi], 0
___60029h:
		call    near ___5ffbdh
		popad   
		retn    
 

__GDECL(___60356h)
		pushad  
		pushfd  
		cli     
		mov     cl, al
		in      al, 0a1h
		mov     ah, al
		in      al, 21h
		mov     bx, 1
		shl     bx, cl
		mov     dx, bx
		not     dx
		and     ax, dx
		and     bx, [___5fbc8h]
		or      ax, bx
		out     21h, al
		mov     al, ah
		out     0a1h, al
		popfd   
		popad   
		retn    


section .data

__GDECL(___5fbc0h)
db	34h,12h
db	0,0,0,0
__GDECL(___5fbc6h)
db	0,0
__GDECL(___5fbc8h)
db	0,0
___5fbcah:
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
__GDECL(___5fccah)
db	8,9,0ah,0bh,0ch,0dh,0eh,0fh,70h,71h,72h,73h,74h,75h,76h,77h

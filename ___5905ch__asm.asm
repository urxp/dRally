cpu 386
%include "macros.inc"

	extern	___199f20h
	extern	___199f24h
	extern	___199f0ch
	extern	___199f08h
	extern	___199f28h
	extern	___199f10h
	extern	___199f14h
	extern	___199f1ch
	extern	___199f00h
	extern	___199f18h
	extern	___199f16h
	extern	___199f1eh
	extern	___199f1fh
	extern	___199f1ah
	extern	___196f00h
	extern	___199f30h
	extern	___199f34h
	extern	___199f2ch
	extern	___199f38h

section .text

__GDECL(bpk_decode2)

;		push 	dword [esp+8]
;		push 	dword [esp+8]
;		push 	0
;		push 	0
;		call 	bpk_decode4
;		retn 	8

		push    ebp
		mov     ebp, esp
		pushad  
		mov     eax, [ebp+0ch]
		mov     [___199f20h], eax
		mov     eax, [ebp+8]
		mov     [___199f24h], eax
		xor     eax, eax
		mov     [___199f0ch], eax
		mov     [___199f08h], eax
		mov     [___199f28h], eax
		mov     dword [___199f10h], 9
		mov     word [___199f14h], 200h
		mov     word [___199f1ch], 102h
___5909dh:
		mov     eax, [___199f0ch]
		add     eax, [___199f10h]
		xchg    eax, [___199f0ch]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [___199f20h]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___590d1h
___590cah:
		shr     al, 1
		rcr     bx, 1
		loop    ___590cah
___590d1h:
		mov     ax, bx
		xor     ebx, ebx
		mov     ebx, [___199f10h]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+___199f00h]
		cmp     ax, word 100h
		je      near ___592b7h
		cmp     ax, word 101h
		jne     near ___59195h
		mov     dword [___199f10h], 9
		mov     word [___199f14h], 200h
		mov     word [___199f1ch], 102h
		mov     eax, [___199f0ch]
		add     eax, [___199f10h]
		xchg    eax, [___199f0ch]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [___199f20h]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___5914ch
___59145h:
		shr     al, 1
		rcr     bx, 1
		loop    ___59145h
___5914ch:
		mov     ax, bx
		xor     ebx, ebx
		mov     ebx, [___199f10h]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+___199f00h]
		mov     [___199f18h], ax
		mov     [___199f16h], ax
		mov     [___199f1eh], al
		mov     [___199f1fh], al
		mov     edi, [___199f28h]
		add     edi, [___199f24h]
		ror     al, 3
		mov     [edi], al
		inc     dword [___199f28h]
		jmp     near ___5909dh
___59195h:
		mov     [___199f18h], ax
		mov     [___199f1ah], ax
		cmp     ax, [___199f1ch]
		jl      short ___591c6h
		nop     
		nop     
		nop     
		nop     
		mov     ax, [___199f16h]
		mov     [___199f18h], ax
		mov     al, [___199f1fh]
		push    eax
		inc     dword [___199f08h]
___591c6h:
		cmp     word [___199f18h], 0ffh
		jle     short ___59205h
		nop     
		nop     
		nop     
		nop     
		mov     bx, [___199f18h]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, ___196f00h
		mov     al, [ebx+2]
		push    eax
		inc     dword [___199f08h]
		mov     ax, [ebx]
		mov     [___199f18h], ax
		jmp     short ___591c6h
___59205h:
		mov     ax, [___199f18h]
		mov     [___199f1fh], al
		mov     [___199f1eh], al
		push    eax
		inc     dword [___199f08h]
		mov     ecx, [___199f08h]
		jcxz    ___5923fh
___59225h:
		pop     eax
		mov     edi, [___199f28h]
		add     edi, [___199f24h]
		ror     al, 3
		mov     [edi], al
		inc     dword [___199f28h]
		loop    ___59225h
___5923fh:
		mov     [___199f08h], ecx
		mov     bx, [___199f1ch]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, ___196f00h
		mov     al, [___199f1eh]
		mov     [ebx+2], al
		mov     ax, [___199f16h]
		mov     [ebx], ax
		inc     word [___199f1ch]
		mov     ax, [___199f1ah]
		mov     [___199f16h], ax
		mov     bx, [___199f1ch]
		cmp     bx, [___199f14h]
		jl      short ___592b2h
		nop     
		nop     
		nop     
		nop     
		cmp     dword [___199f10h], byte 0ch
		je      short ___592b2h
		nop     
		nop     
		nop     
		nop     
		inc     dword [___199f10h]
		shl     word [___199f14h], 1
___592b2h:
		jmp     near ___5909dh
___592b7h:
		mov     ecx, [___199f08h]
		jcxz    ___592c3h
___592c0h:
		pop     eax
		loop    ___592c0h
___592c3h:
		popad   
		pop     ebp
		ret     8
__GDECL(bpk_decode4)
		push    ebp
		mov     ebp, esp
		pushad  
		mov     eax, [ebp+14h]
		mov     [___199f20h], eax
		mov     eax, [ebp+10h]
		mov     [___199f24h], eax
		mov     eax, [ebp+0ch]
		mov     [___199f30h], eax
		mov     eax, [ebp+8]
		mov     [___199f34h], eax
		xor     eax, eax
		mov     [___199f0ch], eax
		mov     [___199f08h], eax
		mov     [___199f28h], eax
		mov     [___199f2ch], eax
		mov     [___199f38h], al
		mov     dword [___199f10h], 9
		mov     word [___199f14h], 200h
		mov     word [___199f1ch], 102h
___59323h:
		mov     eax, [___199f0ch]
		add     eax, [___199f10h]
		xchg    eax, [___199f0ch]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [___199f20h]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___59357h
___59350h:
		shr     al, 1
		rcr     bx, 1
		loop    ___59350h
___59357h:
		mov     ax, bx
		xor     ebx, ebx
		mov     ebx, [___199f10h]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+___199f00h]
		cmp     ax, word 100h
		je      near ___595c4h
		cmp     byte [___199f38h], 0
		jne     near ___595c4h
		cmp     ax, word 101h
		jne     near ___59465h
		mov     dword [___199f10h], 9
		mov     word [___199f14h], 200h
		mov     word [___199f1ch], 102h
		mov     eax, [___199f0ch]
		add     eax, [___199f10h]
		xchg    eax, [___199f0ch]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [___199f20h]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___593dfh
___593d8h:
		shr     al, 1
		rcr     bx, 1
		loop    ___593d8h
___593dfh:
		mov     ax, bx
		xor     ebx, ebx
		mov     ebx, [___199f10h]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+___199f00h]
		mov     [___199f18h], ax
		mov     [___199f16h], ax
		mov     [___199f1eh], al
		mov     [___199f1fh], al
		mov     edi, [___199f2ch]
		cmp     edi, [___199f30h]
		jl      short ___5945ah
		nop     
		nop     
		nop     
		nop     
		mov     edi, [___199f28h]
		cmp     dword [___199f34h], byte 0
		je      short ___59449h
		nop     
		nop     
		nop     
		nop     
		cmp     edi, [___199f34h]
		jne     short ___59449h
		nop     
		nop     
		nop     
		nop     
		mov     byte [___199f38h], 1
		jmp     short ___5945ah
		nop     
		nop     
		nop 
___59449h:
		add     edi, [___199f24h]
		ror     al, 3
		mov     [edi], al
		inc     dword [___199f28h]
___5945ah:
		inc     dword [___199f2ch]
		jmp     near ___59323h
___59465h:
		mov     [___199f18h], ax
		mov     [___199f1ah], ax
		cmp     ax, [___199f1ch]
		jl      short ___59496h
		nop     
		nop     
		nop     
		nop     
		mov     ax, [___199f16h]
		mov     [___199f18h], ax
		mov     al, [___199f1fh]
		push    eax
		inc     dword [___199f08h]
___59496h:
		cmp     word [___199f18h], 0ffh
		jle     short ___594d5h
		nop     
		nop     
		nop     
		nop     
		mov     bx, [___199f18h]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, ___196f00h
		mov     al, [ebx+2]
		push    eax
		inc     dword [___199f08h]
		mov     ax, [ebx]
		mov     [___199f18h], ax
		jmp     short ___59496h
___594d5h:
		mov     ax, [___199f18h]
		mov     [___199f1fh], al
		mov     [___199f1eh], al
		push    eax
		inc     dword [___199f08h]
		mov     ecx, [___199f08h]
		jcxz    ___5954ch
___594f5h:
		pop     eax
		mov     edi, [___199f2ch]
		cmp     edi, [___199f30h]
		jl      short ___59544h
		nop     
		nop     
		nop     
		nop     
		mov     edi, [___199f28h]
		cmp     dword [___199f34h], byte 0
		je      short ___59533h
		nop     
		nop     
		nop     
		nop     
		cmp     edi, [___199f34h]
		jne     short ___59533h
		nop     
		nop     
		nop     
		nop     
		mov     byte [___199f38h], 1
		jmp     short ___59544h
		nop     
		nop     
		nop 
___59533h:
		add     edi, [___199f24h]
		ror     al, 3
		mov     [edi], al
		inc     dword [___199f28h]
___59544h:
		inc     dword [___199f2ch]
		loop    ___594f5h
___5954ch:
		mov     [___199f08h], ecx
		mov     bx, [___199f1ch]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, ___196f00h
		mov     al, [___199f1eh]
		mov     [ebx+2], al
		mov     ax, [___199f16h]
		mov     [ebx], ax
		inc     word [___199f1ch]
		mov     ax, [___199f1ah]
		mov     [___199f16h], ax
		mov     bx, [___199f1ch]
		cmp     bx, [___199f14h]
		jl      short ___595bfh
		nop     
		nop     
		nop     
		nop     
		cmp     dword [___199f10h], byte 0ch
		je      short ___595bfh
		nop     
		nop     
		nop     
		nop     
		inc     dword [___199f10h]
		shl     word [___199f14h], 1
___595bfh:
		jmp     near ___59323h
___595c4h:
		mov     ecx, [___199f08h]
		jcxz    ___595d0h
___595cdh:
		pop     eax
		loop    ___595cdh
___595d0h:
		popad   
		pop     ebp
		ret     10h

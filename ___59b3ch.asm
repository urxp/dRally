cpu 386
%include "macros.inc"

	extern	__CHK
	extern	dRally_Keyboard_popLastChar
	extern	___199f4ch
	extern	___199f48h
	extern	___24cc6ch
	extern	___199f50h
	extern	___199f54h
	extern	___19bd58h
	extern	___59db8h
	extern	___199f74h
	extern	___199f78h
	extern	___199f3ch
	extern	inp_
	extern	___199f60h
	extern 	__GET_TIMER_TICKS

section .text

__GDECL(___59b3ch)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp

	push 	edx
	push 	ecx
		call    dRally_Keyboard_popLastChar
	pop 	ecx
	pop 	edx

		mov     edx, [___199f4ch]
		mov     bh, al
		test    edx, edx
		je      short ___59b75h
		mov     edx, [___199f48h]
		mov     ecx, [___24cc6ch]
		lea     esi, [edx+1]
		mov     [ecx+edx*1], al
		mov     [___199f48h], esi
___59b75h:
		cmp     dword [___199f50h], byte 0
		je      short ___59bbch
		mov     esi, [___199f48h]
		mov     edx, [___24cc6ch]
		add     edx, esi
		cmp     byte [edx], 45h
		jne     short ___59ba5h
		cmp     byte [edx+1], 4eh
		jne     short ___59ba5h
		cmp     byte [edx+2], 44h
		jne     short ___59ba5h
		xor     edi, edi
		mov     [___199f50h], edi
___59ba5h:
		mov     eax, [___199f48h]
		mov     edx, [___24cc6ch]
		lea     ecx, [eax+1]
		mov     bh, [edx+eax*1]
		mov     [___199f48h], ecx
___59bbch:
		cmp     dword [___199f54h], byte 0
		je      short ___59bc7h
		mov     bh, 0dh
___59bc7h:
		cmp     dword [___19bd58h], byte 0
		jle     short ___59bd5h
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___59db8h
	pop 	eax
	pop 	ecx
	pop 	edx

___59bd5h:
		cmp     dword [___19bd58h], byte 0
		jle     near ___59ccch
		mov     ecx, [___199f74h]

	push 	edx
	push 	ecx
		call	__GET_TIMER_TICKS
	pop 	ecx
	pop 	edx

		mov 	edx, eax
		test    ecx, ecx
		jne     short ___59bfbh
		lea     eax, [edx-0ah]
		mov     [___199f74h], eax
___59bfbh:
		cmp     dword [___199f78h], byte 0
		jne     short ___59c0ch
		lea     eax, [edx-0ah]
		mov     [___199f78h], eax
___59c0ch:
		mov     cl, [___199f3ch]
		xor     bl, bl
		test    cl, cl
		jne     short ___59c58h
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 10h
		jne     short ___59c28h
		mov     bl, 0dh
___59c28h:
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 20h
		jne     short ___59c38h
		mov     bl, 1bh
___59c38h:
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 40h
		jne     short ___59c48h
		mov     bl, 0dh
___59c48h:
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 80h
		jne     short ___59c58h
		mov     bl, 1bh
___59c58h:
		mov     edi, [___199f60h]
		lea     eax, [edx-4]
		cmp     edx, edi
		jl      short ___59ca0h
		test    bl, bl
		je      short ___59c99h
		mov     ebp, [___199f74h]
		mov     eax, edx
		sub     eax, ebp
		cmp     eax, byte 4
		jl      short ___59c8fh
		mov     ecx, [___199f78h]
		mov     eax, edx
		sub     eax, ecx
		cmp     eax, byte 4
		jge     short ___59c8fh
		lea     eax, [edx+7]
		mov     [___199f60h], eax
___59c8fh:
		mov     bh, bl
		mov     [___199f74h], edx
		jmp     short ___59cc6h
___59c99h:
		mov     [___199f74h], eax
		jmp     short ___59cc6h
___59ca0h:
		test    bl, bl
		je      short ___59cbbh
		mov     [___199f74h], edx
		xor     bh, bh
		mov     [___199f78h], edx
		mov     al, bh
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___59cbbh:
		mov     [___199f74h], eax
		mov     [___199f60h], edx
___59cc6h:
		mov     [___199f78h], edx
___59ccch:
		mov     al, bh
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

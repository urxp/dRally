/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	dRally_Keyboard_popLastKey
	extern	dRally_Keyboard_popLastChar
	extern	___199f4ch
	extern	___199f48h
	extern	___24cc6ch
	extern	___199f50h
	extern	___199f54h
	extern	___19bd58h
	extern	___59db8h
	extern	___199f64h
	extern	___199f68h
	extern	___199f3ch
	extern	___243888h
	extern	___243890h
	extern	___243884h
	extern	___24388ch
	extern	inp_
	extern	___199f60h
	extern 	__GET_TIMER_TICKS

section .text

__GDECL(___59720h)
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
		call    dRally_Keyboard_popLastKey
	pop		ecx
	pop		edx
	
		mov     bh, al
		mov     dl, al

	push 	edx
	push 	ecx
		call    dRally_Keyboard_popLastChar
	pop 	ecx
	pop 	edx

		mov     ecx, [___199f4ch]
		mov     bl, al
		test    ecx, ecx
		je      short ___5976eh
		mov     ecx, [___199f48h]
		mov     esi, [___24cc6ch]
		lea     edi, [ecx+1]
		mov     [ecx+esi*1], bh
		mov     ecx, edi
		mov     [___199f48h], edi
		inc     edi
		mov     [ecx+esi*1], al
		mov     [___199f48h], edi
___5976eh:
		cmp     dword [___199f50h], byte 0
		je      short ___597c1h
		mov     edi, [___199f48h]
		mov     ebx, [___24cc6ch]
		add     ebx, edi
		cmp     byte [ebx], 45h
		jne     short ___5979eh
		cmp     byte [ebx+1], 4eh
		jne     short ___5979eh
		cmp     byte [ebx+2], 44h
		jne     short ___5979eh
		xor     ebp, ebp
		mov     [___199f50h], ebp
___5979eh:
		mov     eax, [___199f48h]
		mov     ebx, [___24cc6ch]
		lea     ecx, [eax+1]
		mov     dl, [ebx+eax*1]
		mov     eax, ecx
		mov     [___199f48h], ecx
		inc     ecx
		mov     bl, [ebx+eax*1]
		mov     [___199f48h], ecx
___597c1h:
		cmp     dword [___199f54h], byte 0
		je      short ___597ceh
		mov     bl, 0dh
		mov     dl, 1ch
___597ceh:
		xor     eax, eax
		xor     ecx, ecx
		mov     al, bl
		mov     cl, dl
		shl     eax, 8
		mov     edx, [___19bd58h]
		add     ecx, eax
		test    edx, edx
		jle     short ___597eah
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___59db8h
	pop 	eax
	pop 	ecx
	pop 	edx

___597eah:
		cmp     dword [___19bd58h], byte 0
		jle     near ___59942h
		mov     esi, [___199f64h]

	push 	edx
	push 	ecx
		call	__GET_TIMER_TICKS
	pop 	ecx
	pop 	edx

		mov 	ebx, eax
		test    esi, esi
		jne     short ___59810h
		lea     eax, [ebx-0ah]
		mov     [___199f64h], eax
___59810h:
		cmp     dword [___199f68h], byte 0
		jne     short ___59821h
		lea     eax, [ebx-0ah]
		mov     [___199f68h], eax
___59821h:
		mov     al, [___199f3ch]
		xor     dl, dl
		test    al, al
		jne     near ___598c0h
		mov     eax, [___243888h]
		mov     ebp, [___243890h]
		sub     eax, byte 32h
		cmp     eax, ebp
		jle     short ___59844h
		mov     dl, 0cbh
___59844h:
		mov     eax, [___243888h]
		mov     esi, [___243890h]
		add     eax, byte 32h
		cmp     eax, esi
		jge     short ___59858h
		mov     dl, 0cdh
___59858h:
		mov     eax, [___243884h]
		mov     edi, [___24388ch]
		sub     eax, byte 32h
		cmp     eax, edi
		jle     short ___5986ch
		mov     dl, 0c8h
___5986ch:
		mov     eax, [___243884h]
		mov     ebp, [___24388ch]
		add     eax, byte 32h
		cmp     eax, ebp
		jge     short ___59880h
		mov     dl, 0d0h
___59880h:
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 10h
		jne     short ___59890h
		mov     dl, 1ch
___59890h:
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 20h
		jne     short ___598a0h
		mov     dl, 1
___598a0h:
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 40h
		jne     short ___598b0h
		mov     dl, 1ch
___598b0h:
		mov     eax, 201h

	push 	edx
	push 	ecx
	push 	eax
		call    inp_
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    al, 80h
		jne     short ___598c0h
		mov     dl, 1
___598c0h:
		mov     esi, [___199f60h]
		lea     eax, [ebx-4]
		cmp     ebx, esi
		jl      short ___59912h
		test    dl, dl
		je      short ___5990bh
		mov     edi, [___199f64h]
		mov     eax, ebx
		sub     eax, edi
		cmp     eax, byte 4
		jl      short ___598f7h
		mov     ebp, [___199f68h]
		mov     eax, ebx
		sub     eax, ebp
		cmp     eax, byte 4
		jge     short ___598f7h
		lea     eax, [ebx+7]
		mov     [___199f60h], eax
___598f7h:
		xor     eax, eax
		and     ecx, 0ff00h
		mov     al, dl
		mov     [___199f64h], ebx
		add     ecx, eax
		jmp     short ___5993ch
___5990bh:
		mov     [___199f64h], eax
		jmp     short ___5993ch
___59912h:
		test    dl, dl
		je      short ___59931h
		and     ecx, 0ff00h
		mov     [___199f64h], ebx
		mov     [___199f68h], ebx
		mov     eax, ecx
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___59931h:
		mov     [___199f64h], eax
		mov     [___199f60h], ebx
___5993ch:
		mov     [___199f68h], ebx
___59942h:
		mov     eax, ecx
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/

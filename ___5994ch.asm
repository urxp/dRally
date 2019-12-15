cpu 386
%include "macros.inc"

	extern	__CHK
	extern	POP_LAST_KEY
	extern	___199f4ch
	extern	___199f48h
	extern	___24cc6ch
	extern	___199f50h
	extern	___199f54h
	extern	___19bd58h
	extern	___59db8h
	extern	___199f6ch
	extern	___199f70h
	extern	___199f3ch
	extern	___243888h
	extern	___243890h
	extern	___243884h
	extern	___24388ch
	extern	inp_
	extern	___199f60h
	extern 	getTimerTicks
	extern 	GET_FRAME_COUNTER

section .text

__GDECL(___5994ch)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp

		call 	GET_FRAME_COUNTER

		call    near POP_LAST_KEY
		mov     edx, [___199f4ch]
		mov     bh, al
		test    edx, edx
		je      short ___59985h
		mov     edx, [___199f48h]
		mov     ecx, [___24cc6ch]
		lea     esi, [edx+1]
		mov     [ecx+edx*1], al
		mov     [___199f48h], esi
___59985h:
		cmp     dword [___199f50h], byte 0
		je      short ___599cch
		mov     esi, [___199f48h]
		mov     edx, [___24cc6ch]
		add     edx, esi
		cmp     byte [edx], 45h
		jne     short ___599b5h
		cmp     byte [edx+1], 4eh
		jne     short ___599b5h
		cmp     byte [edx+2], 44h
		jne     short ___599b5h
		xor     edi, edi
		mov     [___199f50h], edi
___599b5h:
		mov     eax, [___199f48h]
		mov     edx, [___24cc6ch]
		lea     ecx, [eax+1]
		mov     bh, [edx+eax*1]
		mov     [___199f48h], ecx
___599cch:
		cmp     dword [___199f54h], byte 0
		je      short ___599d7h
		mov     bh, 1ch
___599d7h:
		cmp     dword [___19bd58h], byte 0
		jle     short ___599e5h
		call    near ___59db8h
___599e5h:
		cmp     dword [___19bd58h], byte 0
		jle     near ___59b30h
		mov     ecx, [___199f6ch]
		call 	getTimerTicks
		mov 	edx, eax
		test    ecx, ecx
		jne     short ___59a0bh
		lea     eax, [edx-0ah]
		mov     [___199f6ch], eax
___59a0bh:
		cmp     dword [___199f70h], byte 0
		jne     short ___59a1ch
		lea     eax, [edx-0ah]
		mov     [___199f70h], eax
___59a1ch:
		mov     cl, [___199f3ch]
		xor     bl, bl
		test    cl, cl
		jne     near ___59abch
		mov     eax, [___243888h]
		mov     edi, [___243890h]
		sub     eax, byte 32h
		cmp     eax, edi
		jle     short ___59a40h
		mov     bl, 0cbh
___59a40h:
		mov     eax, [___243888h]
		mov     ebp, [___243890h]
		add     eax, byte 32h
		cmp     eax, ebp
		jge     short ___59a54h
		mov     bl, 0cdh
___59a54h:
		mov     eax, [___243884h]
		mov     ecx, [___24388ch]
		sub     eax, byte 32h
		cmp     eax, ecx
		jle     short ___59a68h
		mov     bl, 0c8h
___59a68h:
		mov     eax, [___243884h]
		mov     esi, [___24388ch]
		add     eax, byte 32h
		cmp     eax, esi
		jge     short ___59a7ch
		mov     bl, 0d0h
___59a7ch:
		mov     eax, 201h
		call    near inp_
		test    al, 10h
		jne     short ___59a8ch
		mov     bl, 1ch
___59a8ch:
		mov     eax, 201h
		call    near inp_
		test    al, 20h
		jne     short ___59a9ch
		mov     bl, 1
___59a9ch:
		mov     eax, 201h
		call    near inp_
		test    al, 40h
		jne     short ___59aach
		mov     bl, 1ch
___59aach:
		mov     eax, 201h
		call    near inp_
		test    al, 80h
		jne     short ___59abch
		mov     bl, 1
___59abch:
		mov     edi, [___199f60h]
		lea     eax, [edx-4]
		cmp     edx, edi
		jl      short ___59b04h
		test    bl, bl
		je      short ___59afdh
		mov     ebp, [___199f6ch]
		mov     eax, edx
		sub     eax, ebp
		cmp     eax, byte 4
		jl      short ___59af3h
		mov     ecx, [___199f70h]
		mov     eax, edx
		sub     eax, ecx
		cmp     eax, byte 4
		jge     short ___59af3h
		lea     eax, [edx+7]
		mov     [___199f60h], eax
___59af3h:
		mov     bh, bl
		mov     [___199f6ch], edx
		jmp     short ___59b2ah
___59afdh:
		mov     [___199f6ch], eax
		jmp     short ___59b2ah
___59b04h:
		test    bl, bl
		je      short ___59b1fh
		mov     [___199f6ch], edx
		xor     bh, bh
		mov     [___199f70h], edx
		mov     al, bh
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___59b1fh:
		mov     [___199f6ch], eax
		mov     [___199f60h], edx
___59b2ah:
		mov     [___199f70h], edx
___59b30h:
		mov     al, bh
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

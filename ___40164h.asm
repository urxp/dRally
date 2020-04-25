cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19bd60h
	extern	CONNECTION_TYPE
	extern	___199f9ch
	extern	___63b20h
	extern	___243cd0h
	extern	___1a1158h
	extern	kmap
	extern	___1a1150h
	extern	kmap
	extern	___1a1148h
	extern	kmap
	extern	___1a114ch
	extern	kmap
	extern	kmap
	extern	kmap
	extern	kmap
	extern	___1a1140h
	extern	___1a115ch
	extern	___1a1154h
	extern	___1a1144h
	extern	___19bd58h
	extern	___199f3fh
	extern	___24cc64h
	extern	___199f3eh
	extern	___199f41h
	extern	___199f40h
	extern	___199f45h
	extern	___199f44h
	extern	___199f43h
	extern	___199f42h
	extern	___40564h
	extern	___243888h
	extern	___243890h
	extern	___243884h
	extern	___24388ch
	extern	___1a1164h
	extern	___1a113ch
	extern	___1a1110h
	extern	___1a1130h
	extern	___1a1120h
	extern	___1a1118h
	extern	___1a111ch
	extern	___243ce8h
	extern	___1e6f70h
	extern	___1e6f30h
	extern	___24387ch
	extern	___61418h
	extern	___243880h
	extern	___61518h
	extern	___243898h
	extern	___243894h
	extern	___243cach

section .text

__GDECL(___40164h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     edx, [___19bd60h]
		xor     bl, bl
		test    edx, edx
		je      short ___40199h
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___40199h
		mov     eax, 1
		mov     edx, [___199f9ch]

	push 	ecx
	push 	edx
	push 	eax
		call    ___63b20h
	add 	esp, 8
	pop  	ecx

___40199h:
		cmp     dword [___243cd0h], byte 0
		jne     near ___4054fh
		cmp     dword [___1a1158h], 0c8h
		jne     short ___401beh
		cmp     byte [kmap+48h], 0
		je      short ___401beh
		or      bl, 1
___401beh:
		cmp     dword [___1a1150h], 0d0h
		jne     short ___401d6h
		cmp     byte [kmap+50h], 0
		je      short ___401d6h
		or      bl, 2
___401d6h:
		cmp     dword [___1a1148h], 0cbh
		jne     short ___401eeh
		cmp     byte [kmap+4bh], 0
		je      short ___401eeh
		or      bl, 4
___401eeh:
		cmp     dword [___1a114ch], 0cdh
		jne     short ___40206h
		cmp     byte [kmap+4dh], 0
		je      short ___40206h
		or      bl, 8
___40206h:
		cmp     byte [kmap+0c8h], 0
		je      short ___40212h
		or      bl, 1
___40212h:
		cmp     byte [kmap+48h], 0
		je      short ___4021eh
		or      bl, 1
___4021eh:
		mov     eax, [___1a1158h]
		cmp     byte [eax+kmap], 0
		je      short ___4022fh
		or      bl, 1
___4022fh:
		cmp     byte [kmap+0d0h], 0
		je      short ___4023bh
		or      bl, 2
___4023bh:
		cmp     byte [kmap+50h], 0
		je      short ___40247h
		or      bl, 2
___40247h:
		mov     eax, [___1a1150h]
		cmp     byte [eax+kmap], 0
		je      short ___40258h
		or      bl, 2
___40258h:
		mov     eax, [___1a1148h]
		cmp     byte [eax+kmap], 0
		je      short ___40269h
		or      bl, 4
___40269h:
		mov     eax, [___1a114ch]
		cmp     byte [eax+kmap], 0
		je      short ___4027ah
		or      bl, 8
___4027ah:
		mov     eax, [___1a1140h]
		cmp     byte [eax+kmap], 0
		je      short ___4028bh
		or      bl, 10h
___4028bh:
		mov     eax, [___1a115ch]
		cmp     byte [eax+kmap], 0
		je      short ___4029ch
		or      bl, 20h
___4029ch:
		mov     eax, [___1a1154h]
		cmp     byte [eax+kmap], 0
		je      short ___402b5h
		xor     ch, ch
		or      bl, 40h
		mov     [eax+kmap], ch
___402b5h:
		test    bl, 2
		je      short ___402c2h
		test    bl, 40h
		je      short ___402c2h
		and     bl, 0fdh
___402c2h:
		mov     eax, [___1a1144h]
		cmp     byte [eax+kmap], 0
		je      short ___402d3h
		or      bl, 42h
___402d3h:
		cmp     dword [___19bd58h], byte 0
		jle     near ___404c1h
		xor     eax, eax
		mov     al, [___199f3fh]
		xor     dh, dh
		mov     [eax+___24cc64h], dh
		xor     eax, eax
		mov     al, [___199f3eh]
		mov     [eax+___24cc64h], dh
		xor     eax, eax
		mov     al, [___199f41h]
		xor     bh, bh
		mov     [eax+___24cc64h], dh
		xor     edx, edx
		xor     eax, eax
		mov     dl, [___199f40h]
		mov     al, [___199f45h]
		xor     cl, cl
		mov     [edx+___24cc64h], bh
		mov     [eax+___24cc64h], cl
		xor     eax, eax
		mov     al, [___199f44h]
		mov     [eax+___24cc64h], cl
		xor     eax, eax
		xor     edx, edx
		mov     al, [___199f43h]
		mov     dl, [___199f42h]
		mov     [eax+___24cc64h], cl
		mov     [edx+___24cc64h], cl
		call    near ___40564h
		mov     eax, [___243888h]
		mov     edi, [___243890h]
		sub     eax, byte 32h
		cmp     eax, edi
		jle     short ___40375h
		xor     eax, eax
		mov     al, [___199f3eh]
		mov     byte [eax+___24cc64h], 1
___40375h:
		mov     eax, [___243888h]
		mov     ebp, [___243890h]
		add     eax, byte 32h
		cmp     eax, ebp
		jge     short ___40395h
		xor     eax, eax
		mov     al, [___199f3fh]
		mov     byte [eax+___24cc64h], 1
___40395h:
		mov     eax, [___243884h]
		mov     edx, [___24388ch]
		sub     eax, byte 32h
		cmp     eax, edx
		jle     short ___403b5h
		xor     eax, eax
		mov     al, [___199f40h]
		mov     byte [eax+___24cc64h], 1
___403b5h:
		mov     eax, [___243884h]
		mov     ecx, [___24388ch]
		add     eax, byte 32h
		cmp     eax, ecx
		jge     short ___403d5h
		xor     eax, eax
		mov     al, [___199f41h]
		mov     byte [eax+___24cc64h], 1
___403d5h:
		mov     edx, 201h
		sub     eax, eax
		in      al, dx
		test    al, 10h
		jne     short ___403efh
		xor     eax, eax
		mov     al, [___199f42h]
		mov     byte [eax+___24cc64h], 1
___403efh:
		mov     edx, 201h
		sub     eax, eax
		in      al, dx
		test    al, 20h
		jne     short ___40409h
		xor     eax, eax
		mov     al, [___199f43h]
		mov     byte [eax+___24cc64h], 1
___40409h:
		mov     edx, 201h
		sub     eax, eax
		in      al, dx
		test    al, 40h
		jne     short ___40423h
		xor     eax, eax
		mov     al, [___199f44h]
		mov     byte [eax+___24cc64h], 1
___40423h:
		mov     edx, 201h
		sub     eax, eax
		in      al, dx
		test    al, 80h
		jne     short ___4043dh
		xor     eax, eax
		mov     al, [___199f45h]
		mov     byte [eax+___24cc64h], 1
___4043dh:
		mov     eax, [___1a1164h]
		cmp     byte [eax+___24cc64h], 0
		je      short ___4044eh
		or      bl, 1
___4044eh:
		mov     eax, [___1a113ch]
		cmp     byte [eax+___24cc64h], 0
		je      short ___4045fh
		or      bl, 2
___4045fh:
		mov     eax, [___1a1110h]
		cmp     byte [eax+___24cc64h], 0
		je      short ___40470h
		or      bl, 4
___40470h:
		mov     eax, [___1a1130h]
		cmp     byte [eax+___24cc64h], 0
		je      short ___40481h
		or      bl, 8
___40481h:
		mov     eax, [___1a1120h]
		cmp     byte [eax+___24cc64h], 0
		je      short ___40492h
		or      bl, 10h
___40492h:
		mov     eax, [___1a1118h]
		cmp     byte [eax+___24cc64h], 0
		je      short ___404a3h
		or      bl, 20h
___404a3h:
		mov     eax, [___1a111ch]
		cmp     byte [eax+___24cc64h], 0
		je      short ___404c1h
		mov     eax, [___1a1154h]
		xor     ch, ch
		or      bl, 40h
		mov     [eax+kmap], ch
___404c1h:
		test    bl, 10h
		je      short ___404c9h
		or      bl, 1
___404c9h:
		imul    eax, [___243ce8h], 35eh
		mov     edx, [eax+___1e6f70h]
		lea     ecx, [edx*4+0]
		inc     edx
		movzx   esi, bl
		mov     [eax+___1e6f70h], edx
		mov     [ecx+eax*1+___1e6f30h], esi
		cmp     dword [eax+___1e6f70h], byte 0fh
		jle     short ___40502h
		xor     edx, edx
		mov     [eax+___1e6f70h], edx
___40502h:
		cmp     dword [___19bd60h], byte 0
		je      short ___4052bh
		cmp     dword [___24387ch], byte 0
		je      short ___4052bh
		xor     eax, eax
		mov     al, bl

	push 	edx
	push 	ecx
	push 	eax
		call    ___61418h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		cmp     dword [___243880h], byte 0
		je      short ___4052bh
		call    near ___61518h
___4052bh:
		inc     dword [___243898h]
		cmp     dword [___243898h], byte 0fh
		jl      short ___40542h
		xor     edx, edx
		mov     [___243898h], edx
___40542h:
		inc     dword [___243894h]
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___4054fh:
		mov     eax, [___243cach]
		inc     dword [___243cach]
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

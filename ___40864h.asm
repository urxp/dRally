cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243d80h
	extern	___1d8110h
	extern	___243ce8h
	extern	___1de5b4h
	extern	___182f37h
	extern	__CHP
	extern	___1de5ach
	extern	___1de5b0h
	extern	___182f47h
	extern	___243d34h
	extern	___1de5a8h
	extern	___243cdch
	extern	___243cb8h
	extern	___1d7810h
	extern	___4256ch
	extern	___182f3fh
	extern	___243334h
	extern	___243ca0h
	extern	___1de598h
	extern	___182f4fh
	extern	ceil_
	extern	___1de210h
	extern	___182f57h
	extern	___1de530h
	extern	___196de8h
	extern	dRally_Audio_pushSoundEffect
	extern	___196dech
	extern	___182ed4h
	extern	___1de7d0h
	extern	strcmp_
	extern	___196df4h

section .text

__GDECL(___40864h)
		push    3ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ebp, [___243d80h]
		mov     edx, 60h
		mov     esi, ebp
		xor     edi, edi
		xor     eax, eax
___40888h:
		xor     ebx, ebx
___4088ah:
		mov     cl, [eax+___1d8110h]
		test    cl, cl
		jbe     short ___40897h
		mov     [edx+esi*1], cl
___40897h:
		inc     edx
		inc     ebx
		inc     eax
		cmp     ebx, byte 40h
		jl      short ___4088ah
		inc     edi
		add     edx, 1c0h
		cmp     edi, byte 20h
		jl      short ___40888h
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de5b4h]
		fmul    qword [___182f37h]
		call    near __CHP
		fistp   dword [esp+8]
		cmp     dword [esp+8], byte 0
		jge     short ___408e2h
		xor     ebx, ebx
		mov     [esp+8], ebx
___408e2h:
		mov     edx, 3ah
		xor     eax, eax
		mov     edi, 7
		mov     al, [esp+8]
		lea     ebx, [ebp+0e64h]
		sub     edx, eax
		add     ebx, eax
		xor     eax, eax
		mov     [___243d80h], ebp
		test    edx, edx
		je      short ___40920h
___40908h:
		mov     ecx, edx
___4090ah:
		cmp     byte [ebx], 40h
		jl      short ___40911h
		mov     [ebx], al
___40911h:
		inc     ebx
		dec     ecx
		jne     short ___4090ah
		add     ebx, 200h
		sub     ebx, edx
		dec     edi
		jne     short ___40908h
___40920h:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     edx, eax
		shl     edx, 2
		mov     ecx, [edx+___1de5ach]
		mov     ebp, [___243d80h]
		test    ecx, ecx
		je      near ___40a21h
		fild    dword [edx+___1de5b0h]
		fmul    qword [___182f47h]
		call    near __CHP
		fistp   dword [esp+4]
		cmp     dword [esp+4], byte 0
		jge     short ___4096dh
		xor     ecx, ecx
		mov     [esp+4], ecx
___4096dh:
		mov     edx, 37h
		xor     ebx, ebx
		mov     edi, 3
		mov     bl, [esp+4]
		lea     eax, [ebp+2664h]
		sub     edx, ebx
		add     ebx, eax
		xor     eax, eax
		mov     [___243d80h], ebp
		test    edx, edx
		je      short ___409a6h
___40993h:
		mov     ecx, edx
___40995h:
		mov     [ebx], al
		inc     ebx
		dec     ecx
		jne     short ___40995h
		add     ebx, 200h
		sub     ebx, edx
		dec     edi
		jne     short ___40993h
___409a6h:
		xor     edi, edi
		mov     ebp, [___243d80h]
		mov     [esp+0ch], edi
		jmp     short ___40a01h
___409b4h:
		mov     ecx, [esp+0ch]
		mov     edx, 8
		lea     eax, [ebp+1a00h]
		mov     esi, [___243d34h]
		add     eax, ecx
		mov     ecx, 6
		lea     ebx, [eax+60h]
___409d3h:
		mov     ch, dl
___409d5h:
		mov     al, [esi]
		or      al, al
		je      short ___409ddh
		mov     [ebx], al
___409ddh:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___409d5h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___409d3h
		mov     esi, [esp+0ch]
		inc     edi
		add     esi, byte 8
		mov     ebp, [___243d80h]
		mov     [esp+0ch], esi
___40a01h:
		imul    eax, [___243ce8h], 94h
		mov     ebx, [eax+___1de5a8h]
		mov     [___243d80h], ebp
		cmp     edi, ebx
		jge     near ___40bd0h
		jmp     short ___409b4h
___40a21h:
		cmp     dword [___243cdch], byte 0
		jle     near ___40b13h
		mov     eax, [___243cb8h]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    ecx
		push    byte 0fffffffah
		push    207bh
		push    byte 10h
		mov     ebx, 6
		mov     ecx, eax
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near ___4256ch
		mov     eax, [___243cb8h]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    byte 0
		push    byte 6
		push    2089h
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     ecx, edx
		mov     edx, ebx
		call    near ___4256ch
		mov     eax, [___243cb8h]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		push    byte 0
		push    byte 6
		mov     [esp+8], edx
		push    2097h
		fild    dword [esp+0ch]
		fmul    qword [___182f3fh]
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near __CHP
		fistp   dword [esp+10h]
		mov     ecx, [esp+10h]
		call    near ___4256ch
		mov     eax, [___243334h]
		mov     edi, [___243cdch]
		sub     edi, eax
		mov     [___243cdch], edi
		test    edi, edi
		jge     near ___40bd0h
		xor     edx, edx
		mov     [___243cdch], edx
		jmp     near ___40bd0h
___40b13h:
		mov     eax, [___243ca0h]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    ecx
		push    byte 0fffffffah
		push    207bh
		push    byte 10h
		mov     ebx, 6
		mov     ecx, eax
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near ___4256ch
		mov     eax, [___243ca0h]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    byte 0
		push    byte 6
		push    2089h
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     ecx, edx
		mov     edx, ebx
		call    near ___4256ch
		mov     eax, [___243ca0h]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		push    byte 0
		push    byte 6
		mov     [esp+8], edx
		push    2097h
		fild    dword [esp+0ch]
		fmul    qword [___182f3fh]
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near __CHP
		fistp   dword [esp+10h]
		mov     ecx, [esp+10h]
		call    near ___4256ch
___40bd0h:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de598h]
		fmul    qword [___182f4fh]
		sub     esp, byte 8
		mov     ebx, 0ah
		fstp    qword [esp]
		mov     edx, 8
		call    near ceil_
		push    byte 0fffffff0h
		mov     eax, ___1de210h
		fsubr   qword [___182f57h]
		push    byte 0fffffff8h
		call    near __CHP
		push    2c90h
		fistp   dword [esp+0ch]
		push    byte 0
		mov     ecx, [esp+10h]
		mov     esi, ___1de530h
		call    near ___4256ch
		mov     ecx, 0ah
		mov     ebp, [___243d80h]
		mov     edx, 8
		lea     ebx, [eax+ebp*1]
___40c46h:
		mov     ch, dl
___40c48h:
		mov     al, [esi]
		or      al, al
		je      short ___40c50h
		mov     [ebx], al
___40c50h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___40c48h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___40c46h
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     edi, [eax*4+___1de598h]
		mov     ebp, [___243d80h]
		cmp     edi, 5000h
		jge     short ___40cc5h
		cmp     dword [___196de8h], byte 0
		jne     short ___40cb4h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 1
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___40cb4h:
		mov     edx, 1
		mov     ebp, [___243d80h]
		mov     [___196de8h], edx
___40cc5h:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de598h], 2800h
		jge     short ___40d27h
		mov     ecx, [___196dech]
		mov     [___243d80h], ebp
		test    ecx, ecx
		jne     short ___40d16h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 1
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___40d16h:
		mov     esi, 1
		mov     ebp, [___243d80h]
		mov     [___196dech], esi
___40d27h:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     edi, [eax*4+___1de598h]
		mov     [___243d80h], ebp
		test    edi, edi
		jne     short ___40da3h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		mov     edx, ___182ed4h
		add     eax, ___1de7d0h
		call    near strcmp_
		test    eax, eax
		jne     short ___40da3h
		cmp     dword [___196df4h], byte 0
		jne     short ___40d99h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 20h
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___40d99h:
		mov     dword [___196df4h], 1
___40da3h:
		mov     ebp, [___243d80h]
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

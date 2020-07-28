cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1ed4h
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1a0180h
	extern	___1a01e0h
	extern	strupr_watcom106
	extern	___25230h
	extern	___185c7ah
	extern	___1a10b8h
	extern	___12e78h_cdecl
	extern	___1a0210h
	extern	itoa_watcom106
	extern	___180728h
	extern	___250e0h
	extern	___185c0bh
	extern	___1a1108h
	extern	___1a01f0h
	extern	___18e220h
	extern	___180130h
	extern	___181f50h
	extern	___1a0228h
	extern	___181f54h
	extern	___1a01ech
	extern	___181f56h
	extern	ceil_
	extern	__CHP
	extern	memset
	extern	___185bedh
	extern	___1a1e90h
	extern	___18e938h
	extern	___18e93ch
	extern	___18e940h
	extern	___1a01f4h
	extern	___1a01f8h

section .text

__GDECL(___25330h)
		push    60h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 3ch
		mov     ecx, 0e0h
		mov     edx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1ed4h]
		add     ebx, 13aa0h
		shr     dl, 2
___25362h:
		mov     ch, dl
___25364h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25364h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___25362h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, 40h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [eax*4+___1a01fch]
		add     ebx, 162a0h
		mov     edx, 60h
		mov     esi, [esi*4+___1a0180h]
		shr     dl, 2
___253bfh:
		mov     ch, dl
___253c1h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___253c1h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___253bfh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		lea     edi, [esp+14h]
		add     esi, eax
		call 	__STRCPY
		lea     eax, [esp+14h]

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		lea     eax, [esp+14h]
		lea     ebx, [esp+14h]
		call    near ___25230h
		lea     ecx, [eax+13d20h]
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a0210h], 98967fh
		jle     short ___25475h
		mov     dword [eax+___1a0210h], 98967fh
___25475h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [eax*4+___1a0210h]
		mov     esi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ax, [___180728h]
		lea     edi, [esp+14h]
		mov     [esp+14h], ax
		call 	__STRCAT
		lea     eax, [esp+14h]
		lea     ebx, [esp+14h]
		call    near ___250e0h
		lea     ecx, [eax+202a0h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edx, [eax*4+0]
		mov     ebx, [edx+___1a01fch]
		lea     eax, [ebx*4+0]
		mov     edx, [edx+___1a01f0h]
		add     eax, ebx
		shl     edx, 2
		mov     ebx, 0ah
		mov     eax, [edx+eax*4+___18e220h]
		mov     edx, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     al, [___180130h]
		mov     edi, esp
		mov     [esp+14h], al
		call 	__STRLEN
		cmp     ecx, byte 2
		jne     short ___2555ch
		mov     ax, [___181f50h]
		mov     [esp+14h], ax
___2555ch:
		mov     esi, esp
		lea     edi, [esp+14h]
		lea     ebx, [esp+14h]
		mov     edx, ___185c7ah
		call 	__STRCAT
		mov     ecx, 31fe0h
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [eax*4+___1a0228h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     al, [___180130h]
		mov     edi, esp
		mov     [esp+14h], al
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___255e8h
		mov     ax, [___181f50h]
		mov     [esp+14h], ax
___255e8h:
		mov     esi, ___181f54h
		lea     edi, [esp+14h]
		lea     ebx, [esp+14h]
		call 	__STRCAT
		mov     esi, esp
		lea     edi, [esp+14h]
		mov     edx, ___185c7ah
		call 	__STRCAT
		mov     ecx, 34560h
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 2fd00h
		mov     esi, 3fh
___2565dh:
		imul    eax, [___1a1ef8h], byte 6ch
		fild    dword [eax+___1a01ech]
		fmul    qword [___181f56h]
		sub     esp, byte 8
		fstp    qword [esp]
		mov     edx, esi
		call    near ceil_
		call    near __CHP
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		fistp   qword [esp+28h]
		add     eax, ecx
		mov     ebx, [esp+28h]
		add     eax, 224h
		add     ecx, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, 30980h
		jne     short ___2565dh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     ebx, 0ah
		sub     eax, edx
		mov     esi, esp
		mov     edx, esp
		mov     eax, [eax*4+___1a01ech]
		lea     edi, [esp+14h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCPY
		xor     ebx, ebx
		xor     edx, edx
		jmp     short ___2570ah
___256f6h:
		xor     eax, eax
		mov     al, [esp+edx*1+14h]
		mov     al, [eax+___185bedh]
		and     eax, 0ffh
		inc     edx
		add     ebx, eax
___2570ah:
		lea     edi, [esp+14h]
		call 	__STRLEN
		cmp     edx, ecx
		jb      short ___256f6h
		mov     ecx, 2f56fh
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		xor     edi, edi
		sub     ecx, ebx
		lea     ebx, [esp+14h]
		xor     ebp, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		jmp     short ___25788h
___2573ch:
		mov     ecx, 0ah
		mov     edx, 14h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e90h]
		add     eax, 248a3h
		add     esi, 320h
		lea     ebx, [eax+ebp*1]
		inc     edi
		shr     dl, 2
___25763h:
		mov     ch, dl
___25765h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25765h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___25763h
		add     ebp, byte 17h
___25788h:
		imul    eax, [___1a1ef8h], byte 6ch
		imul    eax, [eax+___1a01fch], 6e0h
		cmp     edi, [eax+___18e938h]
		jl      short ___2573ch
		xor     edi, edi
		xor     ebp, ebp
		jmp     short ___257f3h
___257a7h:
		mov     ecx, 0ah
		mov     edx, 14h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e90h]
		add     eax, 284a3h
		add     esi, 320h
		lea     ebx, [eax+edi*1]
		inc     ebp
		shr     dl, 2
___257ceh:
		mov     ch, dl
___257d0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___257d0h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___257ceh
		add     edi, byte 17h
___257f3h:
		imul    eax, [___1a1ef8h], byte 6ch
		imul    eax, [eax+___1a01fch], 6e0h
		cmp     ebp, [eax+___18e93ch]
		jl      short ___257a7h
		xor     edi, edi
		xor     ebp, ebp
		jmp     short ___2585fh
___25812h:
		mov     ecx, 0ah
		mov     edx, 14h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e90h]
		add     ebx, 2c0a3h
		add     esi, 320h
		add     ebx, edi
		inc     ebp
		shr     dl, 2
___2583ah:
		mov     ch, dl
___2583ch:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2583ch
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2583ah
		add     edi, byte 17h
___2585fh:
		imul    eax, [___1a1ef8h], byte 6ch
		imul    eax, [eax+___1a01fch], 6e0h
		cmp     ebp, [eax+___18e940h]
		jl      short ___25812h
		xor     ebx, ebx
		xor     ebp, ebp
		xor     edi, edi
		mov     [esp+38h], ebx
		jmp     short ___258dah
___25884h:
		mov     ecx, 0ah
		mov     edx, 14h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e90h]
		add     eax, 248a3h
		add     esi, ebp
		lea     ebx, [eax+edi*1]
		shr     dl, 2
___258a6h:
		mov     ch, dl
___258a8h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___258a8h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___258a6h
		mov     edx, [esp+38h]
		add     ebp, 0c8h
		inc     edx
		add     edi, byte 17h
		mov     [esp+38h], edx
___258dah:
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edx, [esp+38h]
		cmp     edx, [eax+___1a01f0h]
		jl      short ___25884h
		xor     edi, edi
		xor     ebp, ebp
		mov     [esp+30h], edi
		jmp     short ___25952h
___258f7h:
		mov     eax, [esp+30h]
		mov     ecx, 0ah
		mov     edx, 14h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e90h]
		add     ebx, 284a3h
		add     esi, ebp
		add     ebx, eax
		shr     dl, 2
___2591eh:
		mov     ch, dl
___25920h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25920h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2591eh
		mov     edx, [esp+30h]
		inc     edi
		add     edx, byte 17h
		add     ebp, 0c8h
		mov     [esp+30h], edx
___25952h:
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     edi, [eax+___1a01f4h]
		jl      short ___258f7h
		xor     edi, edi
		xor     ebp, ebp
		mov     [esp+34h], edi
		jmp     short ___259c6h
___2596bh:
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [esp+34h]
		add     ebx, 2c0a3h
		mov     ecx, 0ah
		add     ebx, esi
		mov     esi, [___1a1e90h]
		mov     edx, 14h
		add     esi, ebp
		shr     dl, 2
___25992h:
		mov     ch, dl
___25994h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25994h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___25992h
		mov     eax, [esp+34h]
		inc     edi
		add     eax, byte 17h
		add     ebp, 0c8h
		mov     [esp+34h], eax
___259c6h:
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     edi, [eax+___1a01f8h]
		jl      short ___2596bh
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

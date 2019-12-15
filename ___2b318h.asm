cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___12940h
	extern	___1a1ef8h
	extern	___1a020ch
	extern	___1a0fb8h
	extern	___11564h
	extern	___24010h
	extern	___196ad8h
	extern	___1a10c8h
	extern	___1821e2h
	extern	__CHP
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb4ch
	extern	___1a1edch
	extern	___19df50h
	extern	___19df54h
	extern	___19df58h
	extern 	printf_

	extern 	exit_

section .text

__GDECL(___2b318h)
		push    38h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 14h
		and     esp, byte 0fffffff8h
		call    near ___12940h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx					;;; eax = 27*edx
		mov     edx, [eax*4+___1a020ch]		;;; edx = [___1a020ch+6ch*edx]
		lea     eax, [edx*4+0]
		sub     eax, edx					;;; eax = 3*edx
		mov     edx, [___1a0fb8h]

		test 	edx, edx
		jne 	.notnull0
		mov 	edx, dummy_pal
.notnull0:

		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+10h], eax
		fild    word [esp+10h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+14h], eax
		fild    word [esp+14h]
		sub     esp, byte 4
		fstp    dword [esp]
		call    near ___11564h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]

		test 	edx, edx
		jne 	.notnull1
		mov 	edx, dummy_pal
.notnull1:

		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+10h], eax
		fild    word [esp+10h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+14h], eax
		fild    word [esp+14h]
		sub     esp, byte 4
		mov     ecx, 900h
		fstp    dword [esp]
		xor     edx, edx
		call    near ___24010h
		mov     [esp+10h], edx
		mov     esi, 640000h
___2b416h:
		mov     eax, [___196ad8h]
		mov     edx, [___1a10c8h]

		test 	edx, edx
		jne 	.notnull2
		mov 	edx, dummy_pal
.notnull2:

		lea     eax, [eax+eax*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		fmul    qword [___1821e2h]
		fild    dword [esp+10h]
		fstp    qword [esp]
		fmul    qword [esp]
		call    near __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		mov     ebx, esi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [___196ad8h]
		mov     [ecx+___19eb50h], eax
		mov     eax, [___1a10c8h]

		test 	eax, eax
		jne 	.notnull3
		mov 	eax, dummy_pal
.notnull3:

		lea     edx, [edx+edx*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+1]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		fmul    qword [___1821e2h]
		fmul    qword [esp]
		call    near __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		mov     ebx, esi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     [ecx+___19eb54h], eax
		mov     eax, [___196ad8h]
		mov     edx, [___1a10c8h]

		test 	edx, edx
		jne 	.notnull4
		mov 	edx, dummy_pal
.notnull4:

		lea     eax, [eax+eax*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		fmul    qword [___1821e2h]
		fmul    qword [esp]
		call    near __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		mov     ebx, esi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+10h]
		add     ecx, byte 0ch
		inc     ebx
		mov     [ecx+___19eb4ch], eax
		mov     [esp+10h], ebx
		cmp     ebx, byte 20h
		jl      near ___2b416h
		mov     ecx, 0c0h
		mov     esi, 640000h
___2b516h:
		mov     edx, [___1a1edch]
		mov     eax, [ecx+___19df50h]
		shl     edx, 10h
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		mov     edx, eax
		mov     ebx, esi
		shl     edx, 10h
		mov     [esp+8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [___1a1edch]
		mov     [ecx+___19eb50h], eax
		shl     edx, 10h
		mov     eax, [ecx+___19df54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		mov     edx, eax
		mov     ebx, esi
		shl     edx, 10h
		mov     [esp+8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [___1a1edch]
		mov     [ecx+___19eb54h], eax
		shl     edx, 10h
		mov     eax, [ecx+___19df58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		add     ecx, byte 0ch
		mov     edx, eax
		mov     ebx, esi
		shl     edx, 10h
		mov     [esp+8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     [ecx+___19eb4ch], eax
		cmp     ecx, 180h
		jne     near ___2b516h
		mov     esp, ebp
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .bss

dummy_pal:
	resb 	300h

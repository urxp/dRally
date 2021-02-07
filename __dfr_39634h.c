/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCPY
	extern	___196adch
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fe8h
	extern	___1a01e0h
	extern	itoa_watcom106
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h_cdecl
	extern	___185c7ah
	extern	strupr_watcom106
	extern	___1a10b8h
	extern	___251e8h_cdecl

section .text

__GDECL(___39634h)
		push    50h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 34h
		mov     ebp, [___196adch]
		mov     edx, 15eh
		shl     ebp, 6
		mov     ebx, [___196adch]
		sub     edx, ebp
		inc     ebx
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		mov     ecx, [___196adch]
		lea     edx, [eax+6ch]
		xor     ebp, ebp
		lea     ebx, [eax+40h]
		test    ecx, ecx
		jle     near ___3985fh
		lea     eax, [ebx*4+0]
		add     eax, ebx
		imul    ebx, ebp
		lea     edi, [edx+19h]
		shl     eax, 7
		lea     esi, [edx+10h]
		mov     [esp+20h], eax
		lea     eax, [esi*4+0]
		add     eax, esi
		shl     eax, 7
		add     eax, ebx
		mov     [esp+30h], eax
		mov     eax, [esp+20h]
		mov     [esp+18h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebx
		mov     [esp+2ch], eax
		mov     eax, [esp+20h]
		mov     [esp+1ch], eax
		lea     eax, [edi*4+0]
		add     eax, edi
		lea     edx, [ebx+0e2h]
		shl     eax, 7
		add     ebx, byte 60h
		add     edx, eax
		add     ebx, eax
		mov     [esp+28h], edx
		mov     edx, [esp+20h]
		mov     [esp+24h], ebx
		mov     [esp+14h], edx
___396f1h:
		mov     esi, [esp+2ch]
		mov     ecx, 40h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 0b8h
		add     ebx, esi
		mov     esi, [___1a0fe8h]
		add     ebx, byte 36h
		shr     dl, 2
___39713h:
		mov     ch, dl
___39715h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___39715h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___39713h
		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [eax+___1a01e0h+48h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		cmp     dword [eax+___1a01e0h+48h], byte 1
		jne     short ___3977bh
		mov     ecx, [esp+30h]
		mov     ebx, esp
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		add     ecx, byte 46h
		jmp     short ___3978eh
___3977bh:
		mov     ecx, [esp+30h]
		mov     ebx, esp
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		add     ecx, byte 42h
___3978eh:

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     esi, ___1a01e0h
		mov     edi, esp
		mov     ecx, [esp+24h]
		add     esi, eax
		mov     ebx, esp
		call 	__STRCPY
		mov     eax, esp
		mov     edx, ___185c7ah

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     esi, [esp+30h]
		mov     edi, [esp+2ch]
		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [eax+___1a01e0h+44h]
		mov     ecx, [esp+28h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     eax, esp
		mov     ebx, esp
		mov     edx, ___185c7ah

	push 	edx
	push 	ecx
	push 	eax
		call    ___251e8h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		sub     ecx, eax
		mov     eax, [___1a10b8h]
		inc     ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [esp+20h]
		mov     edx, [esp+28h]
		mov     ebx, [esp+24h]
		add     esi, eax
		mov     eax, [esp+18h]
		mov     ecx, [___196adch]
		add     edi, eax
		mov     eax, [esp+1ch]
		mov     [esp+30h], esi
		add     edx, eax
		mov     eax, [esp+14h]
		mov     [esp+2ch], edi
		add     ebx, eax
		mov     [esp+28h], edx
		mov     [esp+24h], ebx
		cmp     ebp, ecx
		jl      near ___396f1h
___3985fh:
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/

cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___185a68h
	extern 	___185a74h
	extern 	___185a60h
	extern 	___185a64h
	extern 	___185a6ch
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	memset_
	extern 	___1866b8h
	extern 	___185ba9h
	extern 	___1a10e0h
	extern 	___12e78h
	extern 	___185a5ch
	extern 	___1a10cch
	extern 	___1a1e68h
	extern 	___1a10f4h
	extern 	___1398ch__VESA101_PRESENTRECTANGLE

section .text

__GDECL(___13cech)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 14h
		mov     [esp+10h], eax
		mov     edx, eax
		shl     eax, 3
		sub     eax, edx
		mov     ecx, [eax*4+___185a68h]
		imul    ecx, [eax*4+___185a74h]
		mov     ebp, [eax*4+___185a60h]
		mov     edx, [eax*4+___185a64h]
		mov     ebx, [eax*4+___185a6ch]
		add     edx, byte 6
		mov     esi, [eax*4+___185a6ch]
		add     edx, ecx
		sub     ebx, byte 0ah
		mov     [esp], edx
		lea     eax, [edx*4+0]
		sub     esi, byte 14h
		add     eax, edx
		mov     [esp+0ch], ebx
		shl     eax, 7
		mov     ebx, 20h
		lea     edx, [eax+0a00h]
		mov     [esp+8], ebx
		lea     edi, [eax+4100h]
		mov     ecx, edx
		cmp     edx, edi
		jge     short ___13d90h
___13d6eh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     edx, 0c4h
		add     eax, ebp
		mov     ebx, esi
		add     eax, byte 9
		add     ecx, 280h
		call    near memset_
		cmp     ecx, edi
		jl      short ___13d6eh
___13d90h:
		mov     eax, [esp+10h]
		lea     esi, [eax*8+0]
		sub     esi, eax
		mov     edx, [esi*4+___185a68h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     ecx, [esi*4+___185a74h]
		shl     eax, 7
		imul    eax, ecx
		lea     edx, [eax+0ca0h]
		mov     ecx, [esi*4+___185a64h]
		lea     eax, [ecx*4+0]
		add     eax, ecx
		mov     ecx, [esi*4+___185a74h]
		lea     ebx, [ecx*4+0]
		mov     edi, [esi*4+___185a60h]
		sub     ebx, ecx
		shl     eax, 7
		shl     ebx, 3
		add     eax, edi
		add     ebx, ecx
		mov     ecx, [esp+10h]
		add     edx, eax
		lea     eax, [ecx*8+0]
		sub     eax, ecx
		shl     eax, 5
		add     eax, ecx
		add     ebx, ebx
		add     eax, eax
		mov     ecx, edx
		add     eax, ___1866b8h
		mov     edx, ___185ba9h
		add     ebx, eax
		mov     eax, [___1a10e0h]
		call    near ___12e78h
		mov     eax, [esi*4+___185a5ch]
		mov     edx, [esi*4+___185a68h]
		dec     eax
		imul    edx, eax
		mov     [esi*4+___185a74h], eax
		mov     eax, [esi*4+___185a64h]
		add     eax, byte 6
		add     eax, edx
		mov     [esp+4], eax
		mov     eax, [esp+8]
		mov     edx, [esp+4]
		sub     eax, byte 0ah
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     edx, eax
		shl     eax, 2
		mov     esi, [esp+0ch]
		add     eax, edx
		shl     edi, 7
		shl     eax, 7
		lea     ebx, [edi+0a00h]
		add     eax, 0a00h
		sub     esi, byte 0ah
		add     edi, eax
		mov     ecx, ebx
		cmp     ebx, edi
		jge     short ___13ea7h
___13e85h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     edx, 0c4h
		add     eax, ebp
		mov     ebx, esi
		add     eax, byte 9
		add     ecx, 280h
		call    near memset_
		cmp     ecx, edi
		jl      short ___13e85h
___13ea7h:
		mov     eax, [esp+10h]
		lea     esi, [eax*8+0]
		sub     esi, eax
		mov     edx, [esi*4+___185a68h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edi, [esi*4+___185a74h]
		shl     eax, 7
		imul    edi, eax
		mov     edx, [esi*4+___185a64h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, [esi*4+___185a60h]
		mov     edx, [esi*4+___185a74h]
		lea     ebx, [edx*4+0]
		sub     ebx, edx
		shl     ebx, 3
		lea     ecx, [edi+0ca0h]
		add     ebx, edx
		mov     edx, [esp+10h]
		add     ecx, eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 5
		add     eax, edx
		add     eax, eax
		add     ebx, ebx
		add     eax, ___1866b8h
		mov     edx, ___185ba9h
		add     ebx, eax
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     edx, [esi*4+___185a64h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ebx, [esi*4+___185a60h]
		add     eax, edx
		add     edi, 1b89h
		add     eax, ebx
		mov     ecx, [___1a1e68h]
		lea     ebx, [eax+edi*1]
		lea     eax, [ecx*4+0]
		sub     eax, ecx
		shl     eax, 3
		mov     esi, [___1a10f4h]
		add     eax, ecx
		mov     ecx, 14h
		shl     eax, 4
		mov     edx, ecx
		add     esi, eax
___13f87h:
		mov     edi, edx
___13f89h:
		mov     al, [esi]
		or      al, al
		je      short ___13f91h
		mov     [ebx], al
___13f91h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13f89h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13f87h
		mov     edx, [esp]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, byte 2
		mov     ecx, [esp+8]
		add     edx, eax
		mov     ebx, [esp+0ch]
		add     edx, ebp
		add     eax, ebp
		add     edx, byte 5
		add     eax, byte 5

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     edx, [esp+4]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, byte 2
		mov     ecx, [esp+8]
		add     edx, eax
		mov     ebx, [esp+0ch]
		add     edx, ebp
		add     eax, ebp
		add     edx, byte 5
		add     eax, byte 5

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		add     esp, byte 14h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

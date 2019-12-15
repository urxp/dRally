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
	extern 	___185b58h
	extern 	___1a10cch
	extern 	___1a1e68h
	extern 	___1a10f4h
	extern 	___1398ch__VESA101_PRESENTRECTANGLE

section .text

__GDECL(___14010h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     [esp+4], eax
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
		mov     [esp+8], edx
		lea     edi, [edx*4+0]
		sub     esi, byte 14h
		add     edi, edx
		mov     [esp+14h], ebx
		shl     edi, 7
		mov     ebx, 20h
		lea     eax, [edi+0a00h]
		mov     [esp+10h], ebx
		add     edi, 4100h
		mov     ecx, eax
		cmp     eax, edi
		jge     short ___140b5h
___14093h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     edx, 0c4h
		add     eax, ebp
		mov     ebx, esi
		add     eax, byte 9
		add     ecx, 280h
		call    near memset_
		cmp     ecx, edi
		jl      short ___14093h
___140b5h:
		mov     edx, [esp+4]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     edx, [eax+___185a68h]
		mov     [esp], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp]
		shl     eax, 7
		imul    eax, [edx+___185a74h]
		mov     ecx, [esp]
		lea     edx, [eax+0ca0h]
		mov     ecx, [ecx+___185a64h]
		lea     eax, [ecx*4+0]
		mov     ebx, [esp]
		add     eax, ecx
		mov     ecx, [ebx+___185a74h]
		mov     esi, [ebx+___185a60h]
		lea     ebx, [ecx*4+0]
		sub     ebx, ecx
		shl     eax, 7
		shl     ebx, 3
		add     eax, esi
		add     ebx, ecx
		mov     ecx, [esp+4]
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
		mov     eax, [esp+4]
		lea     edi, [eax*8+0]
		mov     esi, [esp]
		add     edi, eax
		mov     eax, esi
		xor     edx, edx
___14162h:
		mov     ebx, [eax+___185a74h]
		cmp     edx, ebx
		jge     short ___14171h
		lea     ecx, [ebx-1]
		jmp     short ___14178h
___14171h:
		mov     ecx, [eax+___185a5ch]
		dec     ecx
___14178h:
		mov     [eax+___185a74h], ecx
		mov     ecx, [esi+___185a74h]
		cmp     dl, [ecx+edi*1+___185b58h]
		je      short ___14162h
		mov     eax, [esi+___185a68h]
		imul    eax, ecx
		mov     edx, [esi+___185a64h]
		add     edx, byte 6
		add     edx, eax
		mov     eax, [esp+10h]
		mov     [esp+0ch], edx
		sub     eax, byte 0ah
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     edx, eax
		shl     eax, 2
		mov     esi, [esp+14h]
		add     eax, edx
		shl     edi, 7
		shl     eax, 7
		lea     ebx, [edi+0a00h]
		add     eax, 0a00h
		sub     esi, byte 0ah
		add     edi, eax
		mov     ecx, ebx
		cmp     ebx, edi
		jge     short ___141feh
___141dch:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     edx, 0c4h
		add     eax, ebp
		mov     ebx, esi
		add     eax, byte 9
		add     ecx, 280h
		call    near memset_
		cmp     ecx, edi
		jl      short ___141dch
___141feh:
		mov     eax, [esp+4]
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
		mov     ecx, [esi*4+___185a60h]
		shl     eax, 7
		lea     ebx, [edi+0ca0h]
		add     ecx, eax
		mov     edx, [esi*4+___185a74h]
		add     ecx, ebx
		lea     ebx, [edx*4+0]
		sub     ebx, edx
		shl     ebx, 3
		add     ebx, edx
		mov     edx, [esp+4]
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
		mov     eax, [esi*4+___185a64h]
		lea     edx, [eax*4+0]
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     ebx, [esi*4+___185a60h]
		add     eax, edx
		mov     ecx, [___1a1e68h]
		add     ebx, eax
		lea     eax, [ecx*4+0]
		add     edi, 1b89h
		sub     eax, ecx
		mov     esi, [___1a10f4h]
		shl     eax, 3
		add     ebx, edi
		add     eax, ecx
		mov     ecx, 14h
		shl     eax, 4
		mov     edx, ecx
		add     esi, eax
___142deh:
		mov     edi, edx
___142e0h:
		mov     al, [esi]
		or      al, al
		je      short ___142e8h
		mov     [ebx], al
___142e8h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___142e0h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___142deh
		mov     edx, [esp+8]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, byte 2
		mov     ecx, [esp+10h]
		add     edx, eax
		mov     ebx, [esp+14h]
		add     edx, ebp
		add     eax, ebp
		add     edx, byte 5
		add     eax, byte 5
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     edx, [esp+0ch]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, byte 2
		mov     ecx, [esp+10h]
		add     edx, eax
		mov     ebx, [esp+14h]
		add     edx, ebp
		add     eax, ebp
		add     edx, byte 5
		add     eax, byte 5
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

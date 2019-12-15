cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR

section .text

__GDECL(___281d0h)
		push    28h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     ebp, eax
		mov     [esp], edx
		mov     [esp+4], ecx
		mov     eax, edx
		shl     edx, 2
		add     eax, edx
		shl     eax, 7
		mov     edx, eax
		add     eax, 0c80h
		mov     [esp+10h], eax
___281feh:
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, ebx
		add     esi, edx
		add     edi, edx
		add     esi, ebp
		add     edi, ebp
		call 	__MOVS
		add     edx, 280h
		cmp     edx, [esp+10h]
		jne     short ___281feh
		mov     eax, [esp+4]
		lea     edi, [eax*4+0]
		add     edi, eax
		mov     eax, [esp]
		lea     edx, [eax*4+0]
		shl     edi, 7
		add     eax, edx
		lea     esi, [edi+0fffff380h]
		shl     eax, 7
		lea     edx, [esi+eax*1]
		add     eax, edi
		mov     [esp+0ch], eax
___2825eh:
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, ebx
		add     esi, edx
		add     edi, edx
		add     esi, ebp
		add     edi, ebp
		call 	__MOVS
		add     edx, 280h
		mov     esi, [esp+0ch]
		cmp     edx, esi
		jne     short ___2825eh
		cmp     dword [esp+4], byte 0
		jle     short ___282f7h
		mov     eax, [esp]
		lea     edi, [eax*4+0]
		add     edi, eax
		mov     eax, [esp+4]
		xor     edx, esi
		lea     esi, [eax*4+0]
		add     esi, eax
		shl     edi, 7
		shl     esi, 7
		add     edx, edi
		add     edi, esi
		mov     [esp+8], edi
___282c2h:
		mov     ecx, 5
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, edx
		add     edi, edx
		add     esi, ebp
		add     edi, ebp
		call 	__MOVS
		add     edx, 280h
		cmp     edx, [esp+8]
		jl      short ___282c2h
___282f7h:
		cmp     dword [esp+4], byte 0
		jle     short ___28364h
		mov     eax, [esp]
		mov     edi, [esp+4]
		lea     edx, [eax*4+0]
		lea     esi, [edi*4+0]
		add     eax, edx
		add     esi, edi
		shl     eax, 7
		shl     esi, 7
		mov     edx, eax
		add     eax, esi
		mov     [esp+14h], eax
___28325h:
		mov     ecx, 5
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, edx
		add     edi, edx
		add     esi, ebp
		add     edi, ebp
		add     esi, ebx
		add     edi, ebx
		sub     esi, byte 5
		sub     edi, byte 5
		add     edx, 280h
		call 	__MOVS
		cmp     edx, [esp+14h]
		jl      short ___28325h
___28364h:
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		retn    

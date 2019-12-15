cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19bd60h
	extern	___196adch
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fc0h
	extern	itoa_
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h

section .text

__GDECL(___35dd0h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     edx, 4
		mov     ebx, [___19bd60h]
		mov     [esp+8], edx
		test    ebx, ebx
		je      short ___35dffh
		mov     eax, [___196adch]
		mov     [esp+8], eax
___35dffh:
		mov     eax, [esp+8]
		lea     ebp, [eax*4+0]
		add     ebp, eax
		shl     ebp, 4
		mov     edx, 15eh
		sub     ebp, eax
		lea     ebx, [eax+1]
		sub     edx, ebp
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		mov     esi, [esp+8]
		lea     ecx, [eax+6ch]
		xor     ebp, ebp
		lea     edx, [eax+4fh]
		test    esi, esi
		jle     near ___35f27h
		lea     eax, [edx*4+0]
		add     eax, edx
		imul    ebx, edx, byte 0
		shl     eax, 7
		lea     esi, [ecx+7]
		mov     [esp+4], eax
		lea     eax, [esi*4+0]
		add     eax, esi
		shl     eax, 7
		add     eax, ebx
		mov     [esp+10h], eax
		mov     eax, [esp+4]
		mov     [esp], eax
		lea     eax, [ecx*4+0]
		add     eax, ecx
		shl     eax, 7
		add     eax, ebx
		mov     [esp+0ch], eax
___35e77h:
		mov     ecx, [esp+0ch]
		mov     edx, 0cah
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fc0h]
		add     ebx, ecx
		mov     ecx, 4ah
		add     ebx, 185h
___35e99h:
		mov     edi, edx
___35e9bh:
		mov     al, [esi]
		or      al, al
		je      short ___35ea3h
		mov     [ebx], al
___35ea3h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___35e9bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___35e99h
		mov     ebx, 0ah
		lea     edx, [esp+14h]
		lea     eax, [ebp+1]
		call    near itoa_
		test    ebp, ebp
		jne     short ___35ee2h
		mov     ecx, [esp+10h]
		lea     ebx, [esp+14h]
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		add     ecx, 191h
		jmp     short ___35efah
___35ee2h:
		mov     ecx, [esp+10h]
		lea     ebx, [esp+14h]
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		add     ecx, 18ch
___35efah:
		call    near ___12e78h
		mov     eax, [esp+4]
		mov     edi, [esp+10h]
		mov     edx, [esp+0ch]
		mov     ebx, [esp+8]
		add     edi, eax
		mov     eax, [esp]
		inc     ebp
		add     edx, eax
		mov     [esp+10h], edi
		mov     [esp+0ch], edx
		cmp     ebp, ebx
		jl      near ___35e77h
___35f27h:
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

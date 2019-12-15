cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___185a60h
	extern 	___185a64h
	extern 	___185a6ch
	extern 	___185a70h
	extern 	___13248h
	extern 	___185a5ch
	extern 	___1866b8h
	extern 	___185a74h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e68h
	extern 	___1a10f4h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___1a10d0h
	extern 	___185b58h
	extern 	___1a10e0h
	extern 	___12e78h
	extern 	___185a68h

section .text

__GDECL(___13710h)
		push    48h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 2ch
		mov     ebp, eax
		mov     [esp+1ch], edx
		lea     esi, [eax*8+0]
		sub     esi, eax
		mov     edi, [esp+1ch]
		shl     esi, 2
		push    edi
		mov     eax, [esi+___185a60h]
		mov     edx, [esi+___185a64h]
		mov     ebx, [esi+___185a6ch]
		mov     ecx, [esi+___185a70h]
		call    near ___13248h
		mov     [esp+4], esi
		mov     [esp+0ch], esi
		xor     ebx, ebx
		mov     eax, 0ca0h
		mov     [esp+20h], ebx
		mov     ebx, ebp
		mov     [esp+28h], eax
		lea     eax, [ebx*8+0]
		mov     edx, 1b89h
		sub     eax, ebx
		mov     ecx, [esi+___185a5ch]
		shl     eax, 5
		mov     [esp], edx
		add     ebx, eax
		mov     edx, ___1866b8h
		add     ebx, ebx
		mov     eax, ebp
		add     edx, ebx
		shl     eax, 3
		mov     [esp+10h], edx
		add     eax, ebp
		mov     ebp, esi
		mov     [esp+14h], eax
		test    ecx, ecx
		jle     near ___13982h
		mov     eax, ___1866b8h
		add     eax, ebx
		xor     ebx, ebx
		mov     [esp+8], eax
		mov     [esp+18h], ebx
___137beh:
		mov     eax, [esp+8]
		add     eax, [esp+18h]
		mov     esi, [esp+20h]
		mov     [esp+24h], eax
		cmp     esi, [ebp+___185a74h]
		jne     near ___1388fh
		cmp     dword [esp+1ch], byte 0
		jle     near ___13864h
		imul    eax, [ebp+___185a64h], 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [___1a1e68h]
		add     ebx, eax
		imul    eax, edx, 190h
		mov     edi, [esp]
		mov     esi, [ebp+___185a60h]
		mov     ecx, 14h
		add     ebx, esi
		mov     esi, [___1a10f4h]
		add     ebx, edi
		mov     edx, ecx
		add     esi, eax
___1381fh:
		mov     edi, edx
___13821h:
		mov     al, [esi]
		or      al, al
		je      short ___13829h
		mov     [ebx], al
___13829h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13821h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___1381fh
		imul    eax, [ebp+___185a64h], 280h
		mov     ecx, [ebp+___185a60h]
		mov     edx, ___185ba9h
		add     eax, ecx
		mov     ecx, [esp+28h]
		mov     ebx, [esp+24h]
		add     ecx, eax
		mov     eax, [___1a10cch]
		jmp     near ___13927h
___13864h:
		imul    eax, [ebp+___185a64h], 280h
		mov     ecx, [esp+28h]
		mov     ebx, [ebp+___185a60h]
		mov     edx, ___185ba9h
		add     eax, ebx
		mov     ebx, [esp+24h]
		add     ecx, eax
		mov     eax, [___1a10d0h]
		jmp     near ___13927h
___1388fh:
		mov     eax, [esp+14h]
		cmp     byte [eax+___185b58h], 1
		jne     short ___13901h
		cmp     dword [esp+1ch], byte 1
		jne     short ___138ceh
		imul    ecx, [ebp+___185a64h], 280h
		mov     eax, [esp+28h]
		mov     edi, [ebp+___185a60h]
		mov     ebx, [esp+24h]
		add     ecx, edi
		mov     edx, ___185ba9h
		add     ecx, eax
		mov     eax, [___1a10e0h]
		call    near ___12e78h
___138ceh:
		cmp     dword [esp+1ch], byte 0
		jne     short ___1392ch
		mov     eax, [esp+0ch]
		imul    ecx, [eax+___185a64h], 280h
		mov     edi, [esp+28h]
		mov     edx, ___185ba9h
		mov     esi, [eax+___185a60h]
		mov     eax, [___1a10d0h]
		add     ecx, esi
		mov     ebx, [esp+10h]
		add     ecx, edi
		jmp     short ___13927h
___13901h:
		imul    ecx, [ebp+___185a64h], 280h
		mov     edx, [esp+28h]
		mov     eax, [ebp+___185a60h]
		mov     ebx, [esp+24h]
		add     ecx, eax
		mov     eax, [___1a10d0h]
		add     ecx, edx
		mov     edx, ___185ba9h
___13927h:
		call    near ___12e78h
___1392ch:
		mov     eax, [esp+4]
		imul    eax, [eax+___185a68h], 280h
		mov     edi, [esp+28h]
		mov     edx, [esp]
		mov     ebx, [esp+14h]
		mov     ecx, [esp+10h]
		inc     ebx
		add     ecx, byte 32h
		mov     [esp+14h], ebx
		mov     [esp+10h], ecx
		mov     esi, [esp+18h]
		add     edi, eax
		add     edx, eax
		mov     [esp+28h], edi
		mov     [esp], edx
		add     esi, byte 32h
		mov     edi, [esp+20h]
		mov     [esp+18h], esi
		inc     edi
		mov     edx, [ebp+___185a5ch]
		mov     [esp+20h], edi
		cmp     edi, edx
		jl      near ___137beh
___13982h:
		add     esp, byte 2ch
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

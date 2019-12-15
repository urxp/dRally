cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243d80h
	extern	___243d64h
	extern	___243c60h
	extern	___1e70b2h
	extern	___196dc8h
	extern	___1e712ah
	extern	___196d98h
	extern	___1e71a2h
	extern	___196dcch
	extern	___243334h
	extern	___1e70eeh
	extern	___1e7166h
	extern	___1e71deh

section .text

__GDECL(___50ef4h)
		push    48h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 2ch
		mov     esi, [___243d80h]
		mov     edi, [___243d64h]
		xor     edx, edx
		mov     [esp+0ch], edx
		xor     ebp, ebp
___50f1bh:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		cmp     ebp, [eax+___1e70b2h]
		jge     near ___5107bh
		mov     ecx, [___196dc8h]
		mov     edx, [eax+___1e712ah]
		sub     edx, ecx
		mov     ecx, [___196d98h]
		add     ecx, edx
		mov     [esp+20h], ecx
		mov     edx, [eax+___1e71a2h]
		sub     edx, [___196dcch]
		mov     ecx, [esp+20h]
		cmp     ecx, byte 4
		jl      near ___5104eh
		add     ecx, byte 4
		cmp     ecx, 140h
		jge     near ___5104eh
		cmp     edx, byte 4
		jl      near ___5104eh
		lea     ecx, [edx+4]
		cmp     ecx, 0c8h
		jge     near ___5104eh
		mov     ecx, [eax+___1e70b2h]
		cmp     ebp, ecx
		jge     short ___50fa0h
		cmp     ecx, byte 4
		jg      short ___50fa0h
		mov     ebx, ebp
___50fa0h:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		mov     ecx, [eax+___1e70b2h]
		cmp     ecx, byte 4
		jle     short ___50fc3h
		cmp     ecx, byte 8
		jg      short ___50fc3h
		mov     ebx, 40h
___50fc3h:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		mov     ecx, [eax+___1e70b2h]
		cmp     ecx, byte 8
		jle     short ___50fe6h
		cmp     ecx, byte 0ch
		jg      short ___50fe6h
		mov     ebx, 80h
___50fe6h:
		shl     edx, 9
		sub     edx, 800h
		mov     [esp+18h], ebp
		mov     [esp+14h], edx
___50ff7h:
		mov     edx, [esp+14h]
		mov     [esp+24h], edx
		mov     edx, [esp+18h]
		xor     eax, eax
		mov     [esp+8], edx
___51009h:
		lea     edx, [edi+ebx*1]
		mov     ecx, [esp+8]
		add     edx, eax
		add     edx, ecx
		cmp     byte [edx], 0
		je      short ___5102ah
		mov     ecx, esi
		add     ecx, [esp+20h]
		add     ecx, eax
		add     ecx, [esp+24h]
		mov     dl, [edx]
		mov     [ecx+5ch], dl
___5102ah:
		inc     eax
		cmp     eax, byte 8
		jl      short ___51009h
		mov     edx, [esp+14h]
		mov     eax, [esp+18h]
		add     edx, 200h
		add     eax, byte 8
		mov     [esp+14h], edx
		mov     [esp+18h], eax
		cmp     eax, byte 40h
		jne     short ___50ff7h
___5104eh:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		mov     edx, [___243334h]
		mov     ecx, [eax+___1e70b2h]
		add     ecx, edx
		mov     [eax+___1e70b2h], ecx
		cmp     ecx, byte 0dh
		jl      short ___5107bh
		mov     [eax+___1e70b2h], ebp
___5107bh:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		cmp     ebp, [eax+___1e70eeh]
		jge     near ___511d8h
		mov     ecx, [___196dc8h]
		mov     edx, [eax+___1e7166h]
		sub     edx, ecx
		mov     ecx, [___196d98h]
		add     ecx, edx
		mov     [esp], ecx
		mov     edx, [eax+___1e71deh]
		sub     edx, [___196dcch]
		mov     ecx, [esp]
		cmp     ecx, byte 4
		jl      near ___511abh
		add     ecx, byte 4
		cmp     ecx, 140h
		jge     near ___511abh
		cmp     edx, byte 4
		jl      near ___511abh
		lea     ecx, [edx+4]
		cmp     ecx, 0c8h
		jge     near ___511abh
		mov     ecx, [eax+___1e70eeh]
		cmp     ebp, ecx
		jge     short ___510feh
		cmp     ecx, byte 4
		jg      short ___510feh
		mov     ebx, ebp
___510feh:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		mov     ecx, [eax+___1e70eeh]
		cmp     ecx, byte 4
		jle     short ___51121h
		cmp     ecx, byte 8
		jg      short ___51121h
		mov     ebx, 40h
___51121h:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		mov     ecx, [eax+___1e70eeh]
		cmp     ecx, byte 8
		jle     short ___51144h
		cmp     ecx, byte 0ch
		jg      short ___51144h
		mov     ebx, 80h
___51144h:
		shl     edx, 9
		sub     edx, 800h
		mov     [esp+1ch], ebp
		mov     [esp+10h], edx
___51155h:
		mov     edx, [esp+10h]
		mov     [esp+28h], edx
		mov     edx, [esp+1ch]
		xor     eax, eax
		mov     [esp+4], edx
___51167h:
		lea     edx, [edi+ebx*1]
		mov     ecx, [esp+4]
		add     edx, eax
		add     edx, ecx
		cmp     byte [edx], 0
		je      short ___51187h
		mov     ecx, esi
		add     ecx, [esp]
		add     ecx, eax
		add     ecx, [esp+28h]
		mov     dl, [edx]
		mov     [ecx+5ch], dl
___51187h:
		inc     eax
		cmp     eax, byte 8
		jl      short ___51167h
		mov     edx, [esp+10h]
		mov     eax, [esp+1ch]
		add     edx, 200h
		add     eax, byte 8
		mov     [esp+10h], edx
		mov     [esp+1ch], eax
		cmp     eax, byte 40h
		jne     short ___51155h
___511abh:
		imul    eax, [___243c60h], 35eh
		add     eax, [esp+0ch]
		mov     edx, [___243334h]
		mov     ecx, [eax+___1e70eeh]
		add     ecx, edx
		mov     [eax+___1e70eeh], ecx
		cmp     ecx, byte 0dh
		jl      short ___511d8h
		mov     [eax+___1e70eeh], ebp
___511d8h:
		mov     ecx, [esp+0ch]
		add     ecx, byte 4
		mov     [esp+0ch], ecx
		cmp     ecx, byte 3ch
		jne     near ___50f1bh
		mov     [___243d64h], edi
		mov     [___243d80h], esi
		add     esp, byte 2ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

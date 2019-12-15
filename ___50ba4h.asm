cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243d80h
	extern	___243d88h
	extern	___243c60h
	extern	___1e7082h
	extern	___196dc8h
	extern	___1e709ah
	extern	___196d98h
	extern	___196dcch
	extern	___1e709eh
	extern	___1e707eh
	extern	___1e7092h
	extern	___1e7096h
	extern	___1e707ah
	extern	___1e708ah
	extern	___1e708eh

section .text

__GDECL(___50ba4h)
		push    58h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 3ch
		mov     ebx, [___243d80h]
		mov     esi, [___243d88h]
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7082h], byte 0
		jle     near ___50cabh
		mov     edi, [___196dc8h]
		mov     edx, [eax+___1e709ah]
		mov     ecx, [___196d98h]
		sub     edx, edi
		mov     ebp, [___196dcch]
		add     ecx, edx
		mov     edx, [eax+___1e709eh]
		mov     [esp], ecx
		sub     edx, ebp
		test    ecx, ecx
		jl      near ___50c99h
		add     ecx, byte 8
		cmp     ecx, 140h
		jge     near ___50c99h
		test    edx, edx
		jl      near ___50c99h
		lea     ecx, [edx+8]
		cmp     ecx, 0c8h
		jge     short ___50c99h
		shl     edx, 9
		mov     eax, [eax+___1e7082h]
		xor     edi, edi
		dec     eax
		mov     [esp+1ch], edi
		shl     eax, 6
		mov     [esp+14h], edx
		mov     [esp+28h], eax
___50c46h:
		mov     edx, [esp+14h]
		mov     ebp, [esp+1ch]
		xor     eax, eax
		mov     [esp+38h], edx
___50c54h:
		mov     ecx, [esp+28h]
		lea     edx, [esi+ecx*1]
		add     edx, eax
		add     edx, ebp
		cmp     byte [edx], 0
		je      short ___50c76h
		mov     edi, [esp]
		lea     ecx, [ebx+edi*1]
		mov     edi, [esp+38h]
		add     ecx, eax
		mov     dl, [edx]
		mov     [ecx+edi*1+60h], dl
___50c76h:
		inc     eax
		cmp     eax, byte 8
		jl      short ___50c54h
		mov     eax, [esp+14h]
		mov     ebp, [esp+1ch]
		add     eax, 200h
		add     ebp, byte 8
		mov     [esp+14h], eax
		mov     [esp+1ch], ebp
		cmp     ebp, byte 40h
		jne     short ___50c46h
___50c99h:
		imul    eax, [___243c60h], 35eh
		xor     edi, edi
		mov     [eax+___1e7082h], edi
___50cabh:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e707eh], byte 0
		jle     near ___50dc7h
		mov     ecx, [___196dc8h]
		mov     edx, [eax+___1e7092h]
		sub     edx, ecx
		mov     ecx, [___196d98h]
		add     ecx, edx
		mov     edi, [___196dcch]
		mov     [esp+34h], ecx
		mov     ecx, [eax+___1e7092h]
		mov     edx, [eax+___1e7096h]
		mov     [eax+___1e709ah], ecx
		mov     ebp, [esp+34h]
		mov     ecx, [eax+___1e7096h]
		sub     edx, edi
		mov     [eax+___1e709eh], ecx
		test    ebp, ebp
		jl      near ___50da8h
		lea     ecx, [ebp+8]
		cmp     ecx, 140h
		jge     near ___50da8h
		test    edx, edx
		jl      near ___50da8h
		lea     ecx, [edx+8]
		cmp     ecx, 0c8h
		jge     near ___50da8h
		mov     eax, [eax+___1e707eh]
		dec     eax
		shl     eax, 6
		mov     [esp+24h], eax
		xor     eax, eax
		mov     [esp+18h], eax
		mov     eax, edx
		shl     eax, 9
		mov     [esp+0ch], eax
		mov     ebp, 8
___50d56h:
		mov     edi, [esp+0ch]
		mov     edx, [esp+18h]
		xor     eax, eax
		mov     [esp+4], edx
___50d64h:
		mov     ecx, [esp+24h]
		lea     edx, [esi+ecx*1]
		mov     ecx, [esp+4]
		add     edx, eax
		add     edx, ecx
		cmp     byte [edx], 0
		je      short ___50d86h
		mov     ecx, ebx
		add     ecx, [esp+34h]
		add     ecx, eax
		mov     dl, [edx]
		mov     [ecx+edi*1+60h], dl
___50d86h:
		inc     eax
		cmp     eax, byte 8
		jl      short ___50d64h
		mov     eax, [esp+0ch]
		mov     edi, [esp+18h]
		add     eax, 200h
		add     edi, ebp
		mov     [esp+0ch], eax
		mov     [esp+18h], edi
		cmp     edi, byte 40h
		jne     short ___50d56h
___50da8h:
		imul    eax, [___243c60h], 35eh
		mov     edx, [eax+___1e707eh]
		xor     edi, edi
		inc     edx
		mov     [eax+___1e707eh], edi
		mov     [eax+___1e7082h], edx
___50dc7h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e707ah], byte 0
		jle     near ___50edch
		mov     ecx, [___196dc8h]
		mov     edx, [eax+___1e708ah]
		sub     edx, ecx
		mov     ecx, [___196d98h]
		add     ecx, edx
		mov     edi, [___196dcch]
		mov     [esp+30h], ecx
		mov     ecx, [eax+___1e708ah]
		mov     edx, [eax+___1e708eh]
		mov     [eax+___1e7092h], ecx
		mov     ebp, [esp+30h]
		mov     ecx, [eax+___1e708eh]
		sub     edx, edi
		mov     [eax+___1e7096h], ecx
		test    ebp, ebp
		jl      near ___50ebdh
		lea     ecx, [ebp+8]
		cmp     ecx, 140h
		jge     near ___50ebdh
		test    edx, edx
		jl      near ___50ebdh
		lea     ecx, [edx+8]
		cmp     ecx, 0c8h
		jge     short ___50ebdh
		mov     eax, [eax+___1e707ah]
		dec     eax
		shl     eax, 6
		mov     [esp+2ch], eax
		xor     eax, eax
		mov     [esp+20h], eax
		mov     eax, edx
		shl     eax, 9
		mov     [esp+10h], eax
___50e69h:
		mov     edx, [esp+10h]
		mov     ebp, [esp+20h]
		xor     eax, eax
		mov     [esp+8], edx
___50e77h:
		mov     ecx, [esp+2ch]
		lea     edx, [esi+ecx*1]
		add     edx, eax
		add     edx, ebp
		cmp     byte [edx], 0
		je      short ___50e9ah
		mov     edi, [esp+30h]
		lea     ecx, [ebx+edi*1]
		mov     edi, [esp+8]
		add     ecx, eax
		mov     dl, [edx]
		mov     [ecx+edi*1+60h], dl
___50e9ah:
		inc     eax
		cmp     eax, byte 8
		jl      short ___50e77h
		mov     eax, [esp+10h]
		mov     ebp, [esp+20h]
		add     eax, 200h
		add     ebp, byte 8
		mov     [esp+10h], eax
		mov     [esp+20h], ebp
		cmp     ebp, byte 40h
		jne     short ___50e69h
___50ebdh:
		imul    eax, [___243c60h], 35eh
		mov     edx, [eax+___1e707ah]
		xor     edi, edi
		inc     edx
		mov     [eax+___1e707ah], edi
		mov     [eax+___1e707eh], edx
___50edch:
		mov     [___243d88h], esi
		mov     [___243d80h], ebx
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

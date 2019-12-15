cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a0ef8h
	extern	___1a01fch
	extern	___1a0ef7h

section .text

__GDECL(___35f34h)
		push    28h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 14h
		mov     [esp+0ch], eax
		mov     [esp+10h], edx
		mov     [esp+8], ebx
___35f51h:
		mov     esi, [esp+10h]
		mov     ecx, [esp+0ch]
		lea     edx, [ecx+esi*1]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     ebp, [esp+8]
		shl     ebp, 2
		movzx   edi, byte [eax+ebp*1+___1a0ef8h]
		imul    edi, edi, byte 6ch
		mov     [esp+4], ebp
		mov     edi, [edi+___1a01fch]
___35f81h:
		mov     al, [ecx+ebp*1+___1a0ef8h]
		and     eax, 0ffh
		imul    eax, eax, byte 6ch
		cmp     edi, [eax+___1a01fch]
		jle     short ___35f9bh
		inc     ecx
		jmp     short ___35f81h
___35f9bh:
		mov     eax, [esp+4]
		add     eax, esi
___35fa1h:
		xor     ebx, ebx
		mov     bl, [eax+___1a0ef8h]
		imul    ebx, ebx, byte 6ch
		lea     edx, [esi-1]
		cmp     edi, [ebx+___1a01fch]
		jge     short ___35fbch
		mov     esi, edx
		dec     eax
		jmp     short ___35fa1h
___35fbch:
		cmp     ecx, esi
		jg      short ___35fe9h
		mov     esi, [esp+4]
		xor     ebx, ebx
		mov     bl, [ecx+esi*1+___1a0ef8h]
		inc     ecx
		mov     [esp], ebx
		mov     bl, [eax+___1a0ef8h]
		mov     [ecx+esi*1+___1a0ef7h], bl
		mov     bl, [esp]
		mov     esi, edx
		mov     [eax+___1a0ef8h], bl
___35fe9h:
		cmp     ecx, esi
		jl      short ___35f81h
		cmp     esi, [esp+0ch]
		jle     short ___36002h
		mov     ebx, [esp+8]
		mov     eax, [esp+0ch]
		mov     edx, esi
		call    near ___35f34h
___36002h:
		cmp     ecx, [esp+10h]
		jge     short ___36011h
		mov     [esp+0ch], ecx
		jmp     near ___35f51h
___36011h:
		add     esp, byte 14h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    

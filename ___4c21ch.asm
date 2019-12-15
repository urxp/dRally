cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243cech
	extern	___3f6ech
	extern	___3f704h
	extern	___243ce8h
	extern	___1de868h
	extern	___1de814h
	extern	___243cf4h
	extern	___243c60h
	extern	___243ce0h
	extern	___1de598h
	extern	___1e6fd8h
	extern	___1e6ed0h
	extern	___185a50h
	extern	___1de588h
	extern	___1de4f0h

section .text

__GDECL(___4c21ch)
		push    5ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 40h
		and     esp, byte 0fffffff8h
		mov     ebx, [___243cech]
		mov     ecx, 6
		lea     edi, [esp+18h]
		mov     esi, ___3f6ech
		rep movsd   
		mov     ecx, 6
		mov     edi, esp
		mov     esi, ___3f704h
		mov     edx, [___243ce8h]
		rep movsd   
		test    edx, edx
		jne     short ___4c26ah
		mov     esi, [___1de868h]
		jmp     short ___4c270h
___4c26ah:
		mov     esi, [___1de814h]
___4c270h:
		xor     ecx, ecx
		mov     edi, [___243cf4h]
		mov     [___243c60h], ecx
		test    edi, edi
		jle     near ___4c425h
		imul    edx, [___243ce8h], 35eh
		shl     esi, 3
		xor     eax, eax
___4c295h:
		mov     dword [esp+3ch], 3f800000h
		mov     edi, [___243c60h]
		cmp     edi, [___243ce8h]
		jne     short ___4c2b8h
		cmp     dword [___243ce0h], byte 0
		je      near ___4c3f1h
___4c2b8h:
		cmp     dword [ecx+___1de598h], byte 0
		jle     near ___4c3f1h
		movzx   edi, byte [edx+___1e6fd8h]
		imul    edi, ebx
		add     edi, [edx+___1e6ed0h]
		mov     [esp+34h], edi
		movzx   edi, byte [eax+___1e6fd8h]
		imul    edi, ebx
		add     edi, [eax+___1e6ed0h]
		mov     [esp+38h], edi
		mov     edi, [esp+34h]
		dec     edi
		mov     [esp+30h], edi
		mov     edi, [esp+38h]
		cmp     edi, [esp+30h]
		jne     short ___4c30ch
		fld     dword [esp+esi*1+18h]
		fld1    
		faddp   st1, st0
		fstp    dword [esp+3ch]
___4c30ch:
		movzx   edi, byte [edx+___1e6fd8h]
		imul    edi, ebx
		add     edi, [edx+___1e6ed0h]
		mov     [esp+38h], edi
		movzx   edi, byte [eax+___1e6fd8h]
		imul    edi, ebx
		add     edi, [eax+___1e6ed0h]
		mov     [esp+30h], edi
		mov     edi, [esp+38h]
		sub     edi, byte 2
		mov     [esp+34h], edi
		mov     edi, [esp+30h]
		cmp     edi, [esp+34h]
		jg      short ___4c355h
		fld     dword [esp+esi*1+1ch]
		fld1    
		faddp   st1, st0
		fstp    dword [esp+3ch]
___4c355h:
		cmp     dword [___185a50h], byte 2
		je      near ___4c3f1h
		movzx   edi, byte [edx+___1e6fd8h]
		imul    edi, ebx
		add     edi, [edx+___1e6ed0h]
		mov     [esp+34h], edi
		movzx   edi, byte [eax+___1e6fd8h]
		imul    edi, ebx
		add     edi, [eax+___1e6ed0h]
		mov     [esp+38h], edi
		mov     edi, [esp+34h]
		inc     edi
		mov     [esp+34h], edi
		mov     edi, [esp+38h]
		cmp     edi, [esp+34h]
		jne     short ___4c3a8h
		fld     dword [esp+esi*1]
		fld1    
		fsubrp  st1, st0
		fstp    dword [esp+3ch]
___4c3a8h:
		movzx   edi, byte [edx+___1e6fd8h]
		imul    edi, ebx
		add     edi, [edx+___1e6ed0h]
		mov     [esp+38h], edi
		movzx   edi, byte [eax+___1e6fd8h]
		imul    edi, ebx
		add     edi, [eax+___1e6ed0h]
		mov     [esp+34h], edi
		mov     edi, [esp+38h]
		add     edi, byte 2
		mov     [esp+38h], edi
		mov     edi, [esp+34h]
		cmp     edi, [esp+38h]
		jl      short ___4c3f1h
		fld     dword [esp+esi*1+4]
		fld1    
		fsubrp  st1, st0
		fstp    dword [esp+3ch]
___4c3f1h:
		fld     dword [ecx+___1de588h]
		fmul    dword [esp+3ch]
		mov     edi, [___243c60h]
		add     ecx, 94h
		add     eax, 35eh
		inc     edi
		fstp    dword [ecx+___1de4f0h]
		mov     [___243c60h], edi
		cmp     edi, [___243cf4h]
		jl      near ___4c295h
___4c425h:
		mov     [___243cech], ebx
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

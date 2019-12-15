cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243cd4h
	extern	___243ca0h
	extern	___243894h
	extern	___243330h
	extern	___243334h
	extern	___243ca4h
	extern	___24332ch
	extern	___243ce8h
	extern	___1e6fdah
	extern	___1a10a0h
	extern	___1a10a8h
	extern	___1a1094h
	extern	___1a109ch
	extern	___182f5fh
	extern	__CHP
	extern	___1a1090h
	extern	___1a102ch
	extern	___243cdch
	extern	___40864h

section .text

__GDECL(___40db4h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 4
		mov     esi, [___243cd4h]
		mov     edi, [___243ca0h]
		mov     eax, [___243894h]
		mov     edx, [___243330h]
		sub     eax, edx
		mov     [___243334h], eax
		mov     eax, [___243894h]
		mov     edx, [___243334h]
		mov     ebx, 20000h
		shl     edx, 10h
		mov     [___243330h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [___243ca4h]
		mov     [___24332ch], eax
		cmp     ebx, 0beh
		jle     near ___40ef4h
		imul    eax, [___243ce8h], 35eh
		cmp     dword [eax+___1e6fdah], byte 0
		jne     near ___40ef4h
		mov     ebx, 46h
		mov     eax, [___243334h]
		mov     esi, [___243cd4h]
		mov     edi, [___243ca0h]
		add     esi, eax
		add     edi, eax
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ecx, 3ch
		sar     edx, 1fh
		mov     ebx, eax
		idiv    ecx
		mov     [___1a10a0h], eax
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    ecx
		mov     ebx, 46h
		mov     [___1a10a8h], edx
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    ebx
		mov     [esp], edx
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		sar     edx, 1fh
		mov     ebx, eax
		idiv    ecx
		mov     [___1a1094h], eax
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    ecx
		mov     ebx, 46h
		mov     [___1a109ch], edx
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ebx
		fld     qword [___182f5fh]
		fild    dword [esp]
		fmul    st0, st1
		mov     [esp], edx
		fild    dword [esp]
		fmulp   st2, st0
		mov     [___243cd4h], esi
		mov     [___243ca0h], edi
		call    near __CHP
		fistp   dword [___1a1090h]
		call    near __CHP
		fistp   dword [___1a102ch]
___40ef4h:
		mov     edi, [___243ca0h]
		mov     eax, [___243cdch]
		mov     esi, [___243cd4h]
		test    eax, eax
		jle     short ___40f28h
		mov     edx, [___243cdch]
		mov     eax, [___243334h]
		sub     edx, eax
		mov     [___243cdch], edx
		test    edx, edx
		jge     short ___40f28h
		xor     ecx, ecx
		mov     [___243cdch], ecx
___40f28h:
		mov     [___243cd4h], esi
		mov     [___243ca0h], edi
		call    near ___40864h
		mov     esi, [___243cd4h]
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___180680h
	extern 	___180144h
	extern 	bpa_read_cdecl
	extern 	___19eb50h
	extern 	___19eb54h
	extern 	___19eb58h
	extern 	___19df50h
	extern 	___19df54h
	extern 	___19df4ch

section .text

__GDECL(___12940h)
		push    320h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 304h
		mov     ebx, ___180680h		;; "menu.pal"
		mov     edx, esp
		mov     eax, ___180144h		;; "MENU.BPA"
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		xor     edx, edx
		xor     ecx, ecx
		mov     [esp+300h], edx
___12972h:
		mov     esi, [esp+300h]
		lea     esi, [esi+esi*2]
		xor     eax, eax
		mov     al, [esp+esi*1]
		movzx   ebp, byte [esp+esi*1+1]
		movzx   edi, byte [esp+esi*1+2]
		mov     esi, eax
		mov     ebx, 640000h
		shl     esi, 10h
		shl     ebp, 10h
		mov     edx, esi
		shl     edi, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, ebp
		mov     [ecx+___19eb50h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, edi
		mov     [ecx+___19eb54h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, esi
		mov     [ecx+___19eb58h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, ebp
		mov     [ecx+___19df50h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, edi
		mov     [ecx+___19df54h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+300h]
		add     ecx, byte 0ch
		inc     ebx
		mov     [ecx+___19df4ch], eax
		mov     [esp+300h], ebx
		cmp     ebx, 100h
		jl      near ___12972h
		add     esp, 304h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

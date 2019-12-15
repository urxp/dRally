cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd64h
	extern	___183200h
	extern	___1a54d0h
	extern	___243dd0h
	extern	bpa_read
	extern	___243c88h
	extern	bpk_decode4
	extern	___1f3b08h
	extern	___243c94h
	extern	___240b48h
	extern	___19bd66h
	extern	___243d5ch

section .text

___43460h:
dd	___436fch
dd	___43598h
dd	___435dfh
dd	___43626h
dd	___43661h
dd	___43696h
dd	___436c8h
dd	___43661h
dd	___43696h
dd	___436fch
__GDECL(___43488h)
		push    3ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     esi, ___19bd64h
		mov     edi, esp
		mov     ebx, esp
		call 	__STRCPY
		mov     esi, ___183200h
		mov     edi, esp
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___243dd0h
		call    near bpa_read
		push    ___1a54d0h
		push    ___243c88h
		push    byte 0
		push    byte 1
		call    near bpk_decode4
		imul    eax, [___243c88h], 0c50h
		push    ___1a54d0h
		push    ___1f3b08h
		push    byte 1
		inc     eax
		push    eax
		call    near bpk_decode4
		imul    eax, [___243c88h], 0c50h
		push    ___1a54d0h
		push    ___243c94h
		inc     eax
		push    eax
		push    byte 1
		call    near bpk_decode4
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		test    eax, eax
		jbe     short ___4357ch
		imul    edx, [___243c88h], 0c50h
		push    ___1a54d0h
		push    ___240b48h
		add     edx, byte 2
		push    edx
		push    eax
		call    near bpk_decode4
___4357ch:
		mov     al, [___19bd66h]
		sub     al, 30h
		cmp     al, 9
		ja      near ___43739h
		and     eax, 0ffh
		jmp     near dword [cs:eax*4+___43460h]
___43598h:
		imul    ebx, [___243c88h], 0c50h
		push    ___1a54d0h
		mov     edx, [___243d5ch]
		push    edx
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     ebx, byte 2
		shl     eax, 2
		add     eax, ebx
		push    eax
		push    5f370h
		call    near bpk_decode4
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___435dfh:
		imul    ebx, [___243c88h], 0c50h
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		push    ___1a54d0h
		shl     eax, 2
		mov     ebp, [___243d5ch]
		sub     eax, edx
		add     ebx, byte 2
		shl     eax, 2
		push    ebp
		add     eax, ebx
		push    eax
		push    5f370h
		call    near bpk_decode4
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___43626h:
		imul    ebx, [___243c88h], 0c50h
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		push    ___1a54d0h
		lea     edx, [eax*4+0]
		mov     esi, [___243d5ch]
		lea     eax, [ebx+2]
		push    esi
		add     eax, edx
		jmp     near ___4372eh
___43661h:
		imul    ebx, [___243c88h], 0c50h
		push    ___1a54d0h
		mov     edx, [___243d5ch]
		push    edx
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     ebx, byte 2
		shl     eax, 2
		jmp     near ___4372ch
___43696h:
		imul    ebx, [___243c88h], 0c50h
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		push    ___1a54d0h
		shl     eax, 2
		mov     ebp, [___243d5ch]
		sub     eax, edx
		add     ebx, byte 2
		shl     eax, 2
		push    ebp
		jmp     short ___4372ch
___436c8h:
		imul    ebx, [___243c88h], 0c50h
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		push    ___1a54d0h
		sub     eax, edx
		mov     esi, [___243d5ch]
		shl     eax, 2
		lea     edx, [ebx+2]
		push    esi
		add     eax, edx
		jmp     short ___4372eh
___436fch:
		imul    ebx, [___243c88h], 0c50h
		mov     edx, [___243c94h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		push    ___1a54d0h
		sub     eax, edx
		mov     esi, [___243d5ch]
		shl     eax, 2
		add     ebx, byte 2
		push    esi
___4372ch:
		add     eax, ebx
___4372eh:
		push    eax
		push    493e0h
		call    near bpk_decode4
___43739h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

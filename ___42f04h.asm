cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd64h
	extern	___18319ch
	extern	___243dd0h
	extern	___243d60h
	extern	bpa_read
	extern	bpk_decode4
	extern	___1a51cfh
	extern	___1a51cdh
	extern	___1a51ceh
	extern	___243d28h
	extern	___243d2ch
	extern	___243d58h
	extern	___243d08h
	extern	___196dach
	extern	___1831a8h
	extern	___1831b4h
	extern	___183098h
	extern	fopen_
	extern	fseek_
	extern	fread_
	extern	fclose_

section .text

__GDECL(___42f04h)
		push    338h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, 310h
		mov     esi, ___19bd64h
		lea     edi, [esp+300h]
		call 	__STRCPY
		mov     esi, ___18319ch
		lea     edi, [esp+300h]
		lea     ebx, [esp+300h]
		call 	__STRCAT
		mov     eax, ___243dd0h
		mov     edx, [___243d60h]
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		mov     edx, [___243d60h]
		push    edx
		lea     eax, [esp+4]
		push    eax
		push    byte 0ah
		push    300h
		call 	bpk_decode4
		add 	esp, 10h
		xor     eax, eax
___42f9eh:
		add     eax, byte 3
		mov     dl, [esp+eax*1-3]
		mov     bl, [esp+eax*1-1]
		mov     dh, [esp+eax*1-2]
		mov     [eax+___1a51cfh], bl
		mov     [eax+___1a51cdh], dl
		mov     [eax+___1a51ceh], dh
		cmp     eax, dword 300h
		jne     short ___42f9eh
		mov     eax, [___243d28h]
		imul    eax, [___243d2ch]
		mov     ecx, [___243d60h]
		push    ecx
		mov     esi, [___243d58h]
		push    esi
		push    30ah
		mov     ebx, 100h
		push    eax
		mov     [___243d08h], ebx
		call 	bpk_decode4
		add 	esp, 10h
		cmp     dword [___196dach], byte 0
		je      near ___43125h
		mov     esi, ___19bd64h
		lea     edi, [esp+300h]
		lea     ebx, [esp+300h]
		call 	__STRCPY
		mov     esi, ___1831a8h
		lea     edi, [esp+300h]
		mov     edx, esp
		call 	__STRCAT
		mov     eax, ___243dd0h
		mov     esi, ___19bd64h
		lea     edi, [esp+300h]
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCPY
		mov     esi, ___1831b4h
		lea     edi, [esp+300h]
		mov     edx, ___183098h
		call 	__STRCAT
		lea     eax, [esp+300h]
		call    near fopen_
		mov     esi, eax
		test    eax, eax
		je      short ___430fbh
		mov     edx, 0ah
		xor     ebx, ebx
		call    near fseek_
		mov     ecx, esi
		mov     ebx, 300h
		mov     edx, 1
		mov     eax, esp
		call    near fread_
		mov     eax, esi
		call    near fclose_
___430fbh:
		xor     eax, eax
___430fdh:
		add     eax, byte 3
		mov     dl, [esp+eax*1-3]
		mov     bl, [esp+eax*1-2]
		mov     dh, [esp+eax*1-1]
		mov     [eax+___1a51ceh], bl
		mov     [eax+___1a51cdh], dl
		mov     [eax+___1a51cfh], dh
		cmp     eax, dword 300h
		jne     short ___430fdh
___43125h:
		mov     dword [___243d08h], 100h
		add     esp, 310h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

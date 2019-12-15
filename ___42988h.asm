cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___183098h
	extern	fopen_
	extern	fread_
	extern	___24bb60h
	extern	fclose_
	extern	strupr_
	extern	strcmp_
	extern	___18309ch
	extern	___1830ach
	extern	___1830b0h
	extern	___42944h
	extern	fseek_
	extern	___24bb6dh

section .text

__GDECL(bpa_read)
		push    88h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 74h
		mov     [esp+68h], eax
		mov     [esp+6ch], edx
		mov     [esp+64h], ebx
		lea     edi, [esp+50h]
		mov     esi, ebx
		mov     edx, ___183098h
		call 	__STRCPY
		mov     eax, [esp+68h]
		mov     ebx, 1
		call    near fopen_
		mov     edx, 4
		mov     edi, eax
		mov     ecx, eax
		lea     eax, [esp+60h]
		call    near fread_
		mov     ebx, 1
		mov     edx, 10efh
		mov     eax, ___24bb60h
		mov     ecx, edi
		call    near fread_
		mov     eax, edi
		call    near fclose_
		xor     edx, edx
		lea     eax, [esp+50h]
		mov     [esp+70h], edx
		call    near strupr_
		mov     al, [esp+70h]
		mov     ah, 3
		mul     ah
		mov     bl, al
		neg     bl
		add     bl, 75h
		jmp     short ___42a35h
___42a27h:
		add     [esp+esi*1+50h], bl
		lea     edx, [esi+1]
		sub     bl, 3
		mov     [esp+70h], edx
___42a35h:
		lea     edi, [esp+50h]
		mov     esi, [esp+70h]
		call 	__STRLEN
		cmp     ecx, esi
		ja      short ___42a27h
		mov     eax, [esp+60h]
		xor     edi, edi
		mov     ebp, 0ffffffffh
		mov     [esp+70h], edi
		test    eax, eax
		jle     short ___42a8fh
		mov     ebx, ___24bb60h
___42a63h:
		lea     edx, [esp+50h]
		mov     eax, ebx
		call    near strcmp_
		test    eax, eax
		jne     short ___42a76h
		mov     ebp, [esp+70h]
___42a76h:
		cmp     ebp, byte 0ffffffffh
		jne     short ___42a8fh
		mov     ecx, [esp+70h]
		mov     esi, [esp+60h]
		inc     ecx
		add     ebx, byte 11h
		mov     [esp+70h], ecx
		cmp     ecx, esi
		jl      short ___42a63h
___42a8fh:
		cmp     ebp, byte 0ffffffffh
		jne     near ___42b4ch
		mov     edi, esp
		mov     esi, ___18309ch
		movsd   
		movsd   
		movsd   
		movsd   
		mov     esi, [esp+68h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___1830ach
		mov     edi, esp
		call 	__STRCAT
		mov     esi, [esp+64h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___1830b0h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp
		call    near ___42944h
___42b4ch:
		mov     edx, ___183098h
		mov     eax, [esp+68h]
		call    near fopen_
		xor     ebx, ebx
		mov     edx, 10f3h
		mov     edi, eax
		call    near fseek_
		xor     edx, edx
		mov     [esp+70h], edx
		test    ebp, ebp
		jle     short ___42b93h
		mov     ebx, ebp
		shl     ebx, 4
		xor     eax, eax
		add     ebx, ebp
___42b7bh:
		mov     esi, [esp+70h]
		mov     ecx, [eax+___24bb6dh]
		add     eax, byte 11h
		inc     esi
		add     edx, ecx
		mov     [esp+70h], esi
		cmp     eax, ebx
		jl      short ___42b7bh
___42b93h:
		mov     ebx, 1
		mov     eax, edi
		call    near fseek_
		mov     eax, ebp
		mov     ecx, edi
		shl     eax, 4
		mov     ebx, 1
		mov     edx, [eax+ebp*1+___24bb6dh]
		mov     eax, [esp+6ch]
		call    near fread_
		mov     eax, edi
		call    near fclose_
		add     esp, byte 74h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a0d60h
	extern	___182bf0h
	extern	GET_FILE_SIZE
	extern	malloc_
	extern	GET_FILE_SIZE
	extern	free_
	extern	___180134h
	extern	fopen_
	extern	fread_
	extern	fseek_

section .text

__GDECL(___3e4a0h)
		push    12ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 110h
		mov     esi, ___1a0d60h
		mov     edi, esp
		call 	__STRCPY
		mov     esi, ___182bf0h
		mov     edi, esp
		mov     edx, 1
		call 	__STRCAT
		mov     eax, esp
		mov     [esp+10ch], edx

	push 	edx
	push 	ecx
	push 	eax
		call    near GET_FILE_SIZE
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		cmp     eax, dword 186cf392h
		jge     short ___3e521h
		xor     edx, edx
		jmp     near ___3e6efh
___3e521h:
		mov     eax, 10000h
		call    near malloc_
		mov     edi, eax
		mov     esi, eax
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    near GET_FILE_SIZE
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		cmp     eax, dword 18033688h
		jge     short ___3e555h
___3e53dh:
		mov     eax, edi
		call    near free_
		xor     edx, edx
		mov     eax, edx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___3e555h:
		mov     edx, ___180134h
		mov     eax, esp
		call    near fopen_
		mov     ebp, eax
		mov     [esp+104h], eax
		test    eax, eax
		je      short ___3e53dh
		mov     ebx, 1
		mov     edx, 4
		mov     ecx, eax
		lea     eax, [esp+100h]
		call    near fread_
		mov     eax, [esp+100h]
		mov     ebx, 1
		sub     eax, 2b7916f1h
		mov     edx, 20000h
		mov     [esp+108h], eax
		mov     eax, ebp
		mov     ecx, ebp
		call    near fseek_
		mov     ebx, 1
		mov     edx, 10000h
		mov     eax, edi
		call    near fread_
		mov     dl, [edi+7cd1h]
		sub     dl, [edi+1403h]
		mov     dh, [edi+9ab2h]
		xor     ebp, ebp
		cmp     dl, dh
		jne     short ___3e5dah
		mov     ebp, 1
___3e5dah:
		mov     bl, [esi+613bh]
		mov     dl, [esi+7cd1h]
		add     dl, bl
		cmp     dl, [esi+0f6ceh]
		jne     short ___3e5f1h
		inc     ebp
___3e5f1h:
		mov     cl, [esi+2d3eh]
		mov     dl, [esi+1403h]
		add     dl, cl
		cmp     dl, [esi+0db97h]
		jne     short ___3e608h
		inc     ebp
___3e608h:
		mov     al, [esi+7cd1h]
		mov     dl, [esi+2d3eh]
		sub     dl, al
		cmp     dl, [esi+0afc8h]
		jne     short ___3e61fh
		inc     ebp
___3e61fh:
		cmp     ebp, byte 4
		jne     short ___3e62dh
		xor     ebx, ebx
		mov     [esp+10ch], ebx
___3e62dh:
		mov     edx, [esp+108h]
		mov     ebx, 1
		sub     edx, byte 4
		mov     eax, [esp+104h]
		shl     edx, 10h
		call    near fseek_
		mov     dl, [esi+7cd1h]
		mov     dh, [esi+1403h]
		mov     bl, [esi+9ab2h]
		sub     dl, dh
		xor     edi, edi
		cmp     dl, bl
		jne     short ___3e66ah
		mov     edi, 1
___3e66ah:
		mov     bh, [esi+613bh]
		mov     dl, [esi+7cd1h]
		mov     cl, [esi+0f6ceh]
		add     dl, bh
		cmp     dl, cl
		jne     short ___3e683h
		inc     edi
___3e683h:
		mov     ch, [esi+2d3eh]
		mov     dl, [esi+1403h]
		mov     al, [esi+0db97h]
		add     dl, ch
		cmp     dl, al
		jne     short ___3e69ch
		inc     edi
___3e69ch:
		mov     ah, [esi+7cd1h]
		mov     dl, [esi+2d3eh]
		sub     dl, ah
		cmp     dl, [esi+0afc8h]
		jne     short ___3e6b3h
		inc     edi
___3e6b3h:
		cmp     edi, byte 4
		jne     short ___3e6c1h
		xor     ecx, ecx
		mov     [esp+10ch], ecx
___3e6c1h:
		cmp     dword [esp+10ch], byte 1
		jne     short ___3e6e3h
		mov     eax, esi
		call    near free_
		xor     edx, edx
		mov     eax, edx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___3e6e3h:
		mov     eax, esi
		mov     edx, 1
		call    near free_
___3e6efh:
		mov     eax, edx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

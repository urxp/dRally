cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a0d60h
	extern	___182bf0h
	extern	GET_FILE_SIZE
	extern	malloc
	extern	free
	extern	___180134h
	extern	strupr_fopen
	extern	fread
	extern	fseek

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
	
	push 	edx
	push 	ecx
	push 	eax
		call    malloc
	add 	esp, 4
	pop 	ecx
	pop 	edx

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
	
	push 	edx
	push 	ecx
	push 	eax
		call    free
	pop 	eax
	pop 	ecx
	pop 	edx

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

	push 	ecx
	push 	edx
	push 	eax
		call    strupr_fopen
	add 	esp, 8
	pop 	ecx

		mov     ebp, eax
		mov     [esp+104h], eax
		test    eax, eax
		je      short ___3e53dh
		mov     ebx, 1
		mov     edx, 4
		mov     ecx, eax
		lea     eax, [esp+100h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    fread
	add 	esp, 10h

		mov     eax, [esp+100h]
		mov     ebx, 1
		sub     eax, 2b7916f1h
		mov     edx, 20000h
		mov     [esp+108h], eax
		mov     eax, ebp
		mov     ecx, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    fseek
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 1
		mov     edx, 10000h
		mov     eax, edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    fread
	add 	esp, 10h

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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    fseek
	add 	esp, 0ch
	pop 	ecx

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
	
	push 	edx
	push 	ecx
	push 	eax
		call    free
	pop 	eax
	pop 	ecx
	pop 	edx

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
	
	push 	edx
	push 	ecx
	push 	eax
		call    free
	pop 	eax
	pop 	ecx
	pop 	edx

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

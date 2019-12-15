cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___3a2ach

section .text

__GDECL(___3a214h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     esi, eax
		mov     ebp, edx
		mov     edi, 1
		mov     cl, [eax]
		xor     ebx, ebx
		mov     al, 1
		cmp     edx, edi
		jle     short ___3a283h
___3a236h:
		mov     ch, [esi+1]
		inc     esi
		cmp     ch, cl
		jne     short ___3a25fh
		inc     al
		cmp     al, 3fh
		jne     short ___3a27eh
		xor     edx, edx
		mov     dl, al
		xor     eax, eax
		mov     al, cl
		call    near ___3a2ach
		test    eax, eax
		jne     short ___3a259h
		xor     ebx, ebx
		jmp     short ___3a2a4h
___3a259h:
		add     ebx, eax
		xor     al, al
		jmp     short ___3a27eh
___3a25fh:
		test    al, al
		je      short ___3a27ah
		xor     edx, edx
		mov     dl, al
		xor     eax, eax
		mov     al, cl
		call    near ___3a2ach
		test    eax, eax
		jne     short ___3a278h
		xor     ebx, ebx
		jmp     short ___3a2a4h
___3a278h:
		add     ebx, eax
___3a27ah:
		mov     al, 1
		mov     cl, ch
___3a27eh:
		inc     edi
		cmp     edi, ebp
		jl      short ___3a236h
___3a283h:
		test    al, al
		je      short ___3a2a4h
		xor     edx, edx
		mov     dl, al
		xor     eax, eax
		mov     al, cl
		call    near ___3a2ach
		test    eax, eax
		jne     short ___3a2a2h
		xor     ebx, ebx
		mov     eax, ebx
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___3a2a2h:
		add     ebx, eax
___3a2a4h:
		mov     eax, ebx
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a0ef4h
	extern	fputc_

section .text

__GDECL(___3a2ach)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     bl, al
		mov     al, dl
		test    dl, dl
		je      near ___3a44ah
		cmp     dl, 1
		jne     near ___3a361h
		mov     ah, bl
		and     ah, 0c0h
		cmp     ah, 0c0h
		je      near ___3a361h
		mov     edx, [___1a0ef4h]
		test    byte [edx+0dh], 4
		jne     short ___3a2f7h
		mov     ecx, [edx+4]
		mov     eax, [edx+14h]
		sub     eax, ecx
		cmp     eax, byte 1
		ja      short ___3a308h
___3a2f7h:
		xor     eax, eax
		mov     edx, [___1a0ef4h]
		mov     al, bl
		call    near fputc_
		jmp     short ___3a34dh
___3a308h:
		mov     eax, [edx]
		mov     [eax], bl
		mov     al, bl
		cmp     al, 0ah
		jne     short ___3a32fh
		mov     eax, 0ah
		call    near fputc_
		cmp     eax, byte 0ffffffffh
		je      near ___3a44ah
		mov     eax, 1
		jmp     near ___3a44ch
___3a32fh:
		mov     ah, [edx+0dh]
		or      ah, 10h
		mov     esi, [edx+4]
		mov     [edx+0dh], ah
		inc     esi
		mov     eax, [edx]
		mov     [edx+4], esi
		lea     ecx, [eax+1]
		mov     [edx], ecx
		mov     al, [eax]
		and     eax, 0ffh
___3a34dh:
		cmp     eax, byte 0ffffffffh
		je      near ___3a44ah
		mov     eax, 1
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___3a361h:
		mov     edx, [___1a0ef4h]
		test    byte [edx+0dh], 4
		jne     short ___3a37ah
		mov     esi, [edx+4]
		mov     ecx, [edx+14h]
		sub     ecx, esi
		cmp     ecx, byte 1
		ja      short ___3a38eh
___3a37ah:
		mov     edx, [___1a0ef4h]
		or      al, 0c0h
		and     eax, 0ffh
		call    near fputc_
		jmp     short ___3a3c6h
___3a38eh:
		mov     cl, al
		mov     eax, [edx]
		or      cl, 0c0h
		mov     [eax], cl
		cmp     cl, 0ah
		jne     short ___3a3a8h
		mov     eax, 0ah
		call    near fputc_
		jmp     short ___3a3c6h
___3a3a8h:
		mov     edi, [edx+4]
		mov     eax, [edx]
		mov     bh, [edx+0dh]
		inc     edi
		lea     ecx, [eax+1]
		mov     [edx+4], edi
		or      bh, 10h
		mov     [edx], ecx
		mov     [edx+0dh], bh
		mov     al, [eax]
		and     eax, 0ffh
___3a3c6h:
		cmp     eax, byte 0ffffffffh
		je      near ___3a44ah
		mov     edx, [___1a0ef4h]
		test    byte [edx+0dh], 4
		jne     short ___3a3e8h
		mov     ebp, [edx+4]
		mov     eax, [edx+14h]
		sub     eax, ebp
		cmp     eax, byte 1
		ja      short ___3a3f9h
___3a3e8h:
		xor     eax, eax
		mov     edx, [___1a0ef4h]
		mov     al, bl
		call    near fputc_
		jmp     short ___3a43ah
___3a3f9h:
		mov     eax, [edx]
		mov     [eax], bl
		cmp     bl, 0ah
		jne     short ___3a41ch
		mov     eax, 0ah
		call    near fputc_
		cmp     eax, byte 0ffffffffh
		je      short ___3a44ah
		mov     eax, 2
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___3a41ch:
		mov     eax, [edx+4]
		inc     eax
		mov     ch, [edx+0dh]
		mov     [edx+4], eax
		or      ch, 10h
		mov     eax, [edx]
		mov     [edx+0dh], ch
		lea     ecx, [eax+1]
		mov     [edx], ecx
		mov     al, [eax]
		and     eax, 0ffh
___3a43ah:
		cmp     eax, byte 0ffffffffh
		je      short ___3a44ah
		mov     eax, 2
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___3a44ah:
		xor     eax, eax
___3a44ch:
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

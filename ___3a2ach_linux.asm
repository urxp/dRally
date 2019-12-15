cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a0ef4h
	extern	fputc_
    extern  printf

section .text

__GDECL(___3a2ach)
;    jmp     .around
;.error:
;db  "___3a2ach not implemented",0ah,0
;.around:
;    pushad
;    push    .error
;    call    printf
;    add     esp, 4
;    popad
 ;       xor     eax, eax
  ;  retn

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

	jmp     short ___3a2f7h

		test    byte [edx+0dh], 4	;; mode of file access
		jne     short ___3a2f7h
		mov     ecx, [edx+4] 		;; number of characters left
		mov     eax, [edx+14h]		;; size of buffer
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
		mov     eax, [edx]			;; next character position
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
		mov     ah, [edx+0dh]		;; mode of file access
		or      ah, 10h
		mov     esi, [edx+4]		;; number of characters left
		mov     [edx+0dh], ah 		;; mode of file access
		inc     esi
		mov     eax, [edx]			;; next character position
		mov     [edx+4], esi		;; number of characters left
		lea     ecx, [eax+1]
		mov     [edx], ecx			;; next character position
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

	jmp     short ___3a37ah
	
		test    byte [edx+0dh], 4		;; mode of file access
		jne     short ___3a37ah
		mov     esi, [edx+4]			;; number of characters left
		mov     ecx, [edx+14h]			;; size of buffer	
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
		mov     eax, [edx]				;; next character position	
		or      cl, 0c0h
		mov     [eax], cl				
		cmp     cl, 0ah
		jne     short ___3a3a8h
		mov     eax, 0ah
		call    near fputc_
		jmp     short ___3a3c6h
___3a3a8h:
		mov     edi, [edx+4]		;; number of characters left
		mov     eax, [edx]			;; next character position
		mov     bh, [edx+0dh]		;; mode of file access
		inc     edi
		lea     ecx, [eax+1]
		mov     [edx+4], edi		;; number of characters left
		or      bh, 10h
		mov     [edx], ecx			;; next character position
		mov     [edx+0dh], bh		;; mode of file access
		mov     al, [eax]
		and     eax, 0ffh
___3a3c6h:
		cmp     eax, byte 0ffffffffh
		je      near ___3a44ah
		mov     edx, [___1a0ef4h]

	jmp     short ___3a3e8h

		test    byte [edx+0dh], 4		;; mode of file access
		jne     short ___3a3e8h
		mov     ebp, [edx+4]			;; number of characters left
		mov     eax, [edx+14h]			;; size of buffer
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
		mov     eax, [edx]				;; next character position
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
		mov     eax, [edx+4]		;; number of characters left
		inc     eax
		mov     ch, [edx+0dh]		;; mode of file access
		mov     [edx+4], eax		;; number of characters left
		or      ch, 10h
		mov     eax, [edx]			;; next character position
		mov     [edx+0dh], ch		;; mode of file access
		lea     ecx, [eax+1]
		mov     [edx], ecx			;; next character position
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

cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRLEN
	extern	itoa_
	extern	___183f28h
	extern	___183f30h
	extern	GET_FILE_SIZE
	extern	___183f38h
	extern	fopen_
	extern	___1a0ef4h
	extern	___196e7ch
	extern	fwrite_
	extern	___3a214h
	extern	fputc_
	extern	___243d08h
	extern	fclose_
	extern 	VGA13_ACTIVESCREEN
    extern  __DISPLAY_GET_PALETTE_COLOR

section .text

__GDECL(___49390h)
		push    3ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		xor     ebp, ebp
___493a5h:
		mov     ebx, 0ah
		lea     edx, [esp+10h]
		mov     eax, ebp
		lea     edi, [esp+10h]
		call    near itoa_
		call 	__STRLEN
		cmp     ecx, byte 2
		je      short ___493dch
		mov     al, [esp+10h]
		xor     dl, dl
		mov     [esp+11h], al
		mov     ah, 30h
		mov     [esp+12h], dl
		mov     [esp+10h], ah
___493dch:
		mov     edi, esp
		mov     esi, ___183f28h
		movsd   
		movsw   
		movsb   
		lea     esi, [esp+10h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___183f30h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    near GET_FILE_SIZE
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		cmp     eax, byte 1
		jl      short ___4944eh
		inc     ebp
		cmp     ebp, byte 64h
		jl      near ___493a5h
___4944eh:
		mov     edx, ___183f38h
		mov     eax, esp
		mov     ebx, 80h
		call    near fopen_
		mov     edx, 1
		mov     [___1a0ef4h], eax
		mov     ecx, eax
		mov     eax, ___196e7ch
		;mov     ebp, 0a0000h
	mov 	ebp, VGA13_ACTIVESCREEN
		call    near fwrite_
		mov     ecx, 140h
___4947fh:
		mov     edx, ecx
		mov     eax, ebp
		add     ebp, 140h
		call    near ___3a214h
		;cmp     ebp, 0afa00h
	cmp 	ebp, VGA13_ACTIVESCREEN + 0fa00h
		jne     short ___4947fh
		mov     eax, 0ch
		mov     edx, [___1a0ef4h]
		call    near fputc_
		xor     edx, edx
		mov     [___243d08h], edx
		;mov     edi, 3c9h
		;mov     ebp, 3c7h
		mov     esi, 1
___494bdh:
		mov     edx, [___243d08h]
        lea     eax, [esp+14h]
        call    DISPLAY_GET_PALETTE_COLOR

		;mov     edx, ebp
		;out     dx, al
		;mov     edx, edi
		;sub     eax, eax
		;in      al, dx
		;shl     al, 2
		;mov     [esp+1ch], al
		;sub     eax, eax
		;in      al, dx
		;shl     al, 2
		mov     ebx, esi
		;mov     [esp+18h], al
		;sub     eax, eax
		;in      al, dx
		mov     ecx, [___1a0ef4h]
		;shl     al, 2
		mov     edx, esi
		;mov     [esp+14h], al
		lea     eax, [esp+1ch]
		call    near fwrite_
		lea     eax, [esp+18h]
		mov     ecx, [___1a0ef4h]
		mov     ebx, esi
		mov     edx, esi
		call    near fwrite_
		lea     eax, [esp+14h]
		mov     ecx, [___1a0ef4h]
		mov     ebx, esi
		mov     edx, esi
		call    near fwrite_
		mov     ebx, [___243d08h]
		inc     ebx
		mov     [___243d08h], ebx
		cmp     ebx, 0ffh
		jle     short ___494bdh
		mov     eax, [___1a0ef4h]
		call    near fclose_
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

__GDECL(DISPLAY_GET_PALETTE_COLOR)
    pushad
    push    eax
    push    edx
    push    eax
    call    __DISPLAY_GET_PALETTE_COLOR
    add     esp, 8
    pop     eax

    xor     ebx, ebx
    xor     ecx, ecx
    xor     edx, edx
    mov     bl, [eax]
	mov 	bh, bl
	shr 	bh, 4
    shl     bl, 2
	or 		bl, bh
	xor 	bh, bh
    mov     cl, [eax+1]
	mov 	ch, cl
	shr 	ch, 4
    shl     cl, 2
	or 		cl, ch
	xor 	ch, ch
    mov     dl, [eax+2]
	mov 	dh, dl
	shr 	dh, 4
    shl     dl, 2
	or 		dl, dh
	xor 	dh, dh
    mov     [eax], edx
    mov     [eax+4], ecx
    mov     [eax+8], ebx

    popad
    retn

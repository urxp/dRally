cpu 386

	extern	__BiosOff
	extern	__BiosSeg
	extern	_SuperVGAType_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _SysMonType_
_SysMonType_:
		push    ebx
		push    ecx
		push    edx
		push    es
		mov     eax, 1a00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		xor     ah, ah
		cwde    
		cmp     eax, byte 1ah
		jne     near dr@7b988h
		mov     eax, 1a00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		mov     eax, ebx
		mov     dh, bl
		movsx   ebx, bx
		sar     ebx, 8
		movzx   eax, al
		mov     dl, bl
		cmp     eax, byte 0ch
		jg      near dr@7b988h
		cmp     eax, byte 1
		jne     short dr@7b8f9h
		call    near CheckMONO_
		mov     dh, al
dr@7b8f9h:
		movzx   eax, dl
		cmp     eax, byte 1
		jne     short dr@7b908h
		call    near CheckMONO_
		mov     dl, al
dr@7b908h:
		movzx   eax, dh
		cmp     eax, byte 4
		je      short dr@7b918h
		movzx   eax, dl
		cmp     eax, byte 4
		jne     short dr@7b941h
dr@7b918h:
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, 88h
		mov     al, [es:eax]
		and     al, 0fh
		movzx   ebx, al
		cmp     ebx, byte 3
		jne     short dr@7b937h
		mov     dl, 3
dr@7b937h:
		movzx   eax, al
		cmp     eax, byte 9
		jne     short dr@7b941h
		mov     dh, 3
dr@7b941h:
		movzx   eax, dh
		cmp     eax, byte 7
		je      short dr@7b94eh
		cmp     eax, byte 8
		jne     short dr@7b95dh
dr@7b94eh:
		call    near _SuperVGAType_
		test    ax, ax
		je      short dr@7b976h
		add     dh, 9
		jmp     short dr@7b976h
dr@7b95dh:
		movzx   eax, dl
		cmp     eax, byte 7
		je      short dr@7b96ah
		cmp     eax, byte 8
		jne     short dr@7b976h
dr@7b96ah:
		call    near _SuperVGAType_
		test    ax, ax
		je      short dr@7b976h
		mov     dl, 9
dr@7b976h:
		movzx   ax, dl
		shl     eax, 8
		movzx   dx, dh
		add     eax, edx
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@7b988h:
		call    near DCCEmulate_
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		retn    
DCCEmulate_:
		push    ebx
		push    ecx
		push    edx
		push    es
		enter   8, 0
		mov     ebx, 10h
		mov     eax, 1200h
		xor     edx, edx
		xor     ecx, ecx
		push    bp
		int     10h
		pop     bp
		xor     ch, ch
		movsx   eax, cx
		cmp     eax, byte 0ch
		jge     near dr@7ba33h
		mov     ebx, 10h
		mov     eax, 1200h
		xor     edx, edx
		xor     cl, cl
		push    bp
		int     10h
		pop     bp
		movsx   eax, bx
		sar     eax, 8
		movsx   edx, ax
		xor     bh, bh
		cmp     edx, byte 1
		jg      short dr@7b9e8h
		movsx   edx, bx
		cmp     edx, byte 3
		jle     short dr@7b9f2h
dr@7b9e8h:
		call    near CheckCGA_
		mov     [ebp-4], al
		jmp     short dr@7ba3bh
dr@7b9f2h:
		test    ax, ax
		jne     short dr@7ba25h
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
;33:0007ba00+2
		add     eax, 88h
		mov     al, [es:eax]
		and     al, 0fh
		movzx   eax, al
		cmp     eax, byte 3
		je      short dr@7ba19h
		cmp     eax, byte 9
		jne     short dr@7ba1fh
dr@7ba19h:
		mov     byte [ebp-4], 3
		jmp     short dr@7ba3bh
dr@7ba1fh:
		mov     byte [ebp-4], 4
		jmp     short dr@7ba3bh
dr@7ba25h:
		call    near CheckCGA_
		mov     byte [ebp-8], 5
		mov     [ebp-4], al
		jmp     short dr@7ba43h
dr@7ba33h:
		call    near CheckCGA_
		mov     [ebp-4], al
dr@7ba3bh:
		call    near CheckMONO_
		mov     [ebp-8], al
dr@7ba43h:
		mov     eax, 0f00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		and     al, 7fh
		movzx   eax, al
		cmp     eax, byte 7
		je      short dr@7ba68h
		cmp     eax, byte 0bh
		je      short dr@7ba68h
		cmp     eax, byte 0fh
		jne     short dr@7ba74h
dr@7ba68h:
		movzx   ax, byte [ebp-4]
		movzx   bx, byte [ebp-8]
		jmp     short dr@7ba7eh
dr@7ba74h:
		movzx   ax, byte [ebp-8]
		movzx   bx, byte [ebp-4]
dr@7ba7eh:
		shl     eax, 8
		add     eax, ebx
		leave   
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		retn    
CheckMONO_:
		push    ebx
		push    ecx
		push    edx
		mov     eax, 3b4h
		call    near ChkCursorReg_
		test    ax, ax
		je      near dr@7bb05h
		mov     edx, 3bah
		sub     eax, eax
		in      al, dx
		mov     ecx, eax
		xor     ch, ah
		xor     ebx, ebx
		and     cl, 80h
		jmp     short dr@7baf4h
dr@7bab2h:
		mov     edx, 3bah
		sub     eax, eax
		in      al, dx
		and     eax, 80h
		movsx   edx, cx
		cmp     eax, edx
		je      short dr@7baf3h
		mov     edx, 3bah
		sub     eax, eax
		in      al, dx
		xor     ah, ah
		and     al, 70h
		test    ax, ax
		jne     short dr@7badeh
		mov     edx, 0dh
		jmp     short dr@7bb07h
dr@7badeh:
		and     al, 10h
		cwde    
		test    eax, eax
		jne     short dr@7baech
		mov     edx, 0eh
		jmp     short dr@7bb07h
dr@7baech:
		mov     edx, 0fh
		jmp     short dr@7bb07h
dr@7baf3h:
		inc     ebx
dr@7baf4h:
		movzx   eax, bx
		cmp     eax, dword 8000h
		jl      short dr@7bab2h
		mov     edx, 1
		jmp     short dr@7bb07h
dr@7bb05h:
		xor     edx, edx
dr@7bb07h:
		mov     eax, edx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
CheckCGA_:
		mov     eax, 3d4h
		call    near ChkCursorReg_
		test    ax, ax
		je      short dr@7bb21h
		mov     eax, 2
dr@7bb21h:
		retn    
ChkCursorReg_:
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ebx, eax
		movsx   edx, ax
		inc     ebx
		mov     al, 0fh
		movsx   ebx, bx
		out     dx, al
		mov     edx, ebx
		sub     eax, eax
		in      al, dx
		mov     ecx, eax
		mov     al, 5ah
		out     dx, al
		jmp     short dr@7bb3eh
dr@7bb3eh:
		jmp     short dr@7bb40h
dr@7bb40h:
		jmp     short dr@7bb42h
dr@7bb42h:
		sub     eax, eax
		in      al, dx
		mov     esi, eax
		mov     al, cl
		out     dx, al
		movsx   eax, si
		cmp     eax, byte 5ah
		setz    al
		movzx   ax, al
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
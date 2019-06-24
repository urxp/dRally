%include "macros.inc"

    extern  __BiosOff
    extern  __BiosSeg
    extern  _SuperVGAType

%include "layout.inc"

section @text

__GDECL(_SysMonType)
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
		jne     near ___7b988h
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
		jg      near ___7b988h
		cmp     eax, byte 1
		jne     short ___7b8f9h
		call    near CheckMONO
		mov     dh, al
___7b8f9h:
		movzx   eax, dl
		cmp     eax, byte 1
		jne     short ___7b908h
		call    near CheckMONO
		mov     dl, al
___7b908h:
		movzx   eax, dh
		cmp     eax, byte 4
		je      short ___7b918h
		movzx   eax, dl
		cmp     eax, byte 4
		jne     short ___7b941h
___7b918h:
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, 88h
		mov     al, [es:eax]
		and     al, 0fh
		movzx   ebx, al
		cmp     ebx, byte 3
		jne     short ___7b937h
		mov     dl, 3
___7b937h:
		movzx   eax, al
		cmp     eax, byte 9
		jne     short ___7b941h
		mov     dh, 3
___7b941h:
		movzx   eax, dh
		cmp     eax, byte 7
		je      short ___7b94eh
		cmp     eax, byte 8
		jne     short ___7b95dh
___7b94eh:
		call    near _SuperVGAType
		test    ax, ax
		je      short ___7b976h
		add     dh, 9
		jmp     short ___7b976h
___7b95dh:
		movzx   eax, dl
		cmp     eax, byte 7
		je      short ___7b96ah
		cmp     eax, byte 8
		jne     short ___7b976h
___7b96ah:
		call    near _SuperVGAType
		test    ax, ax
		je      short ___7b976h
		mov     dl, 9
___7b976h:
		movzx   ax, dl
		shl     eax, 8
		movzx   dx, dh
		add     eax, edx
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___7b988h:
		call    near DCCEmulate
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		retn    
DCCEmulate:
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
		jge     near ___7ba33h
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
		jg      short ___7b9e8h
		movsx   edx, bx
		cmp     edx, byte 3
		jle     short ___7b9f2h
___7b9e8h:
		call    near CheckCGA
		mov     [ebp-4], al
		jmp     short ___7ba3bh
___7b9f2h:
		test    ax, ax
		jne     short ___7ba25h
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, 88h
		mov     al, [es:eax]
		and     al, 0fh
		movzx   eax, al
		cmp     eax, byte 3
		je      short ___7ba19h
		cmp     eax, byte 9
		jne     short ___7ba1fh
___7ba19h:
		mov     byte [ebp-4], 3
		jmp     short ___7ba3bh
___7ba1fh:
		mov     byte [ebp-4], 4
		jmp     short ___7ba3bh
___7ba25h:
		call    near CheckCGA
		mov     byte [ebp-8], 5
		mov     [ebp-4], al
		jmp     short ___7ba43h
___7ba33h:
		call    near CheckCGA
		mov     [ebp-4], al
___7ba3bh:
		call    near CheckMONO
		mov     [ebp-8], al
___7ba43h:
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
		je      short ___7ba68h
		cmp     eax, byte 0bh
		je      short ___7ba68h
		cmp     eax, byte 0fh
		jne     short ___7ba74h
___7ba68h:
		movzx   ax, byte [ebp-4]
		movzx   bx, byte [ebp-8]
		jmp     short ___7ba7eh
___7ba74h:
		movzx   ax, byte [ebp-8]
		movzx   bx, byte [ebp-4]
___7ba7eh:
		shl     eax, 8
		add     eax, ebx
		leave   
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		retn    
CheckMONO:
		push    ebx
		push    ecx
		push    edx
		mov     eax, 3b4h
		call    near ChkCursorReg
		test    ax, ax
		je      near ___7bb05h
		mov     edx, 3bah
		sub     eax, eax
		in      al, dx
		mov     ecx, eax
		xor     ch, ah
		xor     ebx, ebx
		and     cl, 80h
		jmp     short ___7baf4h
___7bab2h:
		mov     edx, 3bah
		sub     eax, eax
		in      al, dx
		and     eax, 80h
		movsx   edx, cx
		cmp     eax, edx
		je      short ___7baf3h
		mov     edx, 3bah
		sub     eax, eax
		in      al, dx
		xor     ah, ah
		and     al, 70h
		test    ax, ax
		jne     short ___7badeh
		mov     edx, 0dh
		jmp     short ___7bb07h
___7badeh:
		and     al, 10h
		cwde    
		test    eax, eax
		jne     short ___7baech
		mov     edx, 0eh
		jmp     short ___7bb07h
___7baech:
		mov     edx, 0fh
		jmp     short ___7bb07h
___7baf3h:
		inc     ebx
___7baf4h:
		movzx   eax, bx
		cmp     eax, dword 8000h
		jl      short ___7bab2h
		mov     edx, 1
		jmp     short ___7bb07h
___7bb05h:
		xor     edx, edx
___7bb07h:
		mov     eax, edx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
CheckCGA:
		mov     eax, 3d4h
		call    near ChkCursorReg
		test    ax, ax
		je      short ___7bb21h
		mov     eax, 2
___7bb21h:
		retn    
ChkCursorReg:
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
		jmp     short ___7bb3eh
___7bb3eh:
		jmp     short ___7bb40h
___7bb40h:
		jmp     short ___7bb42h
___7bb42h:
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

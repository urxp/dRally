cpu 386

	extern	__SVGAType
	extern	__RomOff
	extern	__RomSeg
	extern	_RMAlloc_
	extern	_RMInterrupt_
	extern	_RMFree_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _SuperVGAType_
_SuperVGAType_:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    es
		enter   18h, 0
		cmp     word [__SVGAType], byte 0
		je      short dr@7d014h
		mov     dx, [__SVGAType]
		jmp     near dr@7d398h
dr@7d014h:
		mov     eax, 1a00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		movzx   eax, al
		cmp     eax, byte 1ah
		jne     near dr@7d396h
		mov     eax, 4
		mov     edi, L$37
		mov     esi, [__RomOff]
		mov     dx, [__RomSeg]
		;mov     ecx, ds
		db	8ch,0d9h
		add     esi, byte 7dh
		push    ds
		push    es
		xchg    ecx, eax
		;mov     ds, edx
		db	8eh,0dah
		;mov     es, eax
		db	8eh,0c0h
		or      ecx, ecx
		repe cmpsb   
		je      short dr@7d05fh
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
dr@7d05fh:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short dr@7d06fh
dr@7d065h:
		mov     edx, 3
		jmp     near dr@7d398h
dr@7d06fh:
		mov     eax, 3
		mov     edi, L$38
		mov     esi, [__RomOff]
		mov     dx, [__RomSeg]
		;mov     ecx, ds
		db	8ch,0d9h
		add     esi, byte 7dh
		push    ds
		push    es
		xchg    ecx, eax
		;mov     ds, edx
		db	8eh,0dah
		;mov     es, eax
		db	8eh,0c0h
		or      ecx, ecx
		repe cmpsb   
		je      short dr@7d09dh
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
dr@7d09dh:
		pop     es
		pop     ds
		test    ecx, ecx
		je      short dr@7d065h
		mov     eax, 9
		mov     edi, L$39
		mov     esi, [__RomOff]
		mov     dx, [__RomSeg]
		;mov     ecx, ds
		db	8ch,0d9h
		add     esi, byte 31h
		push    ds
		push    es
		xchg    ecx, eax
		;mov     ds, edx
		db	8eh,0dah
		;mov     es, eax
		db	8eh,0c0h
		or      ecx, ecx
		repe cmpsb   
		je      short dr@7d0d1h
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
dr@7d0d1h:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short dr@7d0e1h
		mov     edx, 4
		jmp     near dr@7d398h
dr@7d0e1h:
		mov     dword [ebp-0ch], 200h
		mov     eax, [__RomOff]
		mov     dx, [__RomSeg]
		mov     [ebp-18h], eax
		jmp     short dr@7d164h
dr@7d0f9h:
		movsx   ecx, word [ebp-0ch]
		mov     al, 4fh
		mov     edi, [ebp-18h]
		push    es
		jecxz   dr@7d110h
		;mov     es, edx
		db	8eh,0c2h
		repne scasb   
		jne     short dr@7d110h
		dec     edi
		;mov     ecx, es
		db	8ch,0c1h
		;test    ax, 0cf89h
		db	66h,0a9h
dr@7d110h:
		;mov     edi, ecx
		db	89h,0cfh
		pop     es
		mov     [ebp-10h], ecx
		mov     ebx, edi
		test    edi, edi
		jne     short dr@7d121h
		test    cx, cx
		je      short dr@7d16bh
dr@7d121h:
		mov     eax, 3
		mov     esi, L$40
		;mov     edx, ds
		db	8ch,0dah
		push    ds
		push    es
		xchg    ecx, eax
		;mov     ds, edx
		db	8eh,0dah
		;mov     es, eax
		db	8eh,0c0h
		or      ecx, ecx
		repe cmpsb   
		je      short dr@7d13fh
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
dr@7d13fh:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short dr@7d14fh
		mov     edx, 7
		jmp     near dr@7d398h
dr@7d14fh:
		movsx   eax, word [ebp-0ch]
		mov     ecx, ebx
		mov     edx, [ebp-10h]
		sub     ecx, [ebp-18h]
		inc     ebx
		sub     eax, ecx
		mov     [ebp-18h], ebx
		mov     [ebp-0ch], eax
dr@7d164h:
		cmp     word [ebp-0ch], byte 0
		jg      short dr@7d0f9h
dr@7d16bh:
		mov     dword [ebp-8], 200h
		mov     eax, [__RomOff]
		mov     dx, [__RomSeg]
		mov     [ebp-14h], eax
		jmp     short dr@7d1eeh
dr@7d183h:
		movsx   ecx, word [ebp-8]
		mov     al, 54h
		mov     edi, [ebp-14h]
		push    es
		jecxz   dr@7d19ah
		;mov     es, edx
		db	8eh,0c2h
		repne scasb   
		jne     short dr@7d19ah
		dec     edi
		;mov     ecx, es
		db	8ch,0c1h
		;test    ax, 0cf89h
		db	66h,0a9h
dr@7d19ah:
		;mov     edi, ecx
		db	89h,0cfh
		pop     es
		mov     [ebp-4], ecx
		mov     ebx, edi
		test    edi, edi
		jne     short dr@7d1abh
		test    cx, cx
		je      short dr@7d1f5h
dr@7d1abh:
		mov     eax, 7
		mov     esi, L$41
		;mov     edx, ds
		db	8ch,0dah
		push    ds
		push    es
		xchg    ecx, eax
		;mov     ds, edx
		db	8eh,0dah
		;mov     es, eax
		db	8eh,0c0h
		or      ecx, ecx
		repe cmpsb   
		je      short dr@7d1c9h
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
dr@7d1c9h:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short dr@7d1d9h
		mov     edx, 8
		jmp     near dr@7d398h
dr@7d1d9h:
		movsx   eax, word [ebp-8]
		mov     ecx, ebx
		mov     edx, [ebp-4]
		sub     ecx, [ebp-14h]
		inc     ebx
		sub     eax, ecx
		mov     [ebp-14h], ebx
		mov     [ebp-8], eax
dr@7d1eeh:
		cmp     word [ebp-8], byte 0
		jg      short dr@7d183h
dr@7d1f5h:
		mov     eax, [__RomOff]
		;mov     es, [__RomSeg]
		db	8eh,5
		dd	__RomSeg
;33:0007d200
		add     eax, byte 37h
		mov     ax, [es:eax]
		cwde    
		add     eax, [__RomOff]
		movzx   ebx, byte [es:eax]
		cmp     ebx, byte 77h
		jne     short dr@7d242h
		movzx   ebx, byte [es:eax+1]
		cmp     ebx, byte 11h
		jne     short dr@7d242h
		movzx   ebx, byte [es:eax+2]
		cmp     ebx, 99h
		jne     short dr@7d242h
		movzx   eax, byte [es:eax+3]
		cmp     eax, byte 66h
		jne     short dr@7d242h
		mov     edx, 0ah
		jmp     near dr@7d398h
dr@7d242h:
		mov     eax, 6f00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		movsx   eax, bx
		cmp     eax, dword 5637h
		jne     short dr@7d267h
		mov     edx, 2
		jmp     near dr@7d398h
dr@7d267h:
		mov     eax, 5f00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		xor     ah, ah
		cwde    
		cmp     eax, byte 5fh
		jne     short dr@7d28ah
;33:0007d280
		mov     edx, 9
		jmp     near dr@7d398h
dr@7d28ah:
		mov     al, 38h
		mov     edx, 3d4h
		out     dx, al
		mov     al, 48h
		mov     edx, 3d5h
		out     dx, al
		mov     al, 30h
		mov     edx, 3d4h
		out     dx, al
		mov     edx, 3d5h
		sub     eax, eax
		in      al, dx
		shr     eax, 4
		cwde    
		cmp     eax, byte 8
		jl      short dr@7d2c2h
		cmp     eax, byte 0ch
		jg      short dr@7d2c2h
		mov     edx, 0bh
		jmp     near dr@7d398h
dr@7d2c2h:
		mov     edx, 3cdh
		sub     eax, eax
		in      al, dx
		mov     ecx, eax
		mov     al, 55h
		xor     bl, bl
		out     dx, al
		sub     eax, eax
		in      al, dx
		cmp     eax, byte 55h
		jne     short dr@7d2e8h
		mov     al, 0aah
		out     dx, al
		sub     eax, eax
		in      al, dx
		cmp     eax, dword 0aah
		jne     short dr@7d2e8h
		mov     bl, 1
dr@7d2e8h:
		mov     edx, 3cdh
		mov     al, cl
		out     dx, al
		test    bl, bl
		je      short dr@7d32dh
		mov     al, 33h
		mov     edx, 3d4h
		out     dx, al
		mov     edx, 3d5h
		sub     eax, eax
		in      al, dx
		mov     ebx, eax
		mov     al, 5
		out     dx, al
		sub     eax, eax
		in      al, dx
		mov     ecx, eax
		mov     al, bl
		out     dx, al
		movzx   eax, cl
		cmp     eax, byte 5
		jne     short dr@7d323h
		mov     edx, 6
		jmp     near dr@7d398h
dr@7d323h:
		mov     edx, 5
		jmp     near dr@7d398h
dr@7d32dh:
		mov     eax, 1206h
		mov     edx, 3c4h
		out     dx, ax
		mov     edx, 3c5h
		sub     eax, eax
		in      al, dx
		cwde    
		cmp     eax, byte 12h
		jne     short dr@7d386h
		mov     al, 27h
		mov     edx, 3d4h
		out     dx, al
		mov     edx, 3d5h
		sub     eax, eax
		in      al, dx
		xor     ah, ah
		and     al, 0fch
		cwde    
		cmp     eax, dword 0a8h
		je      short dr@7d37fh
		cmp     eax, dword 0a0h
		je      short dr@7d37fh
		cmp     eax, dword 90h
		je      short dr@7d37fh
		cmp     eax, dword 98h
		je      short dr@7d37fh
		cmp     eax, dword 0c8h
		jne     short dr@7d386h
dr@7d37fh:
		mov     edx, 0ch
		jmp     short dr@7d398h
dr@7d386h:
		call    near TestForVESA
		test    eax, eax
		je      short dr@7d396h
		mov     edx, 1
		jmp     short dr@7d398h
dr@7d396h:
		xor     edx, edx
dr@7d398h:
		mov     eax, edx
		leave   
		pop     es
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
TestForVESA:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    es
		enter   8, 0
		lea     edx, [ebp-8]
		mov     eax, 100h
		call    near _RMAlloc_
		test    ax, ax
		je      near dr@7d425h
		;mov     es, [ebp-2]
		db	8eh,45h,0feh
		push    byte 0
		movsx   eax, word [ebp-8]
		mov     edx, 4f00h
		push    eax
		xor     ecx, ecx
		xor     ebx, ebx
		push    byte 0
		mov     eax, 10h
		mov     esi, [ebp-6]
		call    near _RMInterrupt_
		cwde    
		cmp     eax, byte 4fh
		jne     short dr@7d417h
		movzx   eax, byte [es:esi]
		cmp     eax, byte 56h
		jne     short dr@7d417h
		movzx   eax, byte [es:esi+1]
		cmp     eax, byte 45h
		jne     short dr@7d417h
		movzx   eax, byte [es:esi+2]
		cmp     eax, byte 53h
		jne     short dr@7d417h
		movzx   eax, byte [es:esi+3]
		cmp     eax, byte 41h
		jne     short dr@7d417h
		mov     esi, 1
		jmp     short dr@7d419h
dr@7d417h:
		xor     esi, esi
dr@7d419h:
		lea     eax, [ebp-8]
		call    near _RMFree_
		mov     eax, esi
		jmp     short dr@7d427h
dr@7d425h:
		xor     eax, eax
dr@7d427h:
		leave   
		pop     es
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
global _SetSVGAType_
_SetSVGAType_:
		mov     [__SVGAType], ax
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$37:
    db  "VGA=",0
L$38:
    db  "(c)",0
L$39:
    db  "761295520",0
L$40:
    db  "OAK",0
L$41:
    db  "TRIDENT",0

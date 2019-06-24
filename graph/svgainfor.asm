%include "macros.inc"

    extern  __SVGAType
    extern  __RomOff
    extern  __RomSeg
    extern  _RMAlloc
    extern  _RMInterrupt
    extern  _RMFree

%include "layout.inc"

section @text

__GDECL(_SuperVGAType)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    es
		enter   18h, 0
		cmp     word [__SVGAType], byte 0
		je      short ___7d014h
		mov     dx, [__SVGAType]
		jmp     near ___7d398h
___7d014h:
		mov     eax, 1a00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		movzx   eax, al
		cmp     eax, byte 1ah
		jne     near ___7d396h
		mov     eax, 4
		mov     edi, ___185164h
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
		je      short ___7d05fh
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
___7d05fh:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short ___7d06fh
___7d065h:
		mov     edx, 3
		jmp     near ___7d398h
___7d06fh:
		mov     eax, 3
		mov     edi, ___185169h
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
		je      short ___7d09dh
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
___7d09dh:
		pop     es
		pop     ds
		test    ecx, ecx
		je      short ___7d065h
		mov     eax, 9
		mov     edi, ___18516dh
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
		je      short ___7d0d1h
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
___7d0d1h:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short ___7d0e1h
		mov     edx, 4
		jmp     near ___7d398h
___7d0e1h:
		mov     dword [ebp-0ch], 200h
		mov     eax, [__RomOff]
		mov     dx, [__RomSeg]
		mov     [ebp-18h], eax
		jmp     short ___7d164h
___7d0f9h:
		movsx   ecx, word [ebp-0ch]
		mov     al, 4fh
		mov     edi, [ebp-18h]
		push    es
		jecxz   ___7d110h
		;mov     es, edx
		db	8eh,0c2h
		repne scasb   
		jne     short ___7d110h
		dec     edi
		;mov     ecx, es
		db	8ch,0c1h
		;test    ax, 0cf89h
		db	66h,0a9h
___7d110h:
		;mov     edi, ecx
		db	89h,0cfh
		pop     es
		mov     [ebp-10h], ecx
		mov     ebx, edi
		test    edi, edi
		jne     short ___7d121h
		test    cx, cx
		je      short ___7d16bh
___7d121h:
		mov     eax, 3
		mov     esi, ___185177h
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
		je      short ___7d13fh
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
___7d13fh:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short ___7d14fh
		mov     edx, 7
		jmp     near ___7d398h
___7d14fh:
		movsx   eax, word [ebp-0ch]
		mov     ecx, ebx
		mov     edx, [ebp-10h]
		sub     ecx, [ebp-18h]
		inc     ebx
		sub     eax, ecx
		mov     [ebp-18h], ebx
		mov     [ebp-0ch], eax
___7d164h:
		cmp     word [ebp-0ch], byte 0
		jg      short ___7d0f9h
___7d16bh:
		mov     dword [ebp-8], 200h
		mov     eax, [__RomOff]
		mov     dx, [__RomSeg]
		mov     [ebp-14h], eax
		jmp     short ___7d1eeh
___7d183h:
		movsx   ecx, word [ebp-8]
		mov     al, 54h
		mov     edi, [ebp-14h]
		push    es
		jecxz   ___7d19ah
		;mov     es, edx
		db	8eh,0c2h
		repne scasb   
		jne     short ___7d19ah
		dec     edi
		;mov     ecx, es
		db	8ch,0c1h
		;test    ax, 0cf89h
		db	66h,0a9h
___7d19ah:
		;mov     edi, ecx
		db	89h,0cfh
		pop     es
		mov     [ebp-4], ecx
		mov     ebx, edi
		test    edi, edi
		jne     short ___7d1abh
		test    cx, cx
		je      short ___7d1f5h
___7d1abh:
		mov     eax, 7
		mov     esi, ___18517bh
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
		je      short ___7d1c9h
		sbb     ecx, ecx
		sbb     ecx, byte 0ffffffffh
___7d1c9h:
		pop     es
		pop     ds
		test    ecx, ecx
		jne     short ___7d1d9h
		mov     edx, 8
		jmp     near ___7d398h
___7d1d9h:
		movsx   eax, word [ebp-8]
		mov     ecx, ebx
		mov     edx, [ebp-4]
		sub     ecx, [ebp-14h]
		inc     ebx
		sub     eax, ecx
		mov     [ebp-14h], ebx
		mov     [ebp-8], eax
___7d1eeh:
		cmp     word [ebp-8], byte 0
		jg      short ___7d183h
___7d1f5h:
		mov     eax, [__RomOff]
		;mov     es, [__RomSeg]
		db	8eh,5
		dd	__RomSeg
		add     eax, byte 37h
		mov     ax, [es:eax]
		cwde    
		add     eax, [__RomOff]
		movzx   ebx, byte [es:eax]
		cmp     ebx, byte 77h
		jne     short ___7d242h
		movzx   ebx, byte [es:eax+1]
		cmp     ebx, byte 11h
		jne     short ___7d242h
		movzx   ebx, byte [es:eax+2]
		cmp     ebx, 99h
		jne     short ___7d242h
		movzx   eax, byte [es:eax+3]
		cmp     eax, byte 66h
		jne     short ___7d242h
		mov     edx, 0ah
		jmp     near ___7d398h
___7d242h:
		mov     eax, 6f00h
		xor     edx, edx
		xor     ecx, ecx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		movsx   eax, bx
		cmp     eax, dword 5637h
		jne     short ___7d267h
		mov     edx, 2
		jmp     near ___7d398h
___7d267h:
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
		jne     short ___7d28ah
		mov     edx, 9
		jmp     near ___7d398h
___7d28ah:
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
		jl      short ___7d2c2h
		cmp     eax, byte 0ch
		jg      short ___7d2c2h
		mov     edx, 0bh
		jmp     near ___7d398h
___7d2c2h:
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
		jne     short ___7d2e8h
		mov     al, 0aah
		out     dx, al
		sub     eax, eax
		in      al, dx
		cmp     eax, dword 0aah
		jne     short ___7d2e8h
		mov     bl, 1
___7d2e8h:
		mov     edx, 3cdh
		mov     al, cl
		out     dx, al
		test    bl, bl
		je      short ___7d32dh
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
		jne     short ___7d323h
		mov     edx, 6
		jmp     near ___7d398h
___7d323h:
		mov     edx, 5
		jmp     near ___7d398h
___7d32dh:
		mov     eax, 1206h
		mov     edx, 3c4h
		out     dx, ax
		mov     edx, 3c5h
		sub     eax, eax
		in      al, dx
		cwde    
		cmp     eax, byte 12h
		jne     short ___7d386h
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
		je      short ___7d37fh
		cmp     eax, dword 0a0h
		je      short ___7d37fh
		cmp     eax, dword 90h
		je      short ___7d37fh
		cmp     eax, dword 98h
		je      short ___7d37fh
		cmp     eax, dword 0c8h
		jne     short ___7d386h
___7d37fh:
		mov     edx, 0ch
		jmp     short ___7d398h
___7d386h:
		call    near TestForVESA
		test    eax, eax
		je      short ___7d396h
		mov     edx, 1
		jmp     short ___7d398h
___7d396h:
		xor     edx, edx
___7d398h:
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
		call    near _RMAlloc
		test    ax, ax
		je      near ___7d425h
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
		call    near _RMInterrupt
		cwde    
		cmp     eax, byte 4fh
		jne     short ___7d417h
		movzx   eax, byte [es:esi]
		cmp     eax, byte 56h
		jne     short ___7d417h
		movzx   eax, byte [es:esi+1]
		cmp     eax, byte 45h
		jne     short ___7d417h
		movzx   eax, byte [es:esi+2]
		cmp     eax, byte 53h
		jne     short ___7d417h
		movzx   eax, byte [es:esi+3]
		cmp     eax, byte 41h
		jne     short ___7d417h
		mov     esi, 1
		jmp     short ___7d419h
___7d417h:
		xor     esi, esi
___7d419h:
		lea     eax, [ebp-8]
		call    near _RMFree
		mov     eax, esi
		jmp     short ___7d427h
___7d425h:
		xor     eax, eax
___7d427h:
		leave   
		pop     es
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(_SetSVGAType)
		mov     [__SVGAType], ax
		retn    


section @const

___185164h:
db	"VGA=",0
___185169h:
db	"(c)",0
___18516dh:
db	"761295520",0
___185177h:
db	"OAK",0
___18517bh:
db	"TRIDENT",0

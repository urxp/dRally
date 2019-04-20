cpu 386

    extern	itoa
    extern	___EFG_printf
    extern	ltoa
    extern	ultoa
    extern	toupper

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __prtf
__prtf:
		push    esi
		push    edi
		push    es
		push    ebp
		sub     esp, 124h
		mov     esi, ebx
		mov     [esp+11ch], ecx
		xor     bl, bl
		mov     [esp+100h], eax
		mov     [esp+120h], bl
		mov     [esp+114h], bl
		xor     ebx, ebx
		mov     edi, edx
		mov     [esp+110h], ebx
		mov     ebp, 4
		jmp     near dr@6becch
dr@6be39h:
		lea     ebx, [esp+100h]
		mov     edx, esi
		call    near getprintspecs
		mov     edi, eax
		mov     al, [eax]
		inc     edi
		mov     [esp+115h], al
		test    al, al
		je      near dr@6c187h
		xor     eax, eax
		mov     al, [esp+115h]
		cmp     eax, byte 6eh
		jne     near dr@6bf96h
		mov     al, [esp+114h]
		xor     edx, edx
		and     al, 20h
		mov     dl, al
		mov     al, [esp+114h]
		and     al, 40h
		mov     ah, [esp+114h]
		and     ah, 80h
		test    edx, edx
		je      near dr@6bf03h
		xor     edx, edx
		mov     dl, ah
		test    edx, edx
		je      short dr@6beb3h
		mov     ecx, [esi]
		add     ecx, byte 8
		mov     [esi], ecx
		les     edx, [ecx-8]
dr@6bea7h:
		mov     eax, [esp+110h]
		mov     [es:edx], eax
		jmp     short dr@6becch
dr@6beb3h:
		and     eax, 0ffh
		je      short dr@6bef8h
		mov     ebx, [esi]
		add     ebx, ebp
		mov     [esi], ebx
		mov     edx, [ebx-4]
dr@6bec3h:
		mov     eax, [esp+110h]
		mov     [edx], eax
dr@6becch:
		mov     cl, [edi]
		test    cl, cl
		je      near dr@6c187h
		xor     edx, edx
		mov     dl, cl
		lea     eax, [edi+1]
		cmp     edx, byte 25h
		je      near dr@6be39h
		mov     edi, eax
		lea     eax, [esp+100h]
		call    dword [esp+11ch]
		jmp     short dr@6becch
dr@6bef8h:
		mov     edx, [esi]
		add     edx, ebp
		mov     [esi], edx
		mov     edx, [edx-4]
		jmp     short dr@6bec3h
dr@6bf03h:
		mov     dl, [esp+114h]
		and     dl, 10h
		and     edx, 0ffh
		je      short dr@6bf5eh
		xor     edx, edx
		mov     dl, ah
		test    edx, edx
		je      short dr@6bf34h
		mov     eax, [esi]
		add     eax, byte 8
		mov     [esi], eax
		les     edx, [eax-8]
		mov     eax, [esp+110h]
		mov     [es:edx], ax
		jmp     short dr@6becch
dr@6bf34h:
		and     eax, 0ffh
		je      short dr@6bf53h
		mov     ecx, [esi]
		add     ecx, ebp
		mov     [esi], ecx
		mov     edx, [ecx-4]
dr@6bf44h:
		mov     eax, [esp+110h]
		mov     [edx], ax
		jmp     near dr@6becch
dr@6bf53h:
		mov     ebx, [esi]
		add     ebx, ebp
		mov     [esi], ebx
		mov     edx, [ebx-4]
		jmp     short dr@6bf44h
dr@6bf5eh:
		mov     dl, ah
		test    edx, edx
		je      short dr@6bf73h
		mov     edx, [esi]
		add     edx, byte 8
		mov     [esi], edx
		les     edx, [edx-8]
		jmp     near dr@6bea7h
dr@6bf73h:
		and     eax, 0ffh
		je      short dr@6bf88h
		mov     eax, [esi]
		add     eax, ebp
		mov     [esi], eax
;29:0006bf80
		mov     edx, [eax-4]
		jmp     near dr@6bec3h
dr@6bf88h:
		mov     ecx, [esi]
		add     ecx, ebp
		mov     [esi], ecx
		mov     edx, [ecx-4]
		jmp     near dr@6bec3h
dr@6bf96h:
		lea     ecx, [esp+120h]
		lea     ebx, [esp+100h]
		mov     eax, esp
		mov     edx, esi
		call    near formstring
		mov     ebx, eax
		mov     al, [esp+114h]
		;mov     es, edx
		db	8eh,0c2h
		and     al, 8
		and     eax, 0ffh
		jne     short dr@6bff9h
		mov     al, [esp+116h]
		cmp     eax, byte 20h
		jne     short dr@6bff9h
dr@6bfcdh:
		mov     eax, [esp+104h]
		dec     eax
		mov     [esp+104h], eax
		test    eax, eax
		jl      short dr@6bff9h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [esp+116h]
		call    dword [esp+11ch]
		jmp     short dr@6bfcdh
dr@6bff9h:
		lea     ecx, [esp+117h]
;30:0006c000
dr@6c000h:
		mov     al, [ecx]
		test    al, al
		je      short dr@6c01bh
		xor     edx, edx
		mov     dl, al
		lea     eax, [esp+100h]
		inc     ecx
		call    dword [esp+11ch]
		jmp     short dr@6c000h
dr@6c01bh:
		mov     eax, [esp+10ch]
		lea     ecx, [eax-1]
		mov     [esp+10ch], ecx
		test    eax, eax
		je      short dr@6c045h
		mov     edx, 30h
		lea     eax, [esp+100h]
		call    dword [esp+11ch]
		jmp     short dr@6c01bh
dr@6c045h:
		mov     al, [esp+114h]
		and     al, 8
		and     eax, 0ffh
		jne     short dr@6c08dh
		mov     al, [esp+116h]
		cmp     eax, byte 20h
		je      short dr@6c08dh
dr@6c061h:
		mov     eax, [esp+104h]
		dec     eax
		mov     [esp+104h], eax
		test    eax, eax
		jl      short dr@6c08dh
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [esp+116h]
		call    dword [esp+11ch]
		jmp     short dr@6c061h
dr@6c08dh:
		xor     eax, eax
		mov     al, [esp+115h]
		cmp     eax, byte 73h
		je      short dr@6c0a0h
		cmp     eax, byte 53h
		jne     short dr@6c10ch
dr@6c0a0h:
		mov     al, [esp+114h]
		and     al, 20h
		and     eax, 0ffh
		je      short dr@6c0e1h
dr@6c0b0h:
		mov     eax, [esp+108h]
		lea     ecx, [eax-1]
		mov     [esp+108h], ecx
		test    eax, eax
		je      near dr@6c137h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [es:ebx]
		call    dword [esp+11ch]
		add     ebx, byte 2
		jmp     short dr@6c0b0h
dr@6c0e1h:
		mov     eax, [esp+108h]
		lea     edx, [eax-1]
		mov     [esp+108h], edx
		test    eax, eax
		je      short dr@6c137h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [es:ebx]
		call    dword [esp+11ch]
		inc     ebx
		jmp     short dr@6c0e1h
dr@6c10ch:
		mov     eax, [esp+108h]
		lea     ecx, [eax-1]
		mov     [esp+108h], ecx
		test    eax, eax
		je      short dr@6c137h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [es:ebx]
		call    dword [esp+11ch]
		inc     ebx
		jmp     short dr@6c10ch
dr@6c137h:
		mov     al, [esp+114h]
		and     al, 8
		and     eax, 0ffh
		je      near dr@6becch
		cmp     dword [esp+104h], byte 0
		jle     near dr@6becch
dr@6c159h:
		mov     eax, [esp+104h]
		lea     edx, [eax-1]
		mov     [esp+104h], edx
		test    eax, eax
		je      near dr@6becch
		mov     edx, 20h
		lea     eax, [esp+100h]
		call    dword [esp+11ch]
		jmp     short dr@6c159h
dr@6c187h:
		mov     eax, [esp+110h]
		add     esp, 124h
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		retn    
getprintspecs:
		push    ecx
		push    esi
		push    edi
		mov     esi, edx
		mov     byte [ebx+17h], 0
		mov     edx, ebx
		mov     byte [ebx+16h], 20h
		call    near evalflags
		mov     dword [ebx+4], 0
		mov     dl, [eax]
		and     edx, 0ffh
		cmp     edx, byte 30h
		jl      short dr@6c1e7h
		cmp     edx, byte 39h
		jg      short dr@6c1e7h
dr@6c1c6h:
		imul    ecx, [ebx+4], byte 0ah
		xor     edx, edx
		mov     dl, [eax]
		sub     edx, byte 30h
		inc     eax
		add     ecx, edx
		xor     edx, edx
		mov     [ebx+4], ecx
		mov     dl, [eax]
		cmp     edx, byte 30h
		jl      short dr@6c212h
		cmp     edx, byte 39h
		jle     short dr@6c1c6h
		jmp     short dr@6c212h
dr@6c1e7h:
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 2ah
		jne     short dr@6c212h
		mov     edx, [esi]
		add     edx, byte 4
		mov     [esi], edx
		mov     edx, [edx-4]
		mov     [ebx+4], edx
		test    edx, edx
		jge     short dr@6c211h
		mov     edi, edx
		mov     dl, [ebx+14h]
		neg     edi
		or      dl, 8
		mov     [ebx+4], edi
		mov     [ebx+14h], dl
dr@6c211h:
		inc     eax
dr@6c212h:
		mov     dword [ebx+8], 0ffffffffh
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 2eh
		jne     short dr@6c26bh
		inc     eax
		mov     dword [ebx+8], 0
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 2ah
		jne     short dr@6c24eh
		mov     edx, [esi]
		add     edx, byte 4
		mov     [esi], edx
		mov     edx, [edx-4]
		mov     [ebx+8], edx
		test    edx, edx
		jge     short dr@6c24bh
		mov     dword [ebx+8], 0ffffffffh
dr@6c24bh:
		inc     eax
		jmp     short dr@6c26bh
dr@6c24eh:
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 30h
		jl      short dr@6c26bh
		cmp     edx, byte 39h
		jg      short dr@6c26bh
		imul    ecx, [ebx+8], byte 0ah
		sub     edx, byte 30h
		add     ecx, edx
		inc     eax
		mov     [ebx+8], ecx
		jmp     short dr@6c24eh
dr@6c26bh:
		mov     dl, [eax]
		lea     ecx, [eax+1]
		cmp     dl, 4eh
		jb      short dr@6c290h
		jbe     short dr@6c2cdh
		cmp     dl, 6ch
		jb      short dr@6c287h
		jbe     short dr@6c2a0h
		cmp     dl, 77h
		je      short dr@6c2a0h
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6c287h:
		cmp     dl, 68h
		je      short dr@6c2aeh
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6c290h:
		cmp     dl, 46h
		jb      short dr@6c2d3h
		jbe     short dr@6c2c3h
		cmp     dl, 4ch
		je      short dr@6c2b4h
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6c2a0h:
		mov     dh, [ebx+14h]
		or      dh, 20h
		inc     eax
dr@6c2a7h:
		mov     [ebx+14h], dh
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6c2aeh:
		or      byte [ebx+14h], 10h
		jmp     short dr@6c2d1h
dr@6c2b4h:
		mov     dl, [ebx+14h]
		or      dl, 40h
		mov     eax, ecx
		mov     [ebx+14h], dl
		pop     edi
		pop     esi
		pop     ecx
		retn    
dr@6c2c3h:
		mov     dh, [ebx+14h]
		or      dh, 80h
		mov     eax, ecx
		jmp     short dr@6c2a7h
dr@6c2cdh:
		or      byte [ebx+14h], 40h
dr@6c2d1h:
		mov     eax, ecx
dr@6c2d3h:
		pop     edi
		pop     esi
		pop     ecx
		retn    
evalflags:
		push    ebx
		push    ecx
		mov     ebx, eax
		mov     byte [edx+14h], 0
dr@6c2dfh:
		xor     eax, eax
		mov     al, [ebx]
		cmp     eax, byte 2dh
		jne     short dr@6c2eeh
		or      byte [edx+14h], 8
		jmp     short dr@6c32eh
dr@6c2eeh:
		cmp     eax, byte 23h
		jne     short dr@6c2f9h
		or      byte [edx+14h], 1
		jmp     short dr@6c32eh
dr@6c2f9h:
		cmp     eax, byte 2bh
		jne     short dr@6c30eh
		mov     cl, [edx+14h]
		or      cl, 4
		mov     ch, cl
		and     ch, 0fdh
		mov     [edx+14h], ch
		jmp     short dr@6c32eh
dr@6c30eh:
		cmp     eax, byte 20h
		jne     short dr@6c325h
		mov     al, [edx+14h]
		and     al, 4
		and     eax, 0ffh
		jne     short dr@6c32eh
		or      byte [edx+14h], 2
		jmp     short dr@6c32eh
dr@6c325h:
		cmp     eax, byte 30h
		jne     short dr@6c331h
		mov     byte [edx+16h], 30h
dr@6c32eh:
		inc     ebx
		jmp     short dr@6c2dfh
dr@6c331h:
		mov     eax, ebx
		pop     ecx
		pop     ebx
		retn    
far_strlen:
		push    ecx
		push    esi
		push    edi
		push    es
		mov     ecx, edx
		mov     edi, ebx
		mov     edx, eax
		;mov     es, ecx
		db	8eh,0c1h
		xor     eax, eax
dr@6c344h:
		mov     esi, edx
		mov     bl, [es:esi]
		inc     edx
		test    bl, bl
		je      short dr@6c355h
		cmp     eax, edi
		je      short dr@6c355h
		inc     eax
		jmp     short dr@6c344h
dr@6c355h:
		pop     es
		pop     edi
		pop     esi
		pop     ecx
		retn    
far_other_strlen:
		push    ecx
		push    esi
		push    edi
		push    es
		mov     ecx, eax
		mov     esi, ebx
		mov     ebx, ecx
		;mov     es, edx
		db	8eh,0c2h
		xor     eax, eax
dr@6c368h:
		mov     ecx, ebx
		mov     di, [es:ecx]
		add     ebx, byte 2
		test    di, di
		je      short dr@6c355h
		cmp     eax, esi
		je      short dr@6c355h
		inc     eax
		jmp     short dr@6c368h
fmt4hex:
		push    ecx
		push    esi
		push    edi
;30:0006c380
		push    ebp
		sub     esp, byte 4
		mov     ebp, edx
		mov     [esp], ebx
		mov     ebx, 10h
		mov     edi, ebp
		call    near itoa
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		pop     es
		mov     eax, [esp]
		mov     esi, ebp
		dec     eax
		lea     edx, [ecx+ebp*1]
		lea     ebx, [eax+ebp*1]
		jmp     short dr@6c3bah
dr@6c3b3h:
		dec     edx
		mov     cl, [edx]
		dec     eax
		mov     [ebx], cl
		dec     ebx
dr@6c3bah:
		cmp     edx, esi
		jne     short dr@6c3b3h
		lea     edx, [eax+ebp*1]
dr@6c3c1h:
		test    eax, eax
		jl      short dr@6c3cch
		dec     eax
		mov     byte [edx], 30h
		dec     edx
		jmp     short dr@6c3c1h
dr@6c3cch:
		add     ebp, [esp]
		mov     byte [ebp+0], 0
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
FixedPoint_Format:
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 4
		mov     ecx, eax
		mov     esi, ebx
		mov     [esp], edx
		test    edx, edx
		jge     short dr@6c3f7h
		neg     edx
		lea     ecx, [eax+1]
		mov     byte [eax], 2dh
		mov     [esp], edx
dr@6c3f7h:
		cmp     dword [esi+8], byte 0ffffffffh
		jne     short dr@6c404h
		mov     dword [esi+8], 4
dr@6c404h:
		mov     ebx, 0ah
		xor     eax, eax
		mov     edx, ecx
		mov     ax, [esp+2]
		call    near itoa
		mov     ebx, ecx
dr@6c419h:
		mov     ah, [ecx]
		lea     edx, [ecx+1]
		test    ah, ah
		je      short dr@6c426h
		mov     ecx, edx
		jmp     short dr@6c419h
dr@6c426h:
		cmp     dword [esi+8], byte 0
		je      short dr@6c458h
		mov     byte [ecx], 2eh
		xor     eax, eax
		mov     ecx, edx
		jmp     short dr@6c450h
dr@6c435h:
		xor     edx, edx
		mov     [esp+2], dx
		mov     edi, [esp]
		imul    edx, edi, byte 0ah
		mov     [esp], edx
		mov     dl, [esp+2]
		add     dl, 30h
		inc     eax
		mov     [ecx], dl
		inc     ecx
dr@6c450h:
		cmp     eax, [esi+8]
		jl      short dr@6c435h
		mov     byte [ecx], 0
dr@6c458h:
		mov     eax, [esp]
		xor     al, al
		and     ah, 80h
		and     eax, 0ffffh
		je      near dr@6c4c9h
dr@6c46bh:
		cmp     ecx, ebx
		jne     short dr@6c4a8h
		lea     ecx, [ebx+1]
		mov     byte [ebx], 31h
dr@6c475h:
		xor     edx, edx
		mov     dl, [ecx]
		lea     eax, [ecx+1]
		cmp     edx, byte 30h
		jne     short dr@6c485h
		mov     ecx, eax
		jmp     short dr@6c475h
dr@6c485h:
		cmp     edx, byte 2eh
		jne     short dr@6c49fh
		mov     byte [ecx], 30h
		lea     ecx, [eax+1]
		mov     byte [eax], 2eh
dr@6c493h:
		xor     eax, eax
		mov     al, [ecx]
		cmp     eax, byte 30h
		jne     short dr@6c49fh
		inc     ecx
		jmp     short dr@6c493h
dr@6c49fh:
		mov     byte [ecx], 30h
		inc     ecx
		mov     byte [ecx], 0
		jmp     short dr@6c4c9h
dr@6c4a8h:
		dec     ecx
		xor     eax, eax
		mov     al, [ecx]
		cmp     eax, byte 2eh
		jne     short dr@6c4b3h
		dec     ecx
dr@6c4b3h:
		xor     eax, eax
		mov     al, [ecx]
		cmp     eax, byte 39h
		je      short dr@6c4c4h
		mov     dl, al
		inc     dl
		mov     [ecx], dl
		jmp     short dr@6c4c9h
dr@6c4c4h:
		mov     byte [ecx], 30h
		jmp     short dr@6c46bh
dr@6c4c9h:
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     ecx
		retn    
float_format:
		call    dword [___EFG_printf]
		retn    
formstring:
		push    esi
		push    edi
		push    es
		push    ebp
		sub     esp, byte 0ch
		mov     edi, eax
		mov     esi, ebx
		mov     [esp+4], ecx
		mov     eax, edx
		mov     dword [esp], 1
		;mov     edx, ds
		db	8ch,0dah
		mov     ecx, edi
		;mov     es, edx
		db	8eh,0c2h
		mov     dl, [ebx+15h]
		mov     dword [ebx+0ch], 0
		cmp     dl, 69h
		jb      short dr@6c520h
		jbe     near dr@6c571h
		cmp     dl, 75h
		jb      short dr@6c51bh
		jbe     short dr@6c52eh
		cmp     dl, 78h
dr@6c514h:
		je      short dr@6c52eh
		jmp     near dr@6c57bh
dr@6c51bh:
		cmp     dl, 6fh
		jmp     short dr@6c514h
dr@6c520h:
		cmp     dl, 58h
		jb      short dr@6c57bh
		jbe     short dr@6c52eh
		cmp     dl, 64h
		je      short dr@6c571h
		jmp     short dr@6c57bh
dr@6c52eh:
		mov     dl, [esi+14h]
		and     dl, 20h
		and     edx, 0ffh
		je      short dr@6c548h
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		mov     ebp, [edx-4]
		jmp     short dr@6c56dh
dr@6c548h:
		mov     dl, [esi+14h]
		and     dl, 10h
		and     edx, 0ffh
		je      short dr@6c563h
		mov     ebp, [eax]
		add     ebp, byte 4
		mov     [eax], ebp
		movzx   ebp, word [ebp-4]
		jmp     short dr@6c56dh
dr@6c563h:
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		mov     ebp, [ebx-4]
dr@6c56dh:
		and     byte [esi+14h], 0f9h
dr@6c571h:
		cmp     dword [esi+8], byte 0ffffffffh
		je      short dr@6c57bh
		mov     byte [esi+16h], 20h
dr@6c57bh:
		mov     dl, [esi+15h]
		mov     ebx, 0ah
		cmp     dl, 65h
		jb      short dr@6c5e8h
		jbe     near dr@6c668h
		cmp     dl, 6fh
		jb      short dr@6c5cfh
		jbe     near dr@6c67eh
		cmp     dl, 73h
		jb      short dr@6c5c1h
		jbe     near dr@6c713h
		cmp     dl, 75h
		jb      near dr@6c8e5h
		jbe     near dr@6c7ffh
		cmp     dl, 78h
		je      near dr@6c7dch
		jmp     near dr@6c8e5h
dr@6c5c1h:
		cmp     dl, 70h
		je      near dr@6c822h
		jmp     near dr@6c8e5h
dr@6c5cfh:
		cmp     dl, 67h
		jb      short dr@6c636h
		jbe     near dr@6c668h
		cmp     dl, 69h
		je      near dr@6c6c2h
		jmp     near dr@6c8e5h
dr@6c5e8h:
		cmp     dl, 50h
		jb      short dr@6c620h
		jbe     near dr@6c822h
		cmp     dl, 58h
		jb      short dr@6c612h
		jbe     near dr@6c7dch
		cmp     dl, 63h
		jb      near dr@6c8e5h
		jbe     near dr@6c8b9h
		jmp     near dr@6c6c2h
dr@6c612h:
		cmp     dl, 53h
		je      near dr@6c713h
		jmp     near dr@6c8e5h
dr@6c620h:
		cmp     dl, 46h
		jb      short dr@6c631h
		jbe     short dr@6c636h
		cmp     dl, 47h
dr@6c62ah:
		je      short dr@6c668h
		jmp     near dr@6c8e5h
dr@6c631h:
		cmp     dl, 45h
		jmp     short dr@6c62ah
dr@6c636h:
		mov     dl, [esi+14h]
		and     dl, 10h
		and     edx, 0ffh
		je      short dr@6c668h
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		mov     eax, edi
		mov     edx, [ebx-4]
		mov     ebx, esi
		call    near FixedPoint_Format
		mov     ebx, 0ffffffffh
		;mov     eax, ds
		db	8ch,0d8h
		;mov     edx, ds
		db	8ch,0dah
		;mov     es, eax
		db	8eh,0c0h
		mov     eax, edi
		mov     ecx, edi
		jmp     short dr@6c6b8h
dr@6c668h:
		mov     ebx, esi
		mov     edx, eax
		mov     eax, edi
		call    near float_format
		mov     ebx, 0ffffffffh
		;mov     es, edx
		db	8eh,0c2h
		mov     ecx, eax
		jmp     short dr@6c6b8h
dr@6c67eh:
		mov     al, [esi+14h]
		mov     ebx, 8
		and     al, 1
		and     eax, 0ffh
		je      short dr@6c693h
		mov     byte [edi], 30h
		inc     edi
dr@6c693h:
		mov     edx, edi
		mov     eax, ebp
		call    near ltoa
dr@6c69ch:
		cmp     dword [esi+8], byte 0
		jne     short dr@6c6afh
		xor     eax, eax
		mov     al, [edi]
		cmp     eax, byte 30h
		jne     short dr@6c6afh
		mov     byte [es:ecx], 0
dr@6c6afh:
		mov     ebx, 0ffffffffh
		;mov     edx, es
		db	8ch,0c2h
		mov     eax, ecx
dr@6c6b8h:
		call    near far_strlen
		jmp     near dr@6c90eh
dr@6c6c2h:
		mov     dl, [esi+14h]
		and     dl, 20h
		and     edx, 0ffh
		je      short dr@6c6e3h
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		mov     eax, [edx-4]
		mov     edx, edi
dr@6c6dch:
		call    near ltoa
		jmp     short dr@6c69ch
dr@6c6e3h:
		mov     dl, [esi+14h]
		and     dl, 10h
		and     edx, 0ffh
		je      short dr@6c700h
		mov     ebp, [eax]
		add     ebp, byte 4
		mov     [eax], ebp
		mov     edx, edi
		movsx   eax, word [ebp-4]
		jmp     short dr@6c6dch
;30:0006c700
dr@6c700h:
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		mov     eax, [edx-4]
		mov     edx, edi
		call    near itoa
		jmp     short dr@6c69ch
dr@6c713h:
		mov     dl, [esi+14h]
		and     dl, 80h
		and     edx, 0ffh
		je      short dr@6c744h
		mov     edi, [eax]
		add     edi, byte 8
		mov     [eax], edi
		mov     ecx, [edi-8]
		mov     dx, [edi-4]
		test    ecx, ecx
		jne     short dr@6c738h
		test    dx, dx
		je      short dr@6c73ch
dr@6c738h:
		;mov     es, edx
		db	8eh,0c2h
		jmp     short dr@6c77ah
dr@6c73ch:
		;mov     eax, ds
		db	8ch,0d8h
		mov     ecx, [esp+4]
		jmp     short dr@6c778h
dr@6c744h:
		mov     dl, [esi+14h]
		and     dl, 40h
		and     edx, 0ffh
		je      short dr@6c764h
		mov     ecx, [eax]
		add     ecx, byte 4
		mov     [eax], ecx
		mov     ecx, [ecx-4]
		test    ecx, ecx
		je      short dr@6c73ch
dr@6c760h:
		;mov     eax, ds
		db	8ch,0d8h
		jmp     short dr@6c778h
dr@6c764h:
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		mov     ecx, [ebx-4]
		test    ecx, ecx
		jne     short dr@6c760h
		;mov     eax, ds
		db	8ch,0d8h
		mov     ecx, [esp+4]
dr@6c778h:
		;mov     es, eax
		db	8eh,0c0h
dr@6c77ah:
		mov     bl, [esi+14h]
		xor     ebp, ebp
		xor     eax, eax
		and     bl, 0f9h
		mov     [esp], ebp
		mov     al, [esi+15h]
		mov     [esi+14h], bl
		cmp     eax, byte 53h
		jne     short dr@6c7b4h
		mov     al, bl
		and     al, 20h
		and     eax, 0ffh
		je      short dr@6c7abh
		xor     eax, eax
		mov     ax, [es:ecx]
		add     ecx, byte 2
		jmp     near dr@6c90eh
dr@6c7abh:
		mov     al, [es:ecx]
		inc     ecx
		jmp     near dr@6c90eh
dr@6c7b4h:
		mov     al, bl
		and     al, 20h
		and     eax, 0ffh
		je      short dr@6c7d0h
		;mov     edx, es
		db	8ch,0c2h
		mov     eax, ecx
		mov     ebx, [esi+8]
		call    near far_other_strlen
		jmp     near dr@6c90eh
dr@6c7d0h:
		;mov     edx, es
		db	8ch,0c2h
		mov     eax, ecx
		mov     ebx, [esi+8]
		jmp     near dr@6c6b8h
dr@6c7dch:
		mov     al, [esi+14h]
		and     al, 1
		and     eax, 0ffh
		je      short dr@6c7fah
		test    ebp, ebp
		je      short dr@6c7fah
		mov     byte [esi+17h], 30h
		mov     al, [esi+15h]
		mov     byte [esi+19h], 0
		mov     [esi+18h], al
dr@6c7fah:
		mov     ebx, 10h
dr@6c7ffh:
		mov     edx, edi
		mov     eax, ebp
		call    near ultoa
		xor     eax, eax
		mov     al, [esi+15h]
		cmp     eax, byte 58h
		jne     near dr@6c69ch
		mov     eax, edi
		call    near zupstr
		jmp     near dr@6c69ch
dr@6c822h:
		cmp     dword [esi+4], byte 0
		jne     short dr@6c846h
		mov     dl, [esi+14h]
		and     dl, 80h
		and     edx, 0ffh
		je      short dr@6c83fh
		mov     dword [esi+4], 0dh
		jmp     short dr@6c846h
dr@6c83fh:
		mov     dword [esi+4], 8
dr@6c846h:
		and     byte [esi+14h], 0f9h
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		mov     dl, [esi+14h]
		and     dl, 80h
		mov     [esp+8], dl
		xor     edx, edx
		mov     dl, [esp+8]
		mov     ebp, [ebx-4]
		test    edx, edx
		je      short dr@6c891h
		add     ebx, byte 4
		mov     [eax], ebx
		mov     edx, edi
		mov     eax, [ebx-4]
		mov     ebx, 4
		and     eax, 0ffffh
		call    near fmt4hex
		mov     ebx, 8
		lea     edx, [edi+5]
		mov     eax, ebp
		mov     byte [edi+4], 3ah
		jmp     short dr@6c89ah
dr@6c891h:
		mov     ebx, 8
		mov     edx, edi
		mov     eax, ebp
dr@6c89ah:
		call    near fmt4hex
		xor     eax, eax
		mov     al, [esi+15h]
		cmp     eax, byte 50h
		jne     near dr@6c6afh
		mov     eax, edi
		call    near zupstr
		jmp     near dr@6c6afh
dr@6c8b9h:
		mov     ebp, [eax]
		add     ebp, byte 4
		mov     [eax], ebp
		mov     al, [ebp-4]
		mov     byte [edi+1], 0
		mov     [edi], al
		mov     dword [esi+8], 1
		mov     dh, [esi+14h]
		xor     eax, eax
		and     dh, 0f9h
		mov     [esp], eax
		mov     eax, 1
		mov     [esi+14h], dh
		jmp     short dr@6c90eh
dr@6c8e5h:
		mov     dword [esi+4], 0
		mov     al, [esi+15h]
		mov     byte [edi+1], 0
		mov     [edi], al
		mov     dword [esi+8], 1
		mov     al, [esi+14h]
		xor     edi, edi
		and     al, 0f9h
		mov     [esp], edi
		mov     [esi+14h], al
		mov     eax, 1
dr@6c90eh:
		cmp     dword [esp], byte 0
		je      short dr@6c963h
		xor     edx, edx
		mov     dl, [es:ecx]
		cmp     edx, byte 2dh
		jne     short dr@6c926h
		inc     ecx
		mov     byte [esi+17h], 2dh
		dec     eax
		jmp     short dr@6c94ch
dr@6c926h:
		mov     dl, [esi+14h]
		and     dl, 2
		and     edx, 0ffh
		je      short dr@6c93ah
		mov     byte [esi+17h], 20h
		jmp     short dr@6c94ch
dr@6c93ah:
		mov     dl, [esi+14h]
		and     dl, 4
		and     edx, 0ffh
		je      short dr@6c950h
		mov     byte [esi+17h], 2bh
dr@6c94ch:
		mov     byte [esi+18h], 0
dr@6c950h:
		mov     edx, [esi+8]
		cmp     eax, edx
		jle     short dr@6c95ch
		mov     [esi+8], eax
		jmp     short dr@6c963h
dr@6c95ch:
		mov     ebx, edx
		sub     ebx, eax
		mov     [esi+0ch], ebx
dr@6c963h:
		xor     edx, edx
		mov     dl, [esi+16h]
		cmp     edx, byte 2ah
		jne     short dr@6c97ah
		mov     dl, [esi+14h]
		mov     byte [esi+17h], 0
		and     dl, 0f9h
		mov     [esi+14h], dl
dr@6c97ah:
		mov     ebx, [esi+8]
		cmp     ebx, byte 0ffffffffh
;30:0006c980
		je      short dr@6c986h
		cmp     eax, ebx
		jge     short dr@6c993h
dr@6c986h:
		xor     edx, edx
		mov     dl, [esi+15h]
		cmp     edx, byte 63h
		je      short dr@6c993h
		mov     [esi+8], eax
dr@6c993h:
		mov     ebx, 0ffffffffh
		lea     eax, [esi+17h]
		;mov     edx, ds
		db	8ch,0dah
		call    near far_strlen
		mov     ebp, [esi+8]
		mov     edx, [esi+0ch]
		add     eax, ebp
		mov     ebx, [esi+4]
		add     eax, edx
		;mov     edx, es
		db	8ch,0c2h
		sub     ebx, eax
		mov     eax, ecx
		mov     [esi+4], ebx
		add     esp, byte 0ch
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		retn    
zupstr:
		push    edx
		mov     edx, eax
dr@6c9c3h:
		cmp     byte [edx], 0
		je      short dr@6c9d6h
		xor     eax, eax
		mov     al, [edx]
		call    near toupper
		mov     [edx], al
		inc     edx
		jmp     short dr@6c9c3h
dr@6c9d6h:
		pop     edx
		retn
%include "macros.inc"

    extern  itoa
    extern  ___EFG_printf
    extern  ltoa
    extern  ultoa
    extern  toupper

%include "layout.inc"

section @text

__GDECL(__prtf__clib3r)
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
		jmp     ___6becch
___6be39h:
		lea     ebx, [esp+100h]
		mov     edx, esi
		call    getprintspecs
		mov     edi, eax
		mov     al, [eax]
		inc     edi
		mov     [esp+115h], al
		test    al, al
		je      ___6c187h
		xor     eax, eax
		mov     al, [esp+115h]
		cmp     eax, byte 6eh
		jne     ___6bf96h
		mov     al, [esp+114h]
		xor     edx, edx
		and     al, 20h
		mov     dl, al
		mov     al, [esp+114h]
		and     al, 40h
		mov     ah, [esp+114h]
		and     ah, 80h
		test    edx, edx
		je      ___6bf03h
		xor     edx, edx
		mov     dl, ah
		test    edx, edx
		je      ___6beb3h
		mov     ecx, [esi]
		add     ecx, byte 8
		mov     [esi], ecx
		les     edx, [ecx-8]
___6bea7h:
		mov     eax, [esp+110h]
		mov     [es:edx], eax
		jmp     ___6becch
___6beb3h:
		and     eax, 0ffh
		je      ___6bef8h
		mov     ebx, [esi]
		add     ebx, ebp
		mov     [esi], ebx
		mov     edx, [ebx-4]
___6bec3h:
		mov     eax, [esp+110h]
		mov     [edx], eax
___6becch:
		mov     cl, [edi]
		test    cl, cl
		je      ___6c187h
		xor     edx, edx
		mov     dl, cl
		lea     eax, [edi+1]
		cmp     edx, byte 25h
		je      ___6be39h
		mov     edi, eax
		lea     eax, [esp+100h]
		call    dword [esp+11ch]
		jmp     ___6becch
___6bef8h:
		mov     edx, [esi]
		add     edx, ebp
		mov     [esi], edx
		mov     edx, [edx-4]
		jmp     ___6bec3h
___6bf03h:
		mov     dl, [esp+114h]
		and     dl, 10h
		and     edx, 0ffh
		je      ___6bf5eh
		xor     edx, edx
		mov     dl, ah
		test    edx, edx
		je      ___6bf34h
		mov     eax, [esi]
		add     eax, byte 8
		mov     [esi], eax
		les     edx, [eax-8]
		mov     eax, [esp+110h]
		mov     [es:edx], ax
		jmp     ___6becch
___6bf34h:
		and     eax, 0ffh
		je      ___6bf53h
		mov     ecx, [esi]
		add     ecx, ebp
		mov     [esi], ecx
		mov     edx, [ecx-4]
___6bf44h:
		mov     eax, [esp+110h]
		mov     [edx], ax
		jmp     ___6becch
___6bf53h:
		mov     ebx, [esi]
		add     ebx, ebp
		mov     [esi], ebx
		mov     edx, [ebx-4]
		jmp     ___6bf44h
___6bf5eh:
		mov     dl, ah
		test    edx, edx
		je      ___6bf73h
		mov     edx, [esi]
		add     edx, byte 8
		mov     [esi], edx
		les     edx, [edx-8]
		jmp     ___6bea7h
___6bf73h:
		and     eax, 0ffh
		je      ___6bf88h
		mov     eax, [esi]
		add     eax, ebp
		mov     [esi], eax
		mov     edx, [eax-4]
		jmp     ___6bec3h
___6bf88h:
		mov     ecx, [esi]
		add     ecx, ebp
		mov     [esi], ecx
		mov     edx, [ecx-4]
		jmp     ___6bec3h
___6bf96h:
		lea     ecx, [esp+120h]
		lea     ebx, [esp+100h]
		mov     eax, esp
		mov     edx, esi
		call    formstring
		mov     ebx, eax
		mov     al, [esp+114h]
		;mov     es, edx
		db	8eh,0c2h
		and     al, 8
		and     eax, 0ffh
		jne     ___6bff9h
		mov     al, [esp+116h]
		cmp     eax, byte 20h
		jne     ___6bff9h
___6bfcdh:
		mov     eax, [esp+104h]
		dec     eax
		mov     [esp+104h], eax
		test    eax, eax
		jl      ___6bff9h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [esp+116h]
		call    dword [esp+11ch]
		jmp     ___6bfcdh
___6bff9h:
		lea     ecx, [esp+117h]
___6c000h:
		mov     al, [ecx]
		test    al, al
		je      ___6c01bh
		xor     edx, edx
		mov     dl, al
		lea     eax, [esp+100h]
		inc     ecx
		call    dword [esp+11ch]
		jmp     ___6c000h
___6c01bh:
		mov     eax, [esp+10ch]
		lea     ecx, [eax-1]
		mov     [esp+10ch], ecx
		test    eax, eax
		je      ___6c045h
		mov     edx, 30h
		lea     eax, [esp+100h]
		call    dword [esp+11ch]
		jmp     ___6c01bh
___6c045h:
		mov     al, [esp+114h]
		and     al, 8
		and     eax, 0ffh
		jne     ___6c08dh
		mov     al, [esp+116h]
		cmp     eax, byte 20h
		je      ___6c08dh
___6c061h:
		mov     eax, [esp+104h]
		dec     eax
		mov     [esp+104h], eax
		test    eax, eax
		jl      ___6c08dh
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [esp+116h]
		call    dword [esp+11ch]
		jmp     ___6c061h
___6c08dh:
		xor     eax, eax
		mov     al, [esp+115h]
		cmp     eax, byte 73h
		je      ___6c0a0h
		cmp     eax, byte 53h
		jne     ___6c10ch
___6c0a0h:
		mov     al, [esp+114h]
		and     al, 20h
		and     eax, 0ffh
		je      ___6c0e1h
___6c0b0h:
		mov     eax, [esp+108h]
		lea     ecx, [eax-1]
		mov     [esp+108h], ecx
		test    eax, eax
		je      ___6c137h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [es:ebx]
		call    dword [esp+11ch]
		add     ebx, byte 2
		jmp     ___6c0b0h
___6c0e1h:
		mov     eax, [esp+108h]
		lea     edx, [eax-1]
		mov     [esp+108h], edx
		test    eax, eax
		je      ___6c137h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [es:ebx]
		call    dword [esp+11ch]
		inc     ebx
		jmp     ___6c0e1h
___6c10ch:
		mov     eax, [esp+108h]
		lea     ecx, [eax-1]
		mov     [esp+108h], ecx
		test    eax, eax
		je      ___6c137h
		xor     edx, edx
		lea     eax, [esp+100h]
		mov     dl, [es:ebx]
		call    dword [esp+11ch]
		inc     ebx
		jmp     ___6c10ch
___6c137h:
		mov     al, [esp+114h]
		and     al, 8
		and     eax, 0ffh
		je      ___6becch
		cmp     dword [esp+104h], byte 0
		jle     ___6becch
___6c159h:
		mov     eax, [esp+104h]
		lea     edx, [eax-1]
		mov     [esp+104h], edx
		test    eax, eax
		je      ___6becch
		mov     edx, 20h
		lea     eax, [esp+100h]
		call    dword [esp+11ch]
		jmp     ___6c159h
___6c187h:
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
		call    evalflags
		mov     dword [ebx+4], 0
		mov     dl, [eax]
		and     edx, 0ffh
		cmp     edx, byte 30h
		jl      ___6c1e7h
		cmp     edx, byte 39h
		jg      ___6c1e7h
___6c1c6h:
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
		jl      ___6c212h
		cmp     edx, byte 39h
		jle     ___6c1c6h
		jmp     ___6c212h
___6c1e7h:
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 2ah
		jne     ___6c212h
		mov     edx, [esi]
		add     edx, byte 4
		mov     [esi], edx
		mov     edx, [edx-4]
		mov     [ebx+4], edx
		test    edx, edx
		jge     ___6c211h
		mov     edi, edx
		mov     dl, [ebx+14h]
		neg     edi
		or      dl, 8
		mov     [ebx+4], edi
		mov     [ebx+14h], dl
___6c211h:
		inc     eax
___6c212h:
		mov     dword [ebx+8], 0ffffffffh
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 2eh
		jne     ___6c26bh
		inc     eax
		mov     dword [ebx+8], 0
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 2ah
		jne     ___6c24eh
		mov     edx, [esi]
		add     edx, byte 4
		mov     [esi], edx
		mov     edx, [edx-4]
		mov     [ebx+8], edx
		test    edx, edx
		jge     ___6c24bh
		mov     dword [ebx+8], 0ffffffffh
___6c24bh:
		inc     eax
		jmp     ___6c26bh
___6c24eh:
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 30h
		jl      ___6c26bh
		cmp     edx, byte 39h
		jg      ___6c26bh
		imul    ecx, [ebx+8], byte 0ah
		sub     edx, byte 30h
		add     ecx, edx
		inc     eax
		mov     [ebx+8], ecx
		jmp     ___6c24eh
___6c26bh:
		mov     dl, [eax]
		lea     ecx, [eax+1]
		cmp     dl, 4eh
		jb      ___6c290h
		jbe     ___6c2cdh
		cmp     dl, 6ch
		jb      ___6c287h
		jbe     ___6c2a0h
		cmp     dl, 77h
		je      ___6c2a0h
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6c287h:
		cmp     dl, 68h
		je      ___6c2aeh
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6c290h:
		cmp     dl, 46h
		jb      ___6c2d3h
		jbe     ___6c2c3h
		cmp     dl, 4ch
		je      ___6c2b4h
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6c2a0h:
		mov     dh, [ebx+14h]
		or      dh, 20h
		inc     eax
___6c2a7h:
		mov     [ebx+14h], dh
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6c2aeh:
		or      byte [ebx+14h], 10h
		jmp     ___6c2d1h
___6c2b4h:
		mov     dl, [ebx+14h]
		or      dl, 40h
		mov     eax, ecx
		mov     [ebx+14h], dl
		pop     edi
		pop     esi
		pop     ecx
		retn    
___6c2c3h:
		mov     dh, [ebx+14h]
		or      dh, 80h
		mov     eax, ecx
		jmp     ___6c2a7h
___6c2cdh:
		or      byte [ebx+14h], 40h
___6c2d1h:
		mov     eax, ecx
___6c2d3h:
		pop     edi
		pop     esi
		pop     ecx
		retn    
evalflags:
		push    ebx
		push    ecx
		mov     ebx, eax
		mov     byte [edx+14h], 0
___6c2dfh:
		xor     eax, eax
		mov     al, [ebx]
		cmp     eax, byte 2dh
		jne     ___6c2eeh
		or      byte [edx+14h], 8
		jmp     ___6c32eh
___6c2eeh:
		cmp     eax, byte 23h
		jne     ___6c2f9h
		or      byte [edx+14h], 1
		jmp     ___6c32eh
___6c2f9h:
		cmp     eax, byte 2bh
		jne     ___6c30eh
		mov     cl, [edx+14h]
		or      cl, 4
		mov     ch, cl
		and     ch, 0fdh
		mov     [edx+14h], ch
		jmp     ___6c32eh
___6c30eh:
		cmp     eax, byte 20h
		jne     ___6c325h
		mov     al, [edx+14h]
		and     al, 4
		and     eax, 0ffh
		jne     ___6c32eh
		or      byte [edx+14h], 2
		jmp     ___6c32eh
___6c325h:
		cmp     eax, byte 30h
		jne     ___6c331h
		mov     byte [edx+16h], 30h
___6c32eh:
		inc     ebx
		jmp     ___6c2dfh
___6c331h:
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
___6c344h:
		mov     esi, edx
		mov     bl, [es:esi]
		inc     edx
		test    bl, bl
		je      ___6c355h
		cmp     eax, edi
		je      ___6c355h
		inc     eax
		jmp     ___6c344h
___6c355h:
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
___6c368h:
		mov     ecx, ebx
		mov     di, [es:ecx]
		add     ebx, byte 2
		test    di, di
		je      ___6c355h
		cmp     eax, esi
		je      ___6c355h
		inc     eax
		jmp     ___6c368h
fmt4hex:
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     ebp, edx
		mov     [esp], ebx
		mov     ebx, 10h
		mov     edi, ebp
		call    itoa
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
		lea     edx, [ecx+ebp]
		lea     ebx, [eax+ebp]
		jmp     ___6c3bah
___6c3b3h:
		dec     edx
		mov     cl, [edx]
		dec     eax
		mov     [ebx], cl
		dec     ebx
___6c3bah:
		cmp     edx, esi
		jne     ___6c3b3h
		lea     edx, [eax+ebp]
___6c3c1h:
		test    eax, eax
		jl      ___6c3cch
		dec     eax
		mov     byte [edx], 30h
		dec     edx
		jmp     ___6c3c1h
___6c3cch:
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
		jge     ___6c3f7h
		neg     edx
		lea     ecx, [eax+1]
		mov     byte [eax], 2dh
		mov     [esp], edx
___6c3f7h:
		cmp     dword [esi+8], byte 0ffffffffh
		jne     ___6c404h
		mov     dword [esi+8], 4
___6c404h:
		mov     ebx, 0ah
		xor     eax, eax
		mov     edx, ecx
		mov     ax, [esp+2]
		call    itoa
		mov     ebx, ecx
___6c419h:
		mov     ah, [ecx]
		lea     edx, [ecx+1]
		test    ah, ah
		je      ___6c426h
		mov     ecx, edx
		jmp     ___6c419h
___6c426h:
		cmp     dword [esi+8], byte 0
		je      ___6c458h
		mov     byte [ecx], 2eh
		xor     eax, eax
		mov     ecx, edx
		jmp     ___6c450h
___6c435h:
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
___6c450h:
		cmp     eax, [esi+8]
		jl      ___6c435h
		mov     byte [ecx], 0
___6c458h:
		mov     eax, [esp]
		xor     al, al
		and     ah, 80h
		and     eax, 0ffffh
		je      ___6c4c9h
___6c46bh:
		cmp     ecx, ebx
		jne     ___6c4a8h
		lea     ecx, [ebx+1]
		mov     byte [ebx], 31h
___6c475h:
		xor     edx, edx
		mov     dl, [ecx]
		lea     eax, [ecx+1]
		cmp     edx, byte 30h
		jne     ___6c485h
		mov     ecx, eax
		jmp     ___6c475h
___6c485h:
		cmp     edx, byte 2eh
		jne     ___6c49fh
		mov     byte [ecx], 30h
		lea     ecx, [eax+1]
		mov     byte [eax], 2eh
___6c493h:
		xor     eax, eax
		mov     al, [ecx]
		cmp     eax, byte 30h
		jne     ___6c49fh
		inc     ecx
		jmp     ___6c493h
___6c49fh:
		mov     byte [ecx], 30h
		inc     ecx
		mov     byte [ecx], 0
		jmp     ___6c4c9h
___6c4a8h:
		dec     ecx
		xor     eax, eax
		mov     al, [ecx]
		cmp     eax, byte 2eh
		jne     ___6c4b3h
		dec     ecx
___6c4b3h:
		xor     eax, eax
		mov     al, [ecx]
		cmp     eax, byte 39h
		je      ___6c4c4h
		mov     dl, al
		inc     dl
		mov     [ecx], dl
		jmp     ___6c4c9h
___6c4c4h:
		mov     byte [ecx], 30h
		jmp     ___6c46bh
___6c4c9h:
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
		jb      ___6c520h
		jbe     ___6c571h
		cmp     dl, 75h
		jb      ___6c51bh
		jbe     ___6c52eh
		cmp     dl, 78h
___6c514h:
		je      ___6c52eh
		jmp     ___6c57bh
___6c51bh:
		cmp     dl, 6fh
		jmp     ___6c514h
___6c520h:
		cmp     dl, 58h
		jb      ___6c57bh
		jbe     ___6c52eh
		cmp     dl, 64h
		je      ___6c571h
		jmp     ___6c57bh
___6c52eh:
		mov     dl, [esi+14h]
		and     dl, 20h
		and     edx, 0ffh
		je      ___6c548h
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		mov     ebp, [edx-4]
		jmp     ___6c56dh
___6c548h:
		mov     dl, [esi+14h]
		and     dl, 10h
		and     edx, 0ffh
		je      ___6c563h
		mov     ebp, [eax]
		add     ebp, byte 4
		mov     [eax], ebp
		movzx   ebp, word [ebp-4]
		jmp     ___6c56dh
___6c563h:
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		mov     ebp, [ebx-4]
___6c56dh:
		and     byte [esi+14h], 0f9h
___6c571h:
		cmp     dword [esi+8], byte 0ffffffffh
		je      ___6c57bh
		mov     byte [esi+16h], 20h
___6c57bh:
		mov     dl, [esi+15h]
		mov     ebx, 0ah
		cmp     dl, 65h
		jb      ___6c5e8h
		jbe     ___6c668h
		cmp     dl, 6fh
		jb      ___6c5cfh
		jbe     ___6c67eh
		cmp     dl, 73h
		jb      ___6c5c1h
		jbe     ___6c713h
		cmp     dl, 75h
		jb      ___6c8e5h
		jbe     ___6c7ffh
		cmp     dl, 78h
		je      ___6c7dch
		jmp     ___6c8e5h
___6c5c1h:
		cmp     dl, 70h
		je      ___6c822h
		jmp     ___6c8e5h
___6c5cfh:
		cmp     dl, 67h
		jb      ___6c636h
		jbe     ___6c668h
		cmp     dl, 69h
		je      ___6c6c2h
		jmp     ___6c8e5h
___6c5e8h:
		cmp     dl, 50h
		jb      ___6c620h
		jbe     ___6c822h
		cmp     dl, 58h
		jb      ___6c612h
		jbe     ___6c7dch
		cmp     dl, 63h
		jb      ___6c8e5h
		jbe     ___6c8b9h
		jmp     ___6c6c2h
___6c612h:
		cmp     dl, 53h
		je      ___6c713h
		jmp     ___6c8e5h
___6c620h:
		cmp     dl, 46h
		jb      ___6c631h
		jbe     ___6c636h
		cmp     dl, 47h
___6c62ah:
		je      ___6c668h
		jmp     ___6c8e5h
___6c631h:
		cmp     dl, 45h
		jmp     ___6c62ah
___6c636h:
		mov     dl, [esi+14h]
		and     dl, 10h
		and     edx, 0ffh
		je      ___6c668h
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		mov     eax, edi
		mov     edx, [ebx-4]
		mov     ebx, esi
		call    FixedPoint_Format
		mov     ebx, 0ffffffffh
		;mov     eax, ds
		db	8ch,0d8h
		;mov     edx, ds
		db	8ch,0dah
		;mov     es, eax
		db	8eh,0c0h
		mov     eax, edi
		mov     ecx, edi
		jmp     ___6c6b8h
___6c668h:
		mov     ebx, esi
		mov     edx, eax
		mov     eax, edi
		call    float_format
		mov     ebx, 0ffffffffh
		;mov     es, edx
		db	8eh,0c2h
		mov     ecx, eax
		jmp     ___6c6b8h
___6c67eh:
		mov     al, [esi+14h]
		mov     ebx, 8
		and     al, 1
		and     eax, 0ffh
		je      ___6c693h
		mov     byte [edi], 30h
		inc     edi
___6c693h:
		mov     edx, edi
		mov     eax, ebp
		call    ltoa
___6c69ch:
		cmp     dword [esi+8], byte 0
		jne     ___6c6afh
		xor     eax, eax
		mov     al, [edi]
		cmp     eax, byte 30h
		jne     ___6c6afh
		mov     byte [es:ecx], 0
___6c6afh:
		mov     ebx, 0ffffffffh
		;mov     edx, es
		db	8ch,0c2h
		mov     eax, ecx
___6c6b8h:
		call    far_strlen
		jmp     ___6c90eh
___6c6c2h:
		mov     dl, [esi+14h]
		and     dl, 20h
		and     edx, 0ffh
		je      ___6c6e3h
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		mov     eax, [edx-4]
		mov     edx, edi
___6c6dch:
		call    ltoa
		jmp     ___6c69ch
___6c6e3h:
		mov     dl, [esi+14h]
		and     dl, 10h
		and     edx, 0ffh
		je      ___6c700h
		mov     ebp, [eax]
		add     ebp, byte 4
		mov     [eax], ebp
		mov     edx, edi
		movsx   eax, word [ebp-4]
		jmp     ___6c6dch
___6c700h:
		mov     edx, [eax]
		add     edx, byte 4
		mov     [eax], edx
		mov     eax, [edx-4]
		mov     edx, edi
		call    itoa
		jmp     ___6c69ch
___6c713h:
		mov     dl, [esi+14h]
		and     dl, 80h
		and     edx, 0ffh
		je      ___6c744h
		mov     edi, [eax]
		add     edi, byte 8
		mov     [eax], edi
		mov     ecx, [edi-8]
		mov     dx, [edi-4]
		test    ecx, ecx
		jne     ___6c738h
		test    dx, dx
		je      ___6c73ch
___6c738h:
		;mov     es, edx
		db	8eh,0c2h
		jmp     ___6c77ah
___6c73ch:
		;mov     eax, ds
		db	8ch,0d8h
		mov     ecx, [esp+4]
		jmp     ___6c778h
___6c744h:
		mov     dl, [esi+14h]
		and     dl, 40h
		and     edx, 0ffh
		je      ___6c764h
		mov     ecx, [eax]
		add     ecx, byte 4
		mov     [eax], ecx
		mov     ecx, [ecx-4]
		test    ecx, ecx
		je      ___6c73ch
___6c760h:
		;mov     eax, ds
		db	8ch,0d8h
		jmp     ___6c778h
___6c764h:
		mov     ebx, [eax]
		add     ebx, byte 4
		mov     [eax], ebx
		mov     ecx, [ebx-4]
		test    ecx, ecx
		jne     ___6c760h
		;mov     eax, ds
		db	8ch,0d8h
		mov     ecx, [esp+4]
___6c778h:
		;mov     es, eax
		db	8eh,0c0h
___6c77ah:
		mov     bl, [esi+14h]
		xor     ebp, ebp
		xor     eax, eax
		and     bl, 0f9h
		mov     [esp], ebp
		mov     al, [esi+15h]
		mov     [esi+14h], bl
		cmp     eax, byte 53h
		jne     ___6c7b4h
		mov     al, bl
		and     al, 20h
		and     eax, 0ffh
		je      ___6c7abh
		xor     eax, eax
		mov     ax, [es:ecx]
		add     ecx, byte 2
		jmp     ___6c90eh
___6c7abh:
		mov     al, [es:ecx]
		inc     ecx
		jmp     ___6c90eh
___6c7b4h:
		mov     al, bl
		and     al, 20h
		and     eax, 0ffh
		je      ___6c7d0h
		;mov     edx, es
		db	8ch,0c2h
		mov     eax, ecx
		mov     ebx, [esi+8]
		call    far_other_strlen
		jmp     ___6c90eh
___6c7d0h:
		;mov     edx, es
		db	8ch,0c2h
		mov     eax, ecx
		mov     ebx, [esi+8]
		jmp     ___6c6b8h
___6c7dch:
		mov     al, [esi+14h]
		and     al, 1
		and     eax, 0ffh
		je      ___6c7fah
		test    ebp, ebp
		je      ___6c7fah
		mov     byte [esi+17h], 30h
		mov     al, [esi+15h]
		mov     byte [esi+19h], 0
		mov     [esi+18h], al
___6c7fah:
		mov     ebx, 10h
___6c7ffh:
		mov     edx, edi
		mov     eax, ebp
		call    ultoa
		xor     eax, eax
		mov     al, [esi+15h]
		cmp     eax, byte 58h
		jne     ___6c69ch
		mov     eax, edi
		call    zupstr
		jmp     ___6c69ch
___6c822h:
		cmp     dword [esi+4], byte 0
		jne     ___6c846h
		mov     dl, [esi+14h]
		and     dl, 80h
		and     edx, 0ffh
		je      ___6c83fh
		mov     dword [esi+4], 0dh
		jmp     ___6c846h
___6c83fh:
		mov     dword [esi+4], 8
___6c846h:
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
		je      ___6c891h
		add     ebx, byte 4
		mov     [eax], ebx
		mov     edx, edi
		mov     eax, [ebx-4]
		mov     ebx, 4
		and     eax, 0ffffh
		call    fmt4hex
		mov     ebx, 8
		lea     edx, [edi+5]
		mov     eax, ebp
		mov     byte [edi+4], 3ah
		jmp     ___6c89ah
___6c891h:
		mov     ebx, 8
		mov     edx, edi
		mov     eax, ebp
___6c89ah:
		call    fmt4hex
		xor     eax, eax
		mov     al, [esi+15h]
		cmp     eax, byte 50h
		jne     ___6c6afh
		mov     eax, edi
		call    zupstr
		jmp     ___6c6afh
___6c8b9h:
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
		jmp     ___6c90eh
___6c8e5h:
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
___6c90eh:
		cmp     dword [esp], byte 0
		je      ___6c963h
		xor     edx, edx
		mov     dl, [es:ecx]
		cmp     edx, byte 2dh
		jne     ___6c926h
		inc     ecx
		mov     byte [esi+17h], 2dh
		dec     eax
		jmp     ___6c94ch
___6c926h:
		mov     dl, [esi+14h]
		and     dl, 2
		and     edx, 0ffh
		je      ___6c93ah
		mov     byte [esi+17h], 20h
		jmp     ___6c94ch
___6c93ah:
		mov     dl, [esi+14h]
		and     dl, 4
		and     edx, 0ffh
		je      ___6c950h
		mov     byte [esi+17h], 2bh
___6c94ch:
		mov     byte [esi+18h], 0
___6c950h:
		mov     edx, [esi+8]
		cmp     eax, edx
		jle     ___6c95ch
		mov     [esi+8], eax
		jmp     ___6c963h
___6c95ch:
		mov     ebx, edx
		sub     ebx, eax
		mov     [esi+0ch], ebx
___6c963h:
		xor     edx, edx
		mov     dl, [esi+16h]
		cmp     edx, byte 2ah
		jne     ___6c97ah
		mov     dl, [esi+14h]
		mov     byte [esi+17h], 0
		and     dl, 0f9h
		mov     [esi+14h], dl
___6c97ah:
		mov     ebx, [esi+8]
		cmp     ebx, byte 0ffffffffh
		je      ___6c986h
		cmp     eax, ebx
		jge     ___6c993h
___6c986h:
		xor     edx, edx
		mov     dl, [esi+15h]
		cmp     edx, byte 63h
		je      ___6c993h
		mov     [esi+8], eax
___6c993h:
		mov     ebx, 0ffffffffh
		lea     eax, [esi+17h]
		;mov     edx, ds
		db	8ch,0dah
		call    far_strlen
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
___6c9c3h:
		cmp     byte [edx], 0
		je      ___6c9d6h
		xor     eax, eax
		mov     al, [edx]
		call    toupper
		mov     [edx], al
		inc     edx
		jmp     ___6c9c3h
___6c9d6h:
		pop     edx
		retn

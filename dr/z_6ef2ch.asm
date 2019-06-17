%include "macros.inc"

    extern  __CEXT_F(rand__clib3r)

    extern  ___688d0h
    extern  ___68910h
    extern  ___68990h
    extern  ___68a10h
    extern  ___68a90h
    extern  ___68c40h
    extern  ___68c42h
    extern  ___19a279h
    extern  ___19a281h
    extern  ___19a28ch
    extern  ___19a468h
    extern  ___19a469h
    extern  ___19a46ah
    extern  ___19a46ch
    extern  ___19a470h
    extern  ___19a474h
    extern  ___19a478h
    extern  ___19a47ch
    extern  ___19a480h
    extern  ___19a484h
    extern  ___19a49ch
    extern  ___19a4bah
    extern  ___19a4bch
    extern  ___19a53ch
    extern  ___19a53dh
    extern  ___19a53eh
    extern  ___19a53fh
    extern  ___19a540h
    extern  ___19a542h
    extern  ___19a562h
    extern  ___19a582h
    extern  ___19a592h
    extern  ___19a5a2h
    extern  ___19a5b2h
    extern  ___19a5c2h
    extern  ___19a5d2h
    extern  ___19a5e0h
    extern  ___19a5e2h
    extern  ___19a5e4h
    extern  ___19a5f4h
    extern  ___19a604h
    extern  ___19a624h
    extern  ___19a644h
    extern  ___19a664h
    extern  ___19a674h
    extern  ___19a684h
    extern  ___19a685h
    extern  ___19a686h
    extern  ___24e7a0h
    extern  ___24e7a5h
    extern  ___24e7a6h
    extern  ___24e830h
    extern  ___24e850h
    extern  ___24e854h
    extern  ___24e85ch
    extern  ___24e864h
    extern  ___24e86eh
    extern  ___24e86fh
    extern  ___24e870h
    extern  ___24e871h
    extern  ___24e872h
    extern  ___24e874h
    extern  ___24e878h
    extern  ___24e879h
    extern  ___24e87ah
    extern  ___24e87ch
    extern  ___24e87dh
    extern  ___24e87eh
    extern  ___24e87fh
    extern  ___24e880h
    extern  ___24e8a0h

%include "layout.inc"

section @text

___6edd0h:
dd	___6f6d0h
dd	___6f704h
dd	___6f728h
dd	___6f788h
dd	___6f821h
dd	___6f981h
dd	___6ffe5h
dd	___6fae2h
dd	___6fb15h
dd	___6fb39h
dd	___6fc40h
dd	___6fc64h
dd	___6ffcah
dd	___6ffcah
dd	___6fc88h
dd	___6ffcah
dd	___6fce0h
dd	___6fd04h
dd	___6fd37h
dd	___6ff7dh
dd	___6ffcah
dd	___6ffb0h
___6ee28h:
dd	___6fd52h
dd	___6fd6bh
dd	___6fd84h
dd	___6fdb1h
dd	___6fde3h
dd	___6ff60h
dd	___6ff60h
dd	___6ff60h
dd	___6fe1ah
dd	___6ff60h
dd	___6fe4dh
dd	___6fe66h
dd	___6ff15h
dd	___6ffe5h
dd	___6ff2fh
dd	___6ff42h
___6ee68h:
dd	___7017ah
dd	___70241h
dd	___702d7h
dd	___70356h
dd	___704a8h
dd	___7064bh
dd	___70732h
dd	___7080eh
dd	___70a82h
dd	___71566h
dd	___71566h
dd	___71566h
dd	___71566h
dd	___70d06h
dd	___71040h
dd	___711d1h
dd	___71566h
dd	___713feh
___6eeb0h:
dd	___704cch
dd	___7050bh
dd	___70550h
dd	___705a1h
___6eec0h:
dd	___70832h
dd	___70871h
dd	___708b1h
dd	___70902h
___6eed0h:
dd	___70da0h
dd	___70dd6h
dd	___70e0dh
dd	___70e30h
dd	___70e53h
dd	___70e7ah
dd	___70eaah
dd	___71017h
dd	___70ebch
dd	___70eebh
dd	___70f1bh
dd	___70f4bh
dd	___70f7bh
dd	___70fa8h
dd	___70fe4h
___6ef0ch:
dd	___71063h
dd	___7109eh
dd	___710d3h
dd	___7110dh
___6ef1ch:
dd	___7141eh
dd	___71449h
dd	___7146dh
dd	___714a3h
;; 6ef2ch
__GDECL(__CEXT_F(___6ef2ch__audio))
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ah, [___19a281h]
		test    ah, ah
		jne     ___71588h
		cmp     byte [___19a468h], 0
		je      ___6f02fh
		mov     [___19a469h], ah
		mov     bl, 1
		mov     [___19a53dh], ah
		mov     [___19a53ch], bl
		xor     bh, bh
		mov     [___19a46ah], ah
		mov     [___19a53eh], ah
		mov     [___19a540h], bl
		xor     al, al
		xor     bl, bl
		mov     [___19a53fh], ah
		mov     [___19a684h], ah
		mov     [___19a685h], ah
		mov     [___19a686h], ah
		mov     [___19a5e2h], ax
		mov     [___24e87eh], ah
___6ef9dh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     cl, al
		mov     [eax*2+___19a542h], bx
		mov     [eax*2+___19a562h], bx
		mov     [eax+___19a582h], bl
		mov     [eax+___19a592h], bl
		mov     [eax+___19a5a2h], bl
		mov     [eax+___19a5b2h], bl
		mov     [eax+___19a5c2h], bl
		mov     [eax+___19a5d2h], bl
		mov     [eax+___19a5e4h], bl
		mov     [eax+___19a5f4h], bl
		mov     [eax*2+___19a604h], bx
		mov     [eax*2+___19a624h], bx
		mov     [eax*2+___19a644h], bx
		mov     [eax*2+___24e880h], bx
		mov     [eax+___19a664h], bl
		inc     cl
		mov     [eax+___19a674h], bl
		mov     [___24e87eh], cl
		cmp     cl, 10h
		jne     ___6ef9dh
		call    ___68c42h
		xor     al, al
		mov     [___19a468h], al
___6f02fh:
		mov     edx, [___19a46ch]
		cmp     edx, byte 0ffffffffh
		je      ___6f079h
		mov     eax, edx
		sar     eax, 8
		and     eax, 0ffh
		mov     [___19a469h], al
		mov     al, [___19a46ch]
		mov     [___19a53fh], al
		cmp     al, 3fh
		jbe     ___6f05eh
		mov     byte [___19a53fh], 3fh
___6f05eh:
		xor     bl, bl
		mov     dh, 1
		mov     [___19a53dh], bl
		mov     ebx, 0ffffffffh
		mov     [___19a53ch], dh
		mov     [___19a46ch], ebx
___6f079h:
		cmp     byte [___19a53eh], 0
		jne     ___70119h
		cmp     byte [___24e7a6h], 0
		jne     ___70119h
		mov     ch, 1
		mov     [___24e7a5h], ch
		cmp     ch, [___19a53ch]
		jne     ___6f2b8h
		mov     ecx, 0ffffh
		mov     esi, [___19a28ch]
		xor     ebx, ebx
___6f0b4h:
		cmp     bl, [___19a53dh]
		jne     ___6f1cch
		mov     al, [___19a469h]
		cmp     al, [___24e86eh]
		jae     ___6f0e4h
		xor     eax, eax
		mov     al, [___19a469h]
		mov     edx, [___24e85ch]
		cmp     byte [edx+eax], 0ffh
		jne     ___6f1cch
___6f0e4h:
		mov     [___19a469h], bl
		cmp     ebx, esi
		je      ___6f0f8h
		mov     eax, [___19a279h]
		sar     eax, 18h
		jmp     ___6f0fdh
___6f0f8h:
		mov     eax, 10h
___6f0fdh:
		mov     [___24e87eh], bl
		mov     [___24e872h], al
		cmp     bl, al
		jae     ___6f1b3h
___6f110h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [eax*2+___19a542h], bx
		mov     [eax*2+___19a562h], bx
		mov     [eax+___19a582h], bl
		mov     [eax+___19a592h], bl
		mov     [eax+___19a5a2h], bl
		mov     [eax+___19a5b2h], bl
		mov     [eax+___19a5c2h], bl
		mov     [eax+___19a5d2h], bl
		mov     [eax+___19a5e4h], bl
		mov     [eax+___19a5f4h], bl
		mov     [eax*2+___19a604h], bx
		mov     [eax*2+___19a624h], bx
		mov     [eax*2+___19a644h], bx
		mov     [eax*2+___24e880h], bx
		mov     [eax+___19a664h], bl
		mov     [eax+___19a674h], bl
		mov     [eax*2+___688d0h], cx
		mov     [eax*4+___68910h], ebx
		mov     [eax*4+___68990h], ebx
		mov     [eax*4+___68a10h], ebx
		inc     al
		mov     [___24e87eh], al
		cmp     al, [___24e872h]
		jb      ___6f110h
___6f1b3h:
		mov     [___19a685h], bl
		mov     [___19a686h], bl
		mov     [___19a5e2h], bx
		mov     [___19a684h], bl
___6f1cch:
		cmp     bl, [___19a53dh]
		jne     ___6f1f7h
		xor     eax, eax
		mov     al, [___19a469h]
		mov     edx, [___24e85ch]
		cmp     byte [edx+eax], 0feh
		jne     ___6f20ah
		mov     al, [___19a469h]
		inc     byte [___19a469h]
		jmp     ___6f0b4h
___6f1f7h:
		mov     al, [___19a469h]
		dec     byte [___19a469h]
		xor     bl, bl
		mov     [___19a53dh], bl
___6f20ah:
		mov     al, [___19a469h]
		inc     byte [___19a469h]
		xor     edx, edx
		mov     dl, al
		mov     eax, [___24e85ch]
		mov     al, [edx+eax]
		mov     edx, [___24e854h]
		and     eax, 0ffh
		mov     eax, [edx+eax*4]
		xor     cl, cl
		mov     [___24e8a0h], eax
		mov     [___19a46ah], cl
		mov     al, [___19a53fh]
		mov     [___19a53ch], cl
		test    al, al
		jbe     ___6f2b8h
		mov     ebx, 2
		xor     dh, dh
___6f256h:
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87fh], dl
		mov     [___24e8a0h], eax
		cmp     dh, dl
		je      ___6f29bh
		test    dl, 20h
		je      ___6f27bh
		lea     edi, [eax+ebx]
		mov     [___24e8a0h], edi
___6f27bh:
		test    byte [___24e87fh], 40h
		je      ___6f28ah
		inc     dword [___24e8a0h]
___6f28ah:
		test    byte [___24e87fh], 80h
		je      ___6f256h
		add     [___24e8a0h], ebx
		jmp     ___6f256h
___6f29bh:
		mov     cl, [___19a53fh]
		dec     cl
		mov     [___19a53fh], cl
		mov     al, [___19a46ah]
		inc     byte [___19a46ah]
		cmp     dl, cl
		jb      ___6f256h
___6f2b8h:
		xor     ch, ch
		mov     [___24e87eh], ch
___6f2c0h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     dl, dl
		mov     [eax+___19a592h], dl
		mov     dh, al
		inc     dh
		mov     [___24e87eh], dh
		cmp     dh, 10h
		jne     ___6f2c0h
		mov     esi, 7a12h
___6f2e3h:
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87fh], dl
		mov     [___24e8a0h], eax
		test    dl, dl
		je      ___700ech
		mov     al, dl
		and     al, 1fh
		and     eax, 0ffh
		xor     dh, dh
		xor     ebx, ebx
		mov     [___24e87dh], dh
		mov     al, [eax+___24e830h]
		mov     [___24e87ah], bx
		mov     [___24e87eh], al
		cmp     al, 0ffh
		jne     ___6f359h
		test    dl, 20h
		je      ___6f333h
		add     dword [___24e8a0h], byte 2
___6f333h:
		test    byte [___24e87fh], 40h
		je      ___6f342h
		inc     dword [___24e8a0h]
___6f342h:
		test    byte [___24e87fh], 80h
		je      ___6f352h
		add     dword [___24e8a0h], byte 2
___6f352h:
		xor     al, al
		mov     [___24e87fh], al
___6f359h:
		test    byte [___24e87fh], 20h
		je      ___6f3bbh
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87dh], dl
		mov     [___24e8a0h], eax
		cmp     dl, 0feh
		jne     ___6f38bh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     word [eax*2+___688d0h], 0ffffh
___6f38bh:
		mov     eax, [___24e8a0h]
		xor     dh, dh
		mov     dl, [eax]
		xor     ebx, ebx
		mov     [___24e87ah], dx
		mov     bl, dl
		mov     edx, [___24e7a0h]
		inc     eax
		sar     edx, 10h
		mov     [___24e8a0h], eax
		cmp     ebx, edx
		jle     ___6f3bbh
		xor     edi, edi
		mov     [___24e87ah], di
___6f3bbh:
		test    byte [___24e87fh], 40h
		je      ___6f3d7h
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87ch], dl
		mov     [___24e8a0h], eax
___6f3d7h:
		test    byte [___24e87fh], 80h
		je      ___6f582h
		mov     eax, [___24e8a0h]
		inc     eax
		mov     dl, [eax-1]
		mov     [___24e8a0h], eax
		inc     eax
		mov     [___24e879h], dl
		mov     dl, [eax-1]
		mov     [___24e8a0h], eax
		mov     al, [___24e879h]
		mov     [___24e878h], dl
		cmp     al, 7
		jb      ___6f582h
		jbe     ___6f423h
		cmp     al, 13h
		je      ___6f505h
		jmp     ___6f582h
___6f423h:
		test    dl, dl
		jne     ___6f439h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f439h:
		cmp     byte [___24e87dh], 0
		je      ___6f4dch
		cmp     word [___24e87ah], byte 0
		jne     ___6f481h
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     word [eax*2+___19a542h], byte 0
		jne     ___6f481h
		xor     cl, cl
		mov     al, [___24e87fh]
		mov     [___24e878h], cl
		and     al, 0dfh
		mov     [___24e879h], cl
		mov     [___24e87fh], al
		jmp     ___6f582h
___6f481h:
		mov     al, [___24e87dh]
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [eax*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		sar     eax, cl
		mov     edx, eax
		xor     eax, eax
		xor     bl, bl
		mov     al, [___24e87eh]
		mov     [___24e87dh], bl
		mov     bx, [___24e87ah]
		mov     [eax*2+___19a644h], dx
		test    bx, bx
		jne     ___6f582h
		and     byte [___24e87fh], 0dfh
		jmp     ___6f582h
___6f4dch:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     word [eax*2+___19a644h], byte 0
		jne     ___6f582h
		xor     dl, dl
		mov     [___24e878h], dl
		mov     [___24e879h], dl
		jmp     ___6f582h
___6f505h:
		xor     eax, eax
		mov     al, dl
		sar     eax, 4
		cmp     eax, byte 0dh
		jne     ___6f582h
		xor     eax, eax
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     [eax+___19a5e4h], dl
		test    dl, dl
		setnz   dl
		and     edx, 0ffh
		je      ___6f535h
		mov     byte [eax+___19a5e4h], 0fh
___6f535h:
		xor     ah, ah
		mov     al, [___24e87fh]
		mov     edx, eax
		mov     al, [___24e87ch]
		shl     edx, 8
		add     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [eax*2+___19a604h], dx
		xor     dh, dh
		mov     bx, [___24e87ah]
		mov     dl, [___24e87dh]
		mov     ch, [___24e87fh]
		shl     edx, 8
		and     ch, 9fh
		add     edx, ebx
		mov     [___24e87fh], ch
		mov     [eax*2+___19a624h], dx
___6f582h:
		test    byte [___24e87fh], 20h
		je      ___6f68bh
		mov     cx, [___24e87ah]
		test    cx, cx
		jne     ___6f616h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___19a542h]
		xor     edx, edx
		mov     [___24e87ah], ax
		mov     dx, ax
		mov     eax, [___24e7a0h]
		sar     eax, 10h
		cmp     edx, eax
		jle     ___6f5e5h
		xor     bl, bl
		mov     [___24e87dh], bl
		mov     bh, [___24e87fh]
		and     bh, 0dfh
		mov     [___24e87ah], cx
		mov     [___24e87fh], bh
		jmp     ___6f639h
___6f5e5h:
		mov     dl, [___24e87dh]
		cmp     dl, 0ffh
		je      ___6f5f4h
		test    dl, dl
		jne     ___6f639h
___6f5f4h:
		xor     eax, eax
		mov     edx, [___24e864h]
		mov     ax, [___24e87ah]
		add     eax, edx
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [eax]
		mov     [edx+___19a582h], al
		jmp     ___6f639h
___6f616h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     ebx, [___24e864h]
		mov     dx, cx
		mov     [eax*2+___19a542h], cx
		mov     dl, [edx+ebx]
		mov     [eax+___19a582h], dl
___6f639h:
		mov     cl, [___24e87dh]
		cmp     cl, 0ffh
		je      ___6f68bh
		test    cl, cl
		je      ___6f68bh
		mov     al, cl
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [eax*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		sar     eax, cl
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [eax*2+___19a562h], dx
		mov     dx, [___24e87ah]
		mov     [eax*2+___688d0h], dx
___6f68bh:
		test    byte [___24e87fh], 40h
		je      ___6f6a7h
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e87ch]
		mov     [edx+___19a582h], al
___6f6a7h:
		test    byte [___24e87fh], 80h
		je      ___70004h
		mov     al, [___24e879h]
		dec     al
		cmp     al, 15h
		ja      ___6ffcah
		and     eax, 0ffh
		jmp     dword [cs:eax*4+___6edd0h]
___6f6d0h:
		mov     al, [___24e878h]
		xor     ebx, ebx
		mov     edx, esi
		mov     bl, [___24e86fh]
		mov     [___24e871h], al
		sar     edx, 1fh
		mov     eax, esi
		idiv    ebx
		xor     bh, bh
		mov     [___68c40h], ax
		mov     [___24e879h], bh
		mov     [___24e878h], bh
		jmp     ___6ffe5h
___6f704h:
		mov     al, [___24e878h]
		mov     [___19a469h], al
		mov     byte [___19a53ch], 1
		xor     dh, dh
		mov     [___24e879h], dh
		mov     [___24e878h], dh
		jmp     ___6ffe5h
___6f728h:
		mov     al, [___24e878h]
		mov     bl, 1
		and     al, 0fh
		mov     [___19a53ch], bl
		cmp     al, 9
		jbe     ___6f742h
		add     byte [___24e878h], 6
___6f742h:
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		imul    edx, eax, byte 0ah
		mov     al, [___24e878h]
		and     al, 0fh
		and     eax, 0ffh
		add     eax, edx
		mov     [___24e878h], al
		cmp     al, 3fh
		jbe     ___6f76dh
		mov     byte [___24e878h], 3fh
___6f76dh:
		mov     al, [___24e878h]
		mov     [___19a53fh], al
		xor     al, al
		mov     [___24e879h], al
		mov     [___24e878h], al
		jmp     ___6ffe5h
___6f788h:
		cmp     byte [___24e878h], 0
		jne     ___6f7a3h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f7a3h:
		mov     al, [___24e878h]
		and     al, 0fh
		cmp     al, 0fh
		jne     ___6f7deh
		xor     edx, edx
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a582h]
		add     edx, ebx
		mov     [eax+___19a582h], dl
		cmp     dl, 40h
		jbe     ___6f7deh
		mov     byte [eax+___19a582h], 40h
___6f7deh:
		mov     al, [___24e878h]
		and     al, 0f0h
		cmp     al, 0f0h
		jne     ___6ffe5h
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     ch, [eax+___19a582h]
		sub     ch, dl
		mov     [eax+___19a582h], ch
		cmp     ch, 40h
		jbe     ___6ffe5h
		xor     dh, dh
		mov     [eax+___19a582h], dh
		jmp     ___6ffe5h
___6f821h:
		cmp     byte [___24e878h], 0
		jne     ___6f83ch
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f83ch:
		mov     dl, [___24e878h]
		cmp     dl, 0e0h
		jb      ___6ffe5h
		mov     edi, 7dffh
		and     dl, 0fh
		xor     eax, eax
		xor     ecx, ecx
		xor     ebx, ebx
		mov     al, [___24e87eh]
		mov     bl, dl
		add     eax, eax
		shl     ebx, 2
		mov     cx, [eax+___19a562h]
		sub     edi, ebx
		cmp     ecx, edi
		jg      ___6f96bh
		mov     dh, [___24e878h]
		and     dh, 0f0h
		cmp     dh, 0f0h
		jne     ___6f8dbh
		xor     dh, dh
		mov     edi, ecx
		shl     edx, 2
		add     edi, edx
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax+___19a542h]
		mov     [eax+___19a562h], di
		mov     ecx, [ebx+edx*4]
		xor     ebx, ebx
		mov     bx, di
		xor     eax, eax
		or      ebx, ebx
		je      ___6f8cch
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6f8cch:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___6f8dbh:
		mov     al, [___24e878h]
		and     al, 0f0h
		cmp     al, 0e0h
		jne     ___6f974h
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     bx, [eax*2+___19a562h]
		xor     dh, dh
		add     ebx, edx
		xor     edx, edx
		mov     [eax*2+___19a562h], bx
		mov     ebx, [___24e850h]
		mov     dx, [eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___6f94fh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6f94fh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
		xor     dh, dh
		mov     [___24e879h], dh
		jmp     ___6ffe5h
___6f96bh:
		mov     word [eax+___688d0h], 0ffffh
___6f974h:
		xor     dh, dh
		mov     [___24e879h], dh
		jmp     ___6ffe5h
___6f981h:
		cmp     byte [___24e878h], 0
		jne     ___6f99ch
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f99ch:
		cmp     byte [___24e878h], 0e0h
		jb      ___6ffe5h
		mov     dl, [___24e878h]
		xor     eax, eax
		xor     ecx, ecx
		xor     ebx, ebx
		and     dl, 0fh
		mov     al, [___24e87eh]
		mov     bl, dl
		add     eax, eax
		shl     ebx, 2
		mov     cx, [eax+___19a562h]
		add     ebx, 200h
		cmp     ecx, ebx
		jl      ___6facdh
		mov     dh, [___24e878h]
		and     dh, 0f0h
		cmp     dh, 0f0h
		jne     ___6fa3eh
		xor     dh, dh
		mov     edi, ecx
		shl     edx, 2
		sub     edi, edx
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax+___19a542h]
		mov     [eax+___19a562h], di
		mov     ecx, [ebx+edx*4]
		xor     ebx, ebx
		mov     bx, di
		xor     eax, eax
		or      ebx, ebx
		je      ___6fa2fh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6fa2fh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___6fa3eh:
		mov     al, [___24e878h]
		and     al, 0f0h
		cmp     al, 0e0h
		jne     ___6fad6h
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     bx, [eax*2+___19a562h]
		xor     dh, dh
		sub     ebx, edx
		xor     edx, edx
		mov     [eax*2+___19a562h], bx
		mov     ebx, [___24e850h]
		mov     dx, [eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___6fab2h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6fab2h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
		xor     al, al
		mov     [___24e879h], al
		jmp     ___6ffe5h
___6facdh:
		mov     word [eax+___688d0h], 0ffffh
___6fad6h:
		xor     al, al
		mov     [___24e879h], al
		jmp     ___6ffe5h
___6fae2h:
		cmp     byte [___24e878h], 0
		jne     ___6fafdh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fafdh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e878h]
		mov     [edx+___19a5c2h], al
		jmp     ___6ffe5h
___6fb15h:
		cmp     byte [___24e878h], 0
		jne     ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     ___6ffe5h
___6fb39h:
		cmp     byte [___24e878h], 0
		jne     ___6fb54h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fb54h:
		mov     al, [___24e87dh]
		cmp     al, 0ffh
		je      ___6fb61h
		test    al, al
		jne     ___6fb73h
___6fb61h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5f4h]
		mov     [___24e87dh], al
___6fb73h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     dl, dl
		mov     [eax+___19a5e4h], dl
		mov     dl, [___24e87dh]
		mov     [eax+___19a5f4h], dl
		mov     al, dl
		and     al, 0fh
		xor     edx, edx
		mov     dl, al
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		add     eax, edx
		mov     [___24e87dh], al
		cmp     al, 0ch
		jb      ___6fbb6h
		mov     bl, al
		add     bl, 4
		mov     [___24e87dh], bl
___6fbb6h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a5f4h]
		mov     bh, [___24e87dh]
		and     dl, 0f0h
		add     bh, dl
		xor     dh, dh
		mov     dl, bh
		shl     edx, 8
		mov     [eax*2+___19a604h], dx
		mov     ah, [eax+___19a5f4h]
		and     ah, 0fh
		mov     al, [___24e878h]
		and     al, 0fh
		mov     [___24e87dh], bh
		add     ah, al
		mov     [___24e87dh], ah
		cmp     ah, 0ch
		jb      ___6fc0bh
		mov     ch, ah
		add     ch, 4
		mov     [___24e87dh], ch
___6fc0bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a5f4h]
		and     dl, 0f0h
		add     [___24e87dh], dl
		xor     dh, dh
		mov     bx, [eax*2+___19a604h]
		mov     dl, [___24e87dh]
		add     ebx, edx
		mov     [eax*2+___19a604h], bx
		jmp     ___6ffe5h
___6fc40h:
		cmp     byte [___24e878h], 0
		jne     ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     ___6ffe5h
___6fc64h:
		cmp     byte [___24e878h], 0
		jne     ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     ___6ffe5h
___6fc88h:
		cmp     byte [___24e878h], 0
		jne     ___6fca3h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fca3h:
		xor     eax, eax
		mov     al, [___24e878h]
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		shl     edx, 8
		mov     [eax*4+___68910h], edx
		mov     dx, [eax*2+___19a542h]
		mov     [eax*2+___688d0h], dx
		xor     dh, dh
		mov     [___24e879h], dh
		mov     [___24e878h], dh
		jmp     ___6ffe5h
___6fce0h:
		cmp     byte [___24e878h], 0
		jne     ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     ___6ffe5h
___6fd04h:
		cmp     byte [___24e878h], 0
		jne     ___6fd1fh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fd1fh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e878h]
		mov     [edx+___19a5c2h], al
		jmp     ___6ffe5h
___6fd37h:
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		cmp     eax, byte 0fh
		ja      ___6ff60h
		jmp     dword [cs:eax*4+___6ee28h]
___6fd52h:
		xor     cl, cl
		mov     [___24e878h], cl
		mov     [___24e879h], cl
		inc     dword [___19a470h]
		jmp     ___6ffe5h
___6fd6bh:
		xor     bl, bl
		mov     [___24e878h], bl
		mov     [___24e879h], bl
		inc     dword [___19a474h]
		jmp     ___6ffe5h
___6fd84h:
		mov     al, [___24e878h]
		and     al, 0fh
		xor     dl, dl
		and     eax, 0ffh
		mov     [___24e879h], dl
		mov     ax, [eax*2+___19a49ch]
		mov     [___24e878h], dl
		mov     [___19a5e2h], ax
		jmp     ___6ffe5h
___6fdb1h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dh, [eax+___19a5d2h]
		and     dh, 0fch
		mov     dl, [___24e878h]
		and     dl, 3
		or      dl, dh
		mov     [eax+___19a5d2h], dl
		xor     al, al
		mov     [___24e879h], al
		mov     [___24e878h], al
		jmp     ___6ffe5h
___6fde3h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dh, [eax+___19a5d2h]
		and     dh, 0f3h
		mov     dl, [___24e878h]
		and     dl, 3
		xor     cl, cl
		shl     dl, 2
		mov     [___24e879h], cl
		or      dl, dh
		mov     [___24e878h], cl
		mov     [eax+___19a5d2h], dl
		jmp     ___6ffe5h
___6fe1ah:
		mov     al, [___24e878h]
		and     al, 0fh
		mov     edx, eax
		xor     bl, bl
		and     edx, 0ffh
		xor     eax, eax
		mov     [___24e879h], bl
		mov     al, [___24e87eh]
		shl     edx, 0ch
		mov     [___24e878h], bl
		mov     [eax*4+___68a90h], edx
		jmp     ___6ffe5h
___6fe4dh:
		xor     dl, dl
		mov     [___24e878h], dl
		mov     [___24e879h], dl
		inc     dword [___19a478h]
		jmp     ___6ffe5h
___6fe66h:
		mov     bh, [___24e878h]
		test    bh, 0fh
		jne     ___6ff04h
		mov     cl, [___19a686h]
		test    cl, cl
		jne     ___6fe8eh
		mov     al, [___19a46ah]
		mov     [___19a684h], al
		jmp     ___6ff04h
___6fe8eh:
		jne     ___6fec8h
		mov     al, bh
		and     al, 0fh
		mov     bh, 1
		mov     [___19a685h], al
		mov     [___19a686h], bh
		mov     [___19a53ch], bh
		mov     al, [___19a684h]
		mov     [___19a53dh], bh
		mov     [___19a53fh], al
		xor     al, al
		mov     [___24e878h], al
		mov     [___24e879h], al
		jmp     ___6ffe5h
___6fec8h:
		mov     al, [___19a685h]
		dec     al
		mov     [___19a685h], al
		je      ___6feffh
		mov     al, [___19a684h]
		mov     dh, 1
		mov     [___19a53fh], al
		mov     [___19a53ch], dh
		mov     [___19a53dh], dh
		xor     al, al
		mov     [___24e878h], al
		mov     [___24e879h], al
		jmp     ___6ffe5h
___6feffh:
		mov     [___19a686h], al
___6ff04h:
		xor     al, al
		mov     [___24e878h], al
		mov     [___24e879h], al
		jmp     ___6ffe5h
___6ff15h:
		xor     edx, edx
		mov     al, [___24e878h]
		mov     dl, [___24e87eh]
		and     al, 0fh
		mov     [edx+___19a5e4h], al
		jmp     ___6ffe5h
___6ff2fh:
		mov     al, [___24e878h]
		and     al, 0fh
		inc     al
		mov     [___19a540h], al
		jmp     ___6ffe5h
___6ff42h:
		xor     dh, dh
		mov     eax, [___19a47ch]
		mov     [___24e878h], dh
		inc     eax
		mov     [___24e879h], dh
		mov     [___19a47ch], eax
		jmp     ___6ffe5h
___6ff60h:
		xor     ah, ah
		mov     ebp, [___19a480h]
		mov     [___24e878h], ah
		inc     ebp
		mov     [___24e879h], ah
		mov     [___19a480h], ebp
		jmp     ___6ffe5h
___6ff7dh:
		mov     cl, [___24e878h]
		test    cl, cl
		je      ___6ffa0h
		mov     eax, esi
		xor     ebx, ebx
		mov     edx, esi
		mov     bl, cl
		sar     edx, 1fh
		idiv    ebx
		mov     [___24e86fh], cl
		mov     [___68c40h], ax
___6ffa0h:
		xor     ch, ch
		mov     [___24e878h], ch
		mov     [___24e879h], ch
		jmp     ___6ffe5h
___6ffb0h:
		mov     al, [___24e878h]
		xor     bl, bl
		mov     [___24e870h], al
		mov     [___24e879h], bl
		mov     [___24e878h], bl
		jmp     ___6ffe5h
___6ffcah:
		xor     dl, dl
		mov     edi, [___19a480h]
		mov     [___24e878h], dl
		inc     edi
		mov     [___24e879h], dl
		mov     [___19a480h], edi
___6ffe5h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [___24e879h]
		mov     [eax+___19a592h], dl
		mov     dl, [___24e878h]
		mov     [eax+___19a5a2h], dl
___70004h:
		cmp     byte [___24e87eh], 0ffh
		je      ___6f2e3h
		cmp     word [___19a5e2h], byte 0
		jne     ___7006dh
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___70063h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___70063h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		jmp     ___700bch
___7006dh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ecx, [___19a5e0h]
		xor     ebx, ebx
		mov     ax, [eax*2+___19a562h]
		sar     ecx, 10h
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___700abh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___700abh:
		xor     edx, edx
		xor     edi, edi
		mov     dl, [___24e87eh]
		mov     [___19a5e2h], di
___700bch:
		mov     [edx*4+___68990h], eax
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     ___6f2e3h
___700ech:
		mov     al, [___19a46ah]
		inc     byte [___19a46ah]
		cmp     byte [___19a46ah], 40h
		jb      ___70107h
		mov     byte [___19a53ch], 1
___70107h:
		mov     dl, [___19a540h]
		mov     al, [___24e871h]
		mul     dl
		mov     [___19a53eh], al
___70119h:
		cmp     byte [___19a53eh], 0
		je      ___71588h
		xor     ah, ah
		mov     [___24e87eh], ah
		mov     esi, 0ffffh
___70133h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a592h]
		test    dl, dl
		je      ___71566h
		mov     [___24e879h], dl
		mov     dl, [eax+___19a5a2h]
		mov     [___24e878h], dl
		mov     dl, [___24e879h]
		sub     dl, 4
		cmp     dl, 11h
		ja      ___71566h
		and     edx, 0ffh
		jmp     dword [cs:edx*4+___6ee68h]
___7017ah:
		mov     cl, [___24e878h]
		test    cl, 0fh
		jne     ___701cdh
		mov     ch, [___24e871h]
		cmp     ch, [___19a53eh]
		je      ___701cdh
		xor     ebx, ebx
		xor     edx, edx
		xor     eax, eax
		mov     bl, cl
		mov     dl, [___24e87eh]
		sar     ebx, 4
		mov     al, [edx+___19a582h]
		add     eax, ebx
		mov     [edx+___19a582h], al
		xor     eax, eax
		mov     al, dl
		cmp     byte [eax+___19a582h], 40h
		jbe     ___701cdh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     byte [eax+___19a582h], 40h
___701cdh:
		test    byte [___24e878h], 0f0h
		jne     ___70218h
		mov     bh, [___24e871h]
		cmp     bh, [___19a53eh]
		je      ___70218h
		mov     dl, [___24e878h]
		xor     eax, eax
		xor     ecx, ecx
		mov     al, [___24e87eh]
		and     dl, 0fh
		xor     ebx, ebx
		mov     cl, dl
		mov     bl, [eax+___19a582h]
		cmp     ebx, ecx
		jl      ___70210h
		mov     ch, bl
		sub     ch, dl
		mov     [eax+___19a582h], ch
		jmp     ___70218h
___70210h:
		xor     cl, dl
		mov     [eax+___19a582h], cl
___70218h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     ___71566h
___70241h:
		mov     bh, [___24e878h]
		cmp     bh, 0e0h
		jae     ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___19a562h]
		xor     edx, edx
		mov     dl, bh
		mov     ebx, 7dffh
		shl     edx, 2
		and     eax, 0ffffh
		sub     ebx, edx
		cmp     eax, ebx
		jg      ___702c3h
		xor     dh, dh
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		shl     edx, 2
		add     [eax*2+___19a562h], dx
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___19a542h]
		mov     edx, [___24e850h]
		and     eax, 0ffffh
		mov     ecx, [edx+eax*4]
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     ax, [eax*2+___19a562h]
		jmp     ___71533h
___702c3h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [eax*2+___688d0h], si
		jmp     ___71566h
___702d7h:
		mov     bl, [___24e878h]
		cmp     bl, 0e0h
		jae     ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dx, [eax*2+___19a562h]
		xor     eax, eax
		mov     al, bl
		shl     eax, 2
		add     eax, 200h
		cmp     edx, eax
		jl      ___702c3h
		xor     dh, dh
		xor     eax, eax
		mov     dl, bl
		mov     al, [___24e87eh]
		shl     edx, 2
		sub     [eax*2+___19a562h], dx
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___19a542h]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e850h]
		mov     ecx, [edx+eax]
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     ax, [eax*2+___19a562h]
		jmp     ___71533h
___70356h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		mov     ax, [eax*2+___19a644h]
		cmp     ax, [edx*2+___19a562h]
		je      ___71566h
		xor     edx, edx
		xor     ah, ah
		mov     dl, [___24e87eh]
		mov     al, [___24e878h]
		mov     [edx*2+___24e880h], ax
		xor     eax, eax
		mov     al, dl
		xor     edx, edx
		mov     dl, al
		mov     ax, [eax*2+___19a644h]
		cmp     ax, [edx*2+___19a562h]
		jbe     ___70413h
		xor     eax, eax
		mov     al, dl
		xor     dh, dh
		mov     dl, [___24e878h]
		mov     di, [eax*2+___19a562h]
		shl     edx, 2
		xor     ebx, ebx
		add     edi, edx
		mov     bl, al
		mov     [eax*2+___19a562h], di
		xor     eax, eax
		mov     al, bl
		lea     edx, [eax*2+0]
		mov     ax, [ebx*2+___19a562h]
		cmp     ax, [edx+___19a644h]
		jbe     ___7047fh
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dx, [edx+___19a644h]
		mov     [eax*2+___19a562h], dx
		jmp     ___7047fh
___70413h:
		xor     eax, eax
		mov     al, dl
		xor     edx, edx
		mov     dx, [eax*2+___19a562h]
		xor     eax, eax
		mov     al, [___24e878h]
		shl     eax, 2
		cmp     eax, edx
		jg      ___7044bh
		xor     dh, dh
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		shl     edx, 2
		sub     [eax*2+___19a562h], dx
		jmp     ___7045ch
___7044bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edi, edi
		mov     [eax*2+___19a562h], di
___7045ch:
		xor     eax, eax
		mov     al, [___24e87eh]
		add     eax, eax
		mov     dx, [eax+___19a562h]
		mov     cx, [eax+___19a644h]
		cmp     dx, cx
		jae     ___7047fh
		mov     [eax+___19a562h], cx
___7047fh:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+___19a562h]
		xor     ebx, ebx
		jmp     ___71533h
___704a8h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5d2h]
		and     al, 3
		cmp     al, 3
		ja      ___705d1h
		and     eax, 0ffh
		jmp     dword [cs:eax*4+___6eeb0h]
___704cch:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		mov     edx, [eax*2+___19a4bah]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     ___705cch
___7050bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		mov     ebx, 20h
		and     eax, 0ffh
		sub     ebx, eax
		imul    edx, ebx
		sar     edx, 4
		mov     [___24e874h], edx
		jmp     ___705d1h
___70550h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		cmp     word [eax*2+___19a4bch], byte 0
		jl      ___70586h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		jmp     ___705cch
___70586h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     ___705cch
___705a1h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		call    __CEXT_F(rand__clib3r)
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
___705cch:
		mov     [___24e874h], eax
___705d1h:
		mov     al, [___19a53eh]
		cmp     al, [___24e871h]
		je      ___70612h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     [eax+___19a5b2h], dl
		cmp     dl, 40h
		jb      ___70612h
		mov     dh, dl
		sub     dh, 40h
		mov     [eax+___19a5b2h], dh
___70612h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dx, [eax*2+___19a542h]
		mov     di, [___24e874h]
		lea     ebx, [edx*4+0]
		mov     ax, [eax*2+___19a562h]
		mov     edx, [___24e850h]
		add     eax, edi
		mov     ecx, [edx+ebx]
		xor     ebx, ebx
		jmp     ___71533h
___7064bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a664h]
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		inc     eax
		cmp     edx, eax
		jge     ___706a8h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		xor     ebx, ebx
		mov     bl, [edx+___19a582h]
		xor     edx, edx
		mov     dl, [___24e870h]
		imul    ebx, edx
		mov     ch, [eax+___19a664h]
		xor     edx, edx
		inc     ch
		mov     dl, al
		shl     ebx, 4
		mov     [eax+___19a664h], ch
		mov     [edx*4+___68a10h], ebx
		jmp     ___71566h
___706a8h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a674h]
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		inc     eax
		cmp     edx, eax
		jge     ___71566h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		xor     edi, edi
		mov     bl, [eax+___19a674h]
		mov     [edx*4+___68a10h], edi
		xor     edx, edx
		inc     bl
		mov     dl, al
		mov     [eax+___19a674h], bl
		mov     dl, [edx+___19a674h]
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		and     edx, 0ffh
		inc     eax
		cmp     edx, eax
		jl      ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     bh, bh
		mov     [eax+___19a664h], bh
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     cl, cl
		mov     [eax+___19a674h], cl
		jmp     ___71566h
___70732h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5e4h]
		cmp     al, 1
		jb      ___7074eh
		jbe     ___70774h
		cmp     al, 2
		je      ___707a0h
		jmp     ___707c2h
___7074eh:
		test    al, al
		jne     ___707c2h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5f4h]
		mov     [___24e87dh], al
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     byte [eax+___19a5e4h], 1
		jmp     ___707c2h
___70774h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___19a604h]
		and     eax, 0ffffh
		sar     eax, 8
		mov     [___24e87dh], al
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     byte [eax+___19a5e4h], 2
		jmp     ___707c2h
___707a0h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax*2+___19a604h]
		mov     [___24e87dh], al
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     cl, cl
		mov     [eax+___19a5e4h], cl
___707c2h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___19a542h]
		mov     edx, [___24e850h]
		and     eax, 0ffffh
		mov     edx, [edx+eax*4]
		mov     al, [___24e87dh]
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [eax*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		xor     ebx, ebx
		sar     eax, cl
		mov     ecx, edx
		jmp     ___71533h
___7080eh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5d2h]
		and     al, 3
		cmp     al, 3
		ja      ___70932h
		and     eax, 0ffh
		jmp     dword [cs:eax*4+___6eec0h]
___70832h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		mov     edx, [eax*2+___19a4bah]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     ___7092dh
___70871h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		xor     eax, eax
		mov     al, [___24e87eh]
		shl     edx, 2
		mov     al, [eax+___19a5b2h]
		mov     ebx, 20h
		and     eax, 0ffh
		sub     ebx, eax
		imul    edx, ebx
		sar     edx, 4
		mov     [___24e874h], edx
		jmp     ___70932h
___708b1h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		cmp     word [eax*2+___19a4bch], byte 0
		jl      ___708e7h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		jmp     ___7092dh
___708e7h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     ___7092dh
___70902h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		call    __CEXT_F(rand__clib3r)
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
___7092dh:
		mov     [___24e874h], eax
___70932h:
		mov     dh, [___24e871h]
		cmp     dh, [___19a53eh]
		je      ___70974h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     [eax+___19a5b2h], dl
		cmp     dl, 40h
		jb      ___70974h
		mov     bh, dl
		sub     bh, 40h
		mov     [eax+___19a5b2h], bh
___70974h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+___19a562h]
		add     ax, [___24e874h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___709c3h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___709c3h:
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     cl, [___24e878h]
		mov     [eax*4+___68990h], edx
		test    cl, cl
		je      ___70a59h
		test    cl, 0fh
		jne     ___70a19h
		mov     dl, [___19a53eh]
		cmp     dl, [___24e871h]
		je      ___70a19h
		xor     edx, edx
		mov     dl, cl
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a582h]
		add     edx, ebx
		mov     [eax+___19a582h], dl
		cmp     dl, 40h
		jbe     ___70a19h
		mov     byte [eax+___19a582h], 40h
___70a19h:
		mov     cl, [___24e878h]
		test    cl, 0f0h
		jne     ___70a59h
		mov     ch, [___24e871h]
		cmp     ch, [___19a53eh]
		je      ___70a59h
		xor     eax, eax
		mov     dl, cl
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     dh, [eax+___19a582h]
		sub     dh, dl
		mov     [eax+___19a582h], dh
		cmp     dh, 40h
		jbe     ___70a59h
		xor     bh, bh
		mov     [eax+___19a582h], bh
___70a59h:
		xor     eax, eax
		xor     ebx, ebx
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     bl, [___24e870h]
		mov     dl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     ___71566h
___70a82h:
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [eax*2+0]
		mov     ax, [ebx+___19a644h]
		cmp     ax, [edx+___19a562h]
		je      ___70c51h
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [eax*2+0]
		mov     ax, [ebx+___19a644h]
		cmp     ax, [edx+___19a562h]
		jbe     ___70b69h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		mov     dx, [edx*2+___24e880h]
		mov     cx, [eax*2+___19a562h]
		shl     edx, 2
		add     ecx, edx
		mov     [eax*2+___19a562h], cx
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [eax*2+0]
		mov     ax, [ebx+___19a562h]
		cmp     ax, [edx+___19a644h]
		jbe     ___70bfah
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [eax*2+0]
		mov     ax, [edx+___19a644h]
		mov     [ebx+___19a562h], ax
		jmp     ___70bfah
___70b69h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___24e880h]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [eax*2+___19a562h]
		and     eax, 0ffffh
		cmp     edx, eax
		jg      ___70bc6h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		mov     dx, [edx*2+___24e880h]
		mov     di, [eax*2+___19a562h]
		shl     edx, 2
		sub     edi, edx
		mov     [eax*2+___19a562h], di
		jmp     ___70bd7h
___70bc6h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ecx, ecx
		mov     [eax*2+___19a562h], cx
___70bd7h:
		xor     eax, eax
		mov     al, [___24e87eh]
		add     eax, eax
		mov     dx, [eax+___19a562h]
		mov     bx, [eax+___19a644h]
		cmp     dx, bx
		jae     ___70bfah
		mov     [eax+___19a562h], bx
___70bfah:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___70c42h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___70c42h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___70c51h:
		mov     ch, [___24e878h]
		test    ch, ch
		je      ___70cddh
		test    ch, 0fh
		jne     ___70c9dh
		mov     al, [___19a53eh]
		cmp     al, [___24e871h]
		je      ___70c9dh
		xor     edx, edx
		xor     eax, eax
		mov     dl, ch
		mov     al, [___24e87eh]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a582h]
		add     edx, ebx
		mov     [eax+___19a582h], dl
		cmp     dl, 40h
		jbe     ___70c9dh
		mov     byte [eax+___19a582h], 40h
___70c9dh:
		mov     bl, [___24e878h]
		test    bl, 0f0h
		jne     ___70cddh
		mov     bh, [___24e871h]
		cmp     bh, [___19a53eh]
		je      ___70cddh
		xor     eax, eax
		mov     dl, bl
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     cl, [eax+___19a582h]
		sub     cl, dl
		mov     [eax+___19a582h], cl
		cmp     cl, 40h
		jbe     ___70cddh
		xor     dl, dl
		mov     [eax+___19a582h], dl
___70cddh:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     ___71566h
___70d06h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___19a540h]
		mov     dl, [___24e871h]
		imul    edx, eax
		xor     eax, eax
		mov     al, [___19a53eh]
		sub     edx, eax
		mov     al, [___24e878h]
		xor     ebx, ebx
		and     al, 0fh
		mov     bl, al
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     ___71566h
		xor     eax, eax
		mov     dl, [___24e871h]
		mov     al, [___19a540h]
		imul    edx, eax
		xor     eax, eax
		mov     al, [___19a53eh]
		cmp     edx, eax
		je      ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [eax*2+0]
		mov     ax, [edx+___19a542h]
		mov     [ebx+___688d0h], ax
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		dec     eax
		cmp     eax, byte 0eh
		ja      ___71017h
		jmp     dword [cs:eax*4+___6eed0h]
___70da0h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 1
		jb      ___70dc2h
		xor     eax, eax
		mov     al, [___24e87eh]
		dec     byte [eax+___19a582h]
		jmp     ___71017h
___70dc2h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     bh, bh
		mov     [eax+___19a582h], bh
		jmp     ___71017h
___70dd6h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 2
		jb      ___70df9h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 2
		jmp     ___71017h
___70df9h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     dl, dl
		mov     [eax+___19a582h], dl
		jmp     ___71017h
___70e0dh:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 4
		jb      ___70dc2h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 4
		jmp     ___71017h
___70e30h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 8
		jb      ___70df9h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 8
		jmp     ___71017h
___70e53h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 10h
		jb      ___70dc2h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 10h
		jmp     ___71017h
___70e7ah:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a582h]
		add     edx, edx
		mov     ebx, 3
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx+___19a582h], al
		jmp     ___71017h
___70eaah:
		xor     eax, eax
		mov     al, [___24e87eh]
		shr     byte [eax+___19a582h], 1
		jmp     ___71017h
___70ebch:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ch, [eax+___19a582h]
		xor     edx, edx
		inc     ch
		mov     dl, al
		mov     [eax+___19a582h], ch
		cmp     byte [edx+___19a582h], 40h
		jbe     ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     ___71010h
___70eebh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     bl, [eax+___19a582h]
		xor     edx, edx
		add     bl, 2
		mov     dl, al
		mov     [eax+___19a582h], bl
		cmp     byte [edx+___19a582h], 40h
		jbe     ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     ___71010h
___70f1bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ch, [eax+___19a582h]
		xor     edx, edx
		add     ch, 4
		mov     dl, al
		mov     [eax+___19a582h], ch
		cmp     byte [edx+___19a582h], 40h
		jbe     ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     ___71010h
___70f4bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     bl, [eax+___19a582h]
		xor     edx, edx
		add     bl, 8
		mov     dl, al
		mov     [eax+___19a582h], bl
		cmp     byte [edx+___19a582h], 40h
		jbe     ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     ___71010h
___70f7bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ch, [eax+___19a582h]
		xor     edx, edx
		add     ch, 10h
		mov     dl, al
		mov     [eax+___19a582h], ch
		cmp     byte [edx+___19a582h], 40h
		jbe     ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     ___71010h
___70fa8h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a582h]
		lea     edx, [edx+edx*2]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     dl, al
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [eax+___19a582h], dl
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 40h
		jbe     ___71017h
		jmp     ___71009h
___70fe4h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a582h]
		add     dl, dl
		mov     [eax+___19a582h], dl
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 40h
		jbe     ___71017h
___71009h:
		xor     eax, eax
		mov     al, [___24e87eh]
___71010h:
		mov     byte [eax+___19a582h], 40h
___71017h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     ___71566h
___71040h:
		mov     dl, [eax+___19a5d2h]
		and     dl, 0ch
		and     edx, 0ffh
		sar     edx, 2
		cmp     edx, byte 3
		ja      ___7112eh
		jmp     dword [cs:edx*4+___6ef0ch]
___71063h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		mov     edx, [eax*2+___19a4bah]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 8
		jmp     ___71129h
___7109eh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		mov     edx, 20h
		and     eax, 0ffh
		sub     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 6
		jmp     ___71129h
___710d3h:
		xor     edx, edx
		mov     dl, [eax+___19a5b2h]
		cmp     word [edx*2+___19a4bch], byte 0
		jl      ___710fch
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		jmp     ___71129h
___710fch:
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		neg     eax
		jmp     ___71129h
___7110dh:
		mov     al, [eax+___19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		call    __CEXT_F(rand__clib3r)
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0dh
___71129h:
		mov     [___24e874h], eax
___7112eh:
		mov     cl, [___24e871h]
		cmp     cl, [___19a53eh]
		je      ___7116bh
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     ch, dl
		mov     [eax+___19a5b2h], dl
		and     ch, 3fh
		mov     [eax+___19a5b2h], ch
___7116bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a582h]
		mov     edi, [___24e874h]
		and     eax, 0ffh
		add     edi, eax
		mov     [___24e874h], edi
		test    edi, edi
		jge     ___71196h
		xor     eax, eax
		mov     [___24e874h], eax
___71196h:
		cmp     dword [___24e874h], byte 40h
		jle     ___711a9h
		mov     dword [___24e874h], 40h
___711a9h:
		xor     eax, eax
		mov     al, [___24e870h]
		mov     ecx, [___24e874h]
		mov     edx, eax
		imul    edx, ecx
		xor     eax, eax
		mov     al, [___24e87eh]
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     ___71566h
___711d1h:
		xor     edx, edx
		mov     dl, [___24e878h]
		sar     edx, 4
		cmp     edx, byte 0ch
		jb      ___71566h
		lea     ecx, [eax*2+0]
		jbe     ___711f8h
		cmp     edx, byte 0dh
		je      ___71229h
		jmp     ___71566h
___711f8h:
		mov     dl, [eax+___19a5e4h]
		test    dl, dl
		je      ___71211h
		mov     bh, dl
		dec     bh
		mov     [eax+___19a5e4h], bh
		jmp     ___71566h
___71211h:
		mov     [eax+___19a592h], dl
		mov     [eax+___19a5a2h], dl
		mov     [ecx+___688d0h], si
		jmp     ___71566h
___71229h:
		mov     dl, [eax+___19a5e4h]
		test    dl, dl
		je      ___71242h
		mov     cl, dl
		dec     cl
		mov     [eax+___19a5e4h], cl
		jmp     ___71566h
___71242h:
		xor     edx, edx
		mov     dx, [ecx+___19a604h]
		sar     edx, 8
		mov     [___24e87fh], dl
		mov     dl, [ecx+___19a604h]
		mov     [___24e87ch], dl
		xor     edx, edx
		mov     dx, [ecx+___19a624h]
		sar     edx, 8
		mov     [___24e87dh], dl
		mov     dx, [ecx+___19a624h]
		xor     dh, dh
		mov     [___24e87ah], dx
		test    byte [___24e87fh], 20h
		je      ___7135ah
		mov     dx, [___24e87ah]
		test    dx, dx
		jne     ___712e8h
		mov     ax, [ecx+___19a542h]
		mov     [___24e87ah], ax
		test    ax, ax
		jne     ___712b7h
		xor     cl, cl
		mov     [___24e87dh], cl
		jmp     ___71307h
___712b7h:
		mov     bl, [___24e87dh]
		cmp     bl, 0ffh
		je      ___712c6h
		test    bl, bl
		jne     ___71307h
___712c6h:
		xor     eax, eax
		mov     edx, [___24e864h]
		mov     ax, [___24e87ah]
		add     eax, edx
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [eax]
		mov     [edx+___19a582h], al
		jmp     ___71307h
___712e8h:
		mov     [ecx+___19a542h], dx
		xor     edx, edx
		mov     ebx, [___24e864h]
		mov     dx, [___24e87ah]
		mov     dl, [edx+ebx]
		mov     [eax+___19a582h], dl
___71307h:
		xor     eax, eax
		mov     al, [___24e87eh]
		add     eax, eax
		mov     dx, [___24e87ah]
		mov     ch, [___24e87dh]
		mov     [eax+___688d0h], dx
		cmp     ch, 0ffh
		je      ___7135ah
		test    ch, ch
		je      ___7135ah
		mov     dl, ch
		and     dl, 0fh
		and     edx, 0ffh
		mov     dx, [edx*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     edx, 0ffffh
		sar     ecx, 4
		sar     edx, cl
		mov     [eax+___19a562h], dx
___7135ah:
		test    byte [___24e87fh], 40h
		je      ___71376h
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e87ch]
		mov     [edx+___19a582h], al
___71376h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___713beh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___713beh:
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     [eax*4+___68990h], edx
		xor     edx, edx
		mov     bl, [eax+___19a582h]
		mov     dl, [___24e870h]
		imul    edx, ebx
		shl     edx, 4
		xor     bl, bl
		mov     [eax*4+___68a10h], edx
		mov     [eax+___19a592h], bl
		mov     [eax+___19a5a2h], bl
		jmp     ___71566h
___713feh:
		mov     dl, [eax+___19a5d2h]
		and     dl, 3
		cmp     dl, 3
		ja      ___714c4h
		and     edx, 0ffh
		jmp     dword [cs:edx*4+___6ef1ch]
___7141eh:
		xor     edx, edx
		mov     dl, [eax+___19a5b2h]
		mov     edx, [edx*2+___19a4bah]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     ___714bfh
___71449h:
		xor     edx, edx
		mov     ebx, 20h
		mov     dl, [eax+___19a5b2h]
		mov     al, [eax+___19a5c2h]
		sub     ebx, edx
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, ebx
		sar     eax, 4
		jmp     ___714bfh
___7146dh:
		xor     edx, edx
		mov     dl, [eax+___19a5b2h]
		cmp     word [edx*2+___19a4bch], byte 0
		jl      ___7148fh
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		jmp     ___714bfh
___7148fh:
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     ___714bfh
___714a3h:
		mov     al, [eax+___19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		call    __CEXT_F(rand__clib3r)
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
___714bfh:
		mov     [___24e874h], eax
___714c4h:
		mov     dh, [___24e871h]
		cmp     dh, [___19a53eh]
		je      ___71506h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     [eax+___19a5b2h], dl
		cmp     dl, 40h
		jb      ___71506h
		mov     bh, dl
		sub     bh, 40h
		mov     [eax+___19a5b2h], bh
___71506h:
		xor     eax, eax
		mov     ecx, [___24e850h]
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     di, [___24e874h]
		mov     dx, [eax*2+___19a542h]
		mov     ax, [eax*2+___19a562h]
		xor     ebx, ebx
		add     eax, edi
		mov     ecx, [ecx+edx*4]
___71533h:
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      ___71557h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___71557h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___71566h:
		mov     al, [___24e87eh]
		inc     al
		mov     [___24e87eh], al
		cmp     al, 10h
		jne     ___70133h
		mov     dl, 1
		mov     [___19a540h], dl
		sub     [___19a53eh], dl
___71588h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

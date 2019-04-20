cpu 386

    extern  dr@24e870h
    extern  dr@68a10h
    extern  dr@19a540h
    extern  dr@24e871h
    extern  dr@24e87eh
    extern  dr@19a582h
    extern  rand
    extern  dr@24e874h
    extern  dr@24e878h
    extern  dr@19a5e4h
    extern  dr@24e87ah
    extern  dr@19a484h
    extern  dr@19a562h
    extern  dr@19a5b2h
    extern  dr@19a5c2h
    extern  dr@68990h
    extern  dr@19a53eh
    extern  dr@19a664h
    extern  dr@19a674h
    extern  dr@19a5f4h
    extern  dr@24e87dh
    extern  dr@19a604h
    extern  dr@19a644h
    extern  dr@19a4bch
    extern  dr@19a624h
    extern  dr@24e87fh
    extern  dr@19a542h
    extern  dr@19a281h
    extern  dr@19a468h
    extern  dr@19a53ch
    extern  dr@19a46ah
    extern  dr@19a684h
    extern  dr@19a685h
    extern  dr@19a686h
    extern  dr@19a469h
    extern  dr@19a53fh
    extern  dr@24e8a0h
    extern  dr@24e7a0h
    extern  dr@24e879h
    extern  dr@19a5a2h
    extern  dr@19a474h
    extern  dr@68a90h
    extern  dr@19a53dh
    extern  dr@19a5e2h
    extern  dr@24e880h
    extern  dr@24e864h
    extern  dr@24e850h
    extern  dr@68c42h
    extern  dr@24e86eh
    extern  dr@19a480h
    extern  dr@19a5e0h
    extern  dr@688d0h
    extern  dr@24e87ch
    extern  dr@19a592h
    extern  dr@19a5d2h
    extern  dr@19a4bah
    extern  dr@19a46ch
    extern  dr@24e7a6h
    extern  dr@24e7a5h
    extern  dr@19a28ch
    extern  dr@24e85ch
    extern  dr@19a279h
    extern  dr@24e872h
    extern  dr@24e854h
    extern  dr@24e830h
    extern  dr@24e86fh
    extern  dr@68910h
    extern  dr@19a470h
    extern  dr@19a49ch
    extern  dr@19a478h
    extern  dr@19a47ch
    extern  dr@68c40h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE
dr@6edd0h:
dd	dr@6f6d0h
dd	dr@6f704h
dd	dr@6f728h
dd	dr@6f788h
dd	dr@6f821h
dd	dr@6f981h
dd	dr@6ffe5h
dd	dr@6fae2h
dd	dr@6fb15h
dd	dr@6fb39h
dd	dr@6fc40h
dd	dr@6fc64h
dd	dr@6ffcah
dd	dr@6ffcah
dd	dr@6fc88h
dd	dr@6ffcah
dd	dr@6fce0h
dd	dr@6fd04h
dd	dr@6fd37h
dd	dr@6ff7dh
dd	dr@6ffcah
dd	dr@6ffb0h
dr@6ee28h:
dd	dr@6fd52h
dd	dr@6fd6bh
dd	dr@6fd84h
dd	dr@6fdb1h
dd	dr@6fde3h
dd	dr@6ff60h
dd	dr@6ff60h
dd	dr@6ff60h
dd	dr@6fe1ah
dd	dr@6ff60h
dd	dr@6fe4dh
dd	dr@6fe66h
dd	dr@6ff15h
dd	dr@6ffe5h
dd	dr@6ff2fh
dd	dr@6ff42h
dr@6ee68h:
dd	dr@7017ah
dd	dr@70241h
dd	dr@702d7h
dd	dr@70356h
dd	dr@704a8h
dd	dr@7064bh
dd	dr@70732h
dd	dr@7080eh
dd	dr@70a82h
dd	dr@71566h
dd	dr@71566h
dd	dr@71566h
dd	dr@71566h
dd	dr@70d06h
dd	dr@71040h
dd	dr@711d1h
dd	dr@71566h
dd	dr@713feh
dr@6eeb0h:
dd	dr@704cch
dd	dr@7050bh
dd	dr@70550h
dd	dr@705a1h
dr@6eec0h:
dd	dr@70832h
dd	dr@70871h
dd	dr@708b1h
dd	dr@70902h
dr@6eed0h:
dd	dr@70da0h
dd	dr@70dd6h
dd	dr@70e0dh
dd	dr@70e30h
dd	dr@70e53h
dd	dr@70e7ah
dd	dr@70eaah
dd	dr@71017h
dd	dr@70ebch
dd	dr@70eebh
dd	dr@70f1bh
dd	dr@70f4bh
dd	dr@70f7bh
dd	dr@70fa8h
dd	dr@70fe4h
dr@6ef0ch:
dd	dr@71063h
dd	dr@7109eh
dd	dr@710d3h
dd	dr@7110dh
dr@6ef1ch:
dd	dr@7141eh
dd	dr@71449h
dd	dr@7146dh
dd	dr@714a3h

global dr@6ef2ch
dr@6ef2ch:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ah, [dr@19a281h]
		test    ah, ah
		jne     dr@71588h
		cmp     byte [dr@19a468h], 0
		je      dr@6f02fh
		mov     [dr@19a469h], ah
		mov     bl, 1
		mov     [dr@19a53dh], ah
		mov     [dr@19a53ch], bl
		xor     bh, bh
		mov     [dr@19a46ah], ah
		mov     [dr@19a53eh], ah
		mov     [dr@19a540h], bl
		xor     al, al
		xor     bl, bl
		mov     [dr@19a53fh], ah
		mov     [dr@19a684h], ah
		mov     [dr@19a685h], ah
		mov     [dr@19a686h], ah
		mov     [dr@19a5e2h], ax
		mov     [dr@24e87eh], ah
dr@6ef9dh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     cl, al
		mov     [eax*2+dr@19a542h], bx
		mov     [eax*2+dr@19a562h], bx
		mov     [eax+dr@19a582h], bl
		mov     [eax+dr@19a592h], bl
		mov     [eax+dr@19a5a2h], bl
		mov     [eax+dr@19a5b2h], bl
		mov     [eax+dr@19a5c2h], bl
		mov     [eax+dr@19a5d2h], bl
		mov     [eax+dr@19a5e4h], bl
		mov     [eax+dr@19a5f4h], bl
		mov     [eax*2+dr@19a604h], bx
		mov     [eax*2+dr@19a624h], bx
		mov     [eax*2+dr@19a644h], bx
		mov     [eax*2+dr@24e880h], bx
		mov     [eax+dr@19a664h], bl
		inc     cl
		mov     [eax+dr@19a674h], bl
		mov     [dr@24e87eh], cl
		cmp     cl, 10h
		jne     dr@6ef9dh
		call    dr@68c42h
		xor     al, al
		mov     [dr@19a468h], al
dr@6f02fh:
		mov     edx, [dr@19a46ch]
		cmp     edx, byte 0ffffffffh
		je      dr@6f079h
		mov     eax, edx
		sar     eax, 8
		and     eax, 0ffh
		mov     [dr@19a469h], al
		mov     al, [dr@19a46ch]
		mov     [dr@19a53fh], al
		cmp     al, 3fh
		jbe     dr@6f05eh
		mov     byte [dr@19a53fh], 3fh
dr@6f05eh:
		xor     bl, bl
		mov     dh, 1
		mov     [dr@19a53dh], bl
		mov     ebx, 0ffffffffh
		mov     [dr@19a53ch], dh
		mov     [dr@19a46ch], ebx
dr@6f079h:
		cmp     byte [dr@19a53eh], 0
;30:0006f080
		jne     dr@70119h
		cmp     byte [dr@24e7a6h], 0
		jne     dr@70119h
		mov     ch, 1
		mov     [dr@24e7a5h], ch
		cmp     ch, [dr@19a53ch]
		jne     dr@6f2b8h
		mov     ecx, 0ffffh
		mov     esi, [dr@19a28ch]
		xor     ebx, ebx
dr@6f0b4h:
		cmp     bl, [dr@19a53dh]
		jne     dr@6f1cch
		mov     al, [dr@19a469h]
		cmp     al, [dr@24e86eh]
		jae     dr@6f0e4h
		xor     eax, eax
		mov     al, [dr@19a469h]
		mov     edx, [dr@24e85ch]
		cmp     byte [edx+eax*1], 0ffh
		jne     dr@6f1cch
dr@6f0e4h:
		mov     [dr@19a469h], bl
		cmp     ebx, esi
		je      dr@6f0f8h
		mov     eax, [dr@19a279h]
		sar     eax, 18h
		jmp     dr@6f0fdh
dr@6f0f8h:
		mov     eax, 10h
dr@6f0fdh:
		mov     [dr@24e87eh], bl
		mov     [dr@24e872h], al
		cmp     bl, al
		jae     dr@6f1b3h
dr@6f110h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     [eax*2+dr@19a542h], bx
		mov     [eax*2+dr@19a562h], bx
		mov     [eax+dr@19a582h], bl
		mov     [eax+dr@19a592h], bl
		mov     [eax+dr@19a5a2h], bl
		mov     [eax+dr@19a5b2h], bl
		mov     [eax+dr@19a5c2h], bl
		mov     [eax+dr@19a5d2h], bl
		mov     [eax+dr@19a5e4h], bl
		mov     [eax+dr@19a5f4h], bl
		mov     [eax*2+dr@19a604h], bx
		mov     [eax*2+dr@19a624h], bx
		mov     [eax*2+dr@19a644h], bx
		mov     [eax*2+dr@24e880h], bx
		mov     [eax+dr@19a664h], bl
		mov     [eax+dr@19a674h], bl
		mov     [eax*2+dr@688d0h], cx
		mov     [eax*4+dr@68910h], ebx
		mov     [eax*4+dr@68990h], ebx
		mov     [eax*4+dr@68a10h], ebx
		inc     al
		mov     [dr@24e87eh], al
		cmp     al, [dr@24e872h]
		jb      dr@6f110h
dr@6f1b3h:
		mov     [dr@19a685h], bl
		mov     [dr@19a686h], bl
		mov     [dr@19a5e2h], bx
		mov     [dr@19a684h], bl
dr@6f1cch:
		cmp     bl, [dr@19a53dh]
		jne     dr@6f1f7h
		xor     eax, eax
		mov     al, [dr@19a469h]
		mov     edx, [dr@24e85ch]
		cmp     byte [edx+eax*1], 0feh
		jne     dr@6f20ah
		mov     al, [dr@19a469h]
		inc     byte [dr@19a469h]
		jmp     dr@6f0b4h
dr@6f1f7h:
		mov     al, [dr@19a469h]
		dec     byte [dr@19a469h]
		xor     bl, bl
		mov     [dr@19a53dh], bl
dr@6f20ah:
		mov     al, [dr@19a469h]
		inc     byte [dr@19a469h]
		xor     edx, edx
		mov     dl, al
		mov     eax, [dr@24e85ch]
		mov     al, [edx+eax*1]
		mov     edx, [dr@24e854h]
		and     eax, 0ffh
		mov     eax, [edx+eax*4]
		xor     cl, cl
		mov     [dr@24e8a0h], eax
		mov     [dr@19a46ah], cl
		mov     al, [dr@19a53fh]
		mov     [dr@19a53ch], cl
		test    al, al
		jbe     dr@6f2b8h
		mov     ebx, 2
		xor     dh, dh
dr@6f256h:
		mov     eax, [dr@24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [dr@24e87fh], dl
		mov     [dr@24e8a0h], eax
		cmp     dh, dl
		je      dr@6f29bh
		test    dl, 20h
		je      dr@6f27bh
		lea     edi, [eax+ebx*1]
		mov     [dr@24e8a0h], edi
dr@6f27bh:
		test    byte [dr@24e87fh], 40h
		je      dr@6f28ah
		inc     dword [dr@24e8a0h]
dr@6f28ah:
		test    byte [dr@24e87fh], 80h
		je      dr@6f256h
		add     [dr@24e8a0h], ebx
		jmp     dr@6f256h
dr@6f29bh:
		mov     cl, [dr@19a53fh]
		dec     cl
		mov     [dr@19a53fh], cl
		mov     al, [dr@19a46ah]
		inc     byte [dr@19a46ah]
		cmp     dl, cl
		jb      dr@6f256h
dr@6f2b8h:
		xor     ch, ch
		mov     [dr@24e87eh], ch
dr@6f2c0h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     dl, dl
		mov     [eax+dr@19a592h], dl
		mov     dh, al
		inc     dh
		mov     [dr@24e87eh], dh
		cmp     dh, 10h
		jne     dr@6f2c0h
		mov     esi, 7a12h
dr@6f2e3h:
		mov     eax, [dr@24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [dr@24e87fh], dl
		mov     [dr@24e8a0h], eax
		test    dl, dl
		je      dr@700ech
		mov     al, dl
;30:0006f300
		and     al, 1fh
		and     eax, 0ffh
		xor     dh, dh
		xor     ebx, ebx
		mov     [dr@24e87dh], dh
		mov     al, [eax+dr@24e830h]
		mov     [dr@24e87ah], bx
		mov     [dr@24e87eh], al
		cmp     al, 0ffh
		jne     dr@6f359h
		test    dl, 20h
		je      dr@6f333h
		add     dword [dr@24e8a0h], byte 2
dr@6f333h:
		test    byte [dr@24e87fh], 40h
		je      dr@6f342h
		inc     dword [dr@24e8a0h]
dr@6f342h:
		test    byte [dr@24e87fh], 80h
		je      dr@6f352h
		add     dword [dr@24e8a0h], byte 2
dr@6f352h:
		xor     al, al
		mov     [dr@24e87fh], al
dr@6f359h:
		test    byte [dr@24e87fh], 20h
		je      dr@6f3bbh
		mov     eax, [dr@24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [dr@24e87dh], dl
		mov     [dr@24e8a0h], eax
		cmp     dl, 0feh
		jne     dr@6f38bh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     word [eax*2+dr@688d0h], 0ffffh
dr@6f38bh:
		mov     eax, [dr@24e8a0h]
		xor     dh, dh
		mov     dl, [eax]
		xor     ebx, ebx
		mov     [dr@24e87ah], dx
		mov     bl, dl
		mov     edx, [dr@24e7a0h]
		inc     eax
		sar     edx, 10h
		mov     [dr@24e8a0h], eax
		cmp     ebx, edx
		jle     dr@6f3bbh
		xor     edi, edi
		mov     [dr@24e87ah], di
dr@6f3bbh:
		test    byte [dr@24e87fh], 40h
		je      dr@6f3d7h
		mov     eax, [dr@24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [dr@24e87ch], dl
		mov     [dr@24e8a0h], eax
dr@6f3d7h:
		test    byte [dr@24e87fh], 80h
		je      dr@6f582h
		mov     eax, [dr@24e8a0h]
		inc     eax
		mov     dl, [eax-1]
		mov     [dr@24e8a0h], eax
		inc     eax
		mov     [dr@24e879h], dl
		mov     dl, [eax-1]
		mov     [dr@24e8a0h], eax
		mov     al, [dr@24e879h]
		mov     [dr@24e878h], dl
		cmp     al, 7
		jb      dr@6f582h
		jbe     dr@6f423h
		cmp     al, 13h
		je      dr@6f505h
		jmp     dr@6f582h
dr@6f423h:
		test    dl, dl
		jne     dr@6f439h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6f439h:
		cmp     byte [dr@24e87dh], 0
		je      dr@6f4dch
		cmp     word [dr@24e87ah], byte 0
		jne     dr@6f481h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     word [eax*2+dr@19a542h], byte 0
		jne     dr@6f481h
		xor     cl, cl
		mov     al, [dr@24e87fh]
		mov     [dr@24e878h], cl
		and     al, 0dfh
		mov     [dr@24e879h], cl
		mov     [dr@24e87fh], al
		jmp     dr@6f582h
dr@6f481h:
		mov     al, [dr@24e87dh]
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [eax*2+dr@19a484h]
		xor     ecx, ecx
		mov     cl, [dr@24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		sar     eax, cl
		mov     edx, eax
		xor     eax, eax
		xor     bl, bl
		mov     al, [dr@24e87eh]
		mov     [dr@24e87dh], bl
		mov     bx, [dr@24e87ah]
		mov     [eax*2+dr@19a644h], dx
		test    bx, bx
		jne     dr@6f582h
		and     byte [dr@24e87fh], 0dfh
		jmp     dr@6f582h
dr@6f4dch:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     word [eax*2+dr@19a644h], byte 0
		jne     dr@6f582h
		xor     dl, dl
		mov     [dr@24e878h], dl
		mov     [dr@24e879h], dl
;30:0006f500
		jmp     dr@6f582h
dr@6f505h:
		xor     eax, eax
		mov     al, dl
		sar     eax, 4
		cmp     eax, byte 0dh
		jne     dr@6f582h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		and     dl, 0fh
		mov     [eax+dr@19a5e4h], dl
		test    dl, dl
		setnz   dl
		and     edx, 0ffh
		je      dr@6f535h
		mov     byte [eax+dr@19a5e4h], 0fh
dr@6f535h:
		xor     ah, ah
		mov     al, [dr@24e87fh]
		mov     edx, eax
		mov     al, [dr@24e87ch]
		shl     edx, 8
		add     edx, eax
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     [eax*2+dr@19a604h], dx
		xor     dh, dh
		mov     bx, [dr@24e87ah]
		mov     dl, [dr@24e87dh]
		mov     ch, [dr@24e87fh]
		shl     edx, 8
		and     ch, 9fh
		add     edx, ebx
		mov     [dr@24e87fh], ch
		mov     [eax*2+dr@19a624h], dx
dr@6f582h:
		test    byte [dr@24e87fh], 20h
		je      dr@6f68bh
		mov     cx, [dr@24e87ah]
		test    cx, cx
		jne     dr@6f616h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@19a542h]
		xor     edx, edx
		mov     [dr@24e87ah], ax
		mov     dx, ax
		mov     eax, [dr@24e7a0h]
		sar     eax, 10h
		cmp     edx, eax
		jle     dr@6f5e5h
		xor     bl, bl
		mov     [dr@24e87dh], bl
		mov     bh, [dr@24e87fh]
		and     bh, 0dfh
		mov     [dr@24e87ah], cx
		mov     [dr@24e87fh], bh
		jmp     dr@6f639h
dr@6f5e5h:
		mov     dl, [dr@24e87dh]
		cmp     dl, 0ffh
		je      dr@6f5f4h
		test    dl, dl
		jne     dr@6f639h
dr@6f5f4h:
		xor     eax, eax
		mov     edx, [dr@24e864h]
		mov     ax, [dr@24e87ah]
		add     eax, edx
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     al, [eax]
		mov     [edx+dr@19a582h], al
		jmp     dr@6f639h
dr@6f616h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		mov     ebx, [dr@24e864h]
		mov     dx, cx
		mov     [eax*2+dr@19a542h], cx
		mov     dl, [edx+ebx*1]
		mov     [eax+dr@19a582h], dl
dr@6f639h:
		mov     cl, [dr@24e87dh]
		cmp     cl, 0ffh
		je      dr@6f68bh
		test    cl, cl
		je      dr@6f68bh
		mov     al, cl
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [eax*2+dr@19a484h]
		xor     ecx, ecx
		mov     cl, [dr@24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		sar     eax, cl
		mov     edx, eax
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     [eax*2+dr@19a562h], dx
		mov     dx, [dr@24e87ah]
		mov     [eax*2+dr@688d0h], dx
dr@6f68bh:
		test    byte [dr@24e87fh], 40h
		je      dr@6f6a7h
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     al, [dr@24e87ch]
		mov     [edx+dr@19a582h], al
dr@6f6a7h:
		test    byte [dr@24e87fh], 80h
		je      dr@70004h
		mov     al, [dr@24e879h]
		dec     al
		cmp     al, 15h
		ja      dr@6ffcah
		and     eax, 0ffh
		jmp     dword [cs:eax*4+dr@6edd0h]
dr@6f6d0h:
		mov     al, [dr@24e878h]
		xor     ebx, ebx
		mov     edx, esi
		mov     bl, [dr@24e86fh]
		mov     [dr@24e871h], al
		sar     edx, 1fh
		mov     eax, esi
		idiv    ebx
		xor     bh, bh
		mov     [dr@68c40h], ax
		mov     [dr@24e879h], bh
		mov     [dr@24e878h], bh
		jmp     dr@6ffe5h
dr@6f704h:
		mov     al, [dr@24e878h]
		mov     [dr@19a469h], al
		mov     byte [dr@19a53ch], 1
		xor     dh, dh
		mov     [dr@24e879h], dh
		mov     [dr@24e878h], dh
		jmp     dr@6ffe5h
dr@6f728h:
		mov     al, [dr@24e878h]
		mov     bl, 1
		and     al, 0fh
		mov     [dr@19a53ch], bl
		cmp     al, 9
		jbe     dr@6f742h
		add     byte [dr@24e878h], 6
dr@6f742h:
		xor     eax, eax
		mov     al, [dr@24e878h]
		sar     eax, 4
		imul    edx, eax, byte 0ah
		mov     al, [dr@24e878h]
		and     al, 0fh
		and     eax, 0ffh
		add     eax, edx
		mov     [dr@24e878h], al
		cmp     al, 3fh
		jbe     dr@6f76dh
		mov     byte [dr@24e878h], 3fh
dr@6f76dh:
		mov     al, [dr@24e878h]
		mov     [dr@19a53fh], al
		xor     al, al
		mov     [dr@24e879h], al
		mov     [dr@24e878h], al
		jmp     dr@6ffe5h
dr@6f788h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6f7a3h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6f7a3h:
		mov     al, [dr@24e878h]
		and     al, 0fh
		cmp     al, 0fh
		jne     dr@6f7deh
		xor     edx, edx
		xor     eax, eax
		mov     dl, [dr@24e878h]
		mov     al, [dr@24e87eh]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+dr@19a582h]
		add     edx, ebx
		mov     [eax+dr@19a582h], dl
		cmp     dl, 40h
		jbe     dr@6f7deh
		mov     byte [eax+dr@19a582h], 40h
dr@6f7deh:
		mov     al, [dr@24e878h]
		and     al, 0f0h
		cmp     al, 0f0h
		jne     dr@6ffe5h
		xor     eax, eax
		mov     dl, [dr@24e878h]
		mov     al, [dr@24e87eh]
		and     dl, 0fh
		mov     ch, [eax+dr@19a582h]
		sub     ch, dl
		mov     [eax+dr@19a582h], ch
		cmp     ch, 40h
		jbe     dr@6ffe5h
		xor     dh, dh
		mov     [eax+dr@19a582h], dh
		jmp     dr@6ffe5h
dr@6f821h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6f83ch
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6f83ch:
		mov     dl, [dr@24e878h]
		cmp     dl, 0e0h
		jb      dr@6ffe5h
		mov     edi, 7dffh
		and     dl, 0fh
		xor     eax, eax
		xor     ecx, ecx
		xor     ebx, ebx
		mov     al, [dr@24e87eh]
		mov     bl, dl
		add     eax, eax
		shl     ebx, 2
		mov     cx, [eax+dr@19a562h]
		sub     edi, ebx
		cmp     ecx, edi
		jg      dr@6f96bh
		mov     dh, [dr@24e878h]
		and     dh, 0f0h
		cmp     dh, 0f0h
		jne     dr@6f8dbh
		xor     dh, dh
		mov     edi, ecx
		shl     edx, 2
		add     edi, edx
		xor     edx, edx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax+dr@19a542h]
		mov     [eax+dr@19a562h], di
		mov     ecx, [ebx+edx*4]
		xor     ebx, ebx
		mov     bx, di
		xor     eax, eax
		or      ebx, ebx
		je      dr@6f8cch
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@6f8cch:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     [edx*4+dr@68990h], eax
dr@6f8dbh:
		mov     al, [dr@24e878h]
		and     al, 0f0h
		cmp     al, 0e0h
		jne     dr@6f974h
		xor     eax, eax
		mov     dl, [dr@24e878h]
		mov     al, [dr@24e87eh]
		and     dl, 0fh
		mov     bx, [eax*2+dr@19a562h]
		xor     dh, dh
		add     ebx, edx
		xor     edx, edx
		mov     [eax*2+dr@19a562h], bx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+dr@19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@6f94fh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@6f94fh:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     [edx*4+dr@68990h], eax
		xor     dh, dh
		mov     [dr@24e879h], dh
		jmp     dr@6ffe5h
dr@6f96bh:
		mov     word [eax+dr@688d0h], 0ffffh
dr@6f974h:
		xor     dh, dh
		mov     [dr@24e879h], dh
		jmp     dr@6ffe5h
dr@6f981h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6f99ch
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6f99ch:
		cmp     byte [dr@24e878h], 0e0h
		jb      dr@6ffe5h
		mov     dl, [dr@24e878h]
		xor     eax, eax
		xor     ecx, ecx
		xor     ebx, ebx
		and     dl, 0fh
		mov     al, [dr@24e87eh]
		mov     bl, dl
		add     eax, eax
		shl     ebx, 2
		mov     cx, [eax+dr@19a562h]
		add     ebx, 200h
		cmp     ecx, ebx
		jl      dr@6facdh
		mov     dh, [dr@24e878h]
		and     dh, 0f0h
		cmp     dh, 0f0h
		jne     dr@6fa3eh
		xor     dh, dh
		mov     edi, ecx
		shl     edx, 2
		sub     edi, edx
		xor     edx, edx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax+dr@19a542h]
		mov     [eax+dr@19a562h], di
		mov     ecx, [ebx+edx*4]
		xor     ebx, ebx
		mov     bx, di
		xor     eax, eax
		or      ebx, ebx
		je      dr@6fa2fh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@6fa2fh:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     [edx*4+dr@68990h], eax
dr@6fa3eh:
		mov     al, [dr@24e878h]
		and     al, 0f0h
		cmp     al, 0e0h
		jne     dr@6fad6h
		xor     eax, eax
		mov     dl, [dr@24e878h]
		mov     al, [dr@24e87eh]
		and     dl, 0fh
		mov     bx, [eax*2+dr@19a562h]
		xor     dh, dh
		sub     ebx, edx
		xor     edx, edx
		mov     [eax*2+dr@19a562h], bx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+dr@19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@6fab2h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@6fab2h:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     [edx*4+dr@68990h], eax
		xor     al, al
		mov     [dr@24e879h], al
		jmp     dr@6ffe5h
dr@6facdh:
		mov     word [eax+dr@688d0h], 0ffffh
dr@6fad6h:
		xor     al, al
		mov     [dr@24e879h], al
		jmp     dr@6ffe5h
dr@6fae2h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6fafdh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6fafdh:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     al, [dr@24e878h]
		mov     [edx+dr@19a5c2h], al
		jmp     dr@6ffe5h
dr@6fb15h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6ffe5h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
		jmp     dr@6ffe5h
dr@6fb39h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6fb54h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6fb54h:
		mov     al, [dr@24e87dh]
		cmp     al, 0ffh
		je      dr@6fb61h
		test    al, al
		jne     dr@6fb73h
dr@6fb61h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5f4h]
		mov     [dr@24e87dh], al
dr@6fb73h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     dl, dl
		mov     [eax+dr@19a5e4h], dl
		mov     dl, [dr@24e87dh]
		mov     [eax+dr@19a5f4h], dl
		mov     al, dl
		and     al, 0fh
		xor     edx, edx
		mov     dl, al
		xor     eax, eax
		mov     al, [dr@24e878h]
		sar     eax, 4
		add     eax, edx
		mov     [dr@24e87dh], al
		cmp     al, 0ch
		jb      dr@6fbb6h
		mov     bl, al
		add     bl, 4
		mov     [dr@24e87dh], bl
dr@6fbb6h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dl, [eax+dr@19a5f4h]
		mov     bh, [dr@24e87dh]
		and     dl, 0f0h
		add     bh, dl
		xor     dh, dh
		mov     dl, bh
		shl     edx, 8
		mov     [eax*2+dr@19a604h], dx
		mov     ah, [eax+dr@19a5f4h]
		and     ah, 0fh
		mov     al, [dr@24e878h]
		and     al, 0fh
		mov     [dr@24e87dh], bh
		add     ah, al
		mov     [dr@24e87dh], ah
		cmp     ah, 0ch
		jb      dr@6fc0bh
;30:0006fc00
		mov     ch, ah
		add     ch, 4
		mov     [dr@24e87dh], ch
dr@6fc0bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dl, [eax+dr@19a5f4h]
		and     dl, 0f0h
		add     [dr@24e87dh], dl
		xor     dh, dh
		mov     bx, [eax*2+dr@19a604h]
		mov     dl, [dr@24e87dh]
		add     ebx, edx
		mov     [eax*2+dr@19a604h], bx
		jmp     dr@6ffe5h
dr@6fc40h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6ffe5h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
		jmp     dr@6ffe5h
dr@6fc64h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6ffe5h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
		jmp     dr@6ffe5h
dr@6fc88h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6fca3h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6fca3h:
		xor     eax, eax
		mov     al, [dr@24e878h]
		mov     edx, eax
		xor     eax, eax
		mov     al, [dr@24e87eh]
		shl     edx, 8
		mov     [eax*4+dr@68910h], edx
		mov     dx, [eax*2+dr@19a542h]
		mov     [eax*2+dr@688d0h], dx
		xor     dh, dh
		mov     [dr@24e879h], dh
		mov     [dr@24e878h], dh
		jmp     dr@6ffe5h
dr@6fce0h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6ffe5h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
		jmp     dr@6ffe5h
dr@6fd04h:
		cmp     byte [dr@24e878h], 0
		jne     dr@6fd1fh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5a2h]
		mov     [dr@24e878h], al
dr@6fd1fh:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     al, [dr@24e878h]
		mov     [edx+dr@19a5c2h], al
		jmp     dr@6ffe5h
dr@6fd37h:
		xor     eax, eax
		mov     al, [dr@24e878h]
		sar     eax, 4
		cmp     eax, byte 0fh
		ja      dr@6ff60h
		jmp     dword [cs:eax*4+dr@6ee28h]
dr@6fd52h:
		xor     cl, cl
		mov     [dr@24e878h], cl
		mov     [dr@24e879h], cl
		inc     dword [dr@19a470h]
		jmp     dr@6ffe5h
dr@6fd6bh:
		xor     bl, bl
		mov     [dr@24e878h], bl
		mov     [dr@24e879h], bl
		inc     dword [dr@19a474h]
		jmp     dr@6ffe5h
dr@6fd84h:
		mov     al, [dr@24e878h]
		and     al, 0fh
		xor     dl, dl
		and     eax, 0ffh
		mov     [dr@24e879h], dl
		mov     ax, [eax*2+dr@19a49ch]
		mov     [dr@24e878h], dl
		mov     [dr@19a5e2h], ax
		jmp     dr@6ffe5h
dr@6fdb1h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dh, [eax+dr@19a5d2h]
		and     dh, 0fch
		mov     dl, [dr@24e878h]
		and     dl, 3
		or      dl, dh
		mov     [eax+dr@19a5d2h], dl
		xor     al, al
		mov     [dr@24e879h], al
		mov     [dr@24e878h], al
		jmp     dr@6ffe5h
dr@6fde3h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dh, [eax+dr@19a5d2h]
		and     dh, 0f3h
		mov     dl, [dr@24e878h]
		and     dl, 3
		xor     cl, cl
		shl     dl, 2
		mov     [dr@24e879h], cl
		or      dl, dh
		mov     [dr@24e878h], cl
		mov     [eax+dr@19a5d2h], dl
		jmp     dr@6ffe5h
dr@6fe1ah:
		mov     al, [dr@24e878h]
		and     al, 0fh
		mov     edx, eax
		xor     bl, bl
		and     edx, 0ffh
		xor     eax, eax
		mov     [dr@24e879h], bl
		mov     al, [dr@24e87eh]
		shl     edx, 0ch
		mov     [dr@24e878h], bl
		mov     [eax*4+dr@68a90h], edx
		jmp     dr@6ffe5h
dr@6fe4dh:
		xor     dl, dl
		mov     [dr@24e878h], dl
		mov     [dr@24e879h], dl
		inc     dword [dr@19a478h]
		jmp     dr@6ffe5h
dr@6fe66h:
		mov     bh, [dr@24e878h]
		test    bh, 0fh
		jne     dr@6ff04h
		mov     cl, [dr@19a686h]
		test    cl, cl
		jne     dr@6fe8eh
		mov     al, [dr@19a46ah]
		mov     [dr@19a684h], al
		jmp     dr@6ff04h
dr@6fe8eh:
		jne     dr@6fec8h
		mov     al, bh
		and     al, 0fh
		mov     bh, 1
		mov     [dr@19a685h], al
		mov     [dr@19a686h], bh
		mov     [dr@19a53ch], bh
		mov     al, [dr@19a684h]
		mov     [dr@19a53dh], bh
		mov     [dr@19a53fh], al
		xor     al, al
		mov     [dr@24e878h], al
		mov     [dr@24e879h], al
		jmp     dr@6ffe5h
dr@6fec8h:
		mov     al, [dr@19a685h]
		dec     al
		mov     [dr@19a685h], al
		je      dr@6feffh
		mov     al, [dr@19a684h]
		mov     dh, 1
		mov     [dr@19a53fh], al
		mov     [dr@19a53ch], dh
		mov     [dr@19a53dh], dh
		xor     al, al
		mov     [dr@24e878h], al
		mov     [dr@24e879h], al
		jmp     dr@6ffe5h
dr@6feffh:
		mov     [dr@19a686h], al
dr@6ff04h:
		xor     al, al
		mov     [dr@24e878h], al
		mov     [dr@24e879h], al
		jmp     dr@6ffe5h
dr@6ff15h:
		xor     edx, edx
		mov     al, [dr@24e878h]
		mov     dl, [dr@24e87eh]
		and     al, 0fh
		mov     [edx+dr@19a5e4h], al
		jmp     dr@6ffe5h
dr@6ff2fh:
		mov     al, [dr@24e878h]
		and     al, 0fh
		inc     al
		mov     [dr@19a540h], al
		jmp     dr@6ffe5h
dr@6ff42h:
		xor     dh, dh
		mov     eax, [dr@19a47ch]
		mov     [dr@24e878h], dh
		inc     eax
		mov     [dr@24e879h], dh
		mov     [dr@19a47ch], eax
		jmp     dr@6ffe5h
dr@6ff60h:
		xor     ah, ah
		mov     ebp, [dr@19a480h]
		mov     [dr@24e878h], ah
		inc     ebp
		mov     [dr@24e879h], ah
		mov     [dr@19a480h], ebp
		jmp     dr@6ffe5h
dr@6ff7dh:
		mov     cl, [dr@24e878h]
		test    cl, cl
		je      dr@6ffa0h
		mov     eax, esi
		xor     ebx, ebx
		mov     edx, esi
		mov     bl, cl
		sar     edx, 1fh
		idiv    ebx
		mov     [dr@24e86fh], cl
		mov     [dr@68c40h], ax
dr@6ffa0h:
		xor     ch, ch
		mov     [dr@24e878h], ch
		mov     [dr@24e879h], ch
		jmp     dr@6ffe5h
dr@6ffb0h:
		mov     al, [dr@24e878h]
		xor     bl, bl
		mov     [dr@24e870h], al
		mov     [dr@24e879h], bl
		mov     [dr@24e878h], bl
		jmp     dr@6ffe5h
dr@6ffcah:
		xor     dl, dl
		mov     edi, [dr@19a480h]
		mov     [dr@24e878h], dl
		inc     edi
		mov     [dr@24e879h], dl
		mov     [dr@19a480h], edi
dr@6ffe5h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dl, [dr@24e879h]
		mov     [eax+dr@19a592h], dl
		mov     dl, [dr@24e878h]
		mov     [eax+dr@19a5a2h], dl
dr@70004h:
		cmp     byte [dr@24e87eh], 0ffh
		je      dr@6f2e3h
		cmp     word [dr@19a5e2h], byte 0
		jne     dr@7006dh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+dr@19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@70063h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@70063h:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		jmp     dr@700bch
dr@7006dh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ecx, [dr@19a5e0h]
		xor     ebx, ebx
		mov     ax, [eax*2+dr@19a562h]
		sar     ecx, 10h
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@700abh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@700abh:
		xor     edx, edx
		xor     edi, edi
		mov     dl, [dr@24e87eh]
		mov     [dr@19a5e2h], di
dr@700bch:
		mov     [edx*4+dr@68990h], eax
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		xor     ebx, ebx
		mov     dl, [dr@24e870h]
		mov     bl, [eax+dr@19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+dr@68a10h], edx
		jmp     dr@6f2e3h
dr@700ech:
		mov     al, [dr@19a46ah]
		inc     byte [dr@19a46ah]
		cmp     byte [dr@19a46ah], 40h
		jb      dr@70107h
;30:00070100
		mov     byte [dr@19a53ch], 1
dr@70107h:
		mov     dl, [dr@19a540h]
		mov     al, [dr@24e871h]
		mul     dl
		mov     [dr@19a53eh], al
dr@70119h:
		cmp     byte [dr@19a53eh], 0
		je      dr@71588h
		xor     ah, ah
		mov     [dr@24e87eh], ah
		mov     esi, 0ffffh
dr@70133h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dl, [eax+dr@19a592h]
		test    dl, dl
		je      dr@71566h
		mov     [dr@24e879h], dl
		mov     dl, [eax+dr@19a5a2h]
		mov     [dr@24e878h], dl
		mov     dl, [dr@24e879h]
		sub     dl, 4
		cmp     dl, 11h
		ja      dr@71566h
		and     edx, 0ffh
		jmp     dword [cs:edx*4+dr@6ee68h]
dr@7017ah:
		mov     cl, [dr@24e878h]
;30:00070180
		test    cl, 0fh
		jne     dr@701cdh
		mov     ch, [dr@24e871h]
		cmp     ch, [dr@19a53eh]
		je      dr@701cdh
		xor     ebx, ebx
		xor     edx, edx
		xor     eax, eax
		mov     bl, cl
		mov     dl, [dr@24e87eh]
		sar     ebx, 4
		mov     al, [edx+dr@19a582h]
		add     eax, ebx
		mov     [edx+dr@19a582h], al
		xor     eax, eax
		mov     al, dl
		cmp     byte [eax+dr@19a582h], 40h
		jbe     dr@701cdh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     byte [eax+dr@19a582h], 40h
dr@701cdh:
		test    byte [dr@24e878h], 0f0h
		jne     dr@70218h
		mov     bh, [dr@24e871h]
		cmp     bh, [dr@19a53eh]
		je      dr@70218h
		mov     dl, [dr@24e878h]
		xor     eax, eax
		xor     ecx, ecx
		mov     al, [dr@24e87eh]
		and     dl, 0fh
		xor     ebx, ebx
		mov     cl, dl
		mov     bl, [eax+dr@19a582h]
;30:00070200
		cmp     ebx, ecx
		jl      dr@70210h
		mov     ch, bl
		sub     ch, dl
		mov     [eax+dr@19a582h], ch
		jmp     dr@70218h
dr@70210h:
		xor     cl, dl
		mov     [eax+dr@19a582h], cl
dr@70218h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		xor     ebx, ebx
		mov     dl, [dr@24e870h]
		mov     bl, [eax+dr@19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+dr@68a10h], edx
		jmp     dr@71566h
dr@70241h:
		mov     bh, [dr@24e878h]
		cmp     bh, 0e0h
		jae     dr@71566h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@19a562h]
		xor     edx, edx
		mov     dl, bh
		mov     ebx, 7dffh
		shl     edx, 2
		and     eax, 0ffffh
		sub     ebx, edx
		cmp     eax, ebx
		jg      dr@702c3h
		xor     dh, dh
		xor     eax, eax
		mov     dl, [dr@24e878h]
;30:00070280
		mov     al, [dr@24e87eh]
		shl     edx, 2
		add     [eax*2+dr@19a562h], dx
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@19a542h]
		mov     edx, [dr@24e850h]
		and     eax, 0ffffh
		mov     ecx, [edx+eax*4]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     ebx, ebx
		mov     ax, [eax*2+dr@19a562h]
		jmp     dr@71533h
dr@702c3h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     [eax*2+dr@688d0h], si
		jmp     dr@71566h
dr@702d7h:
		mov     bl, [dr@24e878h]
		cmp     bl, 0e0h
		jae     dr@71566h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dx, [eax*2+dr@19a562h]
		xor     eax, eax
		mov     al, bl
		shl     eax, 2
		add     eax, 200h
		cmp     edx, eax
		jl      dr@702c3h
		xor     dh, dh
		xor     eax, eax
		mov     dl, bl
		mov     al, [dr@24e87eh]
		shl     edx, 2
		sub     [eax*2+dr@19a562h], dx
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@19a542h]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [dr@24e850h]
		mov     ecx, [edx+eax*1]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     ebx, ebx
		mov     ax, [eax*2+dr@19a562h]
		jmp     dr@71533h
dr@70356h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		mov     dl, al
		mov     ax, [eax*2+dr@19a644h]
		cmp     ax, [edx*2+dr@19a562h]
		je      dr@71566h
		xor     edx, edx
		xor     ah, ah
		mov     dl, [dr@24e87eh]
		mov     al, [dr@24e878h]
		mov     [edx*2+dr@24e880h], ax
		xor     eax, eax
		mov     al, dl
		xor     edx, edx
		mov     dl, al
		mov     ax, [eax*2+dr@19a644h]
		cmp     ax, [edx*2+dr@19a562h]
		jbe     dr@70413h
		xor     eax, eax
		mov     al, dl
		xor     dh, dh
		mov     dl, [dr@24e878h]
		mov     di, [eax*2+dr@19a562h]
		shl     edx, 2
		xor     ebx, ebx
		add     edi, edx
		mov     bl, al
		mov     [eax*2+dr@19a562h], di
		xor     eax, eax
		mov     al, bl
		lea     edx, [eax*2+0]
		mov     ax, [ebx*2+dr@19a562h]
		cmp     ax, [edx+dr@19a644h]
		jbe     dr@7047fh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     edx, [eax*2+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dx, [edx+dr@19a644h]
		mov     [eax*2+dr@19a562h], dx
		jmp     dr@7047fh
dr@70413h:
		xor     eax, eax
		mov     al, dl
		xor     edx, edx
		mov     dx, [eax*2+dr@19a562h]
		xor     eax, eax
		mov     al, [dr@24e878h]
		shl     eax, 2
		cmp     eax, edx
		jg      dr@7044bh
		xor     dh, dh
		xor     eax, eax
		mov     dl, [dr@24e878h]
		mov     al, [dr@24e87eh]
		shl     edx, 2
		sub     [eax*2+dr@19a562h], dx
		jmp     dr@7045ch
dr@7044bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edi, edi
		mov     [eax*2+dr@19a562h], di
dr@7045ch:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		add     eax, eax
		mov     dx, [eax+dr@19a562h]
		mov     cx, [eax+dr@19a644h]
		cmp     dx, cx
		jae     dr@7047fh
		mov     [eax+dr@19a562h], cx
dr@7047fh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+dr@19a562h]
		xor     ebx, ebx
		jmp     dr@71533h
dr@704a8h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5d2h]
		and     al, 3
		cmp     al, 3
		ja      dr@705d1h
		and     eax, 0ffh
		jmp     dword [cs:eax*4+dr@6eeb0h]
dr@704cch:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5b2h]
		and     eax, 0ffh
		mov     edx, [eax*2+dr@19a4bah]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     dr@705cch
dr@7050bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5b2h]
		mov     ebx, 20h
		and     eax, 0ffh
		sub     ebx, eax
		imul    edx, ebx
		sar     edx, 4
		mov     [dr@24e874h], edx
		jmp     dr@705d1h
dr@70550h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5b2h]
		and     eax, 0ffh
		cmp     word [eax*2+dr@19a4bch], byte 0
		jl      dr@70586h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		jmp     dr@705cch
dr@70586h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     dr@705cch
dr@705a1h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		call    rand
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
dr@705cch:
		mov     [dr@24e874h], eax
dr@705d1h:
		mov     al, [dr@19a53eh]
		cmp     al, [dr@24e871h]
		je      dr@70612h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+dr@19a5b2h]
		add     edx, ebx
		mov     [eax+dr@19a5b2h], dl
		cmp     dl, 40h
		jb      dr@70612h
		mov     dh, dl
		sub     dh, 40h
		mov     [eax+dr@19a5b2h], dh
dr@70612h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dx, [eax*2+dr@19a542h]
		mov     di, [dr@24e874h]
		lea     ebx, [edx*4+0]
		mov     ax, [eax*2+dr@19a562h]
		mov     edx, [dr@24e850h]
		add     eax, edi
		mov     ecx, [edx+ebx*1]
		xor     ebx, ebx
		jmp     dr@71533h
dr@7064bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a664h]
		xor     eax, eax
		mov     al, [dr@24e878h]
		sar     eax, 4
		inc     eax
		cmp     edx, eax
		jge     dr@706a8h
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		mov     dl, al
		xor     ebx, ebx
		mov     bl, [edx+dr@19a582h]
		xor     edx, edx
		mov     dl, [dr@24e870h]
		imul    ebx, edx
		mov     ch, [eax+dr@19a664h]
		xor     edx, edx
		inc     ch
		mov     dl, al
		shl     ebx, 4
		mov     [eax+dr@19a664h], ch
		mov     [edx*4+dr@68a10h], ebx
		jmp     dr@71566h
dr@706a8h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a674h]
		xor     eax, eax
		mov     al, [dr@24e878h]
		sar     eax, 4
		inc     eax
		cmp     edx, eax
		jge     dr@71566h
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		mov     dl, al
		xor     edi, edi
		mov     bl, [eax+dr@19a674h]
		mov     [edx*4+dr@68a10h], edi
		xor     edx, edx
		inc     bl
		mov     dl, al
		mov     [eax+dr@19a674h], bl
		mov     dl, [edx+dr@19a674h]
		xor     eax, eax
		mov     al, [dr@24e878h]
		sar     eax, 4
;30:00070700
		and     edx, 0ffh
		inc     eax
		cmp     edx, eax
		jl      dr@71566h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     bh, bh
		mov     [eax+dr@19a664h], bh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     cl, cl
		mov     [eax+dr@19a674h], cl
		jmp     dr@71566h
dr@70732h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5e4h]
		cmp     al, 1
		jb      dr@7074eh
		jbe     dr@70774h
		cmp     al, 2
		je      dr@707a0h
		jmp     dr@707c2h
dr@7074eh:
		test    al, al
		jne     dr@707c2h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5f4h]
		mov     [dr@24e87dh], al
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     byte [eax+dr@19a5e4h], 1
		jmp     dr@707c2h
dr@70774h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@19a604h]
		and     eax, 0ffffh
		sar     eax, 8
		mov     [dr@24e87dh], al
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     byte [eax+dr@19a5e4h], 2
		jmp     dr@707c2h
dr@707a0h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax*2+dr@19a604h]
		mov     [dr@24e87dh], al
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     cl, cl
		mov     [eax+dr@19a5e4h], cl
dr@707c2h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@19a542h]
		mov     edx, [dr@24e850h]
		and     eax, 0ffffh
		mov     edx, [edx+eax*4]
		mov     al, [dr@24e87dh]
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [eax*2+dr@19a484h]
		xor     ecx, ecx
		mov     cl, [dr@24e87dh]
		and     eax, 0ffffh
;30:00070800
		sar     ecx, 4
		xor     ebx, ebx
		sar     eax, cl
		mov     ecx, edx
		jmp     dr@71533h
dr@7080eh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5d2h]
		and     al, 3
		cmp     al, 3
		ja      dr@70932h
		and     eax, 0ffh
		jmp     dword [cs:eax*4+dr@6eec0h]
dr@70832h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5b2h]
		and     eax, 0ffh
		mov     edx, [eax*2+dr@19a4bah]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     dr@7092dh
dr@70871h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		xor     edx, edx
;30:00070880
		and     al, 0fh
		mov     dl, al
		xor     eax, eax
		mov     al, [dr@24e87eh]
		shl     edx, 2
		mov     al, [eax+dr@19a5b2h]
		mov     ebx, 20h
		and     eax, 0ffh
		sub     ebx, eax
		imul    edx, ebx
		sar     edx, 4
		mov     [dr@24e874h], edx
		jmp     dr@70932h
dr@708b1h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5b2h]
		and     eax, 0ffh
		cmp     word [eax*2+dr@19a4bch], byte 0
		jl      dr@708e7h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		jmp     dr@7092dh
dr@708e7h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
;30:00070900
		jmp     dr@7092dh
dr@70902h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		call    rand
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
dr@7092dh:
		mov     [dr@24e874h], eax
dr@70932h:
		mov     dh, [dr@24e871h]
		cmp     dh, [dr@19a53eh]
		je      dr@70974h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+dr@19a5b2h]
		add     edx, ebx
		mov     [eax+dr@19a5b2h], dl
		cmp     dl, 40h
		jb      dr@70974h
		mov     bh, dl
		sub     bh, 40h
		mov     [eax+dr@19a5b2h], bh
dr@70974h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+dr@19a562h]
		add     ax, [dr@24e874h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@709c3h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@709c3h:
		mov     edx, eax
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     cl, [dr@24e878h]
		mov     [eax*4+dr@68990h], edx
		test    cl, cl
		je      dr@70a59h
		test    cl, 0fh
		jne     dr@70a19h
		mov     dl, [dr@19a53eh]
		cmp     dl, [dr@24e871h]
		je      dr@70a19h
		xor     edx, edx
		mov     dl, cl
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+dr@19a582h]
		add     edx, ebx
		mov     [eax+dr@19a582h], dl
		cmp     dl, 40h
		jbe     dr@70a19h
		mov     byte [eax+dr@19a582h], 40h
dr@70a19h:
		mov     cl, [dr@24e878h]
		test    cl, 0f0h
		jne     dr@70a59h
		mov     ch, [dr@24e871h]
		cmp     ch, [dr@19a53eh]
		je      dr@70a59h
		xor     eax, eax
		mov     dl, cl
		mov     al, [dr@24e87eh]
		and     dl, 0fh
		mov     dh, [eax+dr@19a582h]
		sub     dh, dl
		mov     [eax+dr@19a582h], dh
		cmp     dh, 40h
		jbe     dr@70a59h
		xor     bh, bh
		mov     [eax+dr@19a582h], bh
dr@70a59h:
		xor     eax, eax
		xor     ebx, ebx
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     bl, [dr@24e870h]
		mov     dl, [eax+dr@19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+dr@68a10h], edx
		jmp     dr@71566h
dr@70a82h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     ebx, [eax*2+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     edx, [eax*2+0]
		mov     ax, [ebx+dr@19a644h]
		cmp     ax, [edx+dr@19a562h]
		je      dr@70c51h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     ebx, [eax*2+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     edx, [eax*2+0]
		mov     ax, [ebx+dr@19a644h]
		cmp     ax, [edx+dr@19a562h]
		jbe     dr@70b69h
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		mov     dl, al
		mov     dx, [edx*2+dr@24e880h]
		mov     cx, [eax*2+dr@19a562h]
		shl     edx, 2
;30:00070b00
		add     ecx, edx
		mov     [eax*2+dr@19a562h], cx
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     ebx, [eax*2+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     edx, [eax*2+0]
		mov     ax, [ebx+dr@19a562h]
		cmp     ax, [edx+dr@19a644h]
		jbe     dr@70bfah
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     edx, [eax*2+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     ebx, [eax*2+0]
		mov     ax, [edx+dr@19a644h]
		mov     [ebx+dr@19a562h], ax
		jmp     dr@70bfah
dr@70b69h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@24e880h]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ax, [eax*2+dr@19a562h]
		and     eax, 0ffffh
		cmp     edx, eax
		jg      dr@70bc6h
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		mov     dl, al
		mov     dx, [edx*2+dr@24e880h]
		mov     di, [eax*2+dr@19a562h]
		shl     edx, 2
		sub     edi, edx
		mov     [eax*2+dr@19a562h], di
		jmp     dr@70bd7h
dr@70bc6h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     ecx, ecx
		mov     [eax*2+dr@19a562h], cx
dr@70bd7h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		add     eax, eax
		mov     dx, [eax+dr@19a562h]
		mov     bx, [eax+dr@19a644h]
		cmp     dx, bx
		jae     dr@70bfah
		mov     [eax+dr@19a562h], bx
dr@70bfah:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+dr@19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@70c42h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@70c42h:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     [edx*4+dr@68990h], eax
dr@70c51h:
		mov     ch, [dr@24e878h]
		test    ch, ch
		je      dr@70cddh
		test    ch, 0fh
		jne     dr@70c9dh
		mov     al, [dr@19a53eh]
		cmp     al, [dr@24e871h]
		je      dr@70c9dh
		xor     edx, edx
		xor     eax, eax
		mov     dl, ch
		mov     al, [dr@24e87eh]
		mov     ebx, edx
		xor     edx, edx
;30:00070c80
		sar     ebx, 4
		mov     dl, [eax+dr@19a582h]
		add     edx, ebx
		mov     [eax+dr@19a582h], dl
		cmp     dl, 40h
		jbe     dr@70c9dh
		mov     byte [eax+dr@19a582h], 40h
dr@70c9dh:
		mov     bl, [dr@24e878h]
		test    bl, 0f0h
		jne     dr@70cddh
		mov     bh, [dr@24e871h]
		cmp     bh, [dr@19a53eh]
		je      dr@70cddh
		xor     eax, eax
		mov     dl, bl
		mov     al, [dr@24e87eh]
		and     dl, 0fh
		mov     cl, [eax+dr@19a582h]
		sub     cl, dl
		mov     [eax+dr@19a582h], cl
		cmp     cl, 40h
		jbe     dr@70cddh
		xor     dl, dl
		mov     [eax+dr@19a582h], dl
dr@70cddh:
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		xor     ebx, ebx
		mov     dl, [dr@24e870h]
		mov     bl, [eax+dr@19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+dr@68a10h], edx
		jmp     dr@71566h
dr@70d06h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@19a540h]
		mov     dl, [dr@24e871h]
		imul    edx, eax
		xor     eax, eax
		mov     al, [dr@19a53eh]
		sub     edx, eax
		mov     al, [dr@24e878h]
		xor     ebx, ebx
		and     al, 0fh
		mov     bl, al
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     dr@71566h
		xor     eax, eax
		mov     dl, [dr@24e871h]
		mov     al, [dr@19a540h]
		imul    edx, eax
		xor     eax, eax
		mov     al, [dr@19a53eh]
		cmp     edx, eax
		je      dr@71566h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     edx, [eax*2+0]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		lea     ebx, [eax*2+0]
		mov     ax, [edx+dr@19a542h]
		mov     [ebx+dr@688d0h], ax
		xor     eax, eax
		mov     al, [dr@24e878h]
		sar     eax, 4
		dec     eax
		cmp     eax, byte 0eh
		ja      dr@71017h
		jmp     dword [cs:eax*4+dr@6eed0h]
dr@70da0h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     byte [eax+dr@19a582h], 1
		jb      dr@70dc2h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		dec     byte [eax+dr@19a582h]
		jmp     dr@71017h
dr@70dc2h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     bh, bh
		mov     [eax+dr@19a582h], bh
		jmp     dr@71017h
dr@70dd6h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     byte [eax+dr@19a582h], 2
		jb      dr@70df9h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		sub     byte [eax+dr@19a582h], 2
		jmp     dr@71017h
dr@70df9h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
;30:00070e00
		xor     dl, dl
		mov     [eax+dr@19a582h], dl
		jmp     dr@71017h
dr@70e0dh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     byte [eax+dr@19a582h], 4
		jb      dr@70dc2h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		sub     byte [eax+dr@19a582h], 4
		jmp     dr@71017h
dr@70e30h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     byte [eax+dr@19a582h], 8
		jb      dr@70df9h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		sub     byte [eax+dr@19a582h], 8
		jmp     dr@71017h
dr@70e53h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     byte [eax+dr@19a582h], 10h
		jb      dr@70dc2h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		sub     byte [eax+dr@19a582h], 10h
		jmp     dr@71017h
dr@70e7ah:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a582h]
		add     edx, edx
		mov     ebx, 3
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     [edx+dr@19a582h], al
		jmp     dr@71017h
dr@70eaah:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		shr     byte [eax+dr@19a582h], 1
		jmp     dr@71017h
dr@70ebch:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ch, [eax+dr@19a582h]
		xor     edx, edx
		inc     ch
		mov     dl, al
		mov     [eax+dr@19a582h], ch
		cmp     byte [edx+dr@19a582h], 40h
		jbe     dr@71017h
		xor     eax, eax
		mov     al, dl
		jmp     dr@71010h
dr@70eebh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     bl, [eax+dr@19a582h]
		xor     edx, edx
		add     bl, 2
		mov     dl, al
		mov     [eax+dr@19a582h], bl
		cmp     byte [edx+dr@19a582h], 40h
		jbe     dr@71017h
		xor     eax, eax
		mov     al, dl
		jmp     dr@71010h
dr@70f1bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ch, [eax+dr@19a582h]
		xor     edx, edx
		add     ch, 4
		mov     dl, al
		mov     [eax+dr@19a582h], ch
		cmp     byte [edx+dr@19a582h], 40h
		jbe     dr@71017h
		xor     eax, eax
		mov     al, dl
		jmp     dr@71010h
dr@70f4bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     bl, [eax+dr@19a582h]
		xor     edx, edx
		add     bl, 8
		mov     dl, al
		mov     [eax+dr@19a582h], bl
		cmp     byte [edx+dr@19a582h], 40h
		jbe     dr@71017h
		xor     eax, eax
		mov     al, dl
		jmp     dr@71010h
dr@70f7bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     ch, [eax+dr@19a582h]
		xor     edx, edx
		add     ch, 10h
		mov     dl, al
		mov     [eax+dr@19a582h], ch
		cmp     byte [edx+dr@19a582h], 40h
		jbe     dr@71017h
		xor     eax, eax
		mov     al, dl
		jmp     dr@71010h
dr@70fa8h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a582h]
		lea     edx, [edx+edx*2]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     dl, al
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     [eax+dr@19a582h], dl
		xor     eax, eax
		mov     al, [dr@24e87eh]
		cmp     byte [eax+dr@19a582h], 40h
		jbe     dr@71017h
		jmp     dr@71009h
dr@70fe4h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     dl, [eax+dr@19a582h]
		add     dl, dl
		mov     [eax+dr@19a582h], dl
		xor     eax, eax
		mov     al, [dr@24e87eh]
;31:00071000
		cmp     byte [eax+dr@19a582h], 40h
		jbe     dr@71017h
dr@71009h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
dr@71010h:
		mov     byte [eax+dr@19a582h], 40h
dr@71017h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [dr@24e87eh]
		xor     ebx, ebx
		mov     dl, [dr@24e870h]
		mov     bl, [eax+dr@19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+dr@68a10h], edx
		jmp     dr@71566h
dr@71040h:
		mov     dl, [eax+dr@19a5d2h]
		and     dl, 0ch
		and     edx, 0ffh
		sar     edx, 2
		cmp     edx, byte 3
		ja      dr@7112eh
		jmp     dword [cs:edx*4+dr@6ef0ch]
dr@71063h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5b2h]
		and     eax, 0ffh
		mov     edx, [eax*2+dr@19a4bah]
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 8
		jmp     dr@71129h
dr@7109eh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5b2h]
		mov     edx, 20h
		and     eax, 0ffh
		sub     edx, eax
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 6
		jmp     dr@71129h
dr@710d3h:
		xor     edx, edx
		mov     dl, [eax+dr@19a5b2h]
		cmp     word [edx*2+dr@19a4bch], byte 0
		jl      dr@710fch
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		jmp     dr@71129h
dr@710fch:
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		neg     eax
		jmp     dr@71129h
dr@7110dh:
		mov     al, [eax+dr@19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		call    rand
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0dh
dr@71129h:
		mov     [dr@24e874h], eax
dr@7112eh:
		mov     cl, [dr@24e871h]
		cmp     cl, [dr@19a53eh]
		je      dr@7116bh
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+dr@19a5b2h]
		add     edx, ebx
		mov     ch, dl
		mov     [eax+dr@19a5b2h], dl
		and     ch, 3fh
		mov     [eax+dr@19a5b2h], ch
dr@7116bh:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		mov     al, [eax+dr@19a582h]
		mov     edi, [dr@24e874h]
		and     eax, 0ffh
		add     edi, eax
		mov     [dr@24e874h], edi
		test    edi, edi
		jge     dr@71196h
		xor     eax, eax
		mov     [dr@24e874h], eax
dr@71196h:
		cmp     dword [dr@24e874h], byte 40h
		jle     dr@711a9h
		mov     dword [dr@24e874h], 40h
dr@711a9h:
		xor     eax, eax
		mov     al, [dr@24e870h]
		mov     ecx, [dr@24e874h]
		mov     edx, eax
		imul    edx, ecx
		xor     eax, eax
		mov     al, [dr@24e87eh]
		shl     edx, 4
		mov     [eax*4+dr@68a10h], edx
		jmp     dr@71566h
dr@711d1h:
		xor     edx, edx
		mov     dl, [dr@24e878h]
		sar     edx, 4
		cmp     edx, byte 0ch
		jb      dr@71566h
		lea     ecx, [eax*2+0]
		jbe     dr@711f8h
		cmp     edx, byte 0dh
		je      dr@71229h
		jmp     dr@71566h
dr@711f8h:
		mov     dl, [eax+dr@19a5e4h]
		test    dl, dl
;31:00071200
		je      dr@71211h
		mov     bh, dl
		dec     bh
		mov     [eax+dr@19a5e4h], bh
		jmp     dr@71566h
dr@71211h:
		mov     [eax+dr@19a592h], dl
		mov     [eax+dr@19a5a2h], dl
		mov     [ecx+dr@688d0h], si
		jmp     dr@71566h
dr@71229h:
		mov     dl, [eax+dr@19a5e4h]
		test    dl, dl
		je      dr@71242h
		mov     cl, dl
		dec     cl
		mov     [eax+dr@19a5e4h], cl
		jmp     dr@71566h
dr@71242h:
		xor     edx, edx
		mov     dx, [ecx+dr@19a604h]
		sar     edx, 8
		mov     [dr@24e87fh], dl
		mov     dl, [ecx+dr@19a604h]
		mov     [dr@24e87ch], dl
		xor     edx, edx
		mov     dx, [ecx+dr@19a624h]
		sar     edx, 8
		mov     [dr@24e87dh], dl
		mov     dx, [ecx+dr@19a624h]
		xor     dh, dh
		mov     [dr@24e87ah], dx
		test    byte [dr@24e87fh], 20h
		je      dr@7135ah
		mov     dx, [dr@24e87ah]
		test    dx, dx
		jne     dr@712e8h
		mov     ax, [ecx+dr@19a542h]
		mov     [dr@24e87ah], ax
		test    ax, ax
		jne     dr@712b7h
		xor     cl, cl
		mov     [dr@24e87dh], cl
		jmp     dr@71307h
dr@712b7h:
		mov     bl, [dr@24e87dh]
		cmp     bl, 0ffh
		je      dr@712c6h
		test    bl, bl
		jne     dr@71307h
dr@712c6h:
		xor     eax, eax
		mov     edx, [dr@24e864h]
		mov     ax, [dr@24e87ah]
		add     eax, edx
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     al, [eax]
		mov     [edx+dr@19a582h], al
		jmp     dr@71307h
dr@712e8h:
		mov     [ecx+dr@19a542h], dx
		xor     edx, edx
		mov     ebx, [dr@24e864h]
		mov     dx, [dr@24e87ah]
		mov     dl, [edx+ebx*1]
		mov     [eax+dr@19a582h], dl
dr@71307h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		add     eax, eax
		mov     dx, [dr@24e87ah]
		mov     ch, [dr@24e87dh]
		mov     [eax+dr@688d0h], dx
		cmp     ch, 0ffh
		je      dr@7135ah
		test    ch, ch
		je      dr@7135ah
		mov     dl, ch
		and     dl, 0fh
		and     edx, 0ffh
		mov     dx, [edx*2+dr@19a484h]
		xor     ecx, ecx
		mov     cl, [dr@24e87dh]
		and     edx, 0ffffh
		sar     ecx, 4
		sar     edx, cl
		mov     [eax+dr@19a562h], dx
dr@7135ah:
		test    byte [dr@24e87fh], 40h
		je      dr@71376h
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     al, [dr@24e87ch]
		mov     [edx+dr@19a582h], al
dr@71376h:
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     ebx, [dr@24e850h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [eax*2+dr@19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@713beh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@713beh:
		mov     edx, eax
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     ebx, ebx
		mov     [eax*4+dr@68990h], edx
		xor     edx, edx
		mov     bl, [eax+dr@19a582h]
		mov     dl, [dr@24e870h]
		imul    edx, ebx
		shl     edx, 4
		xor     bl, bl
		mov     [eax*4+dr@68a10h], edx
		mov     [eax+dr@19a592h], bl
		mov     [eax+dr@19a5a2h], bl
		jmp     dr@71566h
dr@713feh:
		mov     dl, [eax+dr@19a5d2h]
		and     dl, 3
		cmp     dl, 3
		ja      dr@714c4h
		and     edx, 0ffh
		jmp     dword [cs:edx*4+dr@6ef1ch]
dr@7141eh:
		xor     edx, edx
		mov     dl, [eax+dr@19a5b2h]
		mov     edx, [edx*2+dr@19a4bah]
		mov     al, [eax+dr@19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     dr@714bfh
dr@71449h:
		xor     edx, edx
		mov     ebx, 20h
		mov     dl, [eax+dr@19a5b2h]
		mov     al, [eax+dr@19a5c2h]
		sub     ebx, edx
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, ebx
		sar     eax, 4
		jmp     dr@714bfh
dr@7146dh:
		xor     edx, edx
		mov     dl, [eax+dr@19a5b2h]
		cmp     word [edx*2+dr@19a4bch], byte 0
		jl      dr@7148fh
;31:00071480
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		jmp     dr@714bfh
dr@7148fh:
		mov     al, [eax+dr@19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     dr@714bfh
dr@714a3h:
		mov     al, [eax+dr@19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		call    rand
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
dr@714bfh:
		mov     [dr@24e874h], eax
dr@714c4h:
		mov     dh, [dr@24e871h]
		cmp     dh, [dr@19a53eh]
		je      dr@71506h
		xor     eax, eax
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     dl, [eax+dr@19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+dr@19a5b2h]
		add     edx, ebx
		mov     [eax+dr@19a5b2h], dl
		cmp     dl, 40h
		jb      dr@71506h
		mov     bh, dl
		sub     bh, 40h
;31:00071500
		mov     [eax+dr@19a5b2h], bh
dr@71506h:
		xor     eax, eax
		mov     ecx, [dr@24e850h]
		mov     al, [dr@24e87eh]
		xor     edx, edx
		mov     di, [dr@24e874h]
		mov     dx, [eax*2+dr@19a542h]
		mov     ax, [eax*2+dr@19a562h]
		xor     ebx, ebx
		add     eax, edi
		mov     ecx, [ecx+edx*4]
dr@71533h:
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      dr@71557h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
dr@71557h:
		xor     edx, edx
		mov     dl, [dr@24e87eh]
		mov     [edx*4+dr@68990h], eax
dr@71566h:
		mov     al, [dr@24e87eh]
		inc     al
		mov     [dr@24e87eh], al
		cmp     al, 10h
		jne     dr@70133h
		mov     dl, 1
		mov     [dr@19a540h], dl
		sub     [dr@19a53eh], dl
dr@71588h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
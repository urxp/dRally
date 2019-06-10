%include "macros.inc"

    extern  ___24f2c4h
    extern  ___24e9d6h
    extern  ___24e9b4h
    extern  ___24f13ch
    extern  ___24f15ch
    extern  ___24f2c8h
    extern  ___24e8a3h
    extern  ___24ea9dh
    extern  ___24f1bch
    extern  ___688d0h
    extern  ___24f23ch
    extern  ___71ab0h
    extern  ___24e9a4h
    extern  memset__clib3r
    extern  ___24f27ch
    extern  ___24e9b0h
    extern  ___24f19ch
    extern  ___24e9d7h
    extern  ___24ef7ch
    extern  ___24ef5ch
    extern  ___24f11ch
    extern  ___24ea8ch
    extern  ___24ea90h
    extern  ___24ea94h
    extern  ___68a90h
    extern  ___24e9dch
    extern  ___24ea9ch
    extern  ___19a694h
    extern  ___24ea98h
    extern  ___71b70h
    extern  ___68990h
    extern  ___24f2c1h
    extern  ___24f2c2h
    extern  ___24ea7ch
    extern  ___24ea80h
    extern  ___24ea84h
    extern  ___24ea88h
    extern  ___68a10h
    extern  ___24f17ch
    extern  ___19a692h
    extern  ___24ea5ch
    extern  ___24eedch
    extern  ___24eebch
    extern  ___24ea59h
    extern  ___24ef1ch
    extern  ___24ef3ch
    extern  ___24f0fch
    extern  ___24f05ch
    extern  ___24e9b8h
    extern  ___68a0ch
    extern  ___24e9d8h
    extern  ___24f0dch
    extern  ___24f09ch
    extern  ___24efbch
    extern  ___24efdch
    extern  ___24f2bdh
    extern  ___24ef9ch
    extern  ___24eefch
    extern  ___68910h
    extern  ___19a68dh
    extern  ___24f2bfh
    extern  ___24f2c0h
    extern  ___24f2c6h
    extern  ___24f2beh
    extern  ___24e9d9h
    extern  ___68c40h
    extern  ___24f2b9h
    extern  ___24f2bch
    extern  ___24f2c3h
    extern  ___24f2c5h
    extern  ___24e9dah
    extern  ___19a281h
    extern  ___68c42h
    extern  ___19a68ch
    extern  ___19a690h
    extern  ___24e7a6h
    extern  ___24e7a5h
    extern  ___24e9d4h
    extern  ___24e9ceh
    extern  ___19a28ch
    extern  ___24e9a8h
    extern  ___24e9c8h
    extern  ___24e9c4h
    extern  ___24e9c0h

%include "layout.inc"

section @text

___71bfch:
		cmp     byte [___24e9dah], 0
		jne     ___71c06h
		retn    
___71c06h:
		add     eax, byte 20h
		and     al, 0c0h
		retn    
___71c0ch:
dd	___72c97h
dd	___72c97h
dd	___72b5fh
dd	___72bc7h
dd	___72c25h
dd	___72c56h
dd	___72ca7h
dd	___72c97h
dd	___72c97h
___71c30h:
dd	___72cdch
dd	___72db1h
dd	___72dc8h
dd	___73397h
dd	___72ddfh
dd	___72e17h
dd	___72e2eh
dd	___72e45h
dd	___72e7dh
dd	___72e8ch
dd	___72ecch
dd	___72ee3h
dd	___72ef8h
dd	___72f07h
dd	___72f3eh
dd	___731a6h
dd	___731dfh
dd	___73234h
dd	___73397h
dd	___73397h
dd	___73397h
dd	___7324bh
dd	___73397h
dd	___73397h
dd	___73397h
dd	___73284h
dd	___73397h
dd	___7329bh
dd	___73397h
dd	___732b2h
dd	___73397h
dd	___73397h
dd	___73397h
dd	___732dfh
___71cb8h:
dd	___72f57h
dd	___72fa0h
dd	___72ff8h
dd	___7300fh
dd	___73021h
dd	___73036h
dd	___730c1h
dd	___73397h
dd	___73397h
dd	___730d3h
dd	___73123h
dd	___73182h
dd	___73397h
dd	___73196h
___71cf0h:
dd	___7351eh
dd	___73583h
dd	___73903h
dd	___73903h
dd	___73903h
dd	___735dbh
dd	___73903h
dd	___73736h
dd	___73794h
dd	___737f8h
___71d18h:
dd	___735fch
dd	___7362eh
dd	___7365dh
dd	___735fch
___71d28h:
dd	___73c73h
dd	___73cabh
dd	___73cd9h
dd	___73c73h
___71d38h:
dd	___73f6ah
dd	___73f9ch
dd	___73fcbh
dd	___73f6ah
___71d48h:
dd	___7414dh
dd	___7417fh
dd	___741aeh
dd	___7414dh
___71d58h:
dd	___748afh
dd	___748dch
dd	___7490ah
dd	___74927h
dd	___74944h
dd	___74965h
dd	___7498eh
dd	___74a92h
dd	___7499dh
dd	___749bdh
dd	___749deh
dd	___749ffh
dd	___74a1dh
dd	___74a37h
dd	___74a68h
___71d94h:
dd	___7531ah
dd	___7535ch
dd	___753c5h
dd	___753fdh
__GDECL(__CEXT_F(___71da4h))
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     ah, [___19a281h]
		test    ah, ah
		jne     ___75522h
		cmp     byte [___19a68ch], 0
		je      ___71f40h
		mov     [___19a68dh], ah
		mov     bl, 1
		mov     [___24f2c6h], ah
		mov     [___24f2c5h], bl
		mov     [___24e9d6h], ah
		mov     [___24f2c4h], ah
		mov     [___24f2c3h], ah
		mov     [___24f2c2h], ah
		mov     [___24f2c1h], bl
		mov     [___24f2c0h], ah
		mov     [___24f2bfh], ah
		mov     [___24f2beh], ah
		mov     [___24f2bdh], ah
		mov     [___24f2bch], ah
		xor     edx, edx
		mov     [esp+8], edx
		mov     esi, ___24ea7ch
		mov     edi, 22h
		xor     ecx, ecx
___71e2ah:
		mov     eax, [esp+8]
		mov     word [NoSplit eax*2+___24f27ch], 0ffffh
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f23ch], cx
		mov     eax, [esp+8]
		mov     [eax*4+___24f1bch], ecx
		mov     eax, [esp+8]
		mov     [eax+___24f19ch], cl
		mov     eax, [esp+8]
		mov     byte [eax+___24f17ch], 80h
		mov     eax, [esp+8]
		mov     [eax+___24f15ch], cl
		mov     eax, [esp+8]
		mov     byte [eax+___24f13ch], 0ffh
		mov     eax, [esp+8]
		mov     [eax+___24f11ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24f0fch], cl
		mov     eax, [esp+8]
		mov     [eax+___24f0dch], cl
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f09ch], cx
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f05ch], cx
		mov     eax, [esp+8]
		mov     [eax*4+___24efdch], ecx
		mov     eax, [esp+8]
		mov     [eax+___24efbch], cl
		mov     eax, [esp+8]
		mov     [eax+___24eedch], cl
		mov     eax, [esp+8]
		mov     [eax+___24eebch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef9ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef7ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef5ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef3ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef1ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24eefch], cl
		imul    eax, [esp+8], byte 22h
		mov     edx, ecx
		mov     ebx, edi
		add     eax, esi
		call    memset__clib3r
		inc     dword [esp+8]
		cmp     dword [esp+8], byte 20h
		jl      ___71e2ah
		xor     bl, bl
		call    ___68c42h
		mov     [___19a68ch], bl
___71f40h:
		mov     edx, [___19a690h]
		cmp     edx, byte 0ffffffffh
		je      ___71f7fh
		mov     eax, edx
		sar     eax, 8
		and     eax, 0ffh
		mov     [___19a68dh], al
		mov     bh, 1
		mov     al, [___19a690h]
		xor     cl, cl
		mov     [___24f2c4h], al
		mov     [___24f2c5h], bh
		mov     ebx, 0ffffffffh
		mov     [___24f2c6h], cl
		mov     [___19a690h], ebx
___71f7fh:
		cmp     byte [___24f2c2h], 0
		jne     ___73484h
		cmp     byte [___24e7a6h], 0
		jne     ___73484h
		mov     ah, 1
		mov     [___24e7a5h], ah
		cmp     ah, [___24f2c5h]
		jne     ___7227ch
		mov     ebp, 20h
		mov     esi, 22h
		mov     edi, 0ffffh
___71fbch:
		cmp     byte [___24f2c6h], 0
		jne     ___7216ch
		xor     edx, edx
		mov     dl, [___19a68dh]
		xor     eax, eax
		mov     ax, [___24e9d4h]
		cmp     edx, eax
		jl      ___7216ch
		mov     al, [___24e9ceh]
		mov     [___19a68dh], al
		xor     ecx, ecx
		mov     [esp+8], ecx
		jmp     ___72131h
___71ff6h:
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f27ch], di
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f23ch], cx
		mov     eax, [esp+8]
		mov     [eax*4+___24f1bch], ecx
		mov     eax, [esp+8]
		mov     [eax+___24f19ch], cl
		mov     eax, [esp+8]
		mov     byte [eax+___24f17ch], 80h
		mov     eax, [esp+8]
		mov     [eax+___24f15ch], cl
		mov     eax, [esp+8]
		mov     byte [eax+___24f13ch], 0ffh
		mov     eax, [esp+8]
		mov     [eax+___24f11ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24f0fch], cl
		mov     eax, [esp+8]
		mov     [eax+___24f0dch], cl
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f09ch], cx
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f05ch], cx
		mov     eax, [esp+8]
		mov     [eax*4+___24efdch], ecx
		mov     eax, [esp+8]
		mov     [eax+___24efbch], cl
		mov     eax, [esp+8]
		mov     [eax+___24eedch], cl
		mov     eax, [esp+8]
		mov     [eax+___24eebch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef9ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef7ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef5ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef3ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24ef1ch], cl
		mov     eax, [esp+8]
		mov     [eax+___24eefch], cl
		imul    eax, [esp+8], byte 22h
		mov     edx, ecx
		add     eax, ___24ea7ch
		mov     ebx, esi
		call    memset__clib3r
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___688d0h], di
		mov     eax, [esp+8]
		mov     [eax*4+___68990h], ecx
		mov     eax, [esp+8]
		mov     [eax*4+___68a10h], ecx
		mov     eax, [esp+8]
		mov     dword [eax*4+___68a90h], 8000h
		mov     eax, [esp+8]
		mov     [eax*4+___68910h], ecx
		inc     dword [esp+8]
___72131h:
		cmp     ecx, [___19a28ch]
		je      ___72140h
		mov     eax, [___24e9b4h]
		jmp     ___72142h
___72140h:
		mov     eax, ebp
___72142h:
		cmp     eax, [esp+8]
		jg      ___71ff6h
		xor     bl, bl
		mov     [___24f2bfh], bl
		mov     [___24f2beh], bl
		mov     [___24f2bdh], bl
		mov     [___24f2bch], bl
		mov     [___24f2c0h], bl
___7216ch:
		cmp     byte [___24f2c6h], 0
		jne     ___7219fh
		xor     eax, eax
		mov     al, [___19a68dh]
		mov     edx, [___24e9c8h]
		mov     al, [edx+eax]
		mov     ecx, [___24e9a8h]
		and     eax, 0ffh
		cmp     eax, ecx
		jl      ___721adh
		inc     byte [___19a68dh]
		jmp     ___71fbch
___7219fh:
		dec     byte [___19a68dh]
		xor     cl, cl
		mov     [___24f2c6h], cl
___721adh:
		xor     edx, edx
		mov     dl, [___19a68dh]
		mov     eax, [___24e9c8h]
		mov     dl, [edx+eax]
		mov     ebx, [___24e9c4h]
		and     edx, 0ffh
		mov     dl, [ebx+edx*2]
		mov     [___24f2c3h], dl
		xor     edx, edx
		mov     dl, [___19a68dh]
		mov     al, [edx+eax]
		mov     edx, [___24e9c0h]
		and     eax, 0ffh
		mov     eax, [edx+eax*4]
		mov     [___24f2c8h], eax
		inc     byte [___19a68dh]
		xor     al, al
		mov     [___24e9d6h], al
		mov     dl, [___24f2c4h]
		mov     [___24f2c5h], al
		test    dl, dl
		jbe     ___7227ch
___72210h:
		mov     edx, [___24f2c8h]
		inc     edx
		mov     al, [edx-1]
		mov     [___24f2c8h], edx
		test    al, 80h
		je      ___7225bh
		test    al, 1
		je      ___72231h
		lea     edi, [edx+1]
		mov     [___24f2c8h], edi
___72231h:
		test    al, 2
		je      ___7223bh
		inc     dword [___24f2c8h]
___7223bh:
		test    al, 4
		je      ___72245h
		inc     dword [___24f2c8h]
___72245h:
		test    al, 8
		je      ___7224fh
		inc     dword [___24f2c8h]
___7224fh:
		test    al, 10h
		je      ___72264h
		inc     dword [___24f2c8h]
		jmp     ___72264h
___7225bh:
		lea     esi, [edx+4]
		mov     [___24f2c8h], esi
___72264h:
		mov     bl, [___24f2c4h]
		dec     bl
		mov     [___24f2c4h], bl
		inc     byte [___24e9d6h]
		test    bl, bl
		ja      ___72210h
___7227ch:
		xor     esi, esi
		mov     [esp+8], esi
		mov     eax, [esp+8]
		cmp     eax, [___24e9b4h]
		jge     ___73453h
___72292h:
		mov     ch, 0ffh
		xor     ebx, ebx
		xor     esi, esi
		mov     [esp+4], ebx
		xor     bl, bl
		xor     cl, cl
		mov     [esp+0ch], bl
		mov     eax, [esp+8]
		mov     [eax+___24f13ch], ch
		mov     eax, [esp+8]
		and     byte [eax+___24f15ch], 0fh
		mov     edx, [___24f2c8h]
		inc     edx
		mov     al, [edx-1]
		mov     [___24f2c8h], edx
		test    al, 80h
		je      ___72345h
		test    al, 1
		je      ___722e5h
		inc     edx
		xor     ebx, ebx
		mov     bl, [edx-1]
		mov     [___24f2c8h], edx
		mov     [esp+4], ebx
___722e5h:
		test    al, 2
		je      ___722fbh
		mov     edx, [___24f2c8h]
		inc     edx
		movzx   si, byte [edx-1]
		mov     [___24f2c8h], edx
___722fbh:
		test    al, 4
		je      ___72312h
		mov     edx, [___24f2c8h]
		mov     ah, [edx]
		inc     edx
		mov     [esp+0ch], ah
		mov     [___24f2c8h], edx
___72312h:
		test    al, 8
		je      ___72326h
		mov     edx, [___24f2c8h]
		inc     edx
		mov     ch, [edx-1]
		mov     [___24f2c8h], edx
___72326h:
		test    al, 10h
		je      ___72338h
		mov     eax, [___24f2c8h]
		inc     eax
		mov     cl, [eax-1]
		mov     [___24f2c8h], eax
___72338h:
		cmp     ch, 0ffh
		jne     ___72379h
		test    cl, cl
		je      ___72379h
		xor     ch, ch
		jmp     ___72379h
___72345h:
		and     eax, 0ffh
		mov     [esp+4], eax
		lea     eax, [edx+1]
		mov     [___24f2c8h], eax
		inc     eax
		mov     [___24f2c8h], eax
		inc     eax
		mov     [___24f2c8h], eax
		inc     eax
		movzx   si, byte [edx]
		mov     dl, [eax-3]
		mov     ch, [eax-2]
		mov     [esp+0ch], dl
		mov     cl, [eax-1]
		mov     [___24f2c8h], eax
___72379h:
		test    si, si
		je      ___7238eh
		xor     eax, eax
		mov     ax, si
		cmp     byte [eax+___24e8a3h], 0
		jne     ___7238eh
		xor     esi, esi
___7238eh:
		cmp     dword [esp+4], byte 61h
		jne     ___723bdh
		test    si, si
		jne     ___723b5h
		mov     eax, [esp+8]
		cmp     word [NoSplit eax*2+___24f27ch], byte 0ffffh
		je      ___723b5h
		imul    eax, [esp+8], byte 22h
		mov     byte [eax+___24ea9dh], 1
___723b5h:
		xor     eax, eax
		xor     esi, esi
		mov     [esp+4], eax
___723bdh:
		cmp     ch, 0eh
		jne     ___723d3h
		xor     eax, eax
		mov     al, cl
		sar     eax, 4
		cmp     eax, byte 9
		jne     ___723d3h
		mov     ch, 1bh
		and     cl, 0fh
___723d3h:
		xor     eax, eax
		mov     al, [esp+0ch]
		sar     eax, 4
		cmp     eax, byte 0fh
		jne     ___725b2h
		mov     bh, [esp+0ch]
		test    bh, 0fh
		jne     ___72402h
		mov     eax, [esp+8]
		mov     al, [eax+___24f15ch]
		and     al, 0fh
		mov     ah, bh
		or      ah, al
		mov     [esp+0ch], ah
___72402h:
		mov     eax, [esp+8]
		mov     edx, [eax*4+___24f1bch]
		test    edx, edx
		jne     ___7241eh
		mov     ch, 0ffh
		mov     [esp+4], edx
		xor     cl, cl
		jmp     ___725a2h
___7241eh:
		mov     ebx, [esp+4]
		test    ebx, ebx
		je      ___7258eh
		test    si, si
		je      ___724c1h
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___24f27ch]
		xor     eax, eax
		mov     ax, si
		dec     eax
		cmp     eax, edx
		je      ___724c1h
		mov     eax, esi
		dec     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___24f27ch], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     eax, [edx+eax]
		add     eax, ebx
		xor     bh, bh
		mov     bl, [eax+20h]
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9b8h]
		and     eax, 0ffffh
		add     bx, [edx+eax*2]
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f23ch], bx
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
___724c1h:
		test    si, si
		je      ___7252bh
		imul    eax, [esp+8], byte 22h
		mov     ebx, 22h
		xor     edx, edx
		add     eax, ___24ea7ch
		call    memset__clib3r
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9b0h]
		mov     edx, [edx+eax]
		mov     dl, [edx+0ch]
		mov     ebx, [esp+8]
		mov     [ebx+___24f19ch], dl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f23ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0fh]
		mov     edx, [esp+8]
		mov     [edx+___24f17ch], al
___7252bh:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9b0h]
		mov     edx, [edx+eax]
		mov     edx, [edx+0ah]
		sar     edx, 18h
		mov     ebx, [esp+8]
		mov     bx, [NoSplit ebx*2+___24f23ch]
		and     ebx, 0ffffh
		mov     eax, [eax+ebx*4]
		mov     bl, [esp+4]
		mov     bh, [eax+10h]
		mov     al, bl
		add     al, bh
		and     eax, 0ffh
		call    ___71ab0h
		mov     edx, [esp+8]
		mov     [edx*4+___24efdch], eax
		xor     eax, eax
		mov     [esp+4], eax
		jmp     ___725a2h
___7258eh:
		mov     eax, [esp+8]
		cmp     dword [eax*4+___24efdch], byte 0
		jne     ___725a2h
		xor     dl, dl
		mov     [esp+0ch], dl
___725a2h:
		xor     esi, esi
		mov     eax, [esp+8]
		mov     dl, [esp+0ch]
		mov     [eax+___24f15ch], dl
___725b2h:
		cmp     ch, 0eh
		jb      ___725cbh
		jbe     ___72786h
		cmp     ch, 14h
		je      ___727e6h
		jmp     ___7280dh
___725cbh:
		cmp     ch, 3
		jne     ___7280dh
		test    cl, cl
		jne     ___725e2h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
___725e2h:
		mov     eax, [esp+8]
		mov     edi, [eax*4+___24f1bch]
		test    edi, edi
		jne     ___725fch
		mov     ch, 0ffh
		mov     [esp+4], edi
		jmp     ___7277dh
___725fch:
		mov     ebp, [esp+4]
		test    ebp, ebp
		je      ___7276dh
		test    si, si
		je      ___7269bh
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___24f27ch]
		xor     eax, eax
		mov     ax, si
		dec     eax
		cmp     eax, edx
		je      ___7269bh
		mov     eax, esi
		dec     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___24f27ch], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9a4h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		add     eax, ebp
		xor     bh, bh
		mov     bl, [eax+20h]
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9b8h]
		and     eax, 0ffffh
		mov     ax, [edx+eax*2]
		add     eax, ebx
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___24f23ch], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
___7269bh:
		test    si, si
		je      ___72705h
		imul    eax, [esp+8], byte 22h
		mov     ebx, 22h
		xor     edx, edx
		add     eax, ___24ea7ch
		call    memset__clib3r
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9b0h]
		mov     ebx, [edx+eax]
		mov     bl, [ebx+0ch]
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], bl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f23ch]
		and     edx, 0ffffh
		mov     edx, [eax+edx*4]
		mov     dl, [edx+0fh]
		mov     eax, [esp+8]
		mov     [eax+___24f17ch], dl
___72705h:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9b0h]
		mov     edx, [edx+eax]
		mov     edx, [edx+0ah]
		sar     edx, 18h
		mov     ebx, [esp+8]
		mov     bx, [NoSplit ebx*2+___24f23ch]
		and     ebx, 0ffffh
		mov     eax, [eax+ebx*4]
		mov     bl, [esp+4]
		mov     bh, [eax+10h]
		mov     al, bl
		add     al, bh
		and     eax, 0ffh
		call    ___71ab0h
		mov     edx, [esp+8]
		xor     edi, edi
		mov     [edx*4+___24efdch], eax
		mov     [esp+4], edi
		xor     esi, esi
		jmp     ___7280dh
___7276dh:
		mov     eax, [esp+8]
		cmp     dword [eax*4+___24efdch], byte 0
		jne     ___7277fh
		mov     ch, 0ffh
___7277dh:
		xor     cl, cl
___7277fh:
		xor     esi, esi
		jmp     ___7280dh
___72786h:
		xor     eax, eax
		mov     al, cl
		sar     eax, 4
		cmp     eax, byte 0dh
		jne     ___7280dh
		mov     eax, [esp+8]
		mov     dl, cl
		and     dl, 0fh
		mov     [eax+___24f0fch], dl
		mov     eax, [esp+8]
		cmp     byte [eax+___24f0fch], 0
		jne     ___727bdh
		mov     eax, [esp+8]
		mov     byte [eax+___24f0fch], 0fh
___727bdh:
		xor     ah, ah
		mov     al, [esp+0ch]
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___24f09ch], ax
		mov     eax, [esp+4]
		shl     eax, 8
		add     eax, esi
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___24f05ch], ax
		jmp     ___7280dh
___727e6h:
		mov     eax, [esp+8]
		cmp     word [NoSplit eax*2+___24f27ch], byte 0ffffh
		je      ___72801h
		imul    eax, [esp+8], byte 22h
		mov     byte [eax+___24ea9dh], 1
___72801h:
		xor     ecx, ecx
		mov     [esp+4], ecx
		mov     ch, 0ffh
		xor     esi, esi
		xor     cl, cl
___7280dh:
		cmp     dword [esp+4], byte 0
		jne     ___728f8h
		test    si, si
		je      ___728f8h
		mov     edx, esi
		dec     edx
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f27ch], dx
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9a4h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		add     eax, [esp+4]
		xor     bh, bh
		mov     bl, [eax+20h]
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9b8h]
		and     eax, 0ffffh
		add     bx, [edx+eax*2]
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f23ch], bx
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9b0h]
		mov     edx, [edx+eax]
		mov     dl, [edx+0ch]
		mov     ebx, [esp+8]
		mov     [ebx+___24f19ch], dl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f23ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0fh]
		mov     edx, [esp+8]
		mov     [edx+___24f17ch], al
		imul    eax, [esp+8], byte 22h
		xor     edx, edx
		mov     ebx, 22h
		add     eax, ___24ea7ch
		call    memset__clib3r
___728f8h:
		mov     edi, [esp+4]
		test    edi, edi
		je      ___729b5h
		test    si, si
		jne     ___729b5h
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		mov     eax, [eax+0dh]
		sar     eax, 18h
		lea     ebp, [edi+eax]
		mov     [esp+4], ebp
		cmp     ebp, byte 1
		jge     ___7295ah
		mov     dword [esp+4], 1
___7295ah:
		cmp     dword [esp+4], byte 76h
		jle     ___72969h
		mov     dword [esp+4], 76h
___72969h:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     edx, [edx+eax*4]
		xor     eax, eax
		mov     edx, [edx+0ah]
		mov     al, [esp+4]
		sar     edx, 18h
		call    ___71ab0h
		mov     edx, [esp+8]
		mov     [edx*4+___24f1bch], eax
		imul    eax, [esp+8], byte 22h
		mov     ebx, 22h
		xor     edx, edx
		add     eax, ___24ea7ch
		call    memset__clib3r
___729b5h:
		cmp     dword [esp+4], byte 0
		je      ___72b15h
		test    si, si
		je      ___72b15h
		dec     esi
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f27ch], si
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9a4h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		add     eax, [esp+4]
		xor     bh, bh
		mov     bl, [eax+20h]
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9b8h]
		and     eax, 0ffffh
		add     bx, [edx+eax*2]
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f23ch], bx
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		mov     eax, [eax+0dh]
		mov     ebx, [esp+4]
		sar     eax, 18h
		add     ebx, eax
		mov     [esp+4], ebx
		cmp     ebx, byte 1
		jge     ___72a70h
		mov     dword [esp+4], 1
___72a70h:
		cmp     dword [esp+4], byte 76h
		jle     ___72a7fh
		mov     dword [esp+4], 76h
___72a7fh:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9b0h]
		mov     ebx, [edx+eax]
		mov     bl, [ebx+0ch]
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], bl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f23ch]
		and     edx, 0ffffh
		mov     ebx, [eax+edx*4]
		mov     bl, [ebx+0fh]
		mov     edx, [esp+8]
		mov     [edx+___24f17ch], bl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f23ch]
		and     edx, 0ffffh
		mov     edx, [eax+edx*4]
		xor     eax, eax
		mov     edx, [edx+0ah]
		mov     al, [esp+4]
		sar     edx, 18h
		call    ___71ab0h
		mov     edx, [esp+8]
		mov     [edx*4+___24f1bch], eax
		imul    eax, [esp+8], byte 22h
		mov     ebx, 22h
		add     eax, ___24ea7ch
		xor     edx, edx
		call    memset__clib3r
___72b15h:
		mov     al, [esp+0ch]
		cmp     al, 10h
		jb      ___72b42h
		cmp     al, 50h
		ja      ___72b42h
		mov     eax, [esp+8]
		mov     dl, [esp+0ch]
		sub     dl, 10h
		mov     [eax+___24f19ch], dl
		xor     dl, dl
		mov     [esp+0ch], dl
		mov     eax, [esp+8]
		mov     [eax+___24f15ch], dl
___72b42h:
		xor     eax, eax
		mov     al, [esp+0ch]
		sar     eax, 4
		sub     eax, byte 6
		cmp     eax, byte 8
		ja      ___72cc7h
		jmp     dword [cs:eax*4+___71c0ch]
___72b5fh:
		mov     eax, [esp+8]
		mov     dl, [esp+0ch]
		xor     ebx, ebx
		and     dl, 0fh
		mov     bl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, dl
		cmp     ebx, eax
		jl      ___72b86h
		mov     eax, [esp+8]
		sub     [eax+___24f19ch], dl
		jmp     ___72b92h
___72b86h:
		mov     eax, [esp+8]
		xor     dh, dh
		mov     [eax+___24f19ch], dh
___72b92h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		mov     eax, [esp+8]
		xor     bh, bh
		mov     [eax+___24f15ch], bh
		jmp     ___72cc7h
___72bc7h:
		mov     dl, [esp+0ch]
		and     dl, 0fh
		mov     eax, [esp+8]
		add     [eax+___24f19ch], dl
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___72bf0h
		mov     eax, [esp+8]
		mov     byte [eax+___24f19ch], 40h
___72bf0h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		mov     eax, [esp+8]
		xor     dl, dl
		mov     [eax+___24f15ch], dl
		jmp     ___72cc7h
___72c25h:
		mov     eax, [esp+8]
		mov     dh, [eax+___24ef7ch]
		and     dh, 0fh
		mov     dl, [esp+0ch]
		and     dl, 0fh
		shl     dl, 4
		mov     eax, [esp+8]
		or      dh, dl
		mov     [eax+___24ef7ch], dh
		mov     eax, [esp+8]
		xor     dl, dl
		mov     [eax+___24f15ch], dl
		jmp     ___72cc7h
___72c56h:
		mov     bh, [esp+0ch]
		test    bh, 0fh
		je      ___72c97h
		mov     eax, [esp+8]
		mov     ah, [eax+___24ef7ch]
		mov     dl, ah
		mov     al, bh
		and     dl, 0f0h
		and     al, 0fh
		or      dl, al
		mov     eax, [esp+8]
		or      [eax+___24ef7ch], dl
		mov     eax, [esp+8]
		test    byte [eax+___24ef5ch], 4
		je      ___72c97h
		mov     eax, [esp+8]
		xor     bh, bh
		mov     [eax+___24ef9ch], bh
___72c97h:
		mov     eax, [esp+8]
		mov     dl, [esp+0ch]
		mov     [eax+___24f15ch], dl
		jmp     ___72cc7h
___72ca7h:
		mov     al, [esp+0ch]
		and     al, 0fh
		mov     ah, 11h
		mul     ah
		mov     edx, [esp+8]
		mov     [edx+___24f17ch], al
		mov     eax, [esp+8]
		xor     bl, bl
		mov     [eax+___24f15ch], bl
___72cc7h:
		cmp     ch, 21h
		ja      ___73397h
		xor     eax, eax
		mov     al, ch
		jmp     dword [cs:eax*4+___71c30h]
___72cdch:
		test    cl, cl
		jne     ___72ceah
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
___72ceah:
		cmp     dword [esp+4], byte 0
		jne     ___72d04h
		mov     eax, [esp+8]
		mov     al, [eax+___24f0dch]
		and     eax, 0ffh
		mov     [esp+4], eax
___72d04h:
		mov     eax, [esp+8]
		xor     dh, dh
		mov     [eax+___24f0fch], dh
		mov     eax, [esp+8]
		mov     dl, [esp+4]
		mov     [eax+___24f0dch], dl
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		mov     ebx, [eax+0dh]
		sar     ebx, 18h
		mov     eax, [esp+8]
		mov     al, [eax+___24f0dch]
		and     eax, 0ffh
		add     ebx, eax
		xor     eax, eax
		mov     al, cl
		sar     eax, 4
		add     eax, ebx
		shl     eax, 8
		mov     ebx, [esp+8]
		mov     [NoSplit ebx*2+___24f09ch], ax
		mov     eax, [esp+8]
		mov     ebx, [esp+8]
		mov     bx, [NoSplit ebx*2+___24f23ch]
		and     ebx, 0ffffh
		mov     edx, [edx+ebx*4]
		movsx   bx, byte [edx+10h]
		mov     edx, [esp+8]
		mov     dl, [edx+___24f0dch]
		xor     dh, dh
		add     ebx, edx
		mov     dl, cl
		and     dl, 0fh
		mov     di, [NoSplit eax*2+___24f09ch]
		add     edx, ebx
		add     edi, edx
		mov     [NoSplit eax*2+___24f09ch], di
		jmp     ___73397h
___72db1h:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___72dc8h:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___72ddfh:
		test    cl, cl
		jne     ___72defh
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___72e08h
___72defh:
		mov     eax, [esp+8]
		test    byte [eax+___24ef5ch], 4
		je      ___72e08h
		mov     eax, [esp+8]
		xor     dl, dl
		mov     [eax+___24ef9ch], dl
___72e08h:
		mov     eax, [esp+8]
		mov     [eax+___24ef7ch], cl
		jmp     ___73397h
___72e17h:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___72e2eh:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___72e45h:
		test    cl, cl
		jne     ___72e55h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___72e6eh
___72e55h:
		mov     eax, [esp+8]
		test    byte [eax+___24eefch], 4
		je      ___72e6eh
		mov     eax, [esp+8]
		xor     bl, bl
		mov     [eax+___24ef3ch], bl
___72e6eh:
		mov     eax, [esp+8]
		mov     [eax+___24ef1ch], cl
		jmp     ___73397h
___72e7dh:
		mov     eax, [esp+8]
		mov     [eax+___24f17ch], cl
		jmp     ___73393h
___72e8ch:
		test    cl, cl
		jne     ___72e9ah
		mov     ecx, [esp+8]
		mov     cl, [ecx+___24f11ch]
___72e9ah:
		xor     eax, eax
		mov     al, cl
		shl     eax, 8
		mov     edx, [esp+8]
		mov     [edx*4+___68910h], eax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     ch, 0ffh
		mov     [NoSplit edx*2+___688d0h], ax
		jmp     ___73395h
___72ecch:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___72ee3h:
		mov     [___19a68dh], cl
		mov     dl, 1
		mov     ch, 0ffh
		mov     [___24f2c5h], dl
		jmp     ___73395h
___72ef8h:
		mov     eax, [esp+8]
		mov     [eax+___24f19ch], cl
		jmp     ___73393h
___72f07h:
		mov     byte [___24f2c5h], 1
		mov     al, cl
		and     al, 0fh
		cmp     al, 9
		jbe     ___72f19h
		add     cl, 6
___72f19h:
		xor     eax, eax
		mov     al, cl
		sar     eax, 4
		imul    edx, eax, byte 0ah
		mov     al, cl
		and     al, 0fh
		and     eax, 0ffh
		add     eax, edx
		mov     cl, al
		mov     ch, 0ffh
		mov     [___24f2c4h], al
		xor     cl, al
		jmp     ___73397h
___72f3eh:
		xor     eax, eax
		mov     al, cl
		sar     eax, 4
		dec     eax
		cmp     eax, byte 0dh
		ja      ___73397h
		jmp     dword [cs:eax*4+___71cb8h]
___72f57h:
		test    cl, cl
		jne     ___72f6dh
		mov     eax, [esp+8]
		mov     al, [eax+___24f11ch]
		mov     cl, al
		and     cl, 0fh
		or      cl, 0e0h
___72f6dh:
		mov     al, cl
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		shl     edx, 2
		mov     ecx, [esp+8]
		lea     ebx, [edx+1]
		mov     eax, [esp+8]
		mov     esi, [ecx*4+___24f1bch]
		shl     eax, 2
		cmp     ebx, esi
		jg      ___7333ah
		sub     [eax+___24f1bch], edx
		jmp     ___73393h
___72fa0h:
		test    cl, cl
		jne     ___72fb6h
		mov     eax, [esp+8]
		mov     al, [eax+___24f11ch]
		mov     cl, al
		and     cl, 0fh
		or      cl, 0e0h
___72fb6h:
		mov     al, cl
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		mov     ebx, 0f0400h
		shl     edx, 2
		sub     ebx, edx
		mov     ecx, [esp+8]
		mov     eax, [esp+8]
		mov     esi, [ecx*4+___24f1bch]
		shl     eax, 2
		cmp     ebx, esi
		jl      ___72fe9h
		add     [eax+___24f1bch], edx
		jmp     ___73393h
___72fe9h:
		mov     dword [eax+___24f1bch], 0f0400h
		jmp     ___73393h
___72ff8h:
		test    cl, 0fh
		setnz   al
		and     eax, 0ffh
		mov     ch, 0ffh
		mov     [___24f2bdh], al
		jmp     ___73395h
___7300fh:
		mov     eax, [esp+8]
		and     cl, 7
		mov     [eax+___24ef5ch], cl
		jmp     ___73393h
___73021h:
		mov     al, cl
		and     al, 0fh
		mov     ch, 0ffh
		shl     al, 4
		xor     cl, cl
		mov     [___24f2bch], al
		jmp     ___73397h
___73036h:
		test    cl, 0fh
		jne     ___73057h
		cmp     byte [___24f2beh], 0
		jne     ___73393h
		mov     al, [___24e9d6h]
		mov     [___24f2c0h], al
		jmp     ___73393h
___73057h:
		cmp     byte [___24f2beh], 0
		jne     ___7308ch
		mov     bh, 1
		mov     al, [___24f2c0h]
		and     cl, 0fh
		mov     [___24f2beh], bh
		mov     [___24f2c4h], al
		mov     [___24f2c5h], bh
		mov     [___24f2c6h], bh
		mov     [___24f2bfh], cl
		jmp     ___73393h
___7308ch:
		mov     al, [___24f2bfh]
		dec     al
		mov     [___24f2bfh], al
		je      ___730b7h
		mov     al, [___24f2c0h]
		mov     dh, 1
		mov     [___24f2c4h], al
		mov     [___24f2c5h], dh
		mov     [___24f2c6h], dh
		jmp     ___73393h
___730b7h:
		mov     [___24f2beh], al
		jmp     ___73393h
___730c1h:
		mov     eax, [esp+8]
		and     cl, 7
		mov     [eax+___24eefch], cl
		jmp     ___73393h
___730d3h:
		mov     dl, cl
		and     dl, 0fh
		mov     eax, [esp+8]
		add     [eax+___24f19ch], dl
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___730fah
		mov     eax, [esp+8]
		mov     byte [eax+___24f19ch], 40h
___730fah:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		jmp     ___73397h
___73123h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		mov     al, cl
		and     al, 0fh
		and     eax, 0ffh
		cmp     edx, eax
		jl      ___7314dh
		mov     dl, cl
		and     dl, 0fh
		mov     eax, [esp+8]
		sub     [eax+___24f19ch], dl
		jmp     ___73159h
___7314dh:
		mov     eax, [esp+8]
		xor     bl, bl
		mov     [eax+___24f19ch], bl
___73159h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		jmp     ___73397h
___73182h:
		mov     eax, [esp+8]
		mov     dl, cl
		and     dl, 0fh
		mov     [eax+___24f0fch], dl
		jmp     ___73397h
___73196h:
		mov     al, cl
		and     al, 0fh
		inc     al
		mov     [___24f2c1h], al
		jmp     ___73397h
___731a6h:
		cmp     cl, 20h
		jb      ___731cch
		mov     eax, 7a12h
		xor     ebx, ebx
		mov     edx, eax
		mov     bl, cl
		sar     edx, 1fh
		idiv    ebx
		mov     [___24e9d9h], cl
		mov     [___68c40h], ax
		jmp     ___73393h
___731cch:
		test    cl, cl
		je      ___73393h
		mov     [___24e9d8h], cl
		jmp     ___73393h
___731dfh:
		cmp     cl, 40h
		ja      ___731eah
		xor     eax, eax
		mov     al, cl
		jmp     ___731efh
___731eah:
		mov     eax, 40h
___731efh:
		mov     [___24e9d7h], al
		mov     eax, [___24e9b4h]
		xor     ecx, ecx
		test    eax, eax
		jle     ___73393h
		xor     eax, eax
___73205h:
		xor     edx, edx
		xor     ebx, ebx
		mov     dl, [___24e9d7h]
		mov     bl, [ecx+___24f19ch]
		imul    edx, ebx
		shl     edx, 4
		inc     ecx
		mov     [eax+___68a10h], edx
		mov     edx, [___24e9b4h]
		add     eax, byte 4
		cmp     ecx, edx
		jl      ___73205h
		jmp     ___73393h
___73234h:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___7324bh:
		imul    eax, [esp+8], byte 22h
		mov     ebx, 22h
		xor     edx, edx
		add     eax, ___24ea7ch
		call    memset__clib3r
		xor     eax, eax
		mov     al, cl
		imul    edx, [esp+8], byte 22h
		mov     [edx+___24ea84h], eax
		imul    edx, [esp+8], byte 22h
		mov     ch, 0ffh
		xor     cl, cl
		mov     [edx+___24ea94h], eax
		jmp     ___73397h
___73284h:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___7329bh:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		jmp     ___73397h
___732b2h:
		test    cl, cl
		jne     ___73397h
		mov     eax, [esp+8]
		mov     cl, [eax+___24f11ch]
		mov     eax, [esp+8]
		xor     dl, dl
		mov     [eax+___24eedch], dl
		mov     eax, [esp+8]
		mov     [eax+___24eebch], dl
		jmp     ___73397h
___732dfh:
		xor     eax, eax
		mov     al, cl
		sar     eax, 4
		cmp     eax, byte 1
		jb      ___73393h
		jbe     ___732fbh
		cmp     eax, byte 2
		je      ___73346h
		jmp     ___73393h
___732fbh:
		test    cl, cl
		jne     ___73311h
		mov     eax, [esp+8]
		mov     al, [eax+___24f11ch]
		mov     cl, al
		and     cl, 0fh
		or      cl, 10h
___73311h:
		mov     esi, [esp+8]
		mov     al, cl
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		lea     ebx, [edx+1]
		mov     eax, [esp+8]
		mov     ebp, [esi*4+___24f1bch]
		shl     eax, 2
		cmp     ebx, ebp
		jg      ___7333ah
		sub     [eax+___24f1bch], edx
		jmp     ___73393h
___7333ah:
		mov     dword [eax+___24f1bch], 1
		jmp     ___73393h
___73346h:
		test    cl, cl
		jne     ___7335ch
		mov     eax, [esp+8]
		mov     al, [eax+___24f11ch]
		mov     cl, al
		and     cl, 0fh
		or      cl, 20h
___7335ch:
		mov     esi, [esp+8]
		mov     al, cl
		xor     edx, edx
		and     al, 0fh
		mov     ebx, 0f0400h
		mov     dl, al
		sub     ebx, edx
		mov     eax, [esp+8]
		mov     ecx, [esi*4+___24f1bch]
		shl     eax, 2
		cmp     ebx, ecx
		jl      ___73389h
		add     [eax+___24f1bch], edx
		jmp     ___73393h
___73389h:
		mov     dword [eax+___24f1bch], 0f0400h
___73393h:
		mov     ch, 0ffh
___73395h:
		xor     cl, cl
___73397h:
		mov     eax, [esp+8]
		mov     [eax+___24f13ch], ch
		mov     eax, [esp+8]
		mov     bl, [___24f2bch]
		mov     [eax+___24f11ch], cl
		test    bl, bl
		jne     ___733d2h
		mov     eax, [esp+8]
		mov     eax, [eax*4+___24f1bch]
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		jmp     ___733feh
___733d2h:
		xor     eax, eax
		mov     edx, [___24f2b9h]
		mov     al, [esp+4]
		sar     edx, 18h
		call    ___71ab0h
		call    ___71b70h
		mov     edx, [esp+8]
		xor     bh, bh
		mov     [edx*4+___68990h], eax
		mov     [___24f2bch], bh
___733feh:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    edx, eax
		shl     edx, 4
		mov     eax, [esp+8]
		mov     [eax*4+___68a10h], edx
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		shl     eax, 8
		mov     edx, [esp+8]
		mov     [edx*4+___68a90h], eax
		inc     dword [esp+8]
		mov     eax, [esp+8]
		cmp     eax, [___24e9b4h]
		jl      ___72292h
___73453h:
		mov     al, [___24e9d6h]
		inc     byte [___24e9d6h]
		mov     al, [___24e9d6h]
		cmp     al, [___24f2c3h]
		jb      ___73472h
		mov     byte [___24f2c5h], 1
___73472h:
		mov     dh, [___24f2c1h]
		mov     al, [___24e9d8h]
		mul     dh
		mov     [___24f2c2h], al
___73484h:
		xor     ebx, ebx
		mov     [esp+8], ebx
		mov     eax, [esp+8]
		cmp     eax, [___24e9b4h]
		jge     ___734c0h
		mov     edx, 0ffffffffh
		mov     edi, [___24e9b4h]
___734a1h:
		mov     eax, [esp+8]
		mov     [eax+___24ea5ch], dl
		mov     eax, [esp+8]
		mov     [eax*4+___24e9dch], edx
		inc     dword [esp+8]
		cmp     edi, [esp+8]
		jg      ___734a1h
___734c0h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24f2c1h]
		mov     dl, [___24e9d8h]
		imul    eax, edx
		xor     edx, edx
		mov     dl, [___24f2c2h]
		cmp     edx, eax
		je      ___74b7ah
		xor     ebp, ebp
		mov     [esp+8], ebp
		mov     eax, [esp+8]
		cmp     eax, [___24e9b4h]
		jge     ___74b7ah
___734f8h:
		mov     eax, [esp+8]
		mov     al, [eax+___24f15ch]
		and     eax, 0ffh
		sar     eax, 4
		sub     eax, byte 6
		cmp     eax, byte 9
		ja      ___73903h
		jmp     dword [cs:eax*4+___71cf0h]
___7351eh:
		mov     eax, [esp+8]
		mov     al, [eax+___24f15ch]
		xor     ebx, ebx
		and     al, 0fh
		mov     bl, al
		mov     edx, [esp+8]
		mov     dl, [edx+___24f19ch]
		and     edx, 0ffh
		cmp     edx, ebx
		jl      ___7354eh
		mov     edx, [esp+8]
		sub     [edx+___24f19ch], al
		jmp     ___7355ah
___7354eh:
		mov     eax, [esp+8]
		xor     cl, cl
		mov     [eax+___24f19ch], cl
___7355ah:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		jmp     ___73903h
___73583h:
		mov     eax, [esp+8]
		mov     dl, [eax+___24f15ch]
		and     dl, 0fh
		mov     eax, [esp+8]
		add     [eax+___24f19ch], dl
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___735b2h
		mov     eax, [esp+8]
		mov     byte [eax+___24f19ch], 40h
___735b2h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		jmp     ___73903h
___735dbh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef5ch]
		and     al, 3
		cmp     al, 3
		ja      ___736a3h
		and     eax, 0ffh
		jmp     dword [cs:eax*4+___71d18h]
___735fch:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		mov     edx, [NoSplit eax*2+___19a692h]
		sar     edx, 10h
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 6
		jmp     ___736a0h
___7362eh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		mov     edx, 20h
		and     eax, 0ffh
		sub     edx, eax
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 3
		jmp     ___736a0h
___7365dh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		cmp     word [NoSplit eax*2+___19a694h], byte 0
		jl      ___7368ah
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		jmp     ___7369dh
___7368ah:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		neg     eax
___7369dh:
		shl     eax, 2
___736a0h:
		mov     [esp], eax
___736a3h:
		mov     cl, [___24e9d8h]
		cmp     cl, [___24f2c2h]
		je      ___736f9h
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		mov     edx, eax
		and     edx, 0ffh
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24ef9ch], al
		mov     eax, [esp+8]
		cmp     byte [eax+___24ef9ch], 40h
		jb      ___736f9h
		mov     eax, [esp+8]
		sub     byte [eax+___24ef9ch], 40h
___736f9h:
		mov     eax, [esp+8]
		mov     edi, [esp]
		mov     eax, [eax*4+___24f1bch]
		add     eax, edi
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		mov     eax, [esp+8]
		mov     eax, [eax*4+___24f1bch]
		add     eax, edi
		mov     edx, [esp+8]
		mov     [edx*4+___24e9dch], eax
		jmp     ___73903h
___73736h:
		mov     eax, [esp+8]
		mov     dl, [eax+___24f15ch]
		xor     ebx, ebx
		and     dl, 0fh
		mov     bl, dl
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		cmp     eax, ebx
		jl      ___73766h
		mov     eax, [esp+8]
		sub     [eax+___24f17ch], dl
		jmp     ___73772h
___73766h:
		mov     eax, [esp+8]
		xor     bl, dl
		mov     [eax+___24f17ch], bl
___73772h:
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		shl     eax, 8
		mov     edx, [esp+8]
		mov     [edx*4+___68a90h], eax
		jmp     ___73903h
___73794h:
		mov     eax, [esp+8]
		mov     dl, [eax+___24f15ch]
		and     dl, 0fh
		xor     eax, eax
		mov     ebx, 0ffh
		mov     al, dl
		sub     ebx, eax
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		cmp     eax, ebx
		jg      ___737cbh
		mov     eax, [esp+8]
		add     [eax+___24f17ch], dl
		jmp     ___737d6h
___737cbh:
		mov     eax, [esp+8]
		mov     byte [eax+___24f17ch], 0ffh
___737d6h:
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		shl     eax, 8
		mov     edx, [esp+8]
		mov     [edx*4+___68a90h], eax
		jmp     ___73903h
___737f8h:
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24efdch]
		cmp     eax, [edx*4+___24f1bch]
		je      ___73903h
		mov     eax, [esp+8]
		mov     al, [eax+___24f15ch]
		and     al, 0fh
		mov     edx, [esp+8]
		mov     ah, al
		shl     ah, 4
		mov     [edx+___24efbch], ah
		mov     ebx, [esp+8]
		mov     edx, [esp+8]
		mov     ebx, [ebx*4+___24efdch]
		cmp     ebx, [edx*4+___24f1bch]
		jle     ___7388ch
		mov     edx, [esp+8]
		and     eax, 0ffh
		mov     ecx, [edx*4+___24f1bch]
		shl     eax, 6
		add     ecx, eax
		mov     [edx*4+___24f1bch], ecx
		mov     edx, [esp+8]
		mov     eax, [esp+8]
		mov     edx, [edx*4+___24f1bch]
		cmp     edx, [eax*4+___24efdch]
		jle     ___738cfh
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24efdch]
		jmp     ___738c8h
___7388ch:
		xor     edx, edx
		mov     dl, al
		shl     edx, 6
		mov     eax, [esp+8]
		mov     ecx, [eax*4+___24efdch]
		add     ecx, edx
		mov     ebx, [esp+8]
		mov     eax, [esp+8]
		mov     ebp, [ebx*4+___24f1bch]
		shl     eax, 2
		cmp     ecx, ebp
		jg      ___738beh
		sub     [eax+___24f1bch], edx
		jmp     ___738cfh
___738beh:
		mov     edx, [esp+8]
		mov     eax, [eax+___24efdch]
___738c8h:
		mov     [edx*4+___24f1bch], eax
___738cfh:
		mov     eax, [esp+8]
		mov     cl, [___24f2bdh]
		shl     eax, 2
		test    cl, cl
		jne     ___738e8h
		mov     eax, [eax+___24f1bch]
		jmp     ___738f3h
___738e8h:
		mov     eax, [eax+___24f1bch]
		call    ___71bfch
___738f3h:
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
___73903h:
		mov     eax, [esp+8]
		mov     ah, [eax+___24f13ch]
		mov     ebx, [esp+8]
		mov     al, ah
		mov     bl, [ebx+___24f11ch]
		cmp     ah, 6
		jb      ___7397dh
		jbe     ___73f49h
		cmp     ah, 11h
		jb      ___73956h
		jbe     ___74707h
		cmp     ah, 1bh
		jb      ___73948h
		jbe     ___74842h
		cmp     ah, 1dh
		je      ___74abbh
		jmp     ___74b66h
___73948h:
		cmp     ah, 19h
		je      ___74793h
		jmp     ___74b66h
___73956h:
		cmp     ah, 0ah
		jb      ___7396fh
		jbe     ___7429fh
		cmp     ah, 0eh
		je      ___74335h
		jmp     ___74b66h
___7396fh:
		cmp     ah, 7
		je      ___7412ch
		jmp     ___74b66h
___7397dh:
		cmp     ah, 2
		jb      ___7399ch
		jbe     ___73afdh
		cmp     ah, 4
		jb      ___73b5dh
		jbe     ___73c52h
		jmp     ___73da1h
___7399ch:
		test    ah, ah
		ja      ___73a9ah
		mov     eax, [esp+8]
		mov     al, [eax+___24f0fch]
		cmp     al, 1
		jb      ___739bah
		jbe     ___739deh
		cmp     al, 2
		je      ___73a03h
		jmp     ___73a26h
___739bah:
		test    al, al
		jne     ___73a26h
		mov     eax, [esp+8]
		mov     al, [eax+___24f0dch]
		and     eax, 0ffh
		mov     [esp+4], eax
		mov     eax, [esp+8]
		mov     byte [eax+___24f0fch], 1
		jmp     ___73a26h
___739deh:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f09ch]
		and     eax, 0ffffh
		sar     eax, 8
		mov     [esp+4], eax
		mov     eax, [esp+8]
		mov     byte [eax+___24f0fch], 2
		jmp     ___73a26h
___73a03h:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f09ch]
		xor     ah, ah
		and     eax, 0ffffh
		mov     [esp+4], eax
		mov     eax, [esp+8]
		xor     bh, bh
		mov     [eax+___24f0fch], bh
___73a26h:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		xor     ebx, ebx
		mov     edx, [edx+eax*4]
		mov     bl, [esp+4]
		mov     edx, [edx+0ah]
		mov     eax, ebx
		sar     edx, 18h
		call    ___71ab0h
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     edx, [edx+eax*4]
		mov     edx, [edx+0ah]
		mov     eax, ebx
		sar     edx, 18h
		call    ___71ab0h
		mov     edx, [esp+8]
		mov     [edx*4+___24e9dch], eax
		jmp     ___74b66h
___73a9ah:
		mov     edx, [esp+8]
		xor     eax, eax
		mov     al, bl
		shl     eax, 2
		mov     ecx, [edx*4+___24f1bch]
		inc     eax
		cmp     eax, ecx
		jg      ___73aceh
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, bl
		mov     edi, [eax*4+___24f1bch]
		shl     edx, 2
		sub     edi, edx
		mov     [eax*4+___24f1bch], edi
		jmp     ___73addh
___73aceh:
		mov     eax, [esp+8]
		mov     dword [eax*4+___24f1bch], 1
___73addh:
		mov     eax, [esp+8]
		mov     eax, [eax*4+___24f1bch]
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		jmp     ___74b66h
___73afdh:
		mov     edx, [esp+8]
		xor     eax, eax
		mov     al, bl
		mov     ecx, 0f0400h
		shl     eax, 2
		mov     edi, [edx*4+___24f1bch]
		sub     ecx, eax
		cmp     ecx, edi
		jl      ___73b2eh
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, bl
		shl     edx, 2
		add     [eax*4+___24f1bch], edx
		jmp     ___73b3dh
___73b2eh:
		mov     eax, [esp+8]
		mov     dword [eax*4+___24f1bch], 0f0400h
___73b3dh:
		mov     eax, [esp+8]
		mov     eax, [eax*4+___24f1bch]
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		jmp     ___74b66h
___73b5dh:
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24efdch]
		cmp     eax, [edx*4+___24f1bch]
		je      ___74b66h
		xor     eax, eax
		mov     al, bl
		shl     eax, 2
		mov     edx, [esp+8]
		mov     [edx+___24efbch], bl
		mov     edx, [esp+8]
		mov     ebx, [esp+8]
		mov     edx, [edx*4+___24efdch]
		cmp     edx, [ebx*4+___24f1bch]
		jle     ___73bc9h
		mov     edx, [esp+8]
		mov     edx, [edx*4+___24f1bch]
		add     edx, eax
		mov     ebx, [esp+8]
		cmp     edx, [ebx*4+___24efdch]
		jge     ___73bf0h
		mov     edx, [esp+8]
		add     [edx*4+___24f1bch], eax
		jmp     ___73c06h
___73bc9h:
		mov     edx, [esp+8]
		mov     edx, [edx*4+___24f1bch]
		sub     edx, eax
		mov     ebx, [esp+8]
		cmp     edx, [ebx*4+___24efdch]
		jle     ___73bf0h
		mov     edx, [esp+8]
		sub     [edx*4+___24f1bch], eax
		jmp     ___73c06h
___73bf0h:
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24efdch]
		mov     [edx*4+___24f1bch], eax
___73c06h:
		mov     eax, [esp+8]
		mov     bl, [___24f2bdh]
		shl     eax, 2
		test    bl, bl
		jne     ___73c32h
		mov     eax, [eax+___24f1bch]
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		jmp     ___74b66h
___73c32h:
		mov     eax, [eax+___24f1bch]
		call    ___71bfch
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		jmp     ___74b66h
___73c52h:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef5ch]
		and     al, 3
		cmp     al, 3
		ja      ___73d1fh
		and     eax, 0ffh
		jmp     dword [cs:eax*4+___71d28h]
___73c73h:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		mov     edx, [NoSplit eax*2+___19a692h]
		sar     edx, 10h
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    edx, eax
		sar     edx, 6
		mov     [esp], edx
		jmp     ___73d1fh
___73cabh:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24ef9ch]
		mov     eax, 20h
		sub     eax, edx
		mov     edx, eax
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 3
		jmp     ___73d1ch
___73cd9h:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		cmp     word [NoSplit eax*2+___19a694h], byte 0
		jl      ___73d06h
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		jmp     ___73d19h
___73d06h:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		neg     eax
___73d19h:
		shl     eax, 2
___73d1ch:
		mov     [esp], eax
___73d1fh:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24ef7ch]
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24ef9ch], al
		mov     eax, [esp+8]
		cmp     byte [eax+___24ef9ch], 40h
		jb      ___73d61h
		mov     eax, [esp+8]
		sub     byte [eax+___24ef9ch], 40h
___73d61h:
		mov     eax, [esp+8]
		mov     edx, [esp]
		mov     eax, [eax*4+___24f1bch]
		add     eax, edx
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		mov     eax, [esp+8]
		mov     ebx, [esp]
		mov     edx, [eax*4+___24f1bch]
		add     edx, ebx
		mov     eax, [esp+8]
		mov     [eax*4+___24e9dch], edx
		jmp     ___74b66h
___73da1h:
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24efdch]
		cmp     eax, [edx*4+___24f1bch]
		je      ___73eb5h
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24efdch]
		cmp     eax, [edx*4+___24f1bch]
		jle     ___73e16h
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     dl, [edx+___24efbch]
		and     edx, 0ffh
		mov     edi, [eax*4+___24f1bch]
		shl     edx, 2
		add     edi, edx
		mov     [eax*4+___24f1bch], edi
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24f1bch]
		cmp     eax, [edx*4+___24efdch]
		jle     ___73e81h
		jmp     ___73e6bh
___73e16h:
		mov     eax, [esp+8]
		mov     al, [eax+___24efbch]
		and     eax, 0ffh
		shl     eax, 2
		mov     edx, [esp+8]
		mov     edx, [edx*4+___24efdch]
		add     edx, eax
		mov     eax, [esp+8]
		cmp     edx, [eax*4+___24f1bch]
		jg      ___73e6bh
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     dl, [edx+___24efbch]
		and     edx, 0ffh
		mov     esi, [eax*4+___24f1bch]
		shl     edx, 2
		sub     esi, edx
		mov     [eax*4+___24f1bch], esi
		jmp     ___73e81h
___73e6bh:
		mov     eax, [esp+8]
		mov     edx, [esp+8]
		mov     eax, [eax*4+___24efdch]
		mov     [edx*4+___24f1bch], eax
___73e81h:
		mov     eax, [esp+8]
		mov     dl, [___24f2bdh]
		shl     eax, 2
		test    dl, dl
		jne     ___73e9ah
		mov     eax, [eax+___24f1bch]
		jmp     ___73ea5h
___73e9ah:
		mov     eax, [eax+___24f1bch]
		call    ___71bfch
___73ea5h:
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
___73eb5h:
		xor     edx, edx
		mov     dl, bl
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24f19ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], al
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___73eefh
		mov     eax, [esp+8]
		mov     byte [eax+___24f19ch], 40h
___73eefh:
		mov     eax, [esp+8]
		mov     dl, bl
		xor     ecx, ecx
		and     dl, 0fh
		mov     cl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, dl
		cmp     ecx, eax
		jl      ___73f14h
		mov     eax, [esp+8]
		sub     [eax+___24f19ch], dl
		jmp     ___73f20h
___73f14h:
		mov     eax, [esp+8]
		xor     cl, cl
		mov     [eax+___24f19ch], cl
___73f20h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    edx, eax
		shl     edx, 4
		mov     eax, [esp+8]
		mov     [eax*4+___68a10h], edx
		jmp     ___74b66h
___73f49h:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef5ch]
		and     al, 3
		cmp     al, 3
		ja      ___74011h
		and     eax, 0ffh
		jmp     dword [cs:eax*4+___71d38h]
___73f6ah:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		mov     edx, [NoSplit eax*2+___19a692h]
		sar     edx, 10h
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 6
		jmp     ___7400eh
___73f9ch:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		mov     edx, 20h
		and     eax, 0ffh
		sub     edx, eax
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 3
		jmp     ___7400eh
___73fcbh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		cmp     word [NoSplit eax*2+___19a694h], byte 0
		jl      ___73ff8h
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		jmp     ___7400bh
___73ff8h:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		and     al, 0fh
		and     eax, 0ffh
		neg     eax
___7400bh:
		shl     eax, 2
___7400eh:
		mov     [esp], eax
___74011h:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef7ch]
		mov     edx, eax
		and     edx, 0ffh
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24ef9ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24ef9ch], al
		mov     eax, [esp+8]
		cmp     byte [eax+___24ef9ch], 40h
		jb      ___74059h
		mov     eax, [esp+8]
		sub     byte [eax+___24ef9ch], 40h
___74059h:
		mov     eax, [esp+8]
		mov     ecx, [esp]
		mov     eax, [eax*4+___24f1bch]
		add     eax, ecx
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
		mov     eax, [esp+8]
		mov     edx, [eax*4+___24f1bch]
		add     edx, ecx
		mov     eax, [esp+8]
		mov     [eax*4+___24e9dch], edx
		xor     edx, edx
		mov     dl, bl
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24f19ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], al
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___740cbh
		mov     eax, [esp+8]
		mov     byte [eax+___24f19ch], 40h
___740cbh:
		mov     ecx, [esp+8]
		mov     cl, [ecx+___24f19ch]
		mov     al, bl
		xor     edx, edx
		and     al, 0fh
		and     ecx, 0ffh
		mov     dl, al
		cmp     ecx, edx
		jl      ___740f3h
		mov     edx, [esp+8]
		sub     [edx+___24f19ch], al
		jmp     ___740ffh
___740f3h:
		mov     eax, [esp+8]
		xor     cl, cl
		mov     [eax+___24f19ch], cl
___740ffh:
		mov     edx, [esp+8]
		mov     dl, [edx+___24f19ch]
		xor     eax, eax
		and     edx, 0ffh
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		jmp     ___74b66h
___7412ch:
		mov     eax, [esp+8]
		mov     al, [eax+___24eefch]
		and     al, 3
		cmp     al, 3
		ja      ___741f1h
		and     eax, 0ffh
		jmp     dword [cs:eax*4+___71d48h]
___7414dh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef3ch]
		and     eax, 0ffh
		mov     edx, [NoSplit eax*2+___19a692h]
		sar     edx, 10h
		mov     eax, [esp+8]
		mov     al, [eax+___24ef1ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 8
		jmp     ___741eeh
___7417fh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef3ch]
		mov     edx, 20h
		and     eax, 0ffh
		sub     edx, eax
		mov     eax, [esp+8]
		mov     al, [eax+___24ef1ch]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 6
		jmp     ___741eeh
___741aeh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef3ch]
		and     eax, 0ffh
		cmp     word [NoSplit eax*2+___19a694h], byte 0
		jl      ___741dbh
		mov     eax, [esp+8]
		mov     al, [eax+___24ef1ch]
		and     al, 0fh
		and     eax, 0ffh
		jmp     ___741eeh
___741dbh:
		mov     eax, [esp+8]
		mov     al, [eax+___24ef1ch]
		and     al, 0fh
		and     eax, 0ffh
		neg     eax
___741eeh:
		mov     [esp], eax
___741f1h:
		mov     bl, [___24e9d8h]
		cmp     bl, [___24f2c2h]
		je      ___7423ah
		mov     eax, [esp+8]
		mov     al, [eax+___24ef1ch]
		mov     edx, eax
		and     edx, 0ffh
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24ef3ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24ef3ch], al
		mov     eax, [esp+8]
		and     byte [eax+___24ef3ch], 3fh
___7423ah:
		mov     eax, [esp+8]
		mov     al, [eax+___24f19ch]
		mov     ecx, [esp]
		and     eax, 0ffh
		add     ecx, eax
		mov     [esp], ecx
		test    ecx, ecx
		jge     ___7425ah
		xor     edi, edi
		mov     [esp], edi
___7425ah:
		cmp     dword [esp], byte 40h
		jle     ___74267h
		mov     dword [esp], 40h
___74267h:
		xor     eax, eax
		mov     edx, [esp]
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     cl, [___24e9d7h]
		mov     [edx*4+___68a10h], eax
		mov     al, [esp]
		imul    cl
		mov     edx, [esp+8]
		shl     al, 4
		mov     [edx+___24ea5ch], al
		jmp     ___74b66h
___7429fh:
		xor     eax, eax
		mov     al, bl
		mov     edx, eax
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24f19ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], al
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___742dbh
		mov     eax, [esp+8]
		mov     byte [eax+___24f19ch], 40h
___742dbh:
		mov     eax, [esp+8]
		mov     dl, bl
		xor     ecx, ecx
		and     dl, 0fh
		mov     cl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, dl
		cmp     ecx, eax
		jl      ___74300h
		mov     eax, [esp+8]
		sub     [eax+___24f19ch], dl
		jmp     ___7430ch
___74300h:
		mov     eax, [esp+8]
		xor     dl, dl
		mov     [eax+___24f19ch], dl
___7430ch:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		jmp     ___74b66h
___74335h:
		xor     eax, eax
		mov     al, bl
		sar     eax, 4
		cmp     eax, byte 0ch
		jb      ___74b66h
		jbe     ___74351h
		cmp     eax, byte 0dh
		je      ___74396h
		jmp     ___74b66h
___74351h:
		mov     eax, [esp+8]
		mov     dl, [eax+___24f0fch]
		test    dl, dl
		je      ___7436eh
		mov     eax, [esp+8]
		dec     byte [eax+___24f0fch]
		jmp     ___74b66h
___7436eh:
		mov     eax, [esp+8]
		mov     word [NoSplit eax*2+___688d0h], 0ffffh
		mov     eax, [esp+8]
		mov     byte [eax+___24f13ch], 0ffh
		mov     eax, [esp+8]
		mov     [eax+___24f11ch], dl
		jmp     ___74b66h
___74396h:
		mov     eax, [esp+8]
		cmp     byte [eax+___24f0fch], 0
		je      ___743b2h
		mov     eax, [esp+8]
		dec     byte [eax+___24f0fch]
		jmp     ___74b66h
___743b2h:
		mov     eax, [esp+8]
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f05ch]
		and     eax, 0ffffh
		sar     eax, 8
		mov     [esp+4], eax
		mov     eax, [esp+8]
		mov     cx, [NoSplit eax*2+___24f05ch]
		mov     esi, [esp+4]
		xor     ch, ch
		test    esi, esi
		jne     ___744cbh
		test    cx, cx
		je      ___744cbh
		mov     eax, ecx
		dec     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___24f27ch], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     eax, [edx+eax]
		xor     bh, bh
		mov     bl, [eax+20h]
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9b8h]
		and     eax, 0ffffh
		add     bx, [edx+eax*2]
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f23ch], bx
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		mov     al, [eax+0ch]
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], al
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		mov     al, [eax+0fh]
		mov     edx, [esp+8]
		mov     ebx, 22h
		mov     [edx+___24f17ch], al
		xor     edx, edx
		imul    eax, [esp+8], byte 22h
		mov     esi, ___24ea7ch
		add     eax, esi
		call    memset__clib3r
___744cbh:
		cmp     dword [esp+4], byte 0
		je      ___7458ah
		test    cx, cx
		jne     ___7458ah
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     eax, [edx+eax*4]
		mov     eax, [eax+0dh]
		mov     edx, [esp+4]
		sar     eax, 18h
		add     edx, eax
		mov     [esp+4], edx
		cmp     edx, byte 1
		jge     ___7452fh
		mov     dword [esp+4], 1
___7452fh:
		cmp     dword [esp+4], byte 76h
		jle     ___7453eh
		mov     dword [esp+4], 76h
___7453eh:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		mov     edx, [___24e9b0h]
		and     eax, 0ffffh
		mov     edx, [edx+eax*4]
		xor     eax, eax
		mov     edx, [edx+0ah]
		mov     al, [esp+4]
		sar     edx, 18h
		call    ___71ab0h
		mov     edx, [esp+8]
		mov     [edx*4+___24f1bch], eax
		imul    eax, [esp+8], byte 22h
		mov     ebx, 22h
		add     eax, ___24ea7ch
		xor     edx, edx
		call    memset__clib3r
___7458ah:
		mov     ebx, [esp+4]
		test    ebx, ebx
		je      ___746ebh
		test    cx, cx
		je      ___746ebh
		dec     ecx
		mov     eax, [esp+8]
		mov     [NoSplit eax*2+___24f27ch], cx
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     eax, [edx+eax]
		add     eax, ebx
		mov     esi, ebx
		xor     bh, bh
		mov     bl, [eax+20h]
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9b8h]
		and     eax, 0ffffh
		mov     ax, [edx+eax*2]
		add     eax, ebx
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___24f23ch], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9b0h]
		mov     eax, [edx+eax]
		mov     eax, [eax+0dh]
		sar     eax, 18h
		add     esi, eax
		mov     [esp+4], esi
		cmp     esi, byte 1
		jge     ___74650h
		mov     dword [esp+4], 1
___74650h:
		cmp     dword [esp+4], byte 76h
		jle     ___7465fh
		mov     dword [esp+4], 76h
___7465fh:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___24f23ch]
		mov     eax, [___24e9b0h]
		mov     ebx, [eax+edx*4]
		mov     bl, [ebx+0ch]
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], bl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f23ch]
		and     edx, 0ffffh
		mov     ebx, [eax+edx*4]
		mov     bl, [ebx+0fh]
		mov     edx, [esp+8]
		mov     [edx+___24f17ch], bl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f23ch]
		and     edx, 0ffffh
		mov     edx, [eax+edx*4]
		xor     eax, eax
		mov     edx, [edx+0ah]
		mov     al, [esp+4]
		sar     edx, 18h
		call    ___71ab0h
		mov     edx, [esp+8]
		mov     [edx*4+___24f1bch], eax
		imul    eax, [esp+8], byte 22h
		xor     edx, edx
		mov     ebx, 22h
		add     eax, ___24ea7ch
		call    memset__clib3r
___746ebh:
		mov     eax, [esp+8]
		mov     byte [eax+___24f13ch], 0ffh
		mov     eax, [esp+8]
		xor     cl, cl
		mov     [eax+___24f11ch], cl
		jmp     ___74b66h
___74707h:
		xor     eax, eax
		mov     al, bl
		mov     edx, eax
		xor     eax, eax
		sar     edx, 4
		mov     al, [___24e9d7h]
		add     eax, edx
		mov     [___24e9d7h], al
		cmp     al, 40h
		jbe     ___74729h
		mov     byte [___24e9d7h], 40h
___74729h:
		mov     al, bl
		xor     edx, edx
		xor     ebx, ebx
		and     al, 0fh
		mov     bl, [___24e9d7h]
		mov     dl, al
		cmp     ebx, edx
		jl      ___74749h
		mov     dh, bl
		sub     dh, al
		mov     [___24e9d7h], dh
		jmp     ___74751h
___74749h:
		xor     dl, al
		mov     [___24e9d7h], dl
___74751h:
		mov     ecx, [___24e9b4h]
		xor     eax, eax
		test    ecx, ecx
		jle     ___74b66h
		mov     ebp, [___24e9b4h]
		xor     ecx, ecx
___74769h:
		xor     ebx, ebx
		xor     edx, edx
		mov     bl, [___24e9d7h]
		mov     dl, [eax+___24f19ch]
		imul    edx, ebx
		add     ecx, byte 4
		shl     edx, 4
		inc     eax
		mov     [ecx+___68a0ch], edx
		cmp     eax, ebp
		jge     ___74b66h
		jmp     ___74769h
___74793h:
		mov     al, bl
		and     al, 0f0h
		and     eax, 0ffh
		mov     edx, 0ffh
		sar     eax, 4
		sub     edx, eax
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		cmp     eax, edx
		jg      ___747e5h
		mov     al, bl
		and     al, 0f0h
		mov     edx, eax
		and     edx, 0ffh
		sar     edx, 4
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		add     eax, edx
		mov     edx, [esp+8]
		mov     [edx+___24f17ch], al
		jmp     ___747f0h
___747e5h:
		mov     eax, [esp+8]
		mov     byte [eax+___24f17ch], 0ffh
___747f0h:
		mov     eax, [esp+8]
		xor     ecx, ecx
		mov     cl, [eax+___24f17ch]
		mov     al, bl
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		cmp     ecx, edx
		jl      ___74814h
		mov     edx, [esp+8]
		sub     [edx+___24f17ch], al
		jmp     ___74820h
___74814h:
		mov     eax, [esp+8]
		xor     cl, cl
		mov     [eax+___24f17ch], cl
___74820h:
		mov     eax, [esp+8]
		mov     al, [eax+___24f17ch]
		and     eax, 0ffh
		shl     eax, 8
		mov     edx, [esp+8]
		mov     [edx*4+___68a90h], eax
		jmp     ___74b66h
___74842h:
		xor     ecx, ecx
		xor     eax, eax
		mov     cl, [___24f2c1h]
		mov     al, [___24e9d8h]
		imul    ecx, eax
		movzx   esi, byte [___24f2c2h]
		mov     al, bl
		mov     edx, ecx
		and     al, 0fh
		sub     edx, esi
		movzx   edi, al
		mov     eax, edx
		sar     edx, 1fh
		idiv    edi
		test    edx, edx
		jne     ___74b66h
		cmp     ecx, esi
		je      ___74b66h
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f23ch]
		inc     eax
		mov     edx, [esp+8]
		mov     [NoSplit edx*2+___688d0h], ax
		xor     eax, eax
		mov     al, bl
		sar     eax, 4
		dec     eax
		cmp     eax, byte 0eh
		ja      ___74a92h
		jmp     dword [cs:eax*4+___71d58h]
___748afh:
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 1
		jb      ___748cbh
		mov     eax, [esp+8]
		dec     byte [eax+___24f19ch]
		jmp     ___74a92h
___748cbh:
		mov     eax, [esp+8]
		xor     dh, dh
		mov     [eax+___24f19ch], dh
		jmp     ___74a92h
___748dch:
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 2
		jb      ___748f9h
		mov     eax, [esp+8]
		sub     byte [eax+___24f19ch], 2
		jmp     ___74a92h
___748f9h:
		mov     eax, [esp+8]
		xor     cl, cl
		mov     [eax+___24f19ch], cl
		jmp     ___74a92h
___7490ah:
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 4
		jb      ___748cbh
		mov     eax, [esp+8]
		sub     byte [eax+___24f19ch], 4
		jmp     ___74a92h
___74927h:
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 8
		jb      ___748f9h
		mov     eax, [esp+8]
		sub     byte [eax+___24f19ch], 8
		jmp     ___74a92h
___74944h:
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 10h
		jb      ___748cbh
		mov     eax, [esp+8]
		sub     byte [eax+___24f19ch], 10h
		jmp     ___74a92h
___74965h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		add     edx, edx
		mov     ebx, 3
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], al
		jmp     ___74a92h
___7498eh:
		mov     eax, [esp+8]
		shr     byte [eax+___24f19ch], 1
		jmp     ___74a92h
___7499dh:
		mov     eax, [esp+8]
		inc     byte [eax+___24f19ch]
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___74a92h
		jmp     ___74a87h
___749bdh:
		mov     eax, [esp+8]
		add     byte [eax+___24f19ch], 2
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___74a92h
		jmp     ___74a87h
___749deh:
		mov     eax, [esp+8]
		add     byte [eax+___24f19ch], 4
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___74a92h
		jmp     ___74a87h
___749ffh:
		mov     eax, [esp+8]
		add     byte [eax+___24f19ch], 8
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___74a92h
		jmp     ___74a87h
___74a1dh:
		mov     eax, [esp+8]
		add     byte [eax+___24f19ch], 10h
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___74a92h
		jmp     ___74a87h
___74a37h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		lea     edx, [edx+edx*2]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     edx, [esp+8]
		mov     [edx+___24f19ch], al
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___74a92h
		jmp     ___74a87h
___74a68h:
		mov     eax, [esp+8]
		mov     bh, [eax+___24f19ch]
		add     bh, bh
		mov     [eax+___24f19ch], bh
		mov     eax, [esp+8]
		cmp     byte [eax+___24f19ch], 40h
		jbe     ___74a92h
___74a87h:
		mov     eax, [esp+8]
		mov     byte [eax+___24f19ch], 40h
___74a92h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    eax, edx
		shl     eax, 4
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
		jmp     ___74b66h
___74abbh:
		and     ebx, 0ffh
		sar     ebx, 4
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24eedch]
		lea     eax, [ebx+1]
		cmp     edx, eax
		jge     ___74b07h
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dl, [eax+___24f19ch]
		xor     eax, eax
		mov     al, [___24e9d7h]
		imul    edx, eax
		shl     edx, 4
		mov     eax, [esp+8]
		inc     byte [eax+___24eedch]
		mov     eax, [esp+8]
		mov     [eax*4+___68a10h], edx
		jmp     ___74b66h
___74b07h:
		mov     edx, [esp+8]
		mov     dl, [edx+___24eebch]
		and     edx, 0ffh
		cmp     edx, eax
		jge     ___74b66h
		mov     edx, [esp+8]
		inc     byte [edx+___24eebch]
		mov     edx, [esp+8]
		xor     ebx, ebx
		mov     [edx*4+___68a10h], ebx
		mov     edx, [esp+8]
		xor     bh, bh
		mov     [edx+___24ea5ch], bh
		mov     edx, [esp+8]
		mov     dl, [edx+___24eebch]
		and     edx, 0ffh
		cmp     edx, eax
		jl      ___74b66h
		mov     eax, [esp+8]
		mov     [eax+___24eedch], bh
		mov     eax, [esp+8]
		mov     [eax+___24eebch], bh
___74b66h:
		inc     dword [esp+8]
		mov     eax, [esp+8]
		cmp     eax, [___24e9b4h]
		jl      ___734f8h
___74b7ah:
		xor     eax, eax
		mov     [esp+8], eax
		mov     eax, [esp+8]
		cmp     eax, [___24e9b4h]
		jge     ___75515h
___74b90h:
		mov     eax, [esp+8]
		cmp     word [NoSplit eax*2+___24f27ch], byte 0ffffh
		je      ___75501h
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		mov     edx, [___24e9a4h]
		and     eax, 0ffffh
		mov     ebx, [edx+eax*4]
		imul    eax, [esp+8], byte 22h
		test    byte [ebx+0e9h], 1
		jne     ___74bf6h
		cmp     byte [eax+___24ea9dh], 0
		je      ___74f2eh
		mov     eax, [esp+8]
		xor     dh, dh
		mov     [eax+___24f19ch], dh
		mov     eax, [esp+8]
		xor     edi, edi
		mov     [eax*4+___68a10h], edi
		jmp     ___74f2eh
___74bf6h:
		cmp     byte [eax+___24ea9dh], 0
		je      ___74c4ch
		imul    eax, [esp+8], byte 22h
		mov     ebx, [esp+8]
		mov     bx, [NoSplit ebx*2+___24f27ch]
		and     ebx, 0ffffh
		mov     edx, [edx+ebx*4]
		mov     dx, [edx+0efh]
		and     edx, 0ffffh
		add     [eax+___24ea88h], edx
		imul    eax, [esp+8], byte 22h
		cmp     dword [eax+___24ea88h], 8000h
		jl      ___74c4ch
		imul    eax, [esp+8], byte 22h
		mov     dword [eax+___24ea88h], 8000h
___74c4ch:
		mov     eax, [esp+8]
		mov     eax, [eax+___24ea59h]
		sar     eax, 18h
		cmp     eax, byte 0ffffffffh
		jne     ___74c6dh
		mov     eax, [esp+8]
		mov     al, [eax+___24f19ch]
		and     eax, 0ffh
___74c6dh:
		mov     [esp+14h], al
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___24f27ch]
		mov     eax, [___24e9a4h]
		mov     ebx, [eax+edx*4]
		imul    edx, [esp+8], byte 22h
		mov     edx, [edx+___24ea7ch]
		mov     bx, [ebx+edx*4+81h]
		and     ebx, 0ffffh
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     ecx, [eax+edx*4]
		imul    edx, [esp+8], byte 22h
		mov     edx, [edx+___24ea7ch]
		xor     esi, esi
		mov     si, [ecx+edx*4+83h]
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     ecx, [eax+edx*4]
		imul    edx, [esp+8], byte 22h
		mov     edx, [edx+___24ea7ch]
		mov     cx, [ecx+edx*4+85h]
		and     ecx, 0ffffh
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     edx, [eax+edx*4]
		imul    eax, [esp+8], byte 22h
		mov     eax, [eax+___24ea7ch]
		movzx   ebp, word [edx+eax*4+87h]
		cmp     ecx, ebx
		je      ___74d51h
		imul    eax, [esp+8], byte 22h
		mov     edi, ecx
		sub     edi, ebx
		mov     edx, edi
		sub     edx, [eax+___24ea80h]
		imul    edx, esi
		imul    eax, [esp+8], byte 22h
		mov     eax, [eax+___24ea80h]
		imul    eax, ebp
		add     edx, eax
		mov     eax, edx
		sar     edx, 1fh
		idiv    edi
		mov     esi, eax
___74d51h:
		sub     ecx, ebx
		mov     edi, 0ffffffffh
		mov     ebx, ecx
___74d5ah:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___24f27ch]
		mov     eax, [___24e9a4h]
		mov     edx, [eax+edx*4]
		test    byte [edx+0e9h], 2
		je      ___74db8h
		imul    edx, [esp+8], byte 22h
		cmp     byte [edx+___24ea9dh], 0
		jne     ___74db8h
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0e3h]
		and     eax, 0ffh
		imul    edx, [esp+8], byte 22h
		cmp     eax, [edx+___24ea7ch]
		je      ___74ebdh
___74db8h:
		imul    eax, [esp+8], byte 22h
		mov     ecx, [eax+___24ea80h]
		inc     ecx
		mov     [eax+___24ea80h], ecx
		cmp     ebx, ecx
		jg      ___74ebdh
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     edx, [edx+eax]
		test    byte [edx+0e9h], 4
		je      ___74e6dh
		imul    ecx, [esp+8], byte 22h
		xor     edx, edx
		mov     [ecx+___24ea80h], edx
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     edx, [eax+edx*4]
		mov     dl, [edx+0e5h]
		and     edx, 0ffh
		imul    ecx, [esp+8], byte 22h
		mov     ebp, [ecx+___24ea7ch]
		inc     ebp
		mov     [ecx+___24ea7ch], ebp
		cmp     edx, ebp
		jg      ___74ebdh
		mov     ecx, [esp+8]
		mov     cx, [NoSplit ecx*2+___24f27ch]
		and     ecx, 0ffffh
		mov     eax, [eax+ecx*4]
		xor     edx, edx
		mov     dl, [eax+0e4h]
		imul    eax, [esp+8], byte 22h
		mov     [eax+___24ea7ch], edx
		jmp     ___74ebdh
___74e6dh:
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		xor     edx, edx
		mov     dl, [eax+0e1h]
		imul    ecx, [esp+8], byte 22h
		inc     dword [ecx+___24ea7ch]
		imul    eax, [esp+8], byte 22h
		cmp     edx, [ecx+___24ea7ch]
		jg      ___74eb5h
		add     [eax+___24ea7ch], edi
		imul    eax, [esp+8], byte 22h
		add     [eax+___24ea80h], edi
		jmp     ___74ebdh
___74eb5h:
		xor     edx, edx
		mov     [eax+___24ea80h], edx
___74ebdh:
		imul    eax, [esp+8], byte 22h
		cmp     dword [eax+___24ea84h], byte 0
		je      ___74ed6h
		imul    eax, [esp+8], byte 22h
		add     [eax+___24ea84h], edi
___74ed6h:
		imul    eax, [esp+8], byte 22h
		cmp     dword [eax+___24ea84h], byte 0
		jne     ___74d5ah
		xor     eax, eax
		mov     al, [esp+14h]
		imul    eax, esi
		xor     edx, edx
		mov     dl, [___24e9d7h]
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		imul    ebx, [esp+8], byte 22h
		mov     edx, 8000h
		mov     edi, [ebx+___24ea88h]
		mov     ebx, edx
		sub     ebx, edi
		mov     edx, eax
		mov     eax, ebx
		imul    edx
		shrd    eax, edx, 10h
		mov     edx, [esp+8]
		mov     [edx*4+___68a10h], eax
___74f2eh:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     edx, [edx+eax]
		test    byte [edx+0eah], 1
		je      ___7522eh
		mov     edx, [esp+8]
		mov     dl, [edx+___24f17ch]
		mov     [esp+10h], dl
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     ebx, [eax+edx*4]
		imul    edx, [esp+8], byte 22h
		mov     edx, [edx+___24ea8ch]
		xor     ecx, ecx
		mov     cx, [ebx+edx*4+0b1h]
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     edx, [eax+edx*4]
		imul    ebx, [esp+8], byte 22h
		mov     ebx, [ebx+___24ea8ch]
		mov     dx, [edx+ebx*4+0b3h]
		and     edx, 0ffffh
		mov     ebx, [esp+8]
		mov     bx, [NoSplit ebx*2+___24f27ch]
		and     ebx, 0ffffh
		mov     esi, [eax+ebx*4]
		imul    ebx, [esp+8], byte 22h
		mov     ebx, [ebx+___24ea8ch]
		mov     bx, [esi+ebx*4+0b5h]
		and     ebx, 0ffffh
		mov     esi, [esp+8]
		mov     si, [NoSplit esi*2+___24f27ch]
		and     esi, 0ffffh
		mov     esi, [eax+esi*4]
		imul    eax, [esp+8], byte 22h
		mov     eax, [eax+___24ea8ch]
		xor     edi, edi
		mov     di, [esi+eax*4+0b7h]
		cmp     ebx, ecx
		je      ___7504ch
		imul    eax, [esp+8], byte 22h
		mov     esi, ebx
		sub     esi, ecx
		mov     ebp, esi
		sub     ebp, [eax+___24ea90h]
		imul    edx, ebp
		imul    eax, [esp+8], byte 22h
		mov     eax, [eax+___24ea90h]
		imul    eax, edi
		add     edx, eax
		mov     eax, edx
		sar     edx, 1fh
		idiv    esi
		mov     esi, eax
		jmp     ___7504eh
___7504ch:
		mov     esi, edx
___7504eh:
		mov     edi, 0ffffffffh
		sub     ebx, ecx
___75055h:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     ecx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     edx, [ecx+eax]
		test    byte [edx+0eah], 2
		je      ___750bdh
		imul    edx, [esp+8], byte 22h
		cmp     byte [edx+___24ea9dh], 0
		jne     ___750bdh
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0e6h]
		and     eax, 0ffh
		imul    edx, [esp+8], byte 22h
		cmp     eax, [edx+___24ea8ch]
		je      ___751bdh
___750bdh:
		imul    eax, [esp+8], byte 22h
		mov     edx, [eax+___24ea90h]
		inc     edx
		mov     [eax+___24ea90h], edx
		cmp     ebx, edx
		jg      ___751bdh
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     edx, [edx+eax]
		test    byte [edx+0eah], 4
		je      ___75171h
		imul    edx, [esp+8], byte 22h
		xor     ebp, ebp
		mov     [edx+___24ea90h], ebp
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     ecx, [eax+edx*4]
		xor     edx, edx
		mov     dl, [ecx+0e8h]
		imul    ecx, [esp+8], byte 22h
		mov     ebp, [ecx+___24ea8ch]
		inc     ebp
		mov     [ecx+___24ea8ch], ebp
		cmp     edx, ebp
		jg      ___751bdh
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0e7h]
		and     eax, 0ffh
		imul    edx, [esp+8], byte 22h
		mov     [edx+___24ea8ch], eax
		jmp     ___751bdh
___75171h:
		mov     ecx, [esp+8]
		xor     edx, edx
		mov     dx, [NoSplit ecx*2+___24f27ch]
		mov     eax, [eax+edx*4]
		xor     edx, edx
		mov     dl, [eax+0e2h]
		imul    ecx, [esp+8], byte 22h
		inc     dword [ecx+___24ea8ch]
		imul    eax, [esp+8], byte 22h
		cmp     edx, [ecx+___24ea8ch]
		jg      ___751b5h
		add     [eax+___24ea8ch], edi
		imul    eax, [esp+8], byte 22h
		add     [eax+___24ea90h], edi
		jmp     ___751bdh
___751b5h:
		xor     edx, edx
		mov     [eax+___24ea90h], edx
___751bdh:
		imul    eax, [esp+8], byte 22h
		cmp     dword [eax+___24ea94h], byte 0
		je      ___751d6h
		imul    eax, [esp+8], byte 22h
		add     [eax+___24ea94h], edi
___751d6h:
		imul    eax, [esp+8], byte 22h
		cmp     dword [eax+___24ea94h], byte 0
		jne     ___75055h
		mov     eax, [esp+0dh]
		sar     eax, 18h
		sub     eax, 80h
		test    eax, eax
		jg      ___751fah
		neg     eax
___751fah:
		mov     edx, 80h
		sub     edx, eax
		mov     eax, 20h
		sub     eax, esi
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		shl     edx, 5
		sbb     eax, edx
		sar     eax, 5
		xor     edx, edx
		mov     dl, [esp+10h]
		add     eax, edx
		shl     eax, 8
		mov     edx, [esp+8]
		mov     [edx*4+___68a90h], eax
___7522eh:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     edx, [edx+eax]
		cmp     byte [edx+0edh], 0
		je      ___75501h
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     edx, [eax+edx*4]
		cmp     byte [edx+0eeh], 0
		je      ___75501h
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0ech]
		and     eax, 0ffh
		imul    edx, [esp+8], byte 22h
		cmp     eax, [edx+___24ea98h]
		jle     ___752b5h
		imul    eax, [esp+8], byte 22h
		inc     dword [eax+___24ea98h]
___752b5h:
		mov     edx, [esp+8]
		mov     eax, [esp+8]
		mov     ebx, [edx*4+___24e9dch]
		shl     eax, 2
		cmp     ebx, byte 0ffffffffh
		jne     ___752d4h
		mov     ebx, [eax+___24f1bch]
		jmp     ___752dah
___752d4h:
		mov     ebx, [eax+___24e9dch]
___752dah:
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     edx, [edx+eax]
		mov     dl, [edx+0ebh]
		and     dl, 3
		cmp     dl, 3
		ja      ___75436h
		and     edx, 0ffh
		jmp     dword [cs:edx*4+___71d94h]
___7531ah:
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		xor     edx, edx
		mov     dl, [eax+0edh]
		imul    eax, [esp+8], byte 22h
		mov     al, [eax+___24ea9ch]
		and     eax, 0ffh
		mov     eax, [NoSplit eax*2+___19a692h]
		sar     eax, 10h
		imul    eax, edx
		sar     eax, 8
		jmp     ___75433h
___7535ch:
		imul    edx, [esp+8], byte 22h
		mov     dl, [edx+___24ea9ch]
		and     edx, 0ffh
		lea     ecx, [NoSplit edx*2+0]
		mov     edx, [esp+8]
		mov     si, [ecx+___19a694h]
		add     edx, edx
		test    si, si
		jl      ___753a6h
		mov     dx, [edx+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0edh]
		and     eax, 0ffh
		jmp     ___75433h
___753a6h:
		mov     dx, [edx+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		mov     al, [eax+0edh]
		and     eax, 0ffh
		neg     eax
		jmp     ___75433h
___753c5h:
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		xor     edx, edx
		mov     dl, [eax+0edh]
		imul    eax, [esp+8], byte 22h
		mov     al, [eax+___24ea9ch]
		mov     ecx, 20h
		and     eax, 0ffh
		sub     ecx, eax
		mov     eax, ecx
		jmp     ___7542dh
___753fdh:
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		xor     edx, edx
		mov     dl, [eax+0edh]
		imul    eax, [esp+8], byte 22h
		mov     al, [eax+___24ea9ch]
		and     eax, 0ffh
		sub     eax, byte 20h
___7542dh:
		imul    eax, edx
		sar     eax, 5
___75433h:
		mov     [esp], eax
___75436h:
		imul    edx, [esp+8], byte 22h
		mov     eax, [esp+8]
		mov     ax, [NoSplit eax*2+___24f27ch]
		and     eax, 0ffffh
		lea     ecx, [eax*4+0]
		mov     eax, [___24e9a4h]
		mov     eax, [ecx+eax]
		mov     al, [eax+0eeh]
		mov     ecx, eax
		and     ecx, 0ffh
		xor     eax, eax
		sar     ecx, 2
		mov     al, [edx+___24ea9ch]
		add     eax, ecx
		mov     [edx+___24ea9ch], al
		imul    eax, [esp+8], byte 22h
		cmp     byte [eax+___24ea9ch], 40h
		jb      ___75496h
		imul    eax, [esp+8], byte 22h
		sub     byte [eax+___24ea9ch], 40h
___75496h:
		mov     eax, [esp+8]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___24f27ch]
		mov     eax, [___24e9a4h]
		mov     edx, [eax+edx*4]
		cmp     byte [edx+0ech], 0
		jbe     ___754ech
		mov     edx, [esp+8]
		mov     dx, [NoSplit edx*2+___24f27ch]
		and     edx, 0ffffh
		mov     eax, [eax+edx*4]
		xor     ecx, ecx
		mov     cl, [eax+0ech]
		imul    eax, [esp+8], byte 22h
		mov     edx, [esp]
		mov     edi, [eax+___24ea98h]
		imul    edx, edi
		mov     eax, edx
		sar     edx, 1fh
		idiv    ecx
		jmp     ___754efh
___754ech:
		mov     eax, [esp]
___754efh:
		add     eax, ebx
		call    ___71b70h
		mov     edx, [esp+8]
		mov     [edx*4+___68990h], eax
___75501h:
		inc     dword [esp+8]
		mov     eax, [esp+8]
		cmp     eax, [___24e9b4h]
		jl      ___74b90h
___75515h:
		mov     al, 1
		mov     [___24f2c1h], al
		sub     [___24f2c2h], al
___75522h:
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn

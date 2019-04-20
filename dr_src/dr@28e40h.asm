cpu 386

    extern  dr@180130h
    extern  dr@18068ch
    extern  dr@180690h
    extern  dr@180728h

    extern  dr@1854a4h
    extern  dr@1854a8h
    extern  dr@1854ach
    extern  dr@1854b8h
    extern  dr@1854c4h
    extern  dr@185a14h
    extern  dr@185a20h
    extern  dr@185a38h
    extern  dr@185a4ch
    extern  dr@185ba9h
    extern  dr@185c0bh
    extern  dr@185cbch
    extern  dr@18e298h
    extern  dr@18e2a4h
    extern  dr@18e938h
    extern  dr@18e93ch
    extern  dr@18e940h
    extern  dr@18e944h
    extern  dr@18e954h
    extern  dr@18e964h
    extern  dr@18e974h




    extern  dr@1a01fch
    extern  dr@1a01ech
    extern  dr@28ab4h
    extern  dr@1a0210h
    extern  dr@1a021ch
    extern  dr@25330h
    extern  dr@269e4h
    extern  dr@12dc4h
    extern  dr@13248h
    extern  dr@13094h
    extern  dr@24cc54h
    extern  dr@654d4h
    extern  dr@19bd60h
    extern  dr@1a1028h
    extern  dr@28c1ch
    extern  dr@2ee78h
    extern  dr@196adch
    extern  dr@33010h
    extern  dr@1a1ef8h
    extern  dr@1a0224h
    extern  dr@31008h
    extern  dr@3266ch
    extern  __CHK
    extern  ceil
    extern  __CHP
    extern  itoa
    extern  atoi
    extern  dr@1a1ec4h
    extern  dr@1a1ee4h
    extern  dr@1a110ch
    extern  renderTextToBuffer
    extern  itoa
    extern  dr@1a10cch
    extern  dr@1a10e0h
    extern  dr@2ab50h
    extern  dr@1a1ed0h
    extern  dr@1a01b8h
    extern  dr@259e0h
    extern  VGABufferPtr_0
    extern  dr@1398ch
    extern  memset
    extern  dr@25e40h
    extern  dr@196a84h
    extern  dr@5994ch
    extern  dr@23758h
    extern  dr@1a020ch
    extern  dr@1a0fb8h
    extern  dr@1a01f4h
    extern  dr@1a01f8h
    extern  dr@27a10h
    extern  dr@26650h
    extern  dr@1a1e68h
    extern  dr@1a10f4h
    extern  dr@1a01f0h
    extern  dr@262b4h
    extern  dr@25a74h
    extern  dr@1a1e88h
    extern  dr@11378h
    extern  dr@1a1eb4h
    extern  dr@27078h
    extern  dr@273d8h
    extern  dr@276f0h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

dr@28e28h:
dd	dr@28f77h
dd	dr@29ba4h
dd	dr@29cebh
dd	dr@29e33h
dd	dr@29f83h
dd	dr@2a1afh

global dr@28e40h
dr@28e40h:
		push    88h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 60h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		fild    dword [eax*4+dr@1a021ch]
		fmul    qword [dr@18212fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    ceil
		mov     eax, [dr@1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		call    __CHP
		shl     ebx, 2
		mov     edx, [dr@185a14h]
		sub     ebx, eax
		fistp   dword [esp+50h]
		shl     ebx, 2
		test    edx, edx
		je      dr@28ee7h
		mov     eax, [ebx+dr@1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+dr@18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+dr@1a01ech]
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     esi, eax
		jmp     dr@28f19h
dr@28ee7h:
		mov     eax, [ebx+dr@1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+dr@18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     esi, [ebx+dr@1a01ech]
		imul    esi, eax
dr@28f19h:
		mov     ebx, [esp+50h]
		sub     ebx, esi
		mov     [esp+50h], ebx
		test    ebx, ebx
		jge     dr@28f2dh
		xor     edi, edi
		mov     [esp+50h], edi
dr@28f2dh:
		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, [esp+50h]
		lea     edi, [esp+3ch]
		call    itoa
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		mov     byte [esp+ecx*1+3bh], 30h
		lea     eax, [esp+3ch]
		call    atoi
		mov     ebp, eax
		mov     [esp+50h], eax
		mov     eax, [dr@1a1ec4h]
		cmp     eax, byte 5
		ja      dr@2a387h
		jmp     dword [cs:eax*4+dr@28e28h]
dr@28f77h:
		mov     edx, [dr@1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		mov     eax, [eax+dr@18e2a4h]
		sub     eax, ebp
		test    eax, eax
		jge     dr@291c4h
		call    dr@28ab4h
		test    eax, eax
		jne     dr@2a387h
		push    8000h
		mov     eax, 1
		mov     edx, [dr@1854b8h]
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		push    edx
		mov     edx, 1ch
		lea     edi, [esp+8]
		call    dr@654d4h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		mov     esi, dr@181fc8h
		call    dr@13248h
		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, ebp
		movsd   
		movsd   
		movsd   
;8:00029000
		movsd   
		movsw   
		call    itoa
		lea     esi, [esp+3ch]
		mov     edi, esp
		mov     ebx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@29019h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@29031h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@29019h
dr@29031h:
		pop     edi
		mov     esi, dr@181fdch
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@29047h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@2905fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@29047h
dr@2905fh:
		pop     edi
		mov     ecx, 136aah
		mov     edi, esp
		mov     eax, [dr@1a110ch]
		mov     esi, dr@181fe4h
		call    renderTextToBuffer
		mov     ecx, 8
		mov     ebx, esp
		mov     edx, dr@185c0bh
		rep movsd   
		mov     eax, [dr@1a110ch]
		mov     ecx, 15eaah
		call    renderTextToBuffer
		mov     edx, [dr@1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		mov     edi, esp
		sub     eax, edx
		mov     esi, dr@182004h
		shl     eax, 5
		mov     ebx, 0ah
		mov     eax, [eax+dr@18e2a4h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		sub     eax, ebp
		mov     esi, dr@180728h
		cdq     
		xor     eax, edx
		sub     eax, edx
		lea     edx, [esp+3ch]
		mov     edi, esp
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@290e1h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@290f9h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@290e1h
dr@290f9h:
		pop     edi
		lea     esi, [esp+3ch]
		mov     edi, esp
;8:00029100
		mov     ebx, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@29110h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@29128h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@29110h
dr@29128h:
		pop     edi
		mov     ecx, 186aah
		mov     eax, [dr@1a110ch]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ee4h]
		lea     eax, [edx*8+0]
		mov     edi, esp
		sub     eax, edx
		mov     esi, dr@182018h
		shl     eax, 3
		movsd   
		movsw   
		movsb   
		sub     eax, edx
		mov     esi, dr@18e298h
		shl     eax, 5
		mov     edi, esp
		add     esi, eax
		mov     ebx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@2916eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@29186h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@2916eh
dr@29186h:
		pop     edi
		mov     esi, dr@182020h
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@2919ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@291b4h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@2919ch
dr@291b4h:
		pop     edi
		mov     ecx, 1aeaah
		mov     eax, [dr@1a110ch]
		jmp     dr@293cch
dr@291c4h:
		call    dr@28ab4h
		test    eax, eax
		jne     dr@2a387h
		push    8000h
		mov     edx, 1ch
		mov     eax, [dr@1854b8h]
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		push    eax
		mov     eax, 1
		lea     edi, [esp+8]
		call    dr@654d4h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		mov     esi, dr@181fc8h
		call    dr@13248h
		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, ebp
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		call    itoa
		lea     esi, [esp+3ch]
		mov     edi, esp
		mov     ebx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@2923eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@29256h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@2923eh
dr@29256h:
		pop     edi
		mov     esi, dr@181fdch
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@2926ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@29284h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
;8:00029280
		cmp     al, 0
		jne     dr@2926ch
dr@29284h:
		pop     edi
		mov     ecx, 136aah
		mov     edi, esp
		mov     eax, [dr@1a110ch]
		mov     esi, dr@182024h
		call    renderTextToBuffer
		mov     ecx, 8
		mov     ebx, esp
		mov     edx, dr@185c0bh
		rep movsd   
		mov     eax, [dr@1a110ch]
		mov     ecx, 15eaah
		call    renderTextToBuffer
		mov     edx, [dr@1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     esi, dr@18e298h
		shl     eax, 5
		mov     edi, esp
		add     esi, eax
		push    edi
dr@292d9h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@292f1h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@292d9h
dr@292f1h:
		pop     edi
		mov     esi, dr@182044h
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@29302h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@2931ah
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@29302h
dr@2931ah:
		pop     edi
		mov     edx, [dr@1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     ebx, 0ah
		shl     eax, 5
		mov     esi, dr@180728h
		mov     eax, [eax+dr@18e2a4h]
		lea     edx, [esp+3ch]
		sub     eax, ebp
		mov     edi, esp
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@29358h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@29370h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@29358h
dr@29370h:
		pop     edi
		lea     esi, [esp+3ch]
		mov     edi, esp
		mov     ebx, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@29387h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@2939fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@29387h
dr@2939fh:
		pop     edi
		mov     ecx, 186aah
		mov     edi, esp
		mov     eax, [dr@1a110ch]
		mov     esi, dr@182054h
		call    renderTextToBuffer
		mov     ecx, 1aeaah
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a110ch]
		movsd   
		movsd   
		movsd   
		movsw   
dr@293cch:
		call    renderTextToBuffer
		mov     ecx, 1cf70h
		mov     ebx, dr@18068ch
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		call    renderTextToBuffer
		mov     ecx, 1d01ah
		mov     ebx, dr@180690h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
		xor     ebp, ebp
;8:00029400
		call    renderTextToBuffer
		xor     ebx, ebx
		call    dr@12dc4h
		mov     [esp+54h], ebx
dr@29410h:
		imul    esi, ebp, 0aah
		call    dr@2ab50h
		call    dr@2ab50h
		mov     eax, [dr@1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [dr@1a1ee4h]
		add     eax, dr@185cbch
		mov     ebx, [dr@1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+dr@1a01b8h]
		mov     eax, 10h
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 16090h
		add     edx, 16090h
		call    dr@1398ch
		mov     eax, [dr@1a1ed0h]
		inc     eax
		add     esi, 1e0d9h
		mov     [dr@1a1ed0h], eax
		cmp     eax, byte 3fh
		jle     dr@2948eh
		xor     ebx, ebx
		mov     [dr@1a1ed0h], ebx
dr@2948eh:
		xor     ecx, ecx
		mov     edi, 0c4h
dr@29495h:
		mov     eax, [VGABufferPtr_0]
		mov     ebx, 14h
		add     eax, esi
		mov     edx, edi
		add     eax, ecx
		add     ecx, 280h
		call    memset
		cmp     ecx, 3200h
		jne     dr@29495h
		mov     ebx, [VGABufferPtr_0]
		mov     ecx, [dr@1a1e68h]
		add     ebx, esi
		imul    esi, ecx, 190h
		mov     eax, [dr@1a10f4h]
		mov     ecx, 14h
		add     esi, eax
		mov     edx, ecx
dr@294dah:
		mov     edi, edx
dr@294dch:
		mov     al, [esi]
		or      al, al
		je      dr@294e4h
		mov     [ebx], al
dr@294e4h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@294dch
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@294dah
		mov     ecx, 1ch
		mov     ebx, 14fh
		mov     edx, [VGABufferPtr_0]
		mov     eax, 1e0a5h
		add     edx, 1e0a5h
		call    dr@1398ch
		mov     esi, [dr@1a1e68h]
		inc     esi
		mov     [dr@1a1e68h], esi
		cmp     esi, byte 31h
		jle     dr@2952dh
		xor     eax, eax
		mov     [dr@1a1e68h], eax
dr@2952dh:
		call    dr@5994ch
		mov     [esp+5ch], al
		cmp     al, 15h
		jne     dr@2953fh
		mov     byte [esp+5ch], 0cbh
dr@2953fh:
		cmp     byte [esp+5ch], 31h
		jne     dr@2954bh
		mov     byte [esp+5ch], 0cdh
dr@2954bh:
		mov     bh, [esp+5ch]
		cmp     bh, 4bh
		jb      dr@29588h
		jbe     dr@295c2h
		cmp     bh, 9ch
		jb      dr@2957ah
		jbe     dr@296e4h
		cmp     bh, 0cbh
		jb      dr@29720h
		jbe     dr@295c2h
		cmp     bh, 0cdh
		je      dr@29652h
		jmp     dr@29720h
dr@2957ah:
		cmp     bh, 4dh
		je      dr@29652h
		jmp     dr@29720h
dr@29588h:
		cmp     bh, 1ch
		jb      dr@2959dh
		jbe     dr@296e4h
		cmp     bh, 3bh
		je      dr@295abh
		jmp     dr@29720h
dr@2959dh:
		cmp     bh, 1
		je      dr@29712h
		jmp     dr@29720h
dr@295abh:
		cmp     dword [dr@19bd60h], byte 0
		je      dr@29720h
		call    dr@23758h
		jmp     dr@29720h
dr@295c2h:
		cmp     ebp, byte 1
		jne     dr@295e7h
		push    8000h
		mov     edx, 19h
		mov     ebx, [dr@1854ach]
		mov     ecx, [dr@24cc54h]
		push    ebx
		mov     eax, ebp
		xor     ebx, ebx
		call    dr@654d4h
dr@295e7h:
		mov     ecx, 1e000h
		xor     ebp, ebp
		mov     edi, 14fh
		mov     esi, 0c4h
dr@295f8h:
		mov     eax, [VGABufferPtr_0]
		mov     ebx, edi
		add     eax, ecx
		mov     edx, esi
		add     eax, 0a8h
		add     ecx, 280h
		call    memset
		cmp     ecx, 21e80h
		jne     dr@295f8h
		mov     ecx, 1cf70h
		mov     ebx, dr@18068ch
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		call    renderTextToBuffer
		mov     ecx, 1d01ah
		mov     ebx, dr@180690h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
		call    renderTextToBuffer
		jmp     dr@29720h
dr@29652h:
		test    ebp, ebp
		jne     dr@29679h
		push    8000h
		mov     eax, 1
		mov     edx, [dr@1854ach]
		mov     ecx, [dr@24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 19h
		call    dr@654d4h
dr@29679h:
		mov     ecx, 1e000h
		mov     ebp, 1
		mov     edi, 14fh
		mov     esi, 0c4h
dr@2968dh:
		mov     eax, [VGABufferPtr_0]
		mov     ebx, edi
		add     eax, ecx
		mov     edx, esi
		add     eax, 0a8h
		add     ecx, 280h
		call    memset
		cmp     ecx, 21e80h
		jne     dr@2968dh
		mov     ecx, 1cf70h
		mov     ebx, dr@18068ch
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
		call    renderTextToBuffer
		mov     ecx, 1d01ah
		mov     ebx, dr@180690h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		call    renderTextToBuffer
		jmp     dr@29720h
dr@296e4h:
		push    8000h
		mov     edx, 1ch
		mov     eax, 1
		mov     edi, [dr@1854b8h]
		mov     ecx, [dr@24cc54h]
		push    edi
;8:00029700
		xor     ebx, ebx
		mov     esi, 0ffffffffh
		call    dr@654d4h
		mov     [esp+54h], esi
		jmp     dr@29720h
dr@29712h:
		mov     eax, 0ffffffffh
		mov     ebp, 1
		mov     [esp+54h], eax
dr@29720h:
		cmp     dword [esp+54h], byte 0
		je      dr@29410h
		test    ebp, ebp
		jne     dr@29b90h
		push    8000h
		mov     edx, 4
		mov     eax, 5
		push    24000h
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [dr@1a1ee4h]
		mov     [eax*4+dr@1a01fch], ebx
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ecx, [eax*4+dr@1a0210h]
		shl     edx, 5
		mov     ebx, [esp+50h]
		mov     edx, [edx+dr@18e2a4h]
		mov     [eax*4+dr@1a01ech], ebp
		sub     edx, ebx
		mov     ebx, [eax*4+dr@1a01fch]
		sub     ecx, edx
		lea     edx, [ebx*8+0]
		mov     [eax*4+dr@1a01f0h], ebp
		sub     edx, ebx
		mov     [eax*4+dr@1a01f4h], ebp
		shl     edx, 3
		mov     [eax*4+dr@1a01f8h], ebp
		sub     edx, ebx
		mov     [eax*4+dr@1a0210h], ecx
		shl     edx, 5
		mov     ecx, 77h
		mov     edx, [edx+dr@18e2a4h]
		mov     ebx, 180h
		mov     [eax*4+dr@1a021ch], edx
		call    dr@25330h
		call    dr@25e40h
		call    dr@26650h
		call    dr@262b4h
		call    dr@269e4h
		call    dr@25a74h
		push    byte 1
		mov     edx, 72h
		mov     eax, 90h
		call    dr@13248h
		mov     ecx, 10h
		mov     edx, 126h
		mov     ebx, [VGABufferPtr_0]
		mov     esi, [dr@1a1e88h]
		add     ebx, 1e83ch
dr@29838h:
		mov     edi, edx
dr@2983ah:
		mov     al, [esi]
		or      al, al
		je      dr@29842h
		mov     [ebx], al
dr@29842h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@2983ah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@29838h
		mov     ecx, 7
		mov     edi, esp
		mov     esi, dr@182064h
		mov     ebx, esp
		mov     edx, dr@185c0bh
		rep movsd   
		movsw   
		movsb   
		mov     eax, [dr@1a110ch]
		mov     ecx, 136aah
		mov     edi, esp
		mov     esi, dr@182084h
		call    renderTextToBuffer
;8:00029880
		mov     ecx, 7
		mov     ebx, esp
		mov     edx, dr@185c0bh
		rep movsd   
		mov     eax, [dr@1a110ch]
		mov     ecx, 15eaah
		mov     edi, esp
		mov     esi, dr@1820a0h
		call    renderTextToBuffer
		mov     ecx, 186aah
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a110ch]
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		call    renderTextToBuffer
		call    dr@12dc4h
		xor     ah, ah
		mov     [esp+5ch], ah
		mov     ebp, 126h
dr@298d0h:
		cmp     byte [esp+5ch], 9ch
		je      dr@29b3bh
		cmp     dword [dr@196a84h], byte 0
		jne     dr@29b3bh
		call    dr@5994ch
		mov     [esp+5ch], al
		cmp     al, 3bh
		jne     dr@29903h
		cmp     dword [dr@19bd60h], byte 0
		je      dr@29903h
		call    dr@23758h
dr@29903h:
		cmp     byte [esp+5ch], 0cbh
		jne     dr@29924h
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     edi, [eax+dr@1a020ch]
		test    edi, edi
		jle     dr@29924h
		lea     edx, [edi-2]
		mov     [eax+dr@1a020ch], edx
dr@29924h:
		cmp     byte [esp+5ch], 4bh
		jne     dr@29945h
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     ecx, [eax+dr@1a020ch]
		test    ecx, ecx
		jle     dr@29945h
		lea     esi, [ecx-2]
		mov     [eax+dr@1a020ch], esi
dr@29945h:
		cmp     byte [esp+5ch], 0cdh
		jne     dr@2996ah
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     edx, [eax+dr@1a020ch]
		cmp     edx, 0fdh
		jge     dr@2996ah
		lea     ebx, [edx+2]
		mov     [eax+dr@1a020ch], ebx
dr@2996ah:
		cmp     byte [esp+5ch], 4dh
		jne     dr@2998fh
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     esi, [eax+dr@1a020ch]
		cmp     esi, 0fdh
		jge     dr@2998fh
		lea     edi, [esi+2]
		mov     [eax+dr@1a020ch], edi
dr@2998fh:
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     edx, [eax+dr@1a020ch]
		mov     eax, [dr@1a0fb8h]
		lea     edx, [edx+edx*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+58h], eax
		fild    word [esp+58h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+5ch], eax
		fild    word [esp+5ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+60h], eax
		fild    word [esp+60h]
		sub     esp, byte 4
		fstp    dword [esp]
		mov     ecx, 1dd80h
		call    dr@11378h
		mov     esi, 0c4h
dr@299edh:
		mov     eax, [VGABufferPtr_0]
		mov     ebx, ebp
		add     eax, ecx
		mov     edx, esi
		add     eax, 0b6h
		add     ecx, 280h
		call    memset
		cmp     ecx, 21980h
		jne     dr@299edh
		mov     ecx, 10h
		mov     ebx, [VGABufferPtr_0]
		mov     esi, [dr@1a1e88h]
		mov     edx, ebp
		add     ebx, 1e83ch
dr@29a29h:
		mov     edi, edx
dr@29a2bh:
		mov     al, [esi]
		or      al, al
		je      dr@29a33h
		mov     [ebx], al
dr@29a33h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@29a2bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@29a29h
		imul    edx, [dr@1a1ef8h], byte 6ch
		mov     eax, [VGABufferPtr_0]
		mov     ecx, 18h
		add     eax, 1de3ch
		mov     ebx, [edx+dr@1a020ch]
		mov     esi, [dr@1a1eb4h]
		add     ebx, eax
		mov     edx, 0ah
		add     ebx, byte 0eh
dr@29a6fh:
		mov     edi, edx
dr@29a71h:
		mov     al, [esi]
		or      al, al
		je      dr@29a79h
		mov     [ebx], al
dr@29a79h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@29a71h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@29a6fh
		call    dr@2ab50h
		call    dr@2ab50h
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     edx, [VGABufferPtr_0]
		add     edx, 1de3ch
		mov     esi, [eax+dr@1a020ch]
		mov     ebx, 0eh
		add     edx, esi
		mov     ecx, 18h
		add     edx, byte 0ch
		lea     eax, [esi+1de48h]
		call    dr@1398ch
		mov     eax, [dr@1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [dr@1a1ee4h]
		add     eax, dr@185cbch
		mov     ebx, [dr@1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+dr@1a01b8h]
		mov     eax, 10h
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
;8:00029b00
		mov     edx, [VGABufferPtr_0]
		mov     eax, 16090h
		add     edx, 16090h
		call    dr@1398ch
		mov     edi, [dr@1a1ed0h]
		inc     edi
		mov     [dr@1a1ed0h], edi
		cmp     edi, byte 3fh
		jle     dr@29b30h
		xor     edx, edx
		mov     [dr@1a1ed0h], edx
dr@29b30h:
		cmp     byte [esp+5ch], 1ch
		jne     dr@298d0h
dr@29b3bh:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     ebx, [eax+dr@1a01fch]
		cmp     ebx, byte 5
		jge     dr@29b67h
		lea     eax, [ebx+1]
		mov     [dr@1a1ee4h], eax
		jmp     dr@29b71h
dr@29b67h:
		mov     dword [dr@1a1ee4h], 5
dr@29b71h:
		mov     esi, 136h
		call    dr@27078h
		mov     [dr@185a38h], esi
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@29b90h:
		call    dr@25a74h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@29ba4h:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+dr@1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     eax, [eax*4+dr@1a01f0h]
		cmp     eax, [edx+dr@18e938h]
		jge     dr@29cd7h
		mov     eax, [edx+eax*4+dr@18e944h]
		call    dr@28ab4h
		test    eax, eax
		jne     dr@2a387h
		push    8000h
		mov     edx, 1ch
		mov     eax, [dr@1854b8h]
		mov     ecx, [dr@24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, 1
		call    dr@654d4h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+dr@1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     ebx, [eax*4+dr@1a01f0h]
		mov     edx, [edx+ebx*4+dr@18e944h]
		sub     [eax*4+dr@1a0210h], edx
		mov     ebx, [eax*4+dr@1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ebx, [eax*4+dr@1a01f0h]
		shl     edx, 5
		mov     ecx, [eax*4+dr@1a021ch]
;8:00029c80
		mov     edx, [edx+ebx*4+dr@18e944h]
		add     ecx, edx
		mov     [eax*4+dr@1a021ch], ecx
		call    dr@273d8h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edi, [eax*4+dr@1a01f0h]
		mov     esi, 136h
		inc     edi
		mov     [dr@185a38h], esi
		mov     [eax*4+dr@1a01f0h], edi
		call    dr@25330h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@29cd7h:
		call    dr@25e40h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@29cebh:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+dr@1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     eax, [eax*4+dr@1a01f4h]
		cmp     eax, [edx+dr@18e93ch]
		jge     dr@29e1fh
		mov     eax, [edx+eax*4+dr@18e954h]
		call    dr@28ab4h
		test    eax, eax
		jne     dr@2a387h
		push    8000h
		mov     edx, 1ch
		mov     ebp, [dr@1854b8h]
		mov     eax, 1
		push    ebp
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+dr@1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     ebx, [eax*4+dr@1a01f4h]
		mov     edx, [edx+ebx*4+dr@18e954h]
		sub     [eax*4+dr@1a0210h], edx
		mov     ebx, [eax*4+dr@1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ebx, [eax*4+dr@1a01f4h]
		shl     edx, 5
		mov     ecx, [eax*4+dr@1a021ch]
		mov     edx, [edx+ebx*4+dr@18e954h]
		add     ecx, edx
		mov     [eax*4+dr@1a021ch], ecx
		call    dr@276f0h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edi, [eax*4+dr@1a01f4h]
		mov     esi, 136h
		inc     edi
		mov     [dr@185a38h], esi
		mov     [eax*4+dr@1a01f4h], edi
		call    dr@25330h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@29e1fh:
		call    dr@262b4h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@29e33h:
		mov     eax, [dr@1a1ef8h]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 2
		sub     edx, eax
		mov     ebx, [edx*4+dr@1a01fch]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 3
		sub     eax, ebx
		shl     eax, 5
		mov     edx, [edx*4+dr@1a01f8h]
		cmp     edx, [eax+dr@18e940h]
		jge     dr@29f6fh
		mov     eax, [eax+edx*4+dr@18e964h]
		call    dr@28ab4h
		test    eax, eax
		jne     dr@2a387h
		push    8000h
		mov     edx, 1ch
		mov     edi, [dr@1854b8h]
		mov     eax, 1
		push    edi
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+dr@1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ebx, [eax*4+dr@1a01f8h]
		shl     edx, 5
		mov     ebp, [eax*4+dr@1a0210h]
		mov     edx, [edx+ebx*4+dr@18e964h]
		mov     ebx, [eax*4+dr@1a01fch]
		sub     ebp, edx
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
;8:00029f00
		shl     edx, 5
		mov     ebx, [eax*4+dr@1a01f8h]
		mov     edx, [edx+ebx*4+dr@18e964h]
		mov     ebx, [eax*4+dr@1a021ch]
		mov     [eax*4+dr@1a0210h], ebp
		add     ebx, edx
		mov     [eax*4+dr@1a021ch], ebx
		call    dr@27a10h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, [eax*4+dr@1a01f8h]
		mov     ecx, 136h
		inc     esi
		mov     [dr@185a38h], ecx
		mov     [eax*4+dr@1a01f8h], esi
		call    dr@25330h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@29f6fh:
		call    dr@26650h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
;8:00029f80
		pop     ecx
		pop     ebx
		retn    
dr@29f83h:
		mov     eax, [dr@1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		shl     ebx, 2
		sub     ebx, eax
		shl     ebx, 2
		cmp     dword [ebx+dr@1a01ech], byte 0ah
		jge     dr@29fe8h
		cmp     dword [dr@185a14h], byte 0
		je      dr@29fe8h
		mov     eax, [ebx+dr@1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+dr@18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+dr@1a01ech]
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     esi, eax
dr@29fe8h:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+dr@1a01ech], byte 0ah
		jl      dr@2a039h
		cmp     dword [dr@185a14h], byte 0
		je      dr@2a039h
		mov     eax, [eax+dr@1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+dr@18e974h]
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     esi, eax
dr@2a039h:
		mov     eax, [dr@1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		shl     ebx, 2
		sub     ebx, eax
		shl     ebx, 2
		cmp     dword [ebx+dr@1a01ech], byte 0ah
		jge     dr@2a093h
		cmp     dword [dr@185a14h], byte 0
		jne     dr@2a093h
		mov     eax, [ebx+dr@1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+dr@18e974h]
		mov     edx, eax
;8:0002a080
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     esi, [ebx+dr@1a01ech]
		imul    esi, eax
dr@2a093h:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+dr@1a01ech], byte 0ah
		jl      dr@2a0d9h
		cmp     dword [dr@185a14h], byte 0
		jne     dr@2a0d9h
		mov     eax, [eax+dr@1a01fch]
		lea     esi, [eax*8+0]
		sub     esi, eax
		shl     esi, 3
		sub     esi, eax
		shl     esi, 5
		mov     esi, [esi+dr@18e974h]
dr@2a0d9h:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+dr@1a01ech], byte 0
		jle     dr@2a387h
		mov     eax, esi
		call    dr@28ab4h
		test    eax, eax
		jne     dr@2a387h
		push    8000h
		mov     edx, 1fh
		mov     ecx, [dr@1854c4h]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [dr@24cc54h]
		call    dr@654d4h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     edi, [eax+dr@1a01ech]
		cmp     edi, byte 0ah
		jge     dr@2a159h
		xor     edx, edx
		mov     [eax+dr@1a01ech], edx
		jmp     dr@2a162h
dr@2a159h:
		lea     ebp, [edi-0ah]
		mov     [eax+dr@1a01ech], ebp
dr@2a162h:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+dr@1a0210h]
		mov     ecx, [eax*4+dr@1a021ch]
		sub     ebx, esi
		add     ecx, esi
		mov     [eax*4+dr@1a0210h], ebx
		mov     [eax*4+dr@1a021ch], ecx
		call    dr@25330h
		call    dr@269e4h
		call    dr@12dc4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@2a1afh:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+dr@1a01ech], byte 64h
		jne     dr@2a276h
		cmp     dword [dr@185a14h], byte 0
		jne     dr@2a276h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    dr@13248h
		mov     edx, 136aah
		mov     eax, dr@1820b0h
		call    dr@13094h
		mov     edx, 15eaah
		mov     eax, dr@180130h
		call    dr@13094h
		mov     edx, 186aah
		mov     eax, dr@1820c8h
		call    dr@13094h
		mov     edx, 1aeaah
		mov     eax, dr@1820ech
		call    dr@13094h
		mov     edx, 1d6aah
		mov     eax, dr@182110h
		xor     ebx, ebx
		call    dr@13094h
		call    dr@12dc4h
		push    8000h
		mov     edx, [dr@1854a4h]
		mov     eax, 2
		push    edx
		mov     ecx, [dr@24cc54h]
		mov     edx, 17h
		call    dr@654d4h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@2a276h:
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2a2e7h
		xor     esi, esi
		mov     [dr@1a1028h], esi
		call    dr@28c1ch
		mov     edi, [dr@185a14h]
		mov     [dr@185a4ch], eax
		test    edi, edi
		je      dr@2a2a6h
		test    eax, eax
		je      dr@2a2a6h
		call    dr@2ee78h
		jmp     dr@2a2d3h
dr@2a2a6h:
		push    8000h
		mov     edx, 18h
		mov     ebp, [dr@1854a8h]
		mov     eax, 1
		push    ebp
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
		mov     eax, [dr@196adch]
		call    dr@33010h
dr@2a2d3h:
		mov     dword [dr@185a20h], 1
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@2a2e7h:
		call    dr@28c1ch
		mov     ebx, [dr@185a14h]
		mov     [dr@185a4ch], eax
		test    ebx, ebx
		je      dr@2a30eh
		test    eax, eax
		je      dr@2a30eh
		call    dr@2ee78h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@2a30eh:
		push    8000h
		mov     edx, 18h
		mov     ecx, [dr@1854a8h]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [dr@24cc54h]
		call    dr@654d4h
		mov     edi, [dr@1a1ef8h]
		xor     ecx, ecx
		xor     edx, edx
		xor     eax, eax
dr@2a33dh:
		mov     esi, [eax+dr@1a0224h]
		cmp     ecx, esi
		jge     dr@2a34dh
		cmp     edx, edi
		je      dr@2a34dh
		mov     ecx, esi
dr@2a34dh:
		inc     edx
		add     eax, byte 6ch
		cmp     edx, byte 14h
		jl      dr@2a33dh
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     ecx, [eax*4+dr@1a0224h]
		jge     dr@2a382h
		call    dr@31008h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
;8:0002a380
		pop     ebx
		retn    
dr@2a382h:
		call    dr@3266ch
dr@2a387h:
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
dr@181fc8h:
db	"You would get a $",0
dr@181fdch:
db	" refund",0
dr@181fe4h:
db	"from your old car and upgrades.",0
dr@182004h:
db	"Money returned: ",0
dr@182018h:
db	"Buy a ",0
dr@182020h:
db	" ?",0
dr@182024h:
db	"from your old car and upgrades.",0
dr@182044h:
db	" would cost ",0
dr@182054h:
db	"Purchase it ?",0
dr@182064h:
db	"Use arrows to change the color",0
dr@182084h:
db	"of your car and press Enter",0
dr@1820a0h:
db	"when finished.",0
global dr@1820b0h
dr@1820b0h:
db	"[Repair your car first.",0
dr@1820c8h:
db	"What'cha gonna do with that pile of",0
dr@1820ech:
db	"junk, carry it around? Let me spell",0
dr@182110h:
db	"this out for you: R-E-P-A-I-R.",0
dr@18212fh: ; 0.25
db	0,0,0,0,0,0,0d0h,3fh
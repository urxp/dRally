cpu 386

    extern  __CHK
    extern  dr@180144h
    extern  dr@1a1114h
    extern  dr@42988h
    extern  dr@5905ch
    extern  dr@1a1ef8h
    extern  dr@1a020ch
    extern  dr@135fch
    extern  dr@23230h
    extern  dr@1a0fb8h
    extern  dr@11378h
    extern  dr@1a54d0h
    extern  dr@1a10f8h
    extern  dr@19de70h
    extern  dr@18068ch
    extern  dr@180690h
    extern  dr@185ba9h
    extern  dr@1a10e0h
    extern  renderTextToBuffer
    extern  dr@1a1e6ch
    extern  dr@1a1ea8h
    extern  dr@18e2a4h
    extern  itoa
    extern  dr@180728h
    extern  dr@25180h
    extern  dr@12f60h
    extern  dr@185cbch
    extern  dr@1a01b8h
    extern  dr@259e0h
    extern  dr@1398ch
    extern  dr@1a1ed0h
    extern  dr@1a1e88h
    extern  dr@1a1eb4h
    extern  dr@12cb8h
    extern  dr@5994ch
    extern  dr@59b3ch
    extern  dr@1a01e0h
    extern  dr@1858c8h
    extern  dr@180130h
    extern  dr@17510h
    extern  dr@1854b8h
    extern  dr@1a1ef8h
    extern  dr@1a0220h
    extern  dr@24cc54h
    extern  dr@654d4h
    extern  VGABufferPtr_0
    extern  dr@1a10cch
    extern  dr@1854ach
    extern  dr@18768ah
    extern  memset
    extern  strlwr
    extern  dr@185a14h
    extern  dr@148cch
    extern  dr@1a1138h
    extern  dr@13710h
    extern  dr@13248h
    extern  dr@13bd4h
    extern  dr@196a94h
    extern  dr@1876a2h
    extern  dr@1876bah
    extern  dr@12dc4h
    extern  dr@2ab50h
    extern  dr@1a1efch
    extern  dr@185bedh
    extern  dr@19bd60h
    extern  dr@1807cch
    extern  dr@1a10fch
    extern  dr@1807e8h
    extern  dr@185c0bh
    extern  dr@1a1108h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@3ab5ch
dr@3ab5ch:
		push    8ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 5ch
		mov     [esp+2ch], eax
		mov     edx, 70h
		mov     ebx, dr@182720h
		mov     eax, dr@180144h
		mov     [esp+44h], edx
		mov     edx, [dr@1a1114h]
		call    dr@42988h
		mov     ebx, [dr@1a1114h]
		push    ebx
		push    dr@1a54d0h
		call    dr@5905ch
		mov     ah, 1
		mov     edx, [dr@1a1ef8h]
		mov     [esp+54h], ah
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     ebx, 27fh
		shl     eax, 2
		xor     ecx, ecx
		sub     eax, edx
		mov     [dr@1a1ed0h], ecx
		mov     edx, 173h
		mov     [eax*4+dr@1a020ch], ecx
		mov     ecx, 6dh
		xor     eax, eax
		call    dr@135fch
		call    dr@23230h
		mov     edx, [dr@1a0fb8h]
		xor     eax, eax
		mov     al, [edx+182h]
		mov     [esp+50h], eax
		fild    word [esp+50h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+181h]
		mov     [esp+54h], eax
		fild    word [esp+54h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+180h]
		mov     [esp+58h], eax
		fild    word [esp+58h]
		sub     esp, byte 4
		mov     ebp, 3fh
		fstp    dword [esp]
		mov     edi, [esp+38h]
		call    dr@11378h
		test    edi, edi
		je      dr@3ac47h
		mov     ecx, 0f9h
		jmp     dr@3ac4ch
dr@3ac47h:
		mov     ecx, 0b2h
dr@3ac4ch:
		mov     edx, 212h
		mov     ebx, [VGABufferPtr_0]
		mov     esi, dr@1a54d0h
		add     ebx, 1183fh
dr@3ac62h:
		mov     edi, edx
dr@3ac64h:
		mov     al, [esi]
		or      al, al
		je      dr@3ac6ch
		mov     [ebx], al
dr@3ac6ch:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@3ac64h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@3ac62h
		mov     edx, [esp+44h]
;13:0003ac80
		add     edx, byte 3ch
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [VGABufferPtr_0]
		shl     edx, 7
		mov     ecx, 66h
		add     eax, edx
		mov     esi, [dr@1a10f8h]
		add     eax, ebp
		mov     edx, 44h
		lea     ebx, [eax+19h]
		shr     dl, 2
dr@3acaeh:
		mov     ch, dl
dr@3acb0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3acb0h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3acaeh
		mov     edx, [esp+44h]
		add     edx, byte 4fh
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [VGABufferPtr_0]
		shl     edx, 7
		mov     ecx, 40h
		add     eax, edx
		mov     esi, [dr@19de70h]
		lea     ebx, [eax+ebp*1]
		mov     edx, ecx
		add     ebx, byte 1bh
		shr     dl, 2
;13:0003ad00
dr@3ad00h:
		mov     ch, dl
dr@3ad02h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3ad02h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3ad00h
		cmp     dword [esp+2ch], byte 0
		je      dr@3ade2h
		mov     edx, [esp+44h]
		add     edx, 0cch
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, dr@18068ch
		lea     esi, [eax+ebp*1]
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
		lea     ecx, [esi+0a0h]
		call    renderTextToBuffer
		mov     ebx, dr@180690h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
		lea     ecx, [esi+14ah]
		call    renderTextToBuffer
		mov     edx, [esp+44h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, 1bf80h
		xor     edi, edi
		mov     [esp+48h], eax
		mov     bl, 0c4h
dr@3ad97h:
		mov     ecx, 2
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ecx
		cmp     edx, 212h
		jge     dr@3adceh
		mov     esi, [esp+48h]
		lea     eax, [edx+ebp*1]
dr@3adb4h:
		mov     ecx, [VGABufferPtr_0]
		add     eax, byte 2
		add     ecx, esi
		add     edx, byte 2
		mov     [ecx+eax*1-2], bl
		cmp     edx, 212h
		jl      dr@3adb4h
dr@3adceh:
		mov     edx, [esp+48h]
		add     edx, 280h
		inc     edi
		mov     [esp+48h], edx
		cmp     edi, byte 45h
		jl      dr@3ad97h
dr@3ade2h:
		mov     edx, [esp+44h]
		add     edx, byte 40h
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     eax, [VGABufferPtr_0]
		shl     edi, 7
		mov     ecx, 60h
		add     eax, edi
		mov     esi, [dr@1a1e6ch]
		add     eax, ebp
		mov     edx, ecx
		lea     ebx, [eax+1a0h]
		shr     dl, 2
dr@3ae14h:
		mov     ch, dl
dr@3ae16h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3ae16h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3ae14h
		mov     eax, [VGABufferPtr_0]
		mov     ecx, 10h
		add     eax, edi
		mov     edx, 60h
		add     eax, ebp
		mov     esi, [dr@1a1ea8h]
		lea     ebx, [eax+1a0h]
		lea     edi, [esp+0ch]
		shr     dl, 2
dr@3ae5ch:
		mov     ch, dl
dr@3ae5eh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3ae5eh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3ae5ch
		mov     ebx, 0ah
		lea     edx, [esp+18h]
		mov     eax, [dr@18e2a4h]
		lea     esi, [esp+18h]
		call    itoa
		mov     ax, [dr@180728h]
		mov     edx, [esp+44h]
		mov     [esp+0ch], ax
		add     edx, 92h
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@3aeb3h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@3aecbh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3aeb3h
dr@3aecbh:
		pop     edi
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [eax+ebp*1]
		mov     esi, [esp+44h]
		lea     eax, [esp+0ch]
		add     edx, 1a0h
		call    dr@25180h
		add     edx, eax
		lea     eax, [esp+0ch]
		add     esi, byte 50h
		call    dr@12f60h
		push    dr@185cbch
		mov     ecx, [dr@1a01b8h]
		mov     ebx, [dr@1a1ed0h]
		lea     eax, [ebp+1a0h]
		mov     edx, esi
		call    dr@259e0h
		lea     eax, [esi*4+0]
		add     eax, esi
		mov     edx, [VGABufferPtr_0]
		shl     eax, 7
		mov     ecx, 40h
		add     edx, eax
		mov     ebx, 60h
		add     edx, ebp
		add     eax, ebp
		add     edx, 1a0h
		add     eax, 1a0h
		call    dr@1398ch
		mov     ebx, [dr@1a1ed0h]
		inc     ebx
		mov     [dr@1a1ed0h], ebx
		cmp     ebx, byte 3fh
		jle     dr@3af66h
		xor     esi, esi
		mov     [dr@1a1ed0h], esi
dr@3af66h:
		mov     edx, [esp+44h]
		add     edx, 8fh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [VGABufferPtr_0]
		shl     eax, 7
		mov     ecx, 10h
		add     eax, edx
		mov     esi, [dr@1a1e88h]
		add     eax, ebp
		mov     edx, 126h
		lea     ebx, [eax+6bh]
dr@3af99h:
		mov     edi, edx
dr@3af9bh:
		mov     al, [esi]
		or      al, al
		je      dr@3afa3h
		mov     [ebx], al
dr@3afa3h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@3af9bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@3af99h
		mov     edx, [esp+44h]
		add     edx, 8bh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [VGABufferPtr_0]
		shl     eax, 7
		mov     ecx, 18h
		add     eax, edx
		mov     esi, [dr@1a1eb4h]
		add     eax, ebp
		mov     edx, 0ah
		lea     ebx, [eax+0f9h]
dr@3afe9h:
		mov     edi, edx
dr@3afebh:
		mov     al, [esi]
		or      al, al
		je      dr@3aff3h
		mov     [ebx], al
dr@3aff3h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@3afebh
		add     ebx, 280h
		sub     ebx, edx
;14:0003b000
		dec     ecx
		jne     dr@3afe9h
		call    dr@12cb8h
		call    dr@5994ch
		call    dr@59b3ch
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, dr@1a01e0h
		shl     eax, 2
		mov     edi, esp
		add     esi, eax
		mov     ebx, [esp+44h]
		push    edi
dr@3b037h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@3b04fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3b037h
dr@3b04fh:
		pop     edi
		push    byte 1
		mov     ecx, dr@1858c8h
		mov     edx, [dr@1a1ef8h]
		push    byte 1
		lea     eax, [edx*8+0]
		add     ebx, byte 60h
		sub     eax, edx
		push    byte 0
		shl     eax, 2
		push    12ch
		sub     eax, edx
		mov     dl, [dr@180130h]
		shl     eax, 2
;14:0003b080
		push    byte 0ah
		mov     [eax+dr@1a01e0h], dl
		lea     edx, [ebp+6eh]
		add     eax, dr@1a01e0h
		call    dr@17510h
		test    eax, eax
		je      dr@3ba76h
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
		cmp     dword [eax*4+dr@1a0220h], byte 2
		jne     dr@3b0feh
		push    8000h
		mov     edx, 6
		mov     eax, 5
		push    24000h
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
dr@3b0feh:
		cmp     dword [esp+2ch], byte 0
		je      dr@3b97bh
		mov     edx, [esp+44h]
		lea     eax, [edx*4+0]
		mov     ecx, 0f9h
		add     edx, eax
		mov     eax, [VGABufferPtr_0]
		shl     edx, 7
		mov     esi, dr@1a54d0h
		add     eax, edx
		mov     edx, 212h
		lea     ebx, [eax+ebp*1]
dr@3b132h:
		mov     edi, edx
dr@3b134h:
		mov     al, [esi]
		or      al, al
		je      dr@3b13ch
		mov     [ebx], al
dr@3b13ch:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@3b134h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@3b132h
		mov     edx, [esp+44h]
		add     edx, byte 60h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edx, [dr@1a1ef8h]
		lea     ecx, [eax+ebp*1]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     ebx, dr@1a01e0h
		sub     eax, edx
		add     ecx, byte 6eh
		shl     eax, 2
		mov     edx, dr@185ba9h
		add     ebx, eax
		mov     eax, [dr@1a10cch]
		call    renderTextToBuffer
		mov     edx, [esp+44h]
		add     edx, byte 3ch
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [VGABufferPtr_0]
		shl     edx, 7
		mov     ecx, 66h
		add     eax, edx
		mov     esi, [dr@1a10f8h]
		lea     ebx, [eax+ebp*1]
		mov     edx, 44h
		add     ebx, byte 19h
		shr     dl, 2
dr@3b1c5h:
		mov     ch, dl
dr@3b1c7h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3b1c7h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3b1c5h
		mov     edx, [esp+44h]
		add     edx, byte 4fh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [VGABufferPtr_0]
		shl     eax, 7
;14:0003b200
		add     eax, edx
		mov     edx, [dr@1a1ef8h]
		lea     ebx, [eax+ebp*1]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, 40h
		mov     esi, [eax*4+dr@1a0220h]
		add     ebx, byte 1bh
		mov     edx, ecx
		mov     esi, [esi*4+dr@19de70h]
		shr     dl, 2
dr@3b234h:
		mov     ch, dl
dr@3b236h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3b236h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3b234h
		mov     edx, [esp+44h]
		add     edx, byte 40h
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     eax, [VGABufferPtr_0]
		shl     edi, 7
		mov     ecx, 60h
		add     eax, edi
		mov     esi, [dr@1a1e6ch]
		add     eax, ebp
		mov     edx, ecx
		lea     ebx, [eax+1a0h]
		shr     dl, 2
dr@3b288h:
		mov     ch, dl
dr@3b28ah:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3b28ah
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3b288h
		mov     eax, [VGABufferPtr_0]
		mov     ecx, 10h
		add     edi, eax
		mov     edx, 60h
		lea     ebx, [edi+ebp*1]
		mov     esi, [dr@1a1ea8h]
		add     ebx, 1a0h
		lea     edi, [esp+0ch]
		shr     dl, 2
dr@3b2d1h:
		mov     ch, dl
dr@3b2d3h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@3b2d3h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@3b2d1h
		mov     ebx, 0ah
		lea     edx, [esp+18h]
		mov     eax, [dr@18e2a4h]
		lea     esi, [esp+18h]
		call    itoa
		mov     ax, [dr@180728h]
		mov     edx, [esp+44h]
		mov     [esp+0ch], ax
		add     edx, 92h
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@3b328h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@3b340h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3b328h
dr@3b340h:
		pop     edi
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [eax+ebp*1]
		mov     esi, [esp+44h]
		lea     eax, [esp+0ch]
		add     edx, 1a0h
		call    dr@25180h
		add     edx, eax
		lea     eax, [esp+0ch]
		add     esi, byte 50h
		call    dr@12f60h
		push    dr@185cbch
		mov     ecx, [dr@1a01b8h]
		mov     ebx, [dr@1a1ed0h]
		lea     eax, [ebp+1a0h]
		mov     edx, esi
		call    dr@259e0h
		lea     eax, [esi*4+0]
		add     eax, esi
		mov     edx, [VGABufferPtr_0]
		shl     eax, 7
		mov     ecx, 40h
		add     edx, eax
		mov     ebx, 60h
		add     edx, ebp
		add     eax, ebp
		add     edx, 1a0h
		add     eax, 1a0h
		call    dr@1398ch
		mov     ecx, [dr@1a1ed0h]
		inc     ecx
		mov     [dr@1a1ed0h], ecx
		cmp     ecx, byte 3fh
		jle     dr@3b3dbh
		xor     edi, edi
		mov     [dr@1a1ed0h], edi
dr@3b3dbh:
		mov     edx, [esp+44h]
		add     edx, 8fh
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [VGABufferPtr_0]
		shl     edx, 7
		mov     ecx, 10h
		add     eax, edx
		mov     esi, [dr@1a1e88h]
		add     eax, ebp
		mov     edx, 126h
		lea     ebx, [eax+6bh]
dr@3b40dh:
		mov     edi, edx
dr@3b40fh:
		mov     al, [esi]
		or      al, al
		je      dr@3b417h
		mov     [ebx], al
dr@3b417h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@3b40fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@3b40dh
		mov     edx, [esp+44h]
		add     edx, 8bh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [VGABufferPtr_0]
		shl     eax, 7
		add     eax, edx
		mov     edx, [dr@1a1ef8h]
		lea     ebx, [eax+ebp*1]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, 18h
		add     ebx, byte 79h
		mov     edx, [eax*4+dr@1a020ch]
		mov     esi, [dr@1a1eb4h]
		add     ebx, edx
		mov     edx, 0ah
dr@3b478h:
		mov     edi, edx
dr@3b47ah:
		mov     al, [esi]
		or      al, al
		je      dr@3b482h
;14:0003b480
		mov     [ebx], al
dr@3b482h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@3b47ah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@3b478h
		mov     edx, [esp+44h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     bl, 0c4h
		shl     eax, 7
		xor     edi, edi
		mov     [esp+4ch], eax
dr@3b4aah:
		mov     ecx, 2
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ecx
		mov     eax, edx
		cmp     edx, 212h
		jge     dr@3b4e1h
		mov     esi, [esp+4ch]
		add     edx, ebp
dr@3b4c8h:
		mov     ecx, [VGABufferPtr_0]
		add     edx, byte 2
		add     ecx, esi
		add     eax, byte 2
		mov     [ecx+edx*1-2], bl
		cmp     eax, dword 212h
		jl      dr@3b4c8h
dr@3b4e1h:
		mov     ecx, [esp+4ch]
		add     ecx, 280h
		inc     edi
		mov     [esp+4ch], ecx
		cmp     edi, 0b2h
		jl      dr@3b4aah
		mov     esi, 1
		mov     edx, [esp+44h]
		mov     ecx, dr@185a14h
		lea     eax, [ebp+82h]
		add     edx, 0d3h
		mov     ebx, esi
		mov     [dr@185a14h], esi
		call    dr@148cch
		test    al, al
		jne     dr@3b54eh
		push    8000h
		mov     edx, 19h
		mov     ebp, [dr@1854ach]
		mov     ecx, [dr@24cc54h]
		push    ebp
		mov     eax, esi
		xor     ebx, ebx
		call    dr@654d4h
		xor     dh, dh
		mov     [esp+54h], dh
		jmp     dr@3b97bh
dr@3b54eh:
		mov     edi, [esp+44h]
		mov     ecx, 2c380h
		mov     ebx, 1b8h
		mov     esi, [dr@1a1138h]
		add     edi, byte 1eh
		add     ebp, byte 1eh
		mov     [esp+44h], edi
		mov     edi, [VGABufferPtr_0]
		add     esi, 0d200h
		add     edi, 0d200h
		xor     edx, edx
;14:0003b580
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		xor     eax, eax
		mov     ecx, 0bah
		call    dr@13710h
		push    byte 1
		mov     edx, [esp+48h]
		mov     eax, ebp
		call    dr@13248h
		mov     edx, [esp+44h]
		add     edx, byte 12h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, dr@182730h
		lea     ecx, [eax+ebp*1]
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		add     ecx, byte 50h
		call    renderTextToBuffer
		mov     edx, [dr@196a94h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edx, [esp+44h]
		shl     eax, 2
		add     edx, byte 4fh
		add     edx, eax
		lea     eax, [ebp+16h]
		call    dr@13bd4h
		mov     edx, [esp+44h]
		add     edx, byte 4ah
;14:0003b600
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebp
		mov     edi, [dr@196a94h]
		lea     ecx, [eax+2eh]
		test    edi, edi
		jne     dr@3b62ch
		mov     ebx, dr@18768ah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		jmp     dr@3b63bh
dr@3b62ch:
		mov     ebx, dr@18768ah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
dr@3b63bh:
		call    renderTextToBuffer
		mov     edx, [esp+44h]
		add     edx, byte 66h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     ecx, [eax+ebp*1+2eh]
		cmp     edi, byte 1
		jne     dr@3b66dh
		mov     ebx, dr@1876a2h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		jmp     dr@3b67ch
dr@3b66dh:
		mov     ebx, dr@1876a2h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
dr@3b67ch:
		call    renderTextToBuffer
		mov     edx, [esp+44h]
		add     edx, 82h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebp
		lea     ecx, [eax+2eh]
		cmp     edi, byte 2
		jne     dr@3b6b2h
		mov     ebx, dr@1876bah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		jmp     dr@3b6c1h
dr@3b6b2h:
		mov     ebx, dr@1876bah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
dr@3b6c1h:
		call    renderTextToBuffer
		call    dr@12dc4h
		mov     eax, [esp+44h]
		add     eax, byte 4ah
		mov     [esp+28h], eax
		mov     edx, eax
		shl     eax, 2
		add     eax, edx
		shl     eax, 7
		mov     [esp+24h], eax
		add     eax, ebp
		add     eax, byte 16h
		mov     [esp+34h], eax
		mov     eax, [esp+44h]
		add     eax, 82h
		mov     [esp+30h], eax
		mov     eax, [esp+44h]
		add     eax, byte 66h
		mov     [esp+38h], eax
		mov     eax, [esp+44h]
		add     eax, byte 4fh
		mov     [esp+3ch], eax
		lea     eax, [ebp+16h]
		mov     [esp+40h], eax
dr@3b717h:
		imul    edx, edi, byte 1ch
		call    dr@5994ch
		mov     cl, al
		mov     [esp+58h], al
		call    dr@2ab50h
		call    dr@2ab50h
		add     edx, [esp+3ch]
		mov     eax, [esp+40h]
		call    dr@13bd4h
		xor     al, al
		cmp     cl, 0c8h
		jne     dr@3b74ah
		test    edi, edi
		jle     dr@3b74ah
		mov     al, 1
		dec     edi
dr@3b74ah:
		cmp     byte [esp+58h], 48h
		jne     dr@3b758h
		test    edi, edi
		jle     dr@3b758h
		mov     al, 1
		dec     edi
dr@3b758h:
		cmp     byte [esp+58h], 0d0h
		jne     dr@3b767h
		cmp     edi, byte 2
		jge     dr@3b767h
		mov     al, 1
		inc     edi
dr@3b767h:
		cmp     byte [esp+58h], 50h
		jne     dr@3b776h
		cmp     edi, byte 2
		jge     dr@3b776h
		mov     al, 1
		inc     edi
dr@3b776h:
		test    al, al
		je      dr@3b89fh
		mov     edx, [esp+28h]
		imul    esi, edx, 280h
		mov     ecx, esi
		add     esi, 0d200h
dr@3b790h:
		mov     eax, [VGABufferPtr_0]
		add     eax, ecx
		mov     ebx, 163h
		add     eax, ebp
		mov     edx, 0c4h
		add     eax, byte 16h
		add     ecx, 280h
		call    memset
		cmp     ecx, esi
		jne     dr@3b790h
		imul    eax, [esp+28h], 280h
		add     eax, ebp
		lea     ecx, [eax+2eh]
		test    edi, edi
		jne     dr@3b7d7h
		mov     ebx, dr@18768ah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		jmp     dr@3b7e6h
dr@3b7d7h:
		mov     ebx, dr@18768ah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
dr@3b7e6h:
		call    renderTextToBuffer
		imul    eax, [esp+38h], 280h
		add     eax, ebp
		lea     ecx, [eax+2eh]
		cmp     edi, byte 1
		jne     dr@3b80eh
		mov     ebx, dr@1876a2h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		jmp     dr@3b81dh
dr@3b80eh:
		mov     ebx, dr@1876a2h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
dr@3b81dh:
		call    renderTextToBuffer
		imul    ecx, [esp+30h], 280h
		add     ecx, ebp
		add     ecx, byte 2eh
		cmp     edi, byte 2
		jne     dr@3b845h
		mov     ebx, dr@1876bah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		jmp     dr@3b854h
dr@3b845h:
		mov     ebx, dr@1876bah
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10e0h]
dr@3b854h:
		call    renderTextToBuffer
		mov     edx, [esp+24h]
		mov     eax, [VGABufferPtr_0]
		add     eax, edx
		add     eax, ebp
		mov     ecx, 54h
		lea     edx, [eax+16h]
		mov     ebx, 190h
		mov     eax, [esp+34h]
		call    dr@1398ch
		push    8000h
		mov     edx, 19h
		mov     ebx, [dr@1854ach]
		mov     eax, 1
		push    ebx
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
dr@3b89fh:
		mov     ch, [esp+58h]
		cmp     ch, 1ch
		je      dr@3b8b6h
		cmp     ch, 9ch
		je      dr@3b8b6h
		cmp     ch, 39h
		jne     dr@3b935h
dr@3b8b6h:
		mov     [dr@196a94h], edi
		test    edi, edi
		jne     dr@3b8e1h
		push    8000h
		mov     edx, 1
		mov     eax, 5
		push    24000h
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
dr@3b8e1h:
		cmp     dword [dr@196a94h], byte 1
		jne     dr@3b90bh
		push    8000h
		mov     edx, 2
		mov     eax, 5
		push    24000h
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
dr@3b90bh:
		cmp     dword [dr@196a94h], byte 2
		jne     dr@3b935h
		push    8000h
		mov     edx, 3
		mov     eax, 5
		push    24000h
		mov     ecx, [dr@24cc54h]
		xor     ebx, ebx
		call    dr@654d4h
dr@3b935h:
		cmp     byte [esp+58h], 1
		jne     dr@3b964h
		push    8000h
		mov     eax, [dr@1854ach]
		mov     ecx, [dr@24cc54h]
		xor     dh, dh
		xor     ebx, ebx
		mov     [esp+58h], dh
		push    eax
		mov     edx, 19h
		mov     eax, 1
		call    dr@654d4h
dr@3b964h:
		mov     bl, [esp+58h]
		cmp     bl, 1ch
		je      dr@3b97bh
		cmp     bl, 9ch
		je      dr@3b97bh
		cmp     bl, 1
		jne     dr@3b717h
dr@3b97bh:
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		add     eax, dr@1a01e0h
		call    strlwr
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     ch, [eax+dr@1a01e0h]
		cmp     ch, 60h
		jbe     dr@3b9ceh
		cmp     ch, 7bh
		jae     dr@3b9ceh
		mov     dh, ch
		sub     dh, 20h
		mov     [eax+dr@1a01e0h], dh
dr@3b9ceh:
		xor     edx, edx
		mov     [dr@1a1efch], edx
		jmp     dr@3b9feh
dr@3b9d8h:
		mov     al, [edx+eax*1+dr@1a01e0h]
		and     eax, 0ffh
		mov     al, [eax+dr@185bedh]
		mov     edi, [dr@1a1efch]
		and     eax, 0ffh
		add     edi, eax
		inc     edx
		mov     [dr@1a1efch], edi
dr@3b9feh:
		imul    edi, [dr@1a1ef8h], byte 6ch
		add     edi, dr@1a01e0h
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		imul    eax, [dr@1a1ef8h], byte 6ch
		cmp     edx, ecx
		jb      dr@3b9d8h
		mov     edx, [eax+dr@1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [dr@1a0fb8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+50h], eax
		fild    word [esp+50h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+54h], eax
		fild    word [esp+54h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+58h], eax
		fild    word [esp+58h]
		sub     esp, byte 4
		fstp    dword [esp]
		call    dr@11378h
		jmp     dr@3bad9h
dr@3ba76h:
		push    8000h
		mov     edx, 19h
;14:0003ba80
		mov     edi, [dr@1854ach]
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
		mov     edi, dr@1a01e0h
		shl     eax, 2
		mov     esi, esp
		add     edi, eax
		xor     dl, dl
		push    edi
dr@3babch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@3bad4h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3babch
dr@3bad4h:
		pop     edi
		mov     [esp+54h], dl
dr@3bad9h:
		cmp     dword [dr@19bd60h], byte 0
		je      dr@3bb14h
		mov     ecx, 390a3h
		mov     ebx, dr@1807cch
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a10fch]
		call    renderTextToBuffer
		mov     ecx, 390d9h
;14:0003bb00
		mov     ebx, dr@1807e8h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
dr@3bb14h:
		call    dr@23230h
		call    dr@12cb8h
		xor     eax, eax
		mov     [dr@1a1ed0h], eax
		mov     al, [esp+54h]
		add     esp, byte 5ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=CODE
dr@182720h:
db	"licence3.bpk",0
dr@182730h:
db	"Select difficulty:",0
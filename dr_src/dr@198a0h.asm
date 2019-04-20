cpu 386

    extern  __CHK
    extern  dr@3f71ch
    extern  dr@185a54h
    extern  itoa
    extern  dr@135fch
    extern  dr@23230h
    extern  dr@13710h
    extern  dr@13248h
    extern  dr@180824h
    extern  dr@185ba9h
    extern  dr@1a10cch
    extern  renderTextToBuffer
    extern  dr@12cb8h
    extern  dr@24e4ach
    extern  __STOSB
    extern  dr@2ab50h
    extern  dr@23594h
    extern  dr@18082ch
    extern  dr@180848h
    extern  dr@5994ch
    extern  dr@59b3ch
    extern  __STOSD
    extern  dr@1a1ef8h
    extern  dr@1a110ch
    extern  dr@1a1108h
    extern  dr@180918h
    extern  dr@185c0bh
    extern  dr@1a0ffch
    extern  memset
    extern  dr@1398ch
    extern  dr@1a1dbah
    extern  dr@23488h
    extern  dr@60705h
    extern  dr@180980h
    extern  dr@3f77ch
    extern  dr@1a116ch
    extern  dr@1a1f4eh
    extern  dr@1a1f4dh
    extern  dr@180864h
    extern  dr@1a01e0h
    extern  dr@180868h
    extern  dr@1a1f63h
    extern  dr@12d6ch
    extern  dr@180130h
    extern  dr@1a0ff1h
    extern  dr@19dec0h
    extern  dr@196ab8h
    extern  dr@1a2011h
    extern  dr@185a14h
    extern  dr@180888h
    extern  dr@180890h
    extern  dr@1808a4h
    extern  dr@1808b8h
    extern  dr@1808c8h
    extern  dr@1808cch
    extern  VGABufferPtr_0
    extern  dr@1a0220h
    extern  dr@19de70h
    extern  dr@1808d0h
    extern  dr@1808ech
    extern  dr@18093ch
    extern  dr@25138h
    extern  dr@180940h
    extern  dr@180944h
    extern  dr@180948h
    extern  dr@19dec4h
    extern  dr@19dec8h
    extern  dr@19decch
    extern  dr@180130h
    extern  dr@197d0h
    extern  dr@1807cch
    extern  dr@1a10fch
    extern  dr@1807e8h
    extern  dr@1a116ch
    extern  dr@1a1f4eh
    extern  dr@1a1f4dh
    extern  dr@180864h
    extern  dr@18094ch
    extern  dr@180964h
    extern  dr@196ab8h
    extern  dr@180974h
    extern  dr@1a1f63h
    extern  dr@12d6ch
    extern  dr@61278h
    extern  dr@623d4h
    extern  dr@199f9ch
    extern  dr@61cd0h
    extern  dr@1123ch
    extern  dr@24e4d0h
    extern  dr@196adch
    extern  dr@19bd60h
    extern  dr@10754h
    extern  dr@1c6bch
    extern  dr@2b8ach
    extern  dr@185a24h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@198a0h
dr@198a0h:
		push    130h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 110h
		mov     edx, 58h
		mov     eax, 1fh
		mov     ebx, 68h
		call    dr@3f71ch
		mov     [esp+0c4h], edx
		mov     [esp+0dch], ebx
		mov     [esp+0fch], eax
		mov     eax, 1fh
		mov     ebx, 0ah
		lea     edx, [esp+0ach]
		call    dr@3f71ch
		mov     ebp, eax
		mov     eax, [dr@185a54h]
		mov     ecx, 6dh
		call    itoa
		mov     ebx, 27fh
		mov     edx, 173h
		xor     eax, eax
		call    dr@135fch
		call    dr@23230h
		mov     eax, 4
		xor     edx, edx
		mov     ecx, 64h
		call    dr@13710h
		push    byte 1
		mov     edx, 0e9h
		mov     ebx, 88h
		mov     eax, edx
		call    dr@13248h
		mov     ecx, 294fah
		mov     ebx, dr@180824h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		call    renderTextToBuffer
		call    dr@12cb8h
		mov     eax, [dr@24e4ach]
		mov     dx, [eax]
		mov     ecx, 4
		mov     [eax+2], dx
		lea     eax, [esp+0b4h]
		xor     edx, edx
		xor     ebx, ebx
		call    __STOSB
		mov     edi, 12h
		mov     esi, 0ah
		xor     ecx, ecx
dr@1998bh:
		call    dr@2ab50h
		mov     eax, [esp+0fch]
		mov     edx, esi
		call    dr@23594h
		test    eax, eax
		je      dr@19a00h
		mov     eax, [esp+0fch]
		cmp     byte [eax+1], 1
		jne     dr@199c2h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     byte [esp+eax*1+0b4h], 1
dr@199c2h:
		mov     eax, [esp+0fch]
		cmp     byte [eax+1], 2
		jne     dr@199e2h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     byte [esp+eax*1+0b4h], 1
dr@199e2h:
		mov     eax, [esp+0fch]
		cmp     cl, [eax+1]
		jne     dr@19a00h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+eax*1+0b4h], cl
;2:00019a00
dr@19a00h:
		mov     eax, [esp+0fch]
		mov     edx, edi
		call    dr@23594h
		test    eax, eax
		je      dr@19a50h
		mov     eax, [esp+0fch]
		cmp     byte [eax+1], 1
		jne     dr@19a32h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     byte [esp+eax*1+0b4h], 1
dr@19a32h:
		mov     eax, [esp+0fch]
		cmp     cl, [eax+1]
		jne     dr@19a50h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+eax*1+0b4h], cl
dr@19a50h:
		inc     ebx
		cmp     ebx, byte 46h
		jl      dr@1998bh
		mov     ecx, 4
		mov     bl, [esp+0b4h]
		xor     eax, eax
		mov     [esp+0d8h], ecx
		test    bl, bl
		jne     dr@19a7ch
dr@19a73h:
		mov     [esp+0d8h], eax
		jmp     dr@19a8eh
dr@19a7ch:
		inc     eax
		cmp     eax, byte 4
;2:00019a80
		jge     dr@19a8eh
		cmp     byte [esp+eax*1+0b4h], 0
		je      dr@19a73h
		jmp     dr@19a7ch
dr@19a8eh:
		cmp     dword [esp+0d8h], byte 3
		jle     dr@19b26h
		mov     eax, 4
		mov     ecx, 58h
		xor     edx, edx
		mov     ebx, 1e2h
		call    dr@13710h
		push    byte 1
		mov     edx, 0c6h
		mov     eax, 46h
		call    dr@13248h
		mov     ecx, 20851h
		mov     ebx, dr@18082ch
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		call    renderTextToBuffer
		mov     ecx, 25851h
		mov     ebx, dr@180848h
		mov     edx, dr@185ba9h
		mov     eax, [dr@1a10cch]
		call    renderTextToBuffer
		call    dr@12cb8h
		call    dr@5994ch
		call    dr@59b3ch
dr@19b04h:
		call    dr@5994ch
		test    al, al
		je      dr@19b04h
		call    dr@5994ch
		call    dr@59b3ch
		xor     eax, eax
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@19b26h:
		mov     ebx, dr@1a116ch
		xor     edx, edx
		lea     ecx, [ebx+96h]
dr@19b33h:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		push    edi
dr@19b39h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19b51h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19b39h
dr@19b51h:
		pop     edi
		add     ebx, 96h
		mov     al, [edx+dr@1a1f4eh]
		add     ecx, 96h
		mov     [edx+dr@1a1f4dh], al
		cmp     edx, byte 15h
		jl      dr@19b33h
		mov     eax, [dr@180864h]
		mov     edx, [dr@1a1ef8h]
		mov     [dr@1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, dr@1a01e0h
		shl     eax, 2
		mov     edi, dr@1a1dbah
		add     esi, eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@19ba5h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19bbdh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19ba5h
dr@19bbdh:
		pop     edi
		mov     esi, dr@180868h
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@19bcch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19be4h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19bcch
dr@19be4h:
		pop     edi
		xor     cl, cl
		mov     ebx, 6
		mov     [dr@1a1f63h], cl
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		mov     eax, dr@1a1dbah
		lea     edx, [ecx+1]
		mov     edi, 1
		call    dr@23488h
		call    dr@23230h
		call    dr@12d6ch
		mov     dl, [dr@180130h]
		mov     [esp+108h], edi
		xor     eax, eax
dr@19c27h:
		add     eax, byte 0bh
		mov     [eax+dr@1a0ff1h], dl
		cmp     eax, byte 2ch
		jne     dr@19c27h
		mov     ecx, 4
		mov     eax, dr@19dec0h
		xor     edx, edx
		call    __STOSD
		mov     edx, [esp+0fch]
		mov     al, [esp+0d8h]
		mov     [edx], al
		mov     eax, edx
		mov     byte [edx+1], 1
		xor     eax, edx
dr@19c5eh:
		imul    ebx, [dr@1a1ef8h], byte 6ch
		inc     edx
		mov     bl, [ebx+eax*1+dr@1a01e0h]
		inc     eax
		mov     [edx+1], bl
		cmp     eax, byte 0bh
		jl      dr@19c5eh
		mov     edx, [esp+0fch]
		xor     eax, eax
dr@19c7fh:
		inc     edx
;2:00019c80
		mov     bl, [esp+eax*1+0ach]
		inc     eax
		mov     [edx+0ch], bl
		cmp     eax, byte 7
		jl      dr@19c7fh
		mov     edx, [esp+0fch]
		mov     al, [dr@196ab8h]
		mov     [edx+14h], al
		xor     eax, eax
dr@19ca1h:
		inc     edx
		mov     bl, [eax+dr@1a2011h]
		inc     eax
		mov     [edx+14h], bl
		cmp     eax, byte 9
		jl      dr@19ca1h
		mov     eax, [esp+0fch]
		push    byte 1
		mov     ecx, 106h
		mov     dl, [dr@185a14h]
		mov     ebx, 1c2h
		mov     [eax+1eh], dl
		mov     edx, [esp+0e0h]
		mov     eax, [esp+0c8h]
		call    dr@13248h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, dr@1a01e0h
		shl     eax, 2
		mov     edi, esp
		add     esi, eax
;2:00019d00
		mov     edx, [esp+0dch]
		push    edi
dr@19d08h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19d20h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19d08h
dr@19d20h:
		pop     edi
		mov     esi, dr@180888h
		mov     edi, esp
		add     edx, byte 73h
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@19d34h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19d4ch
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19d34h
dr@19d4ch:
		pop     edi
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+0c4h]
		shl     eax, 7
		mov     ebx, esp
		add     eax, esi
		mov     edi, esp
		lea     ecx, [eax+16h]
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a110ch]
		mov     esi, dr@180890h
		call    renderTextToBuffer
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		mov     eax, [dr@196ab8h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		call    itoa
		lea     esi, [esp+50h]
		mov     edi, esp
		mov     edx, [esp+0dch]
		mov     ebx, esp
		add     edx, byte 2eh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@19db1h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19dc9h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19db1h
dr@19dc9h:
		pop     edi
		lea     eax, [edx*4+0]
		mov     ecx, [esp+0c4h]
		add     eax, edx
		mov     edi, esp
		shl     eax, 7
		mov     edx, dr@185c0bh
		add     ecx, eax
		mov     eax, [dr@1a110ch]
		add     ecx, byte 5dh
		mov     esi, dr@1808a4h
		call    renderTextToBuffer
		mov     edx, [esp+0dch]
		movsd   
;2:00019e00
		movsd   
		movsd   
		movsd   
		movsw   
		mov     ebx, esp
		lea     esi, [esp+0ach]
		mov     edi, esp
		add     edx, byte 3eh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@19e1ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19e34h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19e1ch
dr@19e34h:
		pop     edi
		lea     eax, [edx*4+0]
		mov     ecx, [esp+0c4h]
		add     eax, edx
		mov     edi, esp
		shl     eax, 7
		mov     edx, dr@185c0bh
		add     ecx, eax
		mov     eax, [dr@1a110ch]
		add     ecx, byte 5dh
		mov     esi, dr@1808b8h
		call    renderTextToBuffer
		movsd   
		movsd   
		movsd   
		movsw   
		cmp     dword [dr@185a14h], byte 0
		je      dr@19e78h
		mov     esi, dr@1808c8h
		jmp     dr@19e7dh
dr@19e78h:
		mov     esi, dr@1808cch
dr@19e7dh:
		mov     edi, esp
		push    edi
;2:00019e80
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@19e88h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@19ea0h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@19e88h
dr@19ea0h:
		pop     edi
		mov     edx, [esp+0dch]
		add     edx, byte 4eh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		add     eax, edx
		mov     ebx, esp
		lea     ecx, [eax+5dh]
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a110ch]
		call    renderTextToBuffer
		mov     edx, [esp+0dch]
		add     edx, byte 27h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [VGABufferPtr_0]
		shl     eax, 7
		mov     ebx, [esp+0c4h]
		add     eax, edx
		add     eax, ebx
		mov     edx, [dr@1a1ef8h]
		lea     ebx, [eax+17h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, 40h
		mov     esi, [eax*4+dr@1a0220h]
		mov     edx, ecx
		mov     esi, [esi*4+dr@19de70h]
		shr     dl, 2
dr@19f2ah:
		mov     ch, dl
dr@19f2ch:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@19f2ch
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@19f2ah
		mov     edx, [esp+0dch]
		lea     ebx, [edx*4+0]
		add     ebx, edx
		shl     ebx, 7
		mov     cl, 0c4h
		lea     eax, [ebx+6180h]
		mov     esi, [esp+0c4h]
		add     ebx, 10400h
dr@19f74h:
		mov     edx, [VGABufferPtr_0]
		add     edx, eax
		add     edx, esi
		mov     byte [edx+57h], 9
		mov     [edx+17h], cl
		add     eax, 280h
		mov     [edx+18h], cl
		cmp     eax, ebx
		jne     dr@19f74h
		mov     edx, [esp+0dch]
		add     edx, byte 68h
		lea     esi, [edx*4+0]
		mov     edi, [esp+0c4h]
		add     esi, edx
		mov     eax, 4
		shl     esi, 7
dr@19fb3h:
		mov     edx, [VGABufferPtr_0]
		add     edx, esi
		inc     eax
		add     edx, edi
		mov     byte [edx+eax*1+16h], 9
		cmp     eax, byte 40h
		jl      dr@19fb3h
		mov     byte [edx+57h], 0fh
		mov     edx, [esp+0dch]
		mov     ecx, 6
		add     edx, byte 0ah
		mov     edi, esp
		lea     eax, [edx*4+0]
		mov     esi, dr@1808d0h
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		rep movsd   
		movsw   
		movsb   
		add     eax, edx
		mov     ebx, esp
		lea     ecx, [eax+64h]
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
		mov     edx, [esp+0dch]
		mov     edi, esp
		add     edx, 0dah
		mov     esi, dr@1808ech
		lea     eax, [edx*4+0]
		mov     ecx, 0ah
		add     eax, edx
		mov     ebx, [esp+0c4h]
		shl     eax, 7
		rep movsd   
		movsw   
		add     eax, ebx
		mov     edx, dr@185c0bh
		lea     ecx, [eax+14h]
		mov     ebx, esp
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		call    renderTextToBuffer
		mov     edx, [esp+0dch]
		mov     esi, dr@180918h
		add     edx, 0eah
		mov     ecx, 8
		lea     eax, [edx*4+0]
		rep movsd   
		movsb   
		add     eax, edx
		mov     ecx, [esp+0c4h]
		shl     eax, 7
		add     eax, ecx
		mov     ebx, esp
		lea     ecx, [eax+14h]
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
		mov     eax, [esp+0dch]
		mov     edi, esp
		add     eax, 8dh
		mov     esi, dr@18093ch
		mov     [esp+0d4h], eax
		mov     edx, eax
		shl     eax, 2
		mov     ebx, esp
		add     eax, edx
		movsw   
		movsb   
		shl     eax, 7
		mov     edi, [esp+0c4h]
		mov     [esp+0d0h], eax
		lea     esi, [eax+edi*1]
		mov     edx, dr@185c0bh
		mov     eax, esp
		lea     ecx, [esi+27h]
		call    dr@25138h
		sub     ecx, eax
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		mov     ebx, dr@1a01e0h
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		add     esi, byte 2ch
		sub     eax, edx
		mov     ecx, esi
		shl     eax, 2
		mov     edx, dr@185c0bh
		add     ebx, eax
		mov     eax, [dr@1a1108h]
		mov     [esp+0bch], esi
		call    renderTextToBuffer
		mov     eax, [esp+0dch]
		mov     esi, dr@180940h
		add     eax, 9dh
		mov     ecx, [esp+0c4h]
		mov     [esp+0c0h], eax
		mov     edx, eax
		shl     eax, 2
		mov     ebx, esp
		add     eax, edx
		movsw   
		movsb   
		shl     eax, 7
		mov     edx, dr@185c0bh
		add     ecx, eax
		mov     eax, esp
		add     ecx, byte 27h
		call    dr@25138h
		sub     ecx, eax
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
		mov     edx, [esp+0dch]
		mov     edi, esp
		add     edx, 0adh
		mov     esi, dr@180944h
		lea     eax, [edx*4+0]
		mov     ebx, esp
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		movsw   
		movsb   
		add     edx, eax
		mov     eax, esp
		lea     ecx, [edx+27h]
		call    dr@25138h
		mov     edx, dr@185c0bh
		sub     ecx, eax
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
		mov     edx, [esp+0dch]
		mov     edi, esp
		add     edx, 0bdh
		mov     esi, dr@180948h
		lea     eax, [edx*4+0]
		mov     ebx, esp
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		movsw   
		movsb   
		add     edx, eax
		mov     eax, esp
		lea     ecx, [edx+27h]
		call    dr@25138h
		mov     edx, dr@185c0bh
		sub     ecx, eax
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
		call    dr@12cb8h
		mov     eax, [dr@24e4ach]
		mov     dx, [eax]
		mov     [eax+2], dx
		call    dr@5994ch
		call    dr@59b3ch
		mov     dword [esp+0f8h], 0ffffffffh
		mov     eax, [esp+0d0h]
		mov     [esp+0e0h], eax
		mov     eax, [esp+0bch]
		mov     [esp+0e4h], eax
		mov     eax, [esp+0d8h]
		xor     edx, edx
		add     eax, byte 0bh
		mov     [esp+0f0h], edx
		mov     [esp+104h], eax
		mov     eax, [esp+0bch]
		mov     edx, [esp+0c0h]
		mov     [esp+0e8h], eax
		lea     eax, [edx*4+0]
;2:0001a280
		add     eax, edx
		shl     eax, 7
		mov     edx, [esp+0d4h]
		mov     [esp+0c8h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [eax+0bb80h]
		mov     [esp+100h], edx
		mov     edx, dr@1a0ffch
		add     edx, byte 21h
		mov     [esp+0b8h], edx
		mov     edx, [esp+0c4h]
		mov     ecx, 1
		add     edx, byte 2ch
		mov     [esp+0cch], eax
		mov     [esp+0ech], edx
dr@1a2d8h:
		mov     ebx, [esp+0f8h]
		cmp     ebx, byte 1ch
		je      dr@1a655h
		cmp     ebx, 9ch
		je      dr@1a655h
		call    dr@2ab50h
		mov     edi, [esp+0f0h]
;2:0001a300
		mov     al, 1
		inc     edi
		mov     [esp+10ch], al
		mov     [esp+0f0h], edi
dr@1a311h:
		mov     edx, [esp+104h]
		mov     eax, ebp
		call    dr@23594h
		test    eax, eax
		je      dr@1a459h
		cmp     byte [ebp+0], 1
		jne     dr@1a3e7h
		mov     ebx, ebp
		xor     edx, edx
dr@1a335h:
		inc     edx
		mov     al, [ebx+5]
		inc     ebx
		mov     [esp+edx*1+9fh], al
		cmp     edx, byte 0bh
		jl      dr@1a335h
		xor     eax, eax
		xor     edx, edx
		mov     al, [ebp+2]
		mov     dl, [ebp+1]
		shl     eax, 8
		add     edx, eax
		xor     eax, eax
		mov     al, [ebp+3]
		shl     eax, 10h
		add     edx, eax
		xor     eax, eax
		mov     al, [ebp+4]
		shl     eax, 18h
		xor     ebx, ebx
		add     edx, eax
		xor     eax, eax
dr@1a36dh:
		cmp     edx, [dr@19dec0h]
		je      dr@1a3deh
		cmp     edx, [dr@19dec4h]
		je      dr@1a3deh
		cmp     edx, [dr@19dec8h]
		je      dr@1a3deh
		cmp     edx, [dr@19decch]
		je      dr@1a3deh
		cmp     dword [ebx+dr@19dec0h], byte 0
		jne     dr@1a3deh
		imul    eax, eax, byte 0bh
		mov     edi, dr@1a0ffch
		lea     esi, [esp+0a0h]
		add     edi, eax
		mov     ecx, 1
		push    edi
dr@1a3adh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a3c5h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a3adh
dr@1a3c5h:
		pop     edi
		mov     edi, [esp+108h]
		add     edi, ecx
		mov     [ebx+dr@19dec0h], edx
		mov     [esp+108h], edi
		jmp     dr@1a3e7h
dr@1a3deh:
		add     ebx, byte 4
		inc     eax
		cmp     ebx, byte 10h
		jl      dr@1a36dh
dr@1a3e7h:
		cmp     byte [ebp+0], 0
		jne     dr@1a462h
		xor     edx, edx
		xor     eax, eax
		mov     dl, [ebp+2]
		mov     al, [ebp+1]
		shl     edx, 8
		add     eax, edx
;2:0001a400
		xor     edx, edx
		mov     dl, [ebp+3]
		shl     edx, 10h
		add     eax, edx
		xor     edx, edx
		mov     dl, [ebp+4]
		mov     esi, [dr@19dec0h]
		shl     edx, 18h
		xor     ebx, ebx
		add     eax, edx
		xor     edx, edx
		cmp     eax, esi
		jne     dr@1a446h
dr@1a422h:
		imul    ebx, ebx, byte 0bh
		mov     al, [dr@180130h]
		mov     [ebx+dr@1a0ffch], al
		xor     eax, eax
		mov     ecx, 1
		mov     [edx+dr@19dec0h], eax
		sub     [esp+108h], ecx
		jmp     dr@1a462h
dr@1a446h:
		add     edx, byte 4
		inc     ebx
		cmp     edx, byte 10h
		jge     dr@1a462h
		cmp     eax, [edx+dr@19dec0h]
		je      dr@1a422h
		jmp     dr@1a446h
dr@1a459h:
		xor     ah, ah
		mov     [esp+10ch], ah
dr@1a462h:
		cmp     byte [esp+10ch], 1
		je      dr@1a311h
		mov     eax, [esp+0f0h]
		mov     edx, eax
		mov     ebx, 4
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     dr@1a49dh
		mov     ebx, 0ah
		mov     edx, 1fh
		mov     eax, [esp+0fch]
		call    dr@23488h
dr@1a49dh:
		call    dr@5994ch
		and     eax, 0ffh
		mov     ebx, [esp+108h]
		mov     [esp+0f8h], eax
		cmp     ebx, byte 4
		jne     dr@1a4c5h
		mov     dword [esp+0f8h], 1ch
dr@1a4c5h:
		mov     edi, [esp+0f8h]
		cmp     edi, byte 1ch
		je      dr@1a4d9h
		cmp     edi, 9ch
		jne     dr@1a515h
dr@1a4d9h:
		cmp     dword [esp+108h], byte 1
		jle     dr@1a515h
		mov     eax, [esp+0fch]
		mov     edx, [esp+0fch]
		mov     byte [eax+1], 2
		mov     al, [esp+108h]
		mov     ebx, 0ah
		mov     [edx+2], al
		mov     edx, 1fh
		mov     eax, [esp+0fch]
		call    dr@23488h
dr@1a515h:
		mov     ebx, [esp+0f8h]
		cmp     ebx, byte 1ch
		je      dr@1a529h
		cmp     ebx, 9ch
		jne     dr@1a53eh
dr@1a529h:
		cmp     dword [esp+108h], byte 1
		jg      dr@1a53eh
		mov     dword [esp+0f8h], 0ffffffffh
dr@1a53eh:
		test    ecx, ecx
		je      dr@1a647h
		mov     edi, 190h
		mov     esi, [esp+0cch]
		mov     ecx, 0c4h
dr@1a557h:
		mov     eax, [VGABufferPtr_0]
		mov     edx, [esp+0c4h]
		add     eax, esi
		add     eax, edx
		mov     ebx, edi
		add     eax, byte 2ch
		mov     edx, ecx
		add     esi, 280h
		call    memset
		cmp     esi, [esp+100h]
;2:0001a580
		jne     dr@1a557h
		mov     edx, 3
		xor     eax, eax
		call    dr@197d0h
		imul    ebx, [dr@1a1ef8h], byte 6ch
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		mov     ecx, [esp+0e8h]
		add     ebx, dr@1a01e0h
		mov     edi, [esp+0c8h]
		call    renderTextToBuffer
		mov     eax, [esp+0ech]
		add     eax, edi
		mov     esi, [esp+0b8h]
		mov     [esp+0f4h], eax
dr@1a5cfh:
		mov     edi, esi
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		test    ecx, ecx
		jbe     dr@1a5f7h
		mov     ecx, [esp+0f4h]
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		mov     ebx, esi
		call    renderTextToBuffer
dr@1a5f7h:
		mov     eax, [esp+0f4h]
		add     eax, 2800h
		sub     esi, byte 0bh
		mov     [esp+0f4h], eax
		cmp     esi, dr@1a0ffch
		jne     dr@1a5cfh
		mov     edx, [esp+0e0h]
		mov     eax, [VGABufferPtr_0]
		mov     ebx, [esp+0c4h]
		add     eax, edx
		add     eax, ebx
		mov     ecx, 4bh
		lea     edx, [eax+2ch]
		mov     ebx, 190h
		mov     eax, [esp+0e4h]
		call    dr@1398ch
		xor     ecx, ecx
dr@1a647h:
		cmp     dword [esp+0f8h], byte 1
		jne     dr@1a2d8h
dr@1a655h:
		mov     ecx, 390a3h
		mov     ebx, dr@1807cch
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a10fch]
		call    renderTextToBuffer
		mov     ecx, 390d9h
		mov     ebx, dr@1807e8h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		mov     edi, [esp+0f8h]
		call    renderTextToBuffer
		call    dr@23230h
		cmp     edi, byte 1ch
		je      dr@1a6a4h
		cmp     edi, 9ch
		jne     dr@1a8d8h
dr@1a6a4h:
		mov     edx, dr@1a116ch
		xor     ebx, ebx
		lea     ecx, [edx+96h]
dr@1a6b1h:
		mov     esi, ecx
		mov     edi, edx
		inc     ebx
		push    edi
dr@1a6b7h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a6cfh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a6b7h
dr@1a6cfh:
		pop     edi
		add     edx, 96h
		mov     al, [ebx+dr@1a1f4eh]
		add     ecx, 96h
		mov     [ebx+dr@1a1f4dh], al
		cmp     ebx, byte 15h
		jl      dr@1a6b1h
		mov     eax, [dr@180864h]
		mov     edx, [dr@1a1ef8h]
		mov     [dr@1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, dr@1a01e0h
		shl     eax, 2
		mov     edi, dr@1a1dbah
		add     esi, eax
		mov     ebx, 0ah
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@1a728h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a740h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a728h
dr@1a740h:
		pop     edi
		mov     esi, dr@18094ch
		mov     edx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@1a751h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a769h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a751h
dr@1a769h:
		pop     edi
		mov     eax, [esp+108h]
		mov     esi, esp
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
;2:0001a780
		dec     edi
dr@1a781h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a799h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a781h
dr@1a799h:
		pop     edi
		mov     esi, dr@180964h
		mov     ebx, 0ah
		mov     edx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@1a7afh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a7c7h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a7afh
dr@1a7c7h:
		pop     edi
		mov     eax, [dr@196ab8h]
		mov     esi, esp
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@1a7ddh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a7f5h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a7ddh
dr@1a7f5h:
		pop     edi
		mov     esi, dr@180974h
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@1a804h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a81ch
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a804h
dr@1a81ch:
		pop     edi
		xor     cl, cl
		mov     ebx, 6
		mov     [dr@1a1f63h], cl
		call    dr@23230h
		call    dr@12d6ch
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		mov     eax, dr@1a1dbah
		lea     edx, [ecx+1]
		call    dr@23488h
		mov     eax, [esp+0fch]
		call    dr@3f77ch
		mov     eax, ebp
		call    dr@3f77ch
		call    dr@61278h
		call    dr@623d4h
		mov     eax, [esp+0d8h]
		inc     eax
		mov     [dr@199f9ch], eax
		call    dr@61cd0h
		test    eax, eax
		jne     dr@1a883h
		call    dr@1123ch
dr@1a883h:
		mov     eax, [esp+108h]
		mov     edx, 1
		mov     ebx, [dr@24e4d0h]
		mov     [dr@196adch], eax
		mov     [dr@19bd60h], edx
		cmp     ebx, byte 2
		jne     dr@1a8afh
		mov     eax, dr@10754h
		call    dr@60705h
dr@1a8afh:
		mov     eax, [dr@185a54h]
		mov     ecx, 1
		call    dr@1c6bch
		call    dr@2b8ach
		mov     [dr@185a24h], ecx
		mov     eax, ecx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@1a8d8h:
		mov     edx, dr@1a116ch
		xor     ebx, ebx
		lea     ecx, [edx+96h]
dr@1a8e5h:
		mov     esi, ecx
		mov     edi, edx
		inc     ebx
		push    edi
dr@1a8ebh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a903h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a8ebh
dr@1a903h:
		pop     edi
		add     edx, 96h
		mov     al, [ebx+dr@1a1f4eh]
		add     ecx, 96h
		mov     [ebx+dr@1a1f4dh], al
		cmp     ebx, byte 15h
		jl      dr@1a8e5h
		mov     eax, [dr@180864h]
		mov     edx, [dr@1a1ef8h]
		mov     [dr@1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, dr@1a01e0h
		shl     eax, 2
		mov     edi, dr@1a1dbah
		add     esi, eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@1a957h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a96fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a957h
dr@1a96fh:
		pop     edi
		mov     esi, dr@180980h
		xor     bh, bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
;2:0001a980
dr@1a980h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@1a998h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@1a980h
dr@1a998h:
		pop     edi
		mov     [dr@1a1f63h], bh
		call    dr@23230h
		call    dr@12d6ch
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		mov     ebx, 6
		mov     eax, dr@1a1dbah
		lea     edx, [ecx+1]
		call    dr@23488h
		mov     eax, [esp+0fch]
		mov     ebx, 0ah
		mov     edx, 1fh
		mov     byte [eax+1], 0
		call    dr@23488h
		mov     eax, [dr@24e4ach]
		add     eax, byte 4
		mov     dx, [eax-4]
		mov     ebx, 1000h
		mov     [eax-2], dx
		xor     edx, edx
		call    memset
		call    dr@5994ch
;2:0001aa00
		call    dr@59b3ch
		mov     eax, [esp+0fch]
		call    dr@3f77ch
		mov     eax, ebp
		call    dr@3f77ch
		xor     eax, eax
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
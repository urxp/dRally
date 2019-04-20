cpu 386

    extern  __CHK
    extern  dr@1a1138h
    extern  VGABufferPtr_0
    extern  dr@1a0fbch
    extern  dr@1a0fd8h
    extern  dr@1a1ef8h
    extern  itoa
    extern  dr@1a0228h
    extern  dr@1a022ch
    extern  dr@1a0230h
    extern  dr@1a0210h
    extern  dr@19bd60h
    extern  dr@181f50h
    extern  dr@196af0h
    extern  dr@1a1108h
    extern  dr@1a1134h
    extern  dr@185c0bh
    extern  strupr
    extern  dr@1a1034h
    extern  dr@19f75ch
    extern  dr@1a108ch
    extern  dr@1a0ff4h
    extern  dr@1a1f64h
    extern  dr@19f760h
    extern  dr@181c70h
    extern  renderTextToBuffer
    extern  dr@196ae8h
    extern  dr@196ab8h
    extern  dr@1a1090h
    extern  dr@19f750h
    extern  dr@1a1028h
    extern  dr@1a01fch
    extern  dr@180724h
    extern  dr@1a0238h
    extern  dr@196ad4h
    extern  dr@1a2010h
    extern  dr@18d492h
    extern  dr@196adch
    extern  dr@196aech
    extern  dr@1a10a0h
    extern  dr@1a10a8h
    extern  dr@19f764h
    extern  dr@1a01e0h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@36adch
dr@36adch:
		push    0c0h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 0a4h
		mov     ecx, 4b000h
		mov     esi, [dr@1a1138h]
		mov     edi, [VGABufferPtr_0]
		mov     edx, 36h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		mov     ecx, 182h
		mov     ebx, [VGABufferPtr_0]
		mov     esi, [dr@1a0fbch]
		add     ebx, 0d32ch
dr@36b2fh:
		mov     edi, edx
dr@36b31h:
		mov     al, [esi]
		or      al, al
		je      dr@36b39h
		mov     [ebx], al
dr@36b39h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@36b31h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@36b2fh
		mov     ecx, 182h
		mov     edx, 110h
		mov     ebx, [VGABufferPtr_0]
		mov     esi, [dr@1a0fd8h]
		add     ebx, 0d362h
dr@36b65h:
		mov     edi, edx
dr@36b67h:
		mov     al, [esi]
		or      al, al
		je      dr@36b6fh
		mov     [ebx], al
dr@36b6fh:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@36b67h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@36b65h
		mov     edx, [dr@19bd60h]
		mov     ebp, 20eh
		test    edx, edx
		je      dr@36c64h
		mov     ecx, 182h
		mov     edx, 110h
		mov     ebx, [VGABufferPtr_0]
		mov     esi, [dr@1a0fd8h]
		add     ebx, 0d20ah
dr@36baeh:
		mov     edi, edx
dr@36bb0h:
		mov     al, [esi]
		or      al, al
		je      dr@36bb8h
		mov     [ebx], al
dr@36bb8h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@36bb0h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@36baeh
		mov     edx, [dr@1a1ef8h]
		mov     edi, esp
		lea     eax, [edx*8+0]
		mov     ebx, 0ah
		sub     eax, edx
		mov     esi, dr@182564h
		shl     eax, 2
		movsd   
		movsd   
		movsd   
		movsw   
		sub     eax, edx
		lea     esi, [esp+64h]
		lea     edx, [esp+64h]
		mov     eax, [eax*4+dr@1a0230h]
		mov     edi, esp
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36c0ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36c24h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36c0ch
dr@36c24h:
		pop     edi
		mov     esi, dr@182574h
		mov     edi, esp
		mov     ebx, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36c3ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36c54h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36c3ch
dr@36c54h:
		pop     edi
		mov     ecx, 46a2eh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
dr@36c64h:
		cmp     dword [dr@19bd60h], byte 0
		je      dr@36c86h
		mov     ecx, 0d738h
		mov     ebx, dr@182580h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
dr@36c86h:
		mov     ecx, 0d8a0h
		mov     ebx, dr@182594h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     esi, dr@180724h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+dr@1a0228h]
		lea     edi, [esp+64h]
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36cdah:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36cf2h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36cdah
dr@36cf2h:
		pop     edi
		mov     edi, esp
		mov     ecx, 120e8h
		mov     esi, dr@1825a8h
		mov     ebx, esp
		mov     edx, dr@185c0bh
		movsd   
		movsd   
		movsb   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36d33h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36d4bh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36d33h
dr@36d4bh:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+11f80h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		mov     esi, dr@1825b8h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
;12:00036d80
		mov     eax, [eax*4+dr@1a022ch]
		mov     ecx, 15a68h
		call    itoa
		mov     ebx, esp
		mov     edx, dr@185c0bh
		movsd   
		movsd   
		movsw   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36dc6h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36ddeh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36dc6h
dr@36ddeh:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+15900h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
;12:00036e00
		shl     eax, 2
		mov     esi, dr@1825c4h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+dr@1a0230h]
		mov     ecx, 193e8h
		call    itoa
		mov     ebx, esp
		mov     edx, dr@185c0bh
		movsd   
		movsd   
		movsd   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		lea     esi, [esp+64h]
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36e51h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36e69h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36e51h
dr@36e69h:
		pop     edi
		cmp     dword [dr@19bd60h], byte 0
		je      dr@36ed7h
		mov     esi, dr@1825d0h
		mov     edi, esp
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36e8ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36ea4h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36e8ch
dr@36ea4h:
		pop     edi
		lea     esi, [esp+64h]
		mov     eax, [dr@196ab8h]
		mov     edi, esp
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36ebeh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36ed6h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36ebeh
dr@36ed6h:
		pop     edi
dr@36ed7h:
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+19280h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		mov     esi, dr@1825d4h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+dr@1a0238h]
		mov     ecx, 1cd68h
		call    itoa
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		movsd   
		movsd   
		movsd   
		movsb   
		call    renderTextToBuffer
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [dr@1825e4h]
		mov     edx, dr@185c0bh
		mov     [esp], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36f56h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36f6eh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36f56h
dr@36f6eh:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+1cc00h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		mov     esi, dr@1825e8h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+dr@1a0210h]
		mov     ecx, 206e8h
		call    itoa
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		movsd   
		movsd   
		movsd   
		call    renderTextToBuffer
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [dr@1825e4h]
		mov     edx, dr@185c0bh
		mov     [esp], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@36fe6h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@36ffeh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@36fe6h
dr@36ffeh:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+20580h]
		call    renderTextToBuffer
		cmp     dword [dr@196ae8h], byte 0
		jle     dr@37ebch
		mov     eax, [dr@1a1028h]
		xor     edx, edx
		mov     dl, [eax+dr@1a1f64h]
		mov     eax, edx
		shl     eax, 4
		mov     esi, dr@18d492h
		sub     eax, edx
		mov     edi, esp
		add     esi, eax
		push    edi
dr@3703ah:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37052h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3703ah
dr@37052h:
		pop     edi
		cmp     dword [dr@19bd60h], byte 0
		je      dr@37098h
		mov     edx, [dr@196ad4h]
		mov     dl, [edx+dr@1a2010h]
		and     edx, 0ffh
		mov     eax, edx
		shl     eax, 4
		mov     esi, dr@18d492h
		sub     eax, edx
		mov     edi, esp
		add     esi, eax
		push    edi
dr@3707fh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37097h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3707fh
dr@37097h:
		pop     edi
dr@37098h:
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@370d3h
		cmp     dword [dr@1a1028h], byte 0
		jne     dr@370d3h
		mov     esi, dr@1825f4h
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@370bah:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@370d2h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@370bah
dr@370d2h:
		pop     edi
dr@370d3h:
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@3710eh
		cmp     dword [dr@1a1028h], byte 1
		jne     dr@3710eh
		mov     esi, dr@182600h
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@370f5h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@3710dh
		mov     al, [esi+1]
;12:00037100
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@370f5h
dr@3710dh:
		pop     edi
dr@3710eh:
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@37149h
		cmp     dword [dr@1a1028h], byte 2
		jne     dr@37149h
		mov     esi, dr@182610h
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37130h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37148h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37130h
dr@37148h:
		pop     edi
dr@37149h:
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@37167h
		cmp     dword [dr@1a1028h], byte 3
		jne     dr@37167h
		mov     edi, esp
		mov     esi, dr@18261ch
		movsd   
		movsd   
		movsw   
		movsb   
dr@37167h:
		cmp     dword [dr@19bd60h], byte 0
		je      dr@37201h
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     esi, dr@181f50h
		mov     eax, [dr@196adch]
		mov     edi, esp
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37197h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@371afh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37197h
dr@371afh:
		pop     edi
		lea     esi, [esp+64h]
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@371bfh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@371d7h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@371bfh
dr@371d7h:
		pop     edi
		mov     esi, dr@182628h
		mov     edi, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@371e8h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37200h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@371e8h
;12:00037200
dr@37200h:
		pop     edi
dr@37201h:
		mov     ecx, 26ae8h
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		mov     esi, dr@180724h
		call    renderTextToBuffer
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [dr@196ae8h]
		lea     edi, [esp+64h]
		call    itoa
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@3723ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37254h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3723ch
dr@37254h:
		pop     edi
		mov     edi, esp
		mov     ecx, 2a468h
		mov     esi, dr@182638h
		mov     ebx, esp
		mov     edx, dr@185c0bh
		movsd   
		movsd   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		mov     ebx, esp
;12:00037280
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37294h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@372ach
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37294h
dr@372ach:
		pop     edi
		mov     edi, esp
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+2a300h]
		mov     esi, dr@182640h
		call    renderTextToBuffer
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [dr@196aech]
		mov     ecx, 2dde8h
		call    itoa
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		movsd   
		movsd   
		movsd   
		call    renderTextToBuffer
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [dr@1825e4h]
		mov     edx, dr@185c0bh
		mov     [esp], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@3730eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37326h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3730eh
dr@37326h:
		pop     edi
		mov     edi, esp
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+2dc80h]
		mov     esi, dr@18264ch
		call    renderTextToBuffer
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [dr@196af0h]
		mov     ecx, 31768h
		call    itoa
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		movsd   
		movsd   
		movsd   
		movsb   
		call    renderTextToBuffer
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [dr@1825e4h]
		mov     edx, dr@185c0bh
		mov     [esp], eax
;12:00037380
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37389h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@373a1h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37389h
dr@373a1h:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+31600h]
		mov     edi, esp
		call    renderTextToBuffer
		mov     ebx, 0ah
		mov     eax, [dr@196aech]
		mov     ecx, [dr@196af0h]
		lea     edx, [esp+64h]
		add     eax, ecx
		mov     esi, dr@18265ch
		call    itoa
		mov     ecx, 350e8h
		mov     ebx, esp
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		call    renderTextToBuffer
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [dr@1825e4h]
		mov     edx, dr@185c0bh
		mov     [esp], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@3740eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37426h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3740eh
dr@37426h:
		pop     edi
		mov     edi, esp
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+34f80h]
		mov     esi, dr@182670h
		call    renderTextToBuffer
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [dr@1a1134h]
		mov     ecx, 38a68h
		call    itoa
		mov     ebx, esp
		mov     edx, dr@185c0bh
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@3748dh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@374a5h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3748dh
dr@374a5h:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+38900h]
		call    renderTextToBuffer
		mov     ebx, 0ah
		lea     edx, [esp+78h]
		mov     eax, [dr@1a10a0h]
		call    itoa
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		mov     eax, [dr@1a10a8h]
		call    itoa
		mov     ebx, 0ah
		lea     edx, [esp+8ch]
		mov     eax, [dr@1a1090h]
		lea     edi, [esp+78h]
		call    itoa
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
;12:00037500
		cmp     ecx, byte 1
		jne     dr@37519h
		mov     al, [esp+78h]
		xor     dl, dl
		mov     [esp+79h], al
		mov     ah, 30h
		mov     [esp+7ah], dl
		mov     [esp+78h], ah
dr@37519h:
		lea     edi, [esp+50h]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37540h
		mov     dh, 30h
		mov     al, [esp+50h]
		xor     bl, bl
		mov     [esp+50h], dh
		mov     [esp+52h], bl
		mov     [esp+51h], al
dr@37540h:
		lea     edi, [esp+8ch]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37576h
		mov     bh, 30h
		mov     al, [esp+8ch]
		xor     cl, cl
		mov     [esp+8ch], bh
		mov     [esp+8eh], cl
		mov     [esp+8dh], al
dr@37576h:
		lea     esi, [esp+78h]
		lea     edi, [esp+64h]
		push    edi
dr@3757fh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37597h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3757fh
dr@37597h:
		pop     edi
		mov     esi, dr@181c70h
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@375aah:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@375c2h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@375aah
dr@375c2h:
		pop     edi
		lea     esi, [esp+50h]
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@375d4h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@375ech
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@375d4h
dr@375ech:
		pop     edi
		mov     esi, dr@180724h
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@375ffh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37617h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@375ffh
dr@37617h:
		pop     edi
		lea     esi, [esp+8ch]
		lea     edi, [esp+64h]
		mov     ebx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@3762eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37646h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@3762eh
dr@37646h:
		pop     edi
		mov     edi, esp
		mov     esi, dr@182680h
		mov     edx, dr@185c0bh
		mov     ecx, 3c3e8h
		movsd   
		movsd   
		movsw   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
;12:00037680
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37686h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@3769eh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37686h
dr@3769eh:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+3c280h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     edi, [edx*8+0]
		sub     edi, edx
		shl     edi, 2
		sub     edi, edx
		shl     edi, 2
		mov     edx, [edi+dr@1a01fch]
		lea     ecx, [edx*8+0]
		sub     ecx, edx
		shl     ecx, 2
		sub     ecx, edx
		mov     edx, [dr@1a1028h]
		shl     ecx, 4
		mov     dl, [edx+dr@1a1f64h]
		and     edx, 0ffh
		lea     esi, [edx*4+0]
		sub     esi, edx
		shl     esi, 3
		imul    eax, [ecx+esi*1+dr@19f75ch], 1770h
		mov     ebx, [ecx+esi*1+dr@19f760h]
		mov     [esp+0a0h], eax
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		shl     eax, 3
		add     eax, ebx
		mov     ebx, [esp+0a0h]
		shl     eax, 2
		add     eax, ebx
		mov     ebx, [ecx+esi*1+dr@19f764h]
		mov     edx, [dr@1a1034h]
		add     ebx, eax
		imul    eax, edx, 1770h
		mov     edx, [dr@1a108ch]
		mov     [esp+0a0h], eax
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, edx
		mov     edx, [esp+0a0h]
		shl     eax, 2
		add     eax, edx
		mov     edx, [dr@1a0ff4h]
		add     eax, edx
		cmp     eax, ebx
		jge     dr@3787ch
		mov     ebx, [dr@1a108ch]
;12:00037780
		mov     eax, [dr@1a1034h]
		add     eax, ebx
		add     eax, edx
		je      dr@3787ch
		mov     eax, dr@1a01e0h
		add     ecx, dr@19f750h
		add     eax, edi
		lea     edi, [ecx+esi*1]
		mov     esi, eax
		push    edi
dr@377a2h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@377bah
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@377a2h
dr@377bah:
		pop     edi
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     ebx, dr@19f750h
		sub     eax, edx
		mov     edx, [dr@1a1028h]
		shl     eax, 4
		mov     dl, [edx+dr@1a1f64h]
		add     ebx, eax
		and     edx, 0ffh
;12:00037800
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, ebx
		call    strupr
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [dr@1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+dr@1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		mov     edx, [dr@1a1034h]
		mov     [ebx+eax*8+dr@19f75ch], edx
		mov     edx, [dr@1a108ch]
		mov     [ebx+eax*8+dr@19f760h], edx
		mov     edx, [dr@1a0ff4h]
		mov     [ebx+eax*8+dr@19f764h], edx
dr@3787ch:
		mov     edx, [dr@1a1ef8h]
		lea     esi, [edx*8+0]
		sub     esi, edx
		shl     esi, 2
		sub     esi, edx
		shl     esi, 2
		mov     edx, [esi+dr@1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		sub     ebx, edx
		mov     edx, [dr@1a1028h]
		shl     ebx, 4
		mov     dl, [edx+dr@1a1f64h]
		and     edx, 0ffh
		lea     edi, [edx*4+0]
		sub     edi, edx
		shl     edi, 3
		mov     eax, [edi+ebx*1+dr@19f75ch]
		mov     ecx, [edi+ebx*1+dr@19f760h]
		mov     edx, [edi+ebx*1+dr@19f764h]
		add     eax, ecx
		add     eax, edx
		jne     dr@379feh
		imul    ecx, [dr@1a1034h], 1770h
		mov     edx, [dr@1a108ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
;12:00037900
		shl     eax, 3
		add     eax, edx
		shl     eax, 2
		mov     edx, [dr@1a0ff4h]
		add     eax, ecx
		add     eax, edx
		test    eax, eax
		jle     dr@379feh
		add     ebx, dr@19f750h
		add     esi, dr@1a01e0h
		add     edi, ebx
		push    edi
dr@37929h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37941h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37929h
dr@37941h:
		pop     edi
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, dr@19f750h
		shl     eax, 4
		add     ebx, eax
		mov     eax, [dr@1a1028h]
		xor     edx, edx
		mov     dl, [eax+dr@1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, ebx
		call    strupr
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [dr@1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+dr@1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		mov     edx, [dr@1a1034h]
		mov     [ebx+eax*8+dr@19f75ch], edx
		mov     edx, [dr@1a108ch]
		mov     [ebx+eax*8+dr@19f760h], edx
		mov     edx, [dr@1a0ff4h]
		mov     [ebx+eax*8+dr@19f764h], edx
dr@379feh:
		mov     ebx, 0ah
		lea     edx, [esp+78h]
		mov     eax, [dr@1a1034h]
		call    itoa
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		mov     eax, [dr@1a108ch]
		call    itoa
		mov     ebx, 0ah
		lea     edx, [esp+8ch]
		mov     eax, [dr@1a0ff4h]
		lea     edi, [esp+78h]
		call    itoa
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37a61h
		mov     al, [esp+78h]
		mov     ch, 30h
		mov     [esp+79h], al
		xor     al, al
		mov     [esp+78h], ch
		mov     [esp+7ah], al
dr@37a61h:
		lea     edi, [esp+50h]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37a88h
		mov     al, [esp+50h]
		xor     dl, dl
		mov     [esp+51h], al
		mov     ah, 30h
;12:00037a80
		mov     [esp+52h], dl
		mov     [esp+50h], ah
dr@37a88h:
		lea     edi, [esp+8ch]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37abeh
		mov     dh, 30h
		mov     al, [esp+8ch]
		xor     bl, bl
		mov     [esp+8ch], dh
		mov     [esp+8eh], bl
		mov     [esp+8dh], al
dr@37abeh:
		lea     esi, [esp+78h]
		lea     edi, [esp+64h]
		push    edi
dr@37ac7h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37adfh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37ac7h
dr@37adfh:
		pop     edi
		mov     esi, dr@181c70h
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37af2h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37b0ah
		mov     al, [esi+1]
		add     esi, byte 2
;12:00037b00
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37af2h
dr@37b0ah:
		pop     edi
		lea     esi, [esp+50h]
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37b1ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37b34h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37b1ch
dr@37b34h:
		pop     edi
		mov     esi, dr@180724h
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37b47h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37b5fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37b47h
dr@37b5fh:
		pop     edi
		lea     esi, [esp+8ch]
		lea     edi, [esp+64h]
		mov     ebx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37b76h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37b8eh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37b76h
dr@37b8eh:
		pop     edi
		mov     edi, esp
		mov     esi, dr@18268ch
		mov     edx, dr@185c0bh
		mov     ecx, 3fd68h
		movsd   
		movsd   
		movsb   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37bcdh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37be5h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37bcdh
dr@37be5h:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+3fc00h]
		call    renderTextToBuffer
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [dr@1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+dr@1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		lea     edx, [esp+78h]
		mov     eax, [ebx+eax*8+dr@19f75ch]
		mov     ebx, 0ah
		call    itoa
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [dr@1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+dr@1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		lea     edx, [esp+50h]
		mov     eax, [ebx+eax*8+dr@19f760h]
		mov     ebx, 0ah
		call    itoa
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [dr@1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+dr@1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		lea     edx, [esp+8ch]
		mov     eax, [ebx+eax*8+dr@19f764h]
		mov     ebx, 0ah
		lea     edi, [esp+78h]
		call    itoa
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37d25h
		mov     bh, 30h
		mov     al, [esp+78h]
		xor     cl, cl
		mov     [esp+78h], bh
		mov     [esp+7ah], cl
		mov     [esp+79h], al
dr@37d25h:
		lea     edi, [esp+50h]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37d4ch
		mov     al, [esp+50h]
		mov     ch, 30h
		mov     [esp+51h], al
		xor     al, al
		mov     [esp+50h], ch
		mov     [esp+52h], al
dr@37d4ch:
		lea     edi, [esp+8ch]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, byte 1
		jne     dr@37d82h
		mov     al, [esp+8ch]
		xor     dl, dl
		mov     [esp+8dh], al
		mov     ah, 30h
		mov     [esp+8eh], dl
		mov     [esp+8ch], ah
dr@37d82h:
		lea     esi, [esp+78h]
		lea     edi, [esp+64h]
		push    edi
dr@37d8bh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37da3h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37d8bh
dr@37da3h:
		pop     edi
		mov     esi, dr@181c70h
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37db6h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37dceh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37db6h
dr@37dceh:
		pop     edi
		lea     esi, [esp+50h]
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37de0h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37df8h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37de0h
dr@37df8h:
		pop     edi
		mov     esi, dr@180724h
		lea     edi, [esp+64h]
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37e0bh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37e23h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37e0bh
dr@37e23h:
		pop     edi
		lea     esi, [esp+8ch]
		lea     edi, [esp+64h]
		mov     ebx, esp
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37e3ah:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37e52h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37e3ah
dr@37e52h:
		pop     edi
		mov     edi, esp
		mov     esi, dr@182698h
		mov     edx, dr@185c0bh
		mov     ecx, 436e8h
		movsd   
		movsd   
		movsd   
		movsw   
		mov     eax, [dr@1a1108h]
		mov     edi, esp
		mov     esi, dr@1825b4h
		call    renderTextToBuffer
		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, dr@185c0bh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
dr@37e93h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      dr@37eabh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     dr@37e93h
dr@37eabh:
		pop     edi
		mov     eax, [dr@1a1108h]
		lea     ecx, [ebp+43580h]
		call    renderTextToBuffer
dr@37ebch:
		xor     ebx, ebx
		mov     [dr@196ae8h], ebx
		add     esp, 0a4h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA

global dr@182564h
dr@182564h:
db	"Status after ",0
global dr@182574h
dr@182574h:
db	" race(s)",0
global dr@182580h
dr@182580h:
db	"Multiplayer Ranking",0
dr@182594h:
db	"Your Statistics:",0
dr@1825a8h:
db	"Position",0
dr@1825b4h:
db	": ",0
dr@1825b8h:
db	"Races won",0
dr@1825c4h:
db	"Total races",0
dr@1825d0h:
db	" / ",0
dr@1825d4h:
db	"Total income",0
dr@1825e4h:
db	": $",0
dr@1825e8h:
db	"Total money",0
dr@1825f4h:
db	" easy race:",0
dr@182600h:
db	" medium race:",0
dr@182610h:
db	" hard race:",0
dr@18261ch:
db	"The Arena:",0
global dr@182628h
dr@182628h:
db	"-player race:",0
dr@182638h:
db	"Placing",0
dr@182640h:
db	"Race income",0
dr@18264ch:
db	"Bonus income",0
dr@18265ch:
db	"Total race income",0
dr@182670h:
db	"Number of laps",0
dr@182680h:
db	"Race time",0
dr@18268ch:
db	"Best lap",0
dr@182698h:
db	"Best lap ever",0
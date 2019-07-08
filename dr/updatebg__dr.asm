%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(___59e68h)
    extern  __CEXT_F(___3a454h)
    extern  __CEXT_F(waitSync__dr)
    extern  __CEXT_F(___2a394h)
    extern  __CEXT_V(___196a88h)
    extern  __CEXT_V(___196ad8h)
    extern  __CEXT_V(bgcop_pal_p)
    extern  __CEXT_V(d_1o64)
    extern  __CHP
    extern  __CEXT_F(writeColor__video)
    extern  __CEXT_V(NetworkConnectionEstablished)
    extern  __CEXT_F(___6168ch)
    extern  __CEXT_V(___1a1f4fh)
    extern  __CEXT_V(___1a1f4eh)
    extern  __CEXT_V(___1a1dbah)
    extern  __CEXT_V(___185a1ch)
    extern  __CEXT_V(RowBox0Colors_R5)
    extern  __CEXT_F(footer__dr)
    extern  __CEXT_F(___12d6ch)
    extern  __CEXT_V(___196a74h)
    extern  __CEXT_F(___233c0h)
    extern  __CEXT_F(___12dc4h)
    extern  __CEXT_F(procChatData)
    extern  __CEXT_V(RowBoxBuffers)
    extern  __CEXT_F(allocMemSafe)
    extern  __CEXT_V(___182174h)
    extern  __CEXT_F(___23488h)
    extern  __CEXT_V(___1a0f9ch)
    extern  __CEXT_F(___3f77ch)
    extern  __CEXT_F(___1e4f8h)
    extern  __CEXT_V(MyID)
    extern  __CEXT_V(___180864h)
    extern  __CEXT_V(Roster)
    extern  __CEXT_V(___182194h)
    extern  __CEXT_V(NetworkConnectionType)
    extern  __CEXT_V(___199fc8h)
    extern  __CEXT_V(___1821c0h)
    extern  __CEXT_F(___1e62ch)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(updateMenuBackgroundAndTextArea))
		push    454h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 428h
		cmp     byte [__CEXT_V(___59e68h)], 0
		je      ___2ab74h
		call    __CEXT_F(___3a454h)
___2ab74h:
		inc     dword [__CEXT_V(___196a88h)]
		call    __CEXT_F(waitSync__dr)
		call    __CEXT_F(___2a394h)
		mov     eax, [__CEXT_V(___196a88h)]
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		cmp     edx, byte 1
		jne     ___2acebh
		mov     ebx, [__CEXT_V(___196ad8h)]
		sub     ebx, edx
		mov     [__CEXT_V(___196ad8h)], ebx
		test    ebx, ebx
		jge     ___2abbah
		mov     dword [__CEXT_V(___196ad8h)], 1ffh
___2abbah:
		mov     edx, [__CEXT_V(___196ad8h)]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [__CEXT_V(bgcop_pal_p)]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+420h], eax
		fild    word [esp+420h]
		xor     eax, eax
		fld     qword [__CEXT_V(d_1o64)]
		fxch    st0, st1
		fmul    st0, st1
		mov     al, [edx+1]
		mov     [esp+420h], eax
		fild    word [esp+420h]
		xor     eax, eax
		fmul    st0, st2
		mov     al, [edx+2]
		mov     [esp+420h], eax
		xor     edi, edi
		fild    word [esp+420h]
		fmulp   st3, st0
		mov     [esp+418h], edi
		fxch    st0, st1
		fstp    dword [esp+40ch]
		mov     al, [esp+418h]
		fstp    dword [esp+410h]
		add     al, 0c0h
		fstp    dword [esp+414h]
		mov     [esp+424h], al
___2ac47h:
		fild    dword [esp+418h]
		xor     eax, eax
		fld     dword [esp+40ch]
		mov     al, [esp+424h]
		fmul    st0, st1
		push    eax
		call    __CHP
		fistp   dword [esp+420h]
		mov     al, [esp+420h]
		fld     dword [esp+414h]
		and     eax, 0ffh
		fmul    st0, st1
		push    eax
		call    __CHP
		fistp   dword [esp+424h]
		mov     al, [esp+424h]
		fld     dword [esp+41ch]
		and     eax, 0ffh
		fmulp   st1, st0
		push    eax
		call    __CHP
		fistp   dword [esp+428h]
		mov     al, [esp+428h]
		and     eax, 0ffh
		push    eax
		mov     ebp, [esp+428h]
		call    __CEXT_F(writeColor__video)
		mov     dl, [esp+424h]
		inc     ebp
		inc     dl
		mov     [esp+418h], ebp
		mov     [esp+424h], dl
		cmp     ebp, byte 20h
		jl      ___2ac47h
___2acebh:
		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
		je      ___2b30bh
		call    __CEXT_F(___6168ch)
		mov     edx, 1
		mov     eax, esp
		call    __CEXT_F(procChatData)
		test    eax, eax
		je      ___2adcch
		xor     ebx, ebx
		mov     [esp+418h], ebx
		mov     ebx, __CEXT_V(RowBoxBuffers)
		lea     edx, [ebx+96h]
___2ad25h:
		mov     esi, edx
		mov     edi, ebx
		push    edi
___2ad2ah:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2ad42h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2ad2ah
___2ad42h:
		pop     edi
		mov     eax, [esp+418h]
		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
		add     ebx, 96h
		mov     [eax+__CEXT_V(___1a1f4eh)], cl
		lea     ecx, [eax+1]
		add     edx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      ___2ad25h
		mov     esi, esp
		mov     edi, __CEXT_V(___1a1dbah)
		mov     dh, 1
		push    edi
___2ad7bh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2ad93h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2ad7bh
___2ad93h:
		pop     edi
		mov     edi, [__CEXT_V(___185a1ch)]
		mov     [__CEXT_V(RowBox0Colors_R5)], dh
		test    edi, edi
		jne     ___2adb9h
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2adcch
		call    __CEXT_F(footer__dr)
		call    __CEXT_F(___12d6ch)
		jmp     ___2adcch
___2adb9h:
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2adcch
		call    __CEXT_F(___233c0h)
		call    __CEXT_F(___12dc4h)
___2adcch:
		mov     edx, 6
		mov     eax, esp
		call    __CEXT_F(procChatData)
		test    eax, eax
		je      ___2ae9bh
		xor     edx, edx
		mov     [esp+418h], edx
		mov     edx, __CEXT_V(RowBoxBuffers)
		lea     ebx, [edx+96h]
___2adf4h:
		mov     esi, ebx
		mov     edi, edx
		push    edi
___2adf9h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2ae11h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2adf9h
___2ae11h:
		pop     edi
		mov     eax, [esp+418h]
		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
		add     edx, 96h
		mov     [eax+__CEXT_V(___1a1f4eh)], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      ___2adf4h
		mov     esi, esp
		mov     edi, __CEXT_V(___1a1dbah)
		push    edi
___2ae48h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2ae60h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2ae48h
___2ae60h:
		pop     edi
		xor     bl, bl
		mov     edi, [__CEXT_V(___185a1ch)]
		mov     [__CEXT_V(RowBox0Colors_R5)], bl
		test    edi, edi
		jne     ___2ae88h
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2ae9bh
		call    __CEXT_F(footer__dr)
		call    __CEXT_F(___12d6ch)
		jmp     ___2ae9bh
___2ae88h:
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2ae9bh
		call    __CEXT_F(___233c0h)
		call    __CEXT_F(___12dc4h)
___2ae9bh:
		mov     edx, 7
		mov     eax, esp
		call    __CEXT_F(procChatData)
		test    eax, eax
		je      ___2af52h
		mov     eax, 64h
		call    __CEXT_F(allocMemSafe)
		mov     edi, eax
		mov     [__CEXT_V(___1a0f9ch)], eax
		mov     eax, [__CEXT_V(___180864h)]
		mov     edx, [__CEXT_V(MyID)]
		mov     [edi], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, __CEXT_V(Roster)
		shl     eax, 2
		add     esi, eax
		mov     ebx, 8
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___2aef3h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2af0bh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2aef3h
___2af0bh:
		pop     edi
		mov     esi, __CEXT_V(___182174h)
		mov     edi, [__CEXT_V(___1a0f9ch)]
		mov     edx, 64h
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___2af25h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2af3dh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2af25h
___2af3dh:
		pop     edi
		mov     eax, [__CEXT_V(___1a0f9ch)]
		call    __CEXT_F(___23488h)
		mov     eax, [__CEXT_V(___1a0f9ch)]
		call    __CEXT_F(___3f77ch)
___2af52h:
		mov     edx, 14h
		mov     eax, esp
		call    __CEXT_F(procChatData)
		test    eax, eax
		je      ___2b031h
		xor     edx, edx
		mov     [esp+418h], edx
		mov     edx, __CEXT_V(RowBoxBuffers)
		lea     ebx, [edx+96h]
___2af7ah:
		mov     esi, ebx
		mov     edi, edx
		push    edi
___2af7fh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2af97h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2af7fh
___2af97h:
		pop     edi
		mov     eax, [esp+418h]
		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
		add     edx, 96h
		mov     [eax+__CEXT_V(___1a1f4eh)], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      ___2af7ah
		mov     esi, esp
		mov     edi, __CEXT_V(___1a1dbah)
		push    edi
___2afceh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2afe6h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2afceh
___2afe6h:
		pop     edi
		xor     bh, bh
		mov     edi, [__CEXT_V(___185a1ch)]
		mov     [__CEXT_V(RowBox0Colors_R5)], bh
		test    edi, edi
		jne     ___2b00eh
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b021h
		call    __CEXT_F(footer__dr)
		call    __CEXT_F(___12d6ch)
		jmp     ___2b021h
___2b00eh:
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b021h
		call    __CEXT_F(___233c0h)
		call    __CEXT_F(___12dc4h)
___2b021h:
		mov     edx, 13h
		call    __CEXT_F(___1e4f8h)
		mov     [__CEXT_V(MyID)], edx
___2b031h:
		mov     edx, 9
		mov     eax, esp
		call    __CEXT_F(procChatData)
		test    eax, eax
		je      ___2b10ah
		xor     ebx, ebx
		mov     edx, __CEXT_V(RowBoxBuffers)
		mov     [esp+418h], ebx
		lea     ebx, [edx+96h]
___2b059h:
		mov     esi, ebx
		mov     edi, edx
		push    edi
___2b05eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2b076h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2b05eh
___2b076h:
		pop     edi
		mov     eax, [esp+418h]
		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
		add     edx, 96h
		mov     [eax+__CEXT_V(___1a1f4eh)], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      ___2b059h
		mov     esi, esp
		mov     edi, __CEXT_V(___1a1dbah)
		push    edi
___2b0adh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2b0c5h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2b0adh
___2b0c5h:
		pop     edi
		xor     cl, cl
		mov     edi, [__CEXT_V(___185a1ch)]
		mov     [__CEXT_V(RowBox0Colors_R5)], cl
		test    edi, edi
		jne     ___2b0edh
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b100h
		call    __CEXT_F(footer__dr)
		call    __CEXT_F(___12d6ch)
		jmp     ___2b100h
___2b0edh:
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b100h
		call    __CEXT_F(___233c0h)
		call    __CEXT_F(___12dc4h)
___2b100h:
		mov     eax, 1
		call    __CEXT_F(___1e62ch)
___2b10ah:
		mov     edx, 13h
		lea     eax, [esp+400h]
		call    __CEXT_F(procChatData)
		test    eax, eax
		je      ___2b236h
		xor     edx, edx
		mov     [esp+418h], edx
		mov     edx, __CEXT_V(RowBoxBuffers)
		lea     ebx, [edx+96h]
___2b137h:
		mov     esi, ebx
		mov     edi, edx
		push    edi
___2b13ch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2b154h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2b13ch
___2b154h:
		pop     edi
		mov     eax, [esp+418h]
		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
		add     edx, 96h
		mov     [eax+__CEXT_V(___1a1f4eh)], cl
		lea     ecx, [eax+1]
		add     ebx, 96h
		mov     [esp+418h], ecx
		cmp     ecx, byte 15h
		jl      ___2b137h
		xor     edx, edx
		mov     eax, [__CEXT_V(___180864h)]
		mov     dl, [esp+400h]
		mov     [__CEXT_V(___1a1dbah)], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, __CEXT_V(Roster)
		shl     eax, 2
		mov     edi, __CEXT_V(___1a1dbah)
		add     esi, eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___2b1bch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2b1d4h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2b1bch
___2b1d4h:
		pop     edi
		mov     esi, __CEXT_V(___182194h)
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___2b1e3h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2b1fbh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2b1e3h
___2b1fbh:
		pop     edi
		xor     ch, ch
		mov     edi, [__CEXT_V(___185a1ch)]
		mov     [__CEXT_V(RowBox0Colors_R5)], ch
		test    edi, edi
		jne     ___2b223h
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b236h
		call    __CEXT_F(footer__dr)
		call    __CEXT_F(___12d6ch)
		jmp     ___2b236h
___2b223h:
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b236h
		call    __CEXT_F(___233c0h)
		call    __CEXT_F(___12dc4h)
___2b236h:
		mov     edx, [__CEXT_V(NetworkConnectionType)]
		cmp     edx, byte 3
		je      ___2b24ah
		cmp     edx, byte 4
		jne     ___2b30bh
___2b24ah:
		test    byte [__CEXT_V(___199fc8h)], 80h
		jne     ___2b30bh
		mov     edx, __CEXT_V(RowBoxBuffers)
		xor     ecx, ecx
		lea     ebx, [edx+96h]
		mov     [esp+418h], ecx
___2b26bh:
		mov     esi, ebx
		mov     edi, edx
		push    edi
___2b270h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2b288h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___2b270h
___2b288h:
		pop     edi
		mov     eax, [esp+418h]
		add     edx, 96h
		add     ebx, 96h
		lea     esi, [eax+1]
		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
		mov     [esp+418h], esi
		mov     [eax+__CEXT_V(___1a1f4eh)], cl
		cmp     esi, byte 15h
		jl      ___2b26bh
		mov     ecx, 6
		mov     edi, __CEXT_V(___1a1dbah)
		mov     esi, __CEXT_V(___1821c0h)
		xor     ah, ah
		mov     ebp, [__CEXT_V(___185a1ch)]
		mov     [__CEXT_V(RowBox0Colors_R5)], ah
		rep movsd   
		movsw   
		test    ebp, ebp
		jne     ___2b2f1h
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b304h
		call    __CEXT_F(footer__dr)
		call    __CEXT_F(___12d6ch)
		jmp     ___2b304h
___2b2f1h:
		cmp     dword [__CEXT_V(___196a74h)], byte 1
		jne     ___2b304h
		call    __CEXT_F(___233c0h)
		call    __CEXT_F(___12dc4h)
___2b304h:
		xor     eax, eax
		call    __CEXT_F(___1e62ch)
___2b30bh:
		add     esp, 428h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

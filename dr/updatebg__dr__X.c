#include "x86.h"

    extern byte ___59e68h[];
    extern byte ___196a88h[];
    extern byte ___196ad8h[];
    extern byte bgcop_pal_p[];
    extern byte d_1o64[];
    extern byte NetworkConnectionEstablished[];
    extern byte ___1a1f4fh[];
    extern byte ___1a1f4eh[];
    extern byte ___1a1dbah[];
    extern byte ___185a1ch[];
    extern byte RowBox0Colors_R5[];
    extern byte ___196a74h[];
    extern byte RowBoxBuffers[];
    extern byte ___182174h[];
    extern byte ___1a0f9ch[];
    extern byte MyID[];
    extern byte ___180864h[];
    extern byte Roster[];
    extern byte ___182194h[];
    extern byte NetworkConnectionType[];
    extern byte ___199fc8h[];
    extern byte ___1821c0h[];

    void ___1e62ch(dword);
   	void ___3a454h(void);
    void ___58c60h(void);
    void ___2a394h(void);
    void ___3f77ch(dword);
    void ___1e4f8h(void);
    void ___6168ch(void);
    void ___23488h(dword, dword, dword);
    void ___233c0h(void);
    void ___12dc4h(void);
    dword procChatData(dword, dword);

	#pragma aux ___5e0f9h parm routine []
    void ___5e0f9h(dword, dword, dword, dword);
    
	void ___12d6ch(void);
    void footer__dr(void);
    void * allocMemSafe(dword);

    static int idiv_rem(dword, dword, int);
    #pragma aux idiv_rem =          \
        "idiv   ebx"                \
        parm [eax] [edx] [ebx]      \
        value [edx]

// ~2ab74h
void updateMenuBackgroundAndTextArea(){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	double 	st0, st1, st2, st3, st4, st5, st6, st7, st_tmp;

	byte 	__esp[0x600];
	byte * 	esp = __esp + 0x600;

	PUSH(0);

//		push    454h
//		call    __CHK
//		push    ebx
	PUSH(ebx);
//		push    ecx
	PUSH(ecx);
//		push    edx
	PUSH(edx);
//		push    esi
	PUSH(esi);
//		push    edi
	PUSH(edi);
//		push    ebp
	PUSH(ebp);
//		sub     esp, 428h
	esp -= 0x428;
//		cmp     byte [__CEXT_V(___59e68h)], 0
//		je      ___2ab74h
	if(B(___59e68h) == 0) goto ___2ab74h;
//		call    __CEXT_F(___3a454h)
    ___3a454h();
___2ab74h:
//		inc     dword [__CEXT_V(___196a88h)]
    D(___196a88h)++;
//		call    __CEXT_F(___58c60h)
    ___58c60h();
//		call    __CEXT_F(___2a394h)
    ___2a394h();
//		mov     eax, [__CEXT_V(___196a88h)]
    eax = D(___196a88h);
//		mov     edx, eax
    edx = eax;
//		mov     ebx, 46h
    ebx = 0x46;
//		sar     edx, 1fh
    edx = ((int)edx < 0) ? -1 : 0;
//		idiv    ebx
    edx = idiv_rem(eax, edx, ebx);
//		cmp     edx, byte 1
//		jne     ___2acebh
    if(edx != 1) goto ___2acebh;
//		mov     ebx, [__CEXT_V(___196ad8h)]
    ebx = D(___196ad8h);
//		sub     ebx, edx
    ebx -= edx;
//		mov     [__CEXT_V(___196ad8h)], ebx
    D(___196ad8h) = ebx;
//		test    ebx, ebx
//		jge     ___2abbah
    if((int)ebx >= 0) goto ___2abbah;
//		mov     dword [__CEXT_V(___196ad8h)], 1ffh
    D(___196ad8h) = 0x1ff;
___2abbah:
//		mov     edx, [__CEXT_V(___196ad8h)]
	edx = D(___196ad8h);
//		lea     eax, [edx*4+0]
	eax = 4*edx;
//		sub     eax, edx
	eax -= edx;
//		mov     edx, [__CEXT_V(bgcop_pal_p)]
	edx = D(bgcop_pal_p);
//		add     edx, eax
	edx += eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [edx]
	al = B(edx);
//		mov     [esp+420h], eax
	D(esp+0x420) = eax;
//		fild    word [esp+420h]
    st0 = (double)((short)W(esp+0x420));
//		xor     eax, eax
	eax = 0;
//		fld     qword [__CEXT_V(d_1o64)]
    st1 = st0;
    st0 =  *(double *)d_1o64;
//		fxch    st0, st1
    st_tmp = st0;
    st0 = st1;
    st1 = st_tmp;
//		fmul    st0, st1
    st0 = st0 * st1;
//		mov     al, [edx+1]
	al = B(edx+1);
//		mov     [esp+420h], eax
	D(esp+0x420) = eax;
//		fild    word [esp+420h]
    st2 = st1;
    st1 = st0;
    st0 = (double)((short)W(esp+0x420));
//		xor     eax, eax
	eax = 0;
//		fmul    st0, st2
    st0 = st0 * st2;
//		mov     al, [edx+2]
	al = B(edx+2);
//		mov     [esp+420h], eax
	D(esp+0x420) = eax;
//		xor     edi, edi
	edi = 0;
//		fild    word [esp+420h]
    st3 = st2;
    st2 = st1;
    st1 = st0;
    st0 = (double)((short)W(esp+0x420));
//		fmulp   st3, st0
    st3 = st3 * st0;
    st0 = st1;
    st1 = st2;
    st2 = st3;
//		mov     [esp+418h], edi
	D(esp+0x418) = edi;
//		fxch    st0, st1
    st_tmp = st0;
    st0 = st1;
    st1 = st_tmp;
//		fstp    dword [esp+40ch]
    *(float *)(esp+0x40c) = st0;
    st0 = st1;
    st1 = st2;
//		mov     al, [esp+418h]
	al = B(esp+0x418);
//		fstp    dword [esp+410h]
    *(float *)(esp+0x410) = st0;
    st0 = st1;
//		add     al, 0c0h
	al += 0xc0;
//		fstp    dword [esp+414h]
    *(float *)(esp+0x414) = st0;
//		mov     [esp+424h], al
	B(esp+0x424) = al;
___2ac47h:
//		fild    dword [esp+418h]
    st0 = (double)((int)D(esp+0x418));
//		xor     eax, eax
    eax = 0;
//		fld     dword [esp+40ch]
    st1 = st0;
    st0 = (double)*(float *)(esp+0x40c);
//		mov     al, [esp+424h]
    al = B(esp+0x424);
//		fmul    st0, st1
    st0 = st0 * st1;
//		push    eax
    PUSH(eax);
//		call    __CHP
//		fistp   dword [esp+420h]
    D(esp+0x420) = (int)st0;
    st0 = st1;
//		mov     al, [esp+420h]
    al = B(esp+0x420);
//		fld     dword [esp+414h]
    st1 = st0;
    st0 = (double)*(float *)(esp+0x414);
//		and     eax, 0ffh
    eax &= 0xff;
//		fmul    st0, st1
    st0 = st0 * st1;
//		push    eax
    PUSH(eax);
//		call    __CHP
//		fistp   dword [esp+424h]
    D(esp+0x424) = (int)st0;
    st0 = st1;
//		mov     al, [esp+424h]
    al = B(esp+0x424);
//		fld     dword [esp+41ch]
    st1 = st0;
    st0 = (double)*(float *)(esp+0x41c);
//		and     eax, 0ffh
    eax &= 0xff;
//		fmulp   st1, st0
    st1 = st1 * st0;
    st0 = st1;
//		push    eax
    PUSH(eax);
//		call    __CHP
//		fistp   dword [esp+428h]
    D(esp+0x428) = (int)st0;
//		mov     al, [esp+428h]
    al = B(esp+0x428);
//		and     eax, 0ffh
    eax &= 0xff;
//		push    eax
    PUSH(eax);
//		mov     ebp, [esp+428h]
    ebp = D(esp+0x428);
//		call    __CEXT_F(___5e0f9h)
    ___5e0f9h(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
    esp += 0x10;
//		mov     dl, [esp+424h]
    dl = B(esp+0x424);
//		inc     ebp
    ebp++;
//		inc     dl
    dl++;
//		mov     [esp+418h], ebp
    D(esp+0x418) = ebp;
//		mov     [esp+424h], dl
    B(esp+0x424) = dl;
//		cmp     ebp, byte 20h
//		jl      ___2ac47h
    if((int)ebp < 0x20) goto ___2ac47h;
___2acebh:
//		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
//		je      ___2b30bh
    if(D(NetworkConnectionEstablished) == 0) goto ___2b30bh;
//		call    __CEXT_F(___6168ch)
    ___6168ch();
//		mov     edx, 1
    edx = 1;
//		mov     eax, esp
    eax = esp;
//		call    __CEXT_F(procChatData)
    eax = procChatData(eax, edx);
//		test    eax, eax
//		je      ___2adcch
    if(eax == 0) goto ___2adcch;
//		xor     ebx, ebx
    ebx = 0;
//		mov     [esp+418h], ebx
    D(esp+0x418) = ebx;
//		mov     ebx, __CEXT_V(RowBoxBuffers)
    ebx = RowBoxBuffers;
//		lea     edx, [ebx+96h]
    edx = ebx+0x96;
___2ad25h:
//		mov     esi, edx
    esi = edx;
//		mov     edi, ebx
    edi = ebx;
//		push    edi
    PUSH(edi);
___2ad2ah:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2ad42h
    if(al == 0) goto ___2ad42h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2ad2ah
    if(al != 0) goto ___2ad2ah;
___2ad42h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+418h]
    eax = D(esp+0x418);
//		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
    cl = B(eax+___1a1f4fh);
//		add     ebx, 96h
    ebx += 0x96;
//		mov     [eax+__CEXT_V(___1a1f4eh)], cl
    B(eax+___1a1f4eh) = cl;
//		lea     ecx, [eax+1]
    ecx = eax+1;
//		add     edx, 96h
    edx += 0x96;
//		mov     [esp+418h], ecx
    D(esp+0x418) = ecx;
//		cmp     ecx, byte 15h
//		jl      ___2ad25h
    if((int)ecx < 0x15) goto ___2ad25h;
//		mov     esi, esp
    esi = esp;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		mov     dh, 1
    dh = 1;
//		push    edi
    PUSH(edi);
___2ad7bh:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2ad93h
    if(al == 0) goto ___2ad93h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2ad7bh
    if(al != 0) goto ___2ad7bh;
___2ad93h:
//		pop     edi
    POP(edi);
//		mov     edi, [__CEXT_V(___185a1ch)]
    edi = D(___185a1ch);
//		mov     [__CEXT_V(RowBox0Colors_R5)], dh
    B(RowBox0Colors_R5) = dh;
//		test    edi, edi
//		jne     ___2adb9h
    if(edi != 0) goto ___2adb9h;
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2adcch
    if(D(___196a74h) != 1) goto ___2adcch;
//		call    __CEXT_F(footer__dr)
    footer__dr();
//		call    __CEXT_F(___12d6ch)
    ___12d6ch();
//		jmp     ___2adcch
    goto ___2adcch;
___2adb9h:
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2adcch
    if(D(___196a74h) != 1) goto ___2adcch;
//		call    __CEXT_F(___233c0h)
    ___233c0h();
//		call    __CEXT_F(___12dc4h)
    ___12dc4h();
___2adcch:
//		mov     edx, 6
    edx = 6;
//		mov     eax, esp
    eax = esp;
//		call    __CEXT_F(procChatData)
    eax = procChatData(eax, edx);
//		test    eax, eax
//		je      ___2ae9bh
    if(eax == 0) goto ___2ae9bh;
//		xor     edx, edx
    edx = 0;
//		mov     [esp+418h], edx
    D(esp+0x418) = edx;
//		mov     edx, __CEXT_V(RowBoxBuffers)
    edx = RowBoxBuffers;
//		lea     ebx, [edx+96h]
    ebx = edx+0x96;
___2adf4h:
//		mov     esi, ebx
    esi = ebx;
//		mov     edi, edx
    edi = edx;
//		push    edi
    PUSH(edi);
___2adf9h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2ae11h
    if(al == 0) goto ___2ae11h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2adf9h
    if(al != 0) goto ___2adf9h;
___2ae11h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+418h]
    eax = D(esp+0x418);
//		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
    cl = B(eax+___1a1f4fh);
//		add     edx, 96h
    edx += 0x96;
//		mov     [eax+__CEXT_V(___1a1f4eh)], cl
    B(eax+___1a1f4eh) = cl;
//		lea     ecx, [eax+1]
    ecx = eax+1;
//		add     ebx, 96h
    ebx += 0x96;
//		mov     [esp+418h], ecx
    D(esp+0x418) = ecx;
//		cmp     ecx, byte 15h
//		jl      ___2adf4h
    if((int)ecx < 0x15) goto ___2adf4h;
//		mov     esi, esp
    esi = esp;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		push    edi
    PUSH(edi);
___2ae48h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2ae60h
    if(al == 0) goto ___2ae60h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2ae48h
    if(al != 0) goto ___2ae48h;
___2ae60h:
//		pop     edi
    POP(edi);
//		xor     bl, bl
    bl = 0;
//		mov     edi, [__CEXT_V(___185a1ch)]
    edi = D(___185a1ch);
//		mov     [__CEXT_V(RowBox0Colors_R5)], bl
    B(RowBox0Colors_R5) = bl;
//		test    edi, edi
//		jne     ___2ae88h
    if(edi != 0) goto ___2ae88h;
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2ae9bh
    if(D(___196a74h) != 1) goto ___2ae9bh;
//		call    __CEXT_F(footer__dr)
    footer__dr();
//		call    __CEXT_F(___12d6ch)
    ___12d6ch();
//		jmp     ___2ae9bh
    goto ___2ae9bh;
___2ae88h:
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2ae9bh
    if(D(___196a74h) != 1) goto ___2ae9bh;
//		call    __CEXT_F(___233c0h)
    ___233c0h();
//		call    __CEXT_F(___12dc4h)
    ___12d6ch();
___2ae9bh:
//		mov     edx, 7
    edx = 7;
//		mov     eax, esp
    eax = esp;
//		call    __CEXT_F(procChatData)
    eax = procChatData(eax, edx);
//		test    eax, eax
//		je      ___2af52h
    if(eax == 0) goto ___2af52h;
//		mov     eax, 64h
    eax = 0x64;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     edi, eax
    edi = eax;
//		mov     [__CEXT_V(___1a0f9ch)], eax
    D(___1a0f9ch) = eax;
//		mov     eax, [__CEXT_V(___180864h)]
    eax = D(___180864h);
//		mov     edx, [__CEXT_V(MyID)]
    edx = D(MyID);
//		mov     [edi], eax
    D(edi) = eax;
//		lea     eax, [edx*8+0]
    eax = 8*edx;
//		sub     eax, edx
    eax -= edx;
//		shl     eax, 2
    eax <<= 2;
//		sub     eax, edx
    eax -= edx;
//		mov     esi, __CEXT_V(Roster)
    esi = Roster;
//		shl     eax, 2
    eax <<= 2;
//		add     esi, eax
    esi += eax;
//		mov     ebx, 8
    ebx = 8;
//		push    edi
    PUSH(edi);
//		sub     ecx, ecx
    ecx -= ecx;
//		dec     ecx
    ecx--;
//		mov     al, 0
    al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
    edi--;
___2aef3h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2af0bh
    if(al == 0) goto ___2af0bh;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2aef3h
    if(al != 0) goto ___2aef3h;
___2af0bh:
//		pop     edi
    POP(edi);
//		mov     esi, __CEXT_V(___182174h)
    esi = ___182174h;
//		mov     edi, [__CEXT_V(___1a0f9ch)]
    edi = D(___1a0f9ch);
//		mov     edx, 64h
    edx = 0x64;
//		push    edi
    PUSH(edi);
//		sub     ecx, ecx
    ecx -= ecx;
//		dec     ecx
    ecx--;
//		mov     al, 0
    al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
    edi--;
___2af25h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2af3dh
    if(al == 0) goto ___2af3dh;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2af25h
    if(al != 0) goto ___2af25h;
___2af3dh:
//		pop     edi
    POP(edi);
//		mov     eax, [__CEXT_V(___1a0f9ch)]
    eax = D(___1a0f9ch);
//		call    __CEXT_F(___23488h)
    ___23488h(eax, edx, ebx);
//		mov     eax, [__CEXT_V(___1a0f9ch)]
    eax = D(___1a0f9ch);
//		call    __CEXT_F(___3f77ch)
    ___3f77ch(eax);
___2af52h:
//		mov     edx, 14h
    edx = 0x14;
//		mov     eax, esp
    eax = esp;
//		call    __CEXT_F(procChatData)
    eax = procChatData(eax, edx);
//		test    eax, eax
//		je      ___2b031h
    if(eax == 0) goto ___2b031h;
//		xor     edx, edx
    edx = 0;
//		mov     [esp+418h], edx
    D(esp+0x418) = edx;
//		mov     edx, __CEXT_V(RowBoxBuffers)
    edx = RowBoxBuffers;
//		lea     ebx, [edx+96h]
    ebx = edx+0x96;
___2af7ah:
//		mov     esi, ebx
    esi = ebx;
//		mov     edi, edx
    edi = ebx;
//		push    edi
    PUSH(edi);
___2af7fh:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2af97h
    if(al == 0) goto ___2af97h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2af7fh
    if(al != 0) goto ___2af7fh;
___2af97h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+418h]
    eax = D(esp+0x418);
//		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
    cl = B(eax+___1a1f4fh);
//		add     edx, 96h
    edx += 0x96;
//		mov     [eax+__CEXT_V(___1a1f4eh)], cl
    B(eax+___1a1f4eh) = cl;
//		lea     ecx, [eax+1]
    ecx = eax+1;
//		add     ebx, 96h
    ebx += 0x96;
//		mov     [esp+418h], ecx
    D(esp+0x418) = ecx;
//		cmp     ecx, byte 15h
//		jl      ___2af7ah
    if((int)ecx < 0x15) goto ___2af7ah;
//		mov     esi, esp
    esi = esp;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		push    edi
    PUSH(edi);
___2afceh:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2afe6h
    if(al == 0) goto ___2afe6h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2afceh
    if(al != 0) goto ___2afceh;
___2afe6h:
//		pop     edi
    POP(edi);
//		xor     bh, bh
    bh = 0;
//		mov     edi, [__CEXT_V(___185a1ch)]
    edi = D(___185a1ch);
//		mov     [__CEXT_V(RowBox0Colors_R5)], bh
    B(RowBox0Colors_R5) = bh;
//		test    edi, edi
//		jne     ___2b00eh
    if(edi != 0) goto ___2b00eh;
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b021h
    if(D(___196a74h) != 1) goto ___2b021h;
//		call    __CEXT_F(footer__dr)
    footer__dr();
//		call    __CEXT_F(___12d6ch)
    ___12d6ch();
//		jmp     ___2b021h
    goto ___2b021h;
___2b00eh:
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b021h
    if(D(___196a74h) != 1) goto ___2b021h;
//		call    __CEXT_F(___233c0h)
    ___233c0h();
//		call    __CEXT_F(___12dc4h)
    ___12dc4h();
___2b021h:
//		mov     edx, 13h
    edx = 0x13;
//		call    __CEXT_F(___1e4f8h)
    ___1e4f8h();
//		mov     [__CEXT_V(MyID)], edx
    D(MyID) = edx;
___2b031h:
//		mov     edx, 9
    edx = 9;
//		mov     eax, esp
    eax = esp;
//		call    __CEXT_F(procChatData)
    eax = procChatData(eax, edx);
//		test    eax, eax
//		je      ___2b10ah
    if(eax == 0) goto ___2b10ah;
//		xor     ebx, ebx
    ebx = 0;
//		mov     edx, __CEXT_V(RowBoxBuffers)
    edx = RowBoxBuffers;
//		mov     [esp+418h], ebx
    D(esp+0x418) = ebx;
//		lea     ebx, [edx+96h]
    ebx = edx+0x96;
___2b059h:
//		mov     esi, ebx
    esi = ebx;
//		mov     edi, edx
    edi = edx;
//		push    edi
    PUSH(edi);
___2b05eh:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2b076h
    if(al == 0) goto ___2b076h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2b05eh
    if(al != 0) goto ___2b05eh;
___2b076h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+418h]
    eax = D(esp+0x418);
//		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
    cl = B(eax+___1a1f4fh);
//		add     edx, 96h
    edx += 0x96;
//		mov     [eax+__CEXT_V(___1a1f4eh)], cl
    B(eax+___1a1f4eh) = cl;
//		lea     ecx, [eax+1]
    ecx = eax+1;
//		add     ebx, 96h
    ebx += 0x96;
//		mov     [esp+418h], ecx
    D(esp+0x418) = ecx;
//		cmp     ecx, byte 15h
//		jl      ___2b059h
    if((int)ecx < 0x15) goto ___2b059h;
//		mov     esi, esp
    esi = esp;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		push    edi
    PUSH(edi);
___2b0adh:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2b0c5h
    if(al == 0) goto ___2b0c5h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2b0adh
    if(al != 0) goto ___2b0adh;
___2b0c5h:
//		pop     edi
    POP(edi);
//		xor     cl, cl
    cl = 0;
//		mov     edi, [__CEXT_V(___185a1ch)]
    edi = D(___185a1ch);
//		mov     [__CEXT_V(RowBox0Colors_R5)], cl
    B(RowBox0Colors_R5) = cl;
//		test    edi, edi
//		jne     ___2b0edh
    if(edi != 0) goto ___2b0edh;
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b100h
    if(D(___196a74h) != 1) goto ___2b100h;
//		call    __CEXT_F(footer__dr)
    footer__dr();
//		call    __CEXT_F(___12d6ch)
    ___12d6ch();
//		jmp     ___2b100h
    goto ___2b100h;
___2b0edh:
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b100h
    if(D(___196a74h) != 1) goto ___2b100h;
//		call    __CEXT_F(___233c0h)
    ___233c0h();
//		call    __CEXT_F(___12dc4h)
    ___12dc4h();
___2b100h:
//		mov     eax, 1
    eax = 1;
//		call    __CEXT_F(___1e62ch)
    ___1e62ch(eax);
___2b10ah:
//		mov     edx, 13h
    edx = 0x13;
//		lea     eax, [esp+400h]
    eax = esp+0x400;
//		call    __CEXT_F(procChatData)
    eax = procChatData(eax, edx);
//		test    eax, eax
//		je      ___2b236h
    if(eax == 0) goto ___2b236h;
//		xor     edx, edx
    edx = 0;
//		mov     [esp+418h], edx
    D(esp+0x418) = edx;
//		mov     edx, __CEXT_V(RowBoxBuffers)
    edx = RowBoxBuffers;
//		lea     ebx, [edx+96h]
    ebx = edx+0x96;
___2b137h:
//		mov     esi, ebx
    esi = ebx;
//		mov     edi, edx
    edi = edx;
//		push    edi
    PUSH(edi);
___2b13ch:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2b154h
    if(al == 0) goto ___2b154h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2b13ch
    if(al != 0) goto ___2b13ch;
___2b154h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+418h]
    eax = D(esp+0x418);
//		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
    cl = B(eax+___1a1f4fh);
//		add     edx, 96h
    edx += 0x96;
//		mov     [eax+__CEXT_V(___1a1f4eh)], cl
    B(eax+___1a1f4eh) = cl;
//		lea     ecx, [eax+1]
    ecx = eax+1;
//		add     ebx, 96h
    ebx += 0x96;
//		mov     [esp+418h], ecx
    D(esp+0x418) = ecx;
//		cmp     ecx, byte 15h
//		jl      ___2b137h
    if((int)ecx < 0x15) goto ___2b137h;
//		xor     edx, edx
    edx = 0;
//		mov     eax, [__CEXT_V(___180864h)]
    eax = D(___180864h);
//		mov     dl, [esp+400h]
    dl = B(esp+0x400);
//		mov     [__CEXT_V(___1a1dbah)], eax
    D(___1a1dbah) = eax;
//		lea     eax, [edx*8+0]
    eax = 8*edx;
//		sub     eax, edx
    eax -= edx;
//		shl     eax, 2
    eax <<= 2;
//		sub     eax, edx
    eax -= edx;
//		mov     esi, __CEXT_V(Roster)
    esi = Roster;
//		shl     eax, 2
    eax <<= 2;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		add     esi, eax
    esi += eax;
//		push    edi
    PUSH(edi);
//		sub     ecx, ecx
    ecx -= ecx;
//		dec     ecx
    ecx--;
//		mov     al, 0
    al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
    edi--;
___2b1bch:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2b1d4h
    if(al == 0) goto ___2b1d4h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2b1bch
    if(al != 0) goto ___2b1bch;
___2b1d4h:
//		pop     edi
    POP(edi);
//		mov     esi, __CEXT_V(___182194h)
    esi = ___182194h;
//		push    edi
    PUSH(edi);
//		sub     ecx, ecx
    ecx -= ecx;
//		dec     ecx
    ecx--;
//		mov     al, 0
    al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
    edi--;
___2b1e3h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2b1fbh
    if(al == 0) goto ___2b1fbh;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2b1e3h
    if(al != 0) goto ___2b1e3h;
___2b1fbh:
//		pop     edi
    POP(edi);
//		xor     ch, ch
    ch = 0;
//		mov     edi, [__CEXT_V(___185a1ch)]
    edi = D(___185a1ch);
//		mov     [__CEXT_V(RowBox0Colors_R5)], ch
    B(RowBox0Colors_R5) = ch;
//		test    edi, edi
//		jne     ___2b223h
    if(edi != 0) goto ___2b223h;
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b236h
    if(D(___196a74h) != 1) goto ___2b236h;
//		call    __CEXT_F(footer__dr)
    footer__dr();
//		call    __CEXT_F(___12d6ch)
    ___12d6ch();
//		jmp     ___2b236h
    goto ___2b236h;
___2b223h:
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b236h
    if(D(___196a74h) != 1) goto ___2b236h;
//		call    __CEXT_F(___233c0h)
    ___233c0h();
//		call    __CEXT_F(___12dc4h)
    ___12dc4h();
___2b236h:
//		mov     edx, [__CEXT_V(NetworkConnectionType)]
    edx = D(NetworkConnectionType);
//		cmp     edx, byte 3
//		je      ___2b24ah
    if(edx == 3) goto ___2b24ah;
//		cmp     edx, byte 4
//		jne     ___2b30bh
    if(edx != 4) goto ___2b30bh;
___2b24ah:
//		test    byte [__CEXT_V(___199fc8h)], 80h
//		jne     ___2b30bh
    if((B(___199fc8h)&0x80) != 0) goto ___2b30bh;
//		mov     edx, __CEXT_V(RowBoxBuffers)
    edx = RowBoxBuffers;
//		xor     ecx, ecx
    ecx = 0;
//		lea     ebx, [edx+96h]
    ebx = edx+0x96;
//		mov     [esp+418h], ecx
    D(esp+0x418) = ecx;
___2b26bh:
//		mov     esi, ebx
    esi = ebx;
//		mov     edi, edx
    edi = edx;
//		push    edi
    PUSH(edi);
___2b270h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2b288h
    if(al == 0) goto ___2b288h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___2b270h
    if(al != 0) goto ___2b270h;
___2b288h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+418h]
    eax = D(esp+0x418);
//		add     edx, 96h
    edx += 0x96;
//		add     ebx, 96h
    ebx += 0x96;
//		lea     esi, [eax+1]
    esi = eax+1;
//		mov     cl, [eax+__CEXT_V(___1a1f4fh)]
    cl = B(eax+___1a1f4fh);
//		mov     [esp+418h], esi
    D(esp+0x418) = esi;
//		mov     [eax+__CEXT_V(___1a1f4eh)], cl
    B(eax+___1a1f4eh) = cl;
//		cmp     esi, byte 15h
//		jl      ___2b26bh
    if((int)esi < 0x15) goto ___2b26bh;
//		mov     ecx, 6
    ecx = 6;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		mov     esi, __CEXT_V(___1821c0h)
    esi = ___1821c0h;
//		xor     ah, ah
    ah = 0;
//		mov     ebp, [__CEXT_V(___185a1ch)]
    ebp = D(___185a1ch);
//		mov     [__CEXT_V(RowBox0Colors_R5)], ah
    B(RowBox0Colors_R5) = ah;
//		rep movsd   
    while(ecx){

        D(edi) = D(esi);
        edi += 4; esi += 4; ecx--;
    }
//		movsw   
    W(edi) = W(esi);
    edi += 2; esi += 2;
//		test    ebp, ebp
//		jne     ___2b2f1h
    if(ebp != 0) goto ___2b2f1h;
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b304h
    if(D(___196a74h) != 1) goto ___2b304h;
//		call    __CEXT_F(footer__dr)
    footer__dr();
//		call    __CEXT_F(___12d6ch)
    ___12d6ch();
//		jmp     ___2b304h
    goto ___2b304h;
___2b2f1h:
//		cmp     dword [__CEXT_V(___196a74h)], byte 1
//		jne     ___2b304h
    if(D(___196a74h) != 1) goto ___2b304h;
//		call    __CEXT_F(___233c0h)
    ___233c0h();
//		call    __CEXT_F(___12dc4h)
    ___12dc4h();
___2b304h:
//		xor     eax, eax
    eax = 0;
//		call    __CEXT_F(___1e62ch)
    ___1e62ch(eax);
___2b30bh:
//		add     esp, 428h
    esp += 0x428;
//		pop     ebp
    POP(ebp);
//		pop     edi
    POP(edi);
//		pop     esi
    POP(esi);
//		pop     edx
    POP(edx);
//		pop     ecx
    POP(ecx);
//		pop     ebx
    POP(ebx);
//		retn    
	return;
}

#include "x86.h"

    extern byte ___196a84h[];
    extern byte ___196a98h[];
    extern byte ___196a9ch[];
    extern byte ___196aa0h[];
    extern byte ___185a50h[];
    extern byte MyFaceId[];
    extern byte ___199f54h[];
    extern byte ___185a30h[];
    extern byte ___1a0240h[];
    extern byte ___1a0244h[];
    extern byte ___1a0248h[];
    extern byte ___1a023ch[];
    extern byte ___181d17h[];
    extern byte ___181d0fh[];
    extern byte ___181d1bh[];
    extern byte ___181d1fh[];
    extern byte ___181d0bh[];
    extern byte ___1a0224h[];
    extern byte Roster[];
    extern byte ___1a0230h[];
    extern byte ___1a0234h[];
    extern byte ___1a0238h[];
    extern byte ___1a01fch[];
    extern byte ___18e938h[];
    extern byte ___1a01f0h[];
    extern byte ___18e93ch[];
    extern byte ___1a01f4h[];
    extern byte ___18e940h[];
    extern byte ___1a01f8h[];
    extern byte ___18e2a4h[];
    extern byte ___1a021ch[];
    extern byte MyFaceId[];
    extern byte ___1a0228h[];
    extern byte ___1a0220h[];
    extern byte ___1a020ch[];
    extern byte ___1a01ech[];
    extern byte ___1a022ch[];
    extern byte ___1a0230h[];
    extern byte ___1a0234h[];
    extern byte ___1a0224h[];
    extern byte ___1a0238h[];
    extern byte ___1a0210h[];
    extern byte ___1a0214h[];
    extern byte ___1a0218h[];
    extern byte ___1a1ee8h[];
    extern byte ___1a1ec0h[];
    extern byte ___1a1ee0h[];
    extern byte ___1a1eech[];
    extern byte ___1a1ec8h[];
    extern byte ___1a1ed0h[];
    extern byte ___1a1ee4h[];


    #pragma aux __STOSB__clib3r parm [eax][edx][ecx]
    void __STOSB__clib3r(void *, byte, dword);

    int rand__clib3r(void);
    void ___2b318h(void);
    void optionsUndergroudMarket(void);

    
    static inline double fyl2x(double, double); // ST1*LOG2(ST0)
    static inline double fldlg2(void);          // LOG10(2)

#if defined(__WATCOMC__)
    #pragma aux fyl2x parm[8087][8087] modify[8087] value[8087] = "fyl2x"
    #pragma aux fldlg2 modify[8087] value[8087] = "fldlg2"
#else

    double log2(double);

    static inline double fyl2x(double d1, double d2){

        return d2*log2(d1);
    }

    static inline double fldlg2(void){

        return 0.301029995663981195;
    }
#endif


// 2415ch
void initDrivers(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	double 	st0, st1, st2, st3, st4, st5, st6, st7, st_tmp;
	byte 	__esp[0x180];
	byte * 	esp = __esp + 0x180;

    const char ListOfDrivers[20][11] = {
        "SAM SPEED",
        "JANE HONDA",
        "DUKE NUKEM",
        "NASTY NICK",
        "MOTOR MARY",
        "MAD MAC",
        "MATT MILER",
        "CLINT WEST",
        "LEE VICE",
        "DARK RYDER",
        "GREG PECK",
        "SUZY STOCK",
        "IRON JOHN",
        "MORI SATO",
        "CHER STONE",
        "DIESEL JOE",
        "MIC DAIR",
        "LIZ ARDEN",
        "BOGUS BILL",
        "FARMER TED"
    };

	PUSH(0);

//		push    11ch
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
//		mov     ebp, esp
    ebp = esp;
//		sub     esp, 100h
    esp -= 0x100;
//		and     esp, byte 0fffffff8h
    esp = (dword)esp & 0xfffffff8;
//		mov     ecx, 37h
    ecx = 0x37;
//		mov     edi, esp
    edi = esp;
//		mov     esi, __CEXT_V(ListOfDrivers)
    esi = ListOfDrivers;
//		lea     eax, [esp+0dch]
    eax = esp+0xdc;
//		rep movsd 
    while(ecx){

        D(edi) = D(esi);
        edi += 4; esi += 4; ecx--;
    }
//		xor     edx, edx
    edx = 0;
//		mov     ecx, 14h
    ecx = 0x14;
//		xor     ebx, ebx
    ebx = 0;
//		call    __CEXT_F(__STOSB__clib3r)
    __STOSB__clib3r(eax, edx, ecx);
//		mov     edx, 13h
    edx = 0x13;
//		mov     [__CEXT_V(___196a84h)], ebx
    D(___196a84h) = ebx;
//		mov     [__CEXT_V(___196a98h)], ebx
    D(___196a98h) = ebx;
//		mov     [__CEXT_V(___196a9ch)], ebx
    D(___196a9ch) = ebx;
//		mov     [__CEXT_V(___196aa0h)], ebx
    D(___196aa0h) = ebx;
//		mov     [__CEXT_V(___185a50h)], ebx
    D(___185a50h) = ebx;
//		mov     [__CEXT_V(MyFaceId)], edx
    D(MyFaceId) = edx;
//		call    __CEXT_F(optionsUndergroudMarket)
    optionsUndergroudMarket();
//		mov     [__CEXT_V(___199f54h)], ebx
    D(___199f54h) = ebx;
//		mov     [__CEXT_V(___185a30h)], ebx
    D(___185a30h) = ebx;
//		xor     edx, edx
    edx = 0;
//		xor     eax, eax
    eax = 0;
___241d8h:
//		mov     [eax+__CEXT_V(Roster)+60h], edx
    D(eax+___1a0240h) = edx;
//		mov     [eax+__CEXT_V(Roster)+64h], edx
    D(eax+___1a0244h) = edx;
//		mov     [eax+__CEXT_V(Roster)+68h], edx
    D(eax+___1a0248h) = edx;
//		mov     [eax+__CEXT_V(Roster)+5ch], edx
    D(eax+___1a023ch) = edx;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     eax, dword 870h
//		jne     ___241d8h
    if(eax != 0x870) goto ___241d8h;
//		mov     ecx, 5
    ecx = 5;
//		xor     eax, eax
    eax = 0;
___24201h:
//		mov     [eax+__CEXT_V(Roster)+1ch], ecx
    D(eax+___1a01fch) = ecx;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     eax, dword 144h
//		jne     ___24201h
    if(eax != 0x144) goto ___24201h;
//		mov     esi, 4
    esi = 4;
___24216h:
//		mov     [eax+__CEXT_V(Roster)+1ch], esi
    D(eax+___1a01fch) = esi;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     eax, dword 2f4h
//		jne     ___24216h
    if(eax != 0x2f4) goto ___24216h;
//		mov     edi, 3
    edi = 3;
___2422bh:
//		mov     [eax+__CEXT_V(Roster)+1ch], edi
    D(eax+___1a01fch) = edi;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     eax, dword 438h
//		jne     ___2422bh
    if(eax != 0x438) goto ___2422bh;
//		mov     edx, 2
    edx = 2;
___24240h:
//		mov     [eax+__CEXT_V(Roster)+1ch], edx
    D(eax+___1a01fch) = edx;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     eax, dword 5e8h
//		jne     ___24240h
    if(eax != 0x5e8) goto ___24240h;
//		mov     ebx, 1
    ebx = 1;
___24255h:
//		mov     [eax+__CEXT_V(Roster)+1ch], ebx
    D(eax+___1a01fch) = ebx;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     eax, dword 72ch
//		jne     ___24255h
    if(eax != 0x72c) goto ___24255h;
___24265h:
//		xor     ecx, ecx
    ecx = 0;
//		mov     [eax+__CEXT_V(Roster)+1ch], ecx
    D(eax+___1a01fch) = ecx;
//		add     eax, byte 6ch
    eax += 0x6c;
//		cmp     eax, dword 870h
//		jne     ___24265h
    if(eax != 0x870) goto ___24265h;
//		mov     esi, 1
    esi = 1;
//		mov     edi, 12h
    edi = 0x12;
//		xor     edx, edx
    edx = 0;
//		mov     [esp+0f8h], esi
    D(esp+0xf8) = esi;
//		mov     [esp+0fch], edi
    D(esp+0xfc) = edi;
//		fld     dword [__CEXT_V(___181d17h)]
    FPUSH();
    st0 = *(float *)___181d17h;
//		fld     qword [__CEXT_V(___181d0fh)]
    FPUSH();
    st0 = *(double *)___181d0fh;
//		fld     dword [__CEXT_V(___181d1bh)]
    FPUSH();
    st0 = *(float *)___181d1bh;
//		fld     dword [__CEXT_V(___181d1fh)]
    FPUSH();
    st0 = *(float *)___181d1fh;
//		fld     dword [__CEXT_V(___181d0bh)]
    FPUSH();
    st0 = *(float *)___181d0bh;
___242afh:
//		fild    dword [esp+0f8h]
    FPUSH();
    st0 = (double)(int)D(esp+0xf8);
//		fldlg2  
    FPUSH();
    st0 = fldlg2();
//		fxch    st0, st1
    st_tmp = st0;
    st0 = st1;
    st1 = st_tmp;
//		fyl2x   
    st1 = fyl2x(st0, st1);
    FPOP();
//		fmul    st0, st1
    st0 = st0 * st1;
//		call    __CHP
//		fsubr   st0, st3
    st0 = st3 - (int)st0;
//		fild    dword [esp+0fch]
    FPUSH();
    st0 = (double)(int)D(esp+0xfc);
//		fmul    st0, st5
    st0 = st0 * st5;
//		fadd    st0, st3
    st0 = st0 + st3;
//		faddp   st1, st0
    st1 = st1 + st0;
    FPOP();
//		fmul    st0, st5
    st0 = st0 * st5;
//		call    __CHP
//		fistp   dword [esp+0f0h]
    D(esp+0xf0) = (int)st0;
    FPOP();
//		mov     eax, [esp+0f0h]
    eax = D(esp+0xf0);
//		mov     ebx, [esp+0fch]
    ebx = D(esp+0xfc);
//		mov     [edx+__CEXT_V(Roster)+44h], eax
    D(edx+___1a0224h) = eax;
//		add     edx, byte 6ch
    edx += 0x6c;
//		mov     eax, [esp+0f8h]
    eax = D(esp+0xf8);
//		dec     ebx
    ebx--;
//		inc     eax
    eax++;
//		mov     [esp+0fch], ebx
    D(esp+0xfc) = ebx;
//		mov     [esp+0f8h], eax
    D(esp+0xf8) = eax;
//		cmp     edx, 804h
//		jne     ___242afh
    if(edx != 0x804) goto ___242afh;
//		fstp    st0
    FPOP();
//		mov     ecx, __CEXT_V(Roster)
    ecx = Roster;
//		fstp    st0
    FPOP();
//		xor     ebx, ebx
    ebx = 0;
//		fstp    st0
    FPOP();
//		fstp    st0
    FPOP();
//		mov     [esp+0f4h], ecx
    D(esp+0xf4) = ecx;
//		fstp    st0
    FPOP();
___2432eh:
//		imul    esi, ebx, byte 6ch
    esi = ebx*0x6c;
//		xor     edi, edi
    edi = 0;
//		mov     [esi+__CEXT_V(Roster)+4ch], edi
    D(esi+___1a022ch) = edi;
//		mov     [esi+__CEXT_V(Roster)+50h], edi
    D(esi+___1a0230h) = edi;
//		mov     [esi+__CEXT_V(Roster)+54h], edi
    D(esi+___1a0234h) = edi;
//		mov     [esi+__CEXT_V(Roster)+58h], edi
    D(esi+___1a0238h) = edi;
//		call    __CEXT_F(rand__clib3r)
    eax = rand__clib3r();
//		mov     edx, eax
    edx = eax;
//		mov     ecx, 186a0h
    ecx = 0x186a0;
//		sar     edx, 1fh
//		idiv    ecx
    edx = eax % ecx;
//		imul    ecx, [esi+__CEXT_V(Roster)+1ch], 6e0h
    ecx = D(esi+___1a01fch) * 0x6e0;
//		mov     [esi+__CEXT_V(Roster)+0ch], edi
    D(esi+___1a01ech) = edi;
//		mov     [esi+__CEXT_V(Roster)+30h], edx
    D(esi+___1a0210h) = edx;
//		mov     ecx, [ecx+__CEXT_V(___18e938h)]
    ecx = D(ecx+___18e938h);
//		call    __CEXT_F(rand__clib3r)
    eax = rand__clib3r();
//		mov     edx, eax
    edx = eax;
//		sar     edx, 1fh
//		idiv    ecx
    edx = eax % ecx;
//		mov     [esi+__CEXT_V(Roster)+10h], edx
    D(esi+___1a01f0h) = edx;
//		imul    ecx, [esi+__CEXT_V(Roster)+1ch], 6e0h
    ecx = D(esi+___1a01fch) * 0x6e0;
//		mov     ecx, [ecx+__CEXT_V(___18e93ch)]
    ecx = D(ecx+___18e93ch);
//		call    __CEXT_F(rand__clib3r)
    eax = rand__clib3r();
//		mov     edx, eax
    edx = eax;
//		sar     edx, 1fh
//		idiv    ecx
    edx = eax % ecx;
//		imul    ecx, [esi+__CEXT_V(Roster)+1ch], 6e0h
    ecx = D(esi+___1a01fch) * 0x6e0;
//		mov     [esi+__CEXT_V(Roster)+14h], edx
    D(esi+___1a01f4h) = edx;
//		mov     ecx, [ecx+__CEXT_V(___18e940h)]
    ecx = D(ecx+___18e940h);
//		call    __CEXT_F(rand__clib3r)
    eax = rand__clib3r();
//		mov     edx, eax
    edx = eax;
//		sar     edx, 1fh
//		idiv    ecx
    edx = eax % ecx;
//		mov     [esi+__CEXT_V(Roster)+18h], edx
    D(esi+___1a01f8h) = edx;
//		imul    eax, [esi+__CEXT_V(Roster)+1ch], 6e0h
    eax = D(esi+___1a01fch) * 0x6e0;
//		mov     eax, [eax+__CEXT_V(___18e2a4h)]
    eax = D(eax+___18e2a4h);
//		mov     [esi+__CEXT_V(Roster)+3ch], eax
    D(esi+___1a021ch) = eax;
//		lea     eax, [ebx+1]
    eax = ebx+1;
//		mov     ecx, [__CEXT_V(MyFaceId)]
    ecx = D(MyFaceId);
//		mov     edx, ebx
    edx = ebx;
//		mov     [esi+__CEXT_V(Roster)+48h], eax
    D(esi+___1a0228h) = eax;
//		imul    esi, ecx, byte 6ch
    esi = ecx * 0x6c;
___243f8h:
//		cmp     byte [esp+edx+0dch], 0
//		jne     ___2440ah
    if(B(esp+edx+0xdc) != 0) goto ___2440ah;
//		cmp     edx, [esi+__CEXT_V(Roster)+40h]
//		jne     ___2440dh
    if(edx != D(esi+___1a0220h)) goto ___2440dh;
___2440ah:
//		inc     edx
    edx++;
//		jmp     ___243f8h
    goto ___243f8h;
___2440dh:
//		imul    esi, edx, byte 0bh
    esi = edx * 0xb;
//		mov     byte [esp+edx+0dch], 1
    B(esp+edx+0xdc) = 1;
//		imul    ecx, ebx, byte 6ch
    ecx = ebx * 0x6c;
//		mov     eax, esp
    eax = esp;
//		mov     edi, [esp+0f4h]
    edi = D(esp+0xf4);
//		add     esi, eax
    esi += eax;
//		push    edi
    PUSH(edi);
___24427h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___2443fh
    if(al == 0) goto ___2443fh;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___24427h
    if(al != 0) goto ___24427h;
___2443fh:
//		pop     edi
    POP(edi);
//		lea     eax, [edi+6ch]
    eax = edi+0x6c;
//		mov     [esp+0f4h], eax
    D(esp+0xf4) = eax;
//		mov     [ecx+__CEXT_V(Roster)+40h], edx
    D(ecx+___1a0220h) = edx;
//		inc     ebx
    ebx++;
//		mov     [ecx+__CEXT_V(Roster)+2ch], edx
    D(ecx+___1a020ch) = edx;
//		cmp     ebx, byte 13h
//		jl      ___2432eh
    if((int)ebx < 0x13) goto ___2432eh;
//		mov     edx, [__CEXT_V(MyFaceId)]
    edx = D(MyFaceId);
//		lea     eax, [edx*8+0]
    eax = edx*8;
//		sub     eax, edx
    eax -= edx;
//		shl     eax, 2
    eax <<= 2;
//		sub     eax, edx
    eax -= edx;
//		xor     ebx, ebx
    ebx = 0;
//		mov     [eax*4+__CEXT_V(Roster)+0ch], ebx
    D(eax*4+___1a01ech) = ebx;
//		mov     [eax*4+__CEXT_V(Roster)+10h], ebx
    D(eax*4+___1a01f0h) = ebx;
//		mov     [eax*4+__CEXT_V(Roster)+18h], ebx
    D(eax*4+___1a01f8h) = ebx;
//		mov     [eax*4+__CEXT_V(Roster)+14h], ebx
    D(eax*4+___1a01f4h) = ebx;
//		xor     ecx, ecx
    ecx = 0;
//		mov     [eax*4+__CEXT_V(Roster)+1ch], ebx
    D(eax*4+___1a01fch) = ebx;
//		mov     [eax*4+__CEXT_V(Roster)+4ch], ecx
    D(eax*4+___1a022ch) = ecx;
//		mov     [eax*4+__CEXT_V(Roster)+50h], ecx
    D(eax*4+___1a0230h) = ecx;
//		mov     [eax*4+__CEXT_V(Roster)+54h], ecx
    D(eax*4+___1a0234h) = ecx;
//		mov     [eax*4+__CEXT_V(Roster)+44h], ecx
    D(eax*4+___1a0224h) = ecx;
//		mov     edx, 1efh
    edx = 0x1ef;
//		mov     [eax*4+__CEXT_V(Roster)+58h], ecx
    D(eax*4+___1a0238h) = ecx;
//		mov     ecx, 0ffffffffh
    ecx = 0xffffffff;
//		mov     [eax*4+__CEXT_V(Roster)+30h], edx
    D(eax*4+___1a0210h) = edx;
//		mov     [eax*4+__CEXT_V(Roster)+34h], ecx
    D(eax*4+___1a0214h) = ecx;
//		lea     edx, [ebx*8+0]
    edx = ebx*8;
//		mov     [eax*4+__CEXT_V(Roster)+38h], ecx
    D(eax*4+___1a0218h) = ecx;
//		shl     edx, 3
    edx <<= 3;
//		mov     ebx, 14h
    ebx = 0x14;
//		shl     edx, 5
    edx <<= 5;
//		mov     [eax*4+__CEXT_V(Roster)+48h], ebx
    D(eax*4+___1a0228h) = ebx;
//		mov     edx, [edx+__CEXT_V(___18e2a4h)]
    edx = D(edx+___18e2a4h);
//		xor     edi, edi
    edi = 0;
//		mov     [eax*4+__CEXT_V(Roster)+3ch], edx
    D(eax*4+___1a021ch) = edx;
//		call    __CEXT_F(___2b318h)
    ___2b318h();
//		mov     [__CEXT_V(___1a1ee8h)], edi
    D(___1a1ee8h) = edi;
//		mov     [__CEXT_V(___1a1ec0h)], edi
    D(___1a1ec0h) = edi;
//		xor     edx, edx
    edx = 0;
//		xor     eax, eax
    eax = 0;
//		mov     edi, 1
    edi = 1;
//		mov     [__CEXT_V(___1a1ee0h)], eax
    D(___1a1ee0h) = eax;
//		mov     [__CEXT_V(___1a1eech)], edx
    D(___1a1eech) = edx;
//		mov     [__CEXT_V(___1a1ec8h)], edx
    D(___1a1ec8h) = edx;
//		mov     [__CEXT_V(___1a1ed0h)], edx
    D(___1a1ed0h) = edx;
//		mov     [__CEXT_V(___1a1ee4h)], edi
    D(___1a1ee4h) = edi;
//		mov     esp, ebp
    esp = ebp;
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

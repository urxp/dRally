#include "x86.h"

    extern byte MyID[];
    extern byte Roster[];
    extern byte p_pal_copper[];
    extern byte ___196ad8h[];
    extern byte p_pal_bgcop[];
    extern byte ___1821e2h[];
    extern byte Pal8to24_0[];
    extern byte Pal8to24_1[];
    extern byte ___1a1edch[];

	#pragma aux ___11564h parm routine []
    void ___11564h(dword, dword, dword);

	#pragma aux ___24010h parm routine []
    void ___24010h(dword, dword, dword);

    void ___12940h(void);

    static dword idiv_quo(dword, dword, dword);
#if defined(__WATCOMC__)
    #pragma aux idiv_quo =      \
        "idiv   ebx"            \
        parm [eax] [edx] [ebx]
#endif

    static dword imul_edx(dword, dword);
    #pragma aux imul_edx =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [edx]

    static dword imul_eax(dword, dword);
    #pragma aux imul_eax =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [eax]

// 2b318h
void ___2b318h(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	double 	st0, st1, st2, st3, st4, st5, st6, st7, st_tmp;
	byte 	__esp[0x80];
	byte *	esp = __esp + 0x80;

	PUSH(0);

//		push    38h
//		call    __CHK
//		push    ebx
	PUSH(ebx);
//		push    ecx
	PUSH(ecx);
//		push    edx
	PUSH(edx);
//		push    esi
	PUSH(esi);
//		push    ebp
	PUSH(ebp);
//		mov     ebp, esp
	ebp = esp;
//		sub     esp, byte 14h
	esp -= 0x14;
//		and     esp, byte 0fffffff8h
	esp = (dword)esp & 0xfffffff8;
//		call    __CEXT_F(___12940h)
	___12940h();
//		mov     edx, [__CEXT_V(MyID)]
	edx = D(MyID);
//		lea     eax, [edx*8+0]
	eax = 8*edx;
//		sub     eax, edx
	eax -= edx;
//		shl     eax, 2
	eax <<= 2;
//		sub     eax, edx
	eax -= edx;
//		mov     edx, [eax*4+__CEXT_V(Roster)+2ch]
	edx = D(eax*4+Roster+0x2c);
//		lea     eax, [edx*4+0]
	eax = 4*edx;
//		sub     eax, edx
	eax -= edx;
//		mov     edx, [__CEXT_V(p_pal_copper)]
	edx = D(p_pal_copper);
//		add     edx, eax
	edx += eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [edx+2]
	al = B(edx+2);
//		mov     [esp+0ch], eax
	D(esp+0xc) = eax;
//		fild    word [esp+0ch]
	FPUSH();
	st0 = (double)(short)W(esp+0xc);
//		sub     esp, byte 4
	esp -= 4;
//		xor     eax, eax
	eax = 0;
//		fstp    dword [esp]
	*(float *)esp = (float)st0;
	FPOP();
//		mov     al, [edx+1]
	al = B(edx+1);
//		mov     [esp+10h], eax
	D(esp+0x10) = eax;
//		fild    word [esp+10h]
	FPUSH();
	st0 = (double)(short)W(esp+0x10);
//		sub     esp, byte 4
	esp -= 4;
//		xor     eax, eax
	eax = 0;
//		fstp    dword [esp]
	*(float *)esp = (float)st0;
	FPOP();
//		mov     al, [edx]
	al = B(edx);
//		mov     [esp+14h], eax
	D(esp+0x14) = eax;
//		fild    word [esp+14h]
	FPUSH();
	st0 = (double)(short)W(esp+0x14);
//		sub     esp, byte 4
	esp -= 4;
//		fstp    dword [esp]
	*(float *)esp = (float)st0;
	FPOP();
//		call    __CEXT_F(___11564h)
	___11564h(D(esp), D(esp+4), D(esp+8));
	esp += 0xc;
//		mov     edx, [__CEXT_V(MyID)]
	edx = D(MyID);
//		lea     eax, [edx*8+0]
	eax = 8*edx;
//		sub     eax, edx
	eax -= edx;
//		shl     eax, 2
	eax <<= 2;
//		sub     eax, edx
	eax -= edx;
//		mov     edx, [eax*4+__CEXT_V(Roster)+2ch]
	edx = D(eax*4+Roster+0x2c);
//		lea     eax, [edx*4+0]
	eax = 4*edx;
//		sub     eax, edx
	eax -= edx;
//		mov     edx, [__CEXT_V(p_pal_copper)]
	edx = D(p_pal_copper);
//		add     edx, eax
	edx += eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [edx+2]
	al = B(edx+2);
//		mov     [esp+0ch], eax
	D(esp+0xc) = eax;
//		fild    word [esp+0ch]
	FPUSH();
	st0 = (double)(short)W(esp+0xc);
//		sub     esp, byte 4
	esp -= 4;
//		xor     eax, eax
	eax = 0;
//		fstp    dword [esp]
	*(float *)esp = (float)st0;
	FPOP();
//		mov     al, [edx+1]
	al = B(edx+1);
//		mov     [esp+10h], eax
	D(esp+0x10) = eax;
//		fild    word [esp+10h]
	FPUSH();
	st0 = (double)(short)W(esp+0x10);
//		sub     esp, byte 4
	esp -= 4;
//		xor     eax, eax
	eax = 0;
//		fstp    dword [esp]
	*(float *)esp = (float)st0;
	FPOP();
//		mov     al, [edx]
	al = B(edx);
//		mov     [esp+14h], eax
	D(esp+0x14) = eax;
//		fild    word [esp+14h]
	FPUSH();
	st0 = (double)(short)W(esp+0x14);
//		sub     esp, byte 4
	esp -= 4;
//		mov     ecx, 900h
	ecx = 0x900;
//		fstp    dword [esp]
	*(float *)esp = (float)st0;
	FPOP();
//		xor     edx, edx
	edx = 0;
//		call    __CEXT_F(___24010h)
	___24010h(D(esp), D(esp+4), D(esp+8));
	esp += 0xc;
//		mov     [esp+10h], edx
	D(esp+0x10) = edx;
//		mov     esi, 640000h
	esi = 0x640000;
___2b416h:
//		mov     eax, [__CEXT_V(___196ad8h)]
	eax = D(___196ad8h);
//		mov     edx, [__CEXT_V(p_pal_bgcop)]
	edx = D(p_pal_bgcop);
//		lea     eax, [eax+eax*2]
	eax = eax+eax*2;
//		add     edx, eax
	edx += eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [edx]
	al = B(edx);
//		mov     [esp+0ch], eax
	D(esp+0xc) = eax;
//		fild    word [esp+0ch]
	FPUSH();
	st0 = (double)(short)W(esp+0xc);
//		fmul    qword [__CEXT_V(___1821e2h)]
	st0 = st0 * *(double *)___1821e2h;
//		fild    dword [esp+10h]
	FPUSH();
	st0 = (double)(int)D(esp+0x10);
//		fstp    qword [esp]
	*(double *)esp = st0;
	FPOP();
//		fmul    qword [esp]
	st0 = st0 * *(double *)esp;
//		call    __CHP
//		fistp   dword [esp+8]
	D(esp+8) = (int)st0;
	FPOP();
//		mov     edx, [esp+8]
	edx = D(esp+8);
//		mov     ebx, esi
	ebx = esi;
//		shl     edx, 10h
	edx <<= 0x10;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
    edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		mov     edx, [__CEXT_V(___196ad8h)]
	edx = D(___196ad8h);
//		mov     [ecx+__CEXT_V(Pal8to24_1)], eax
	D(ecx+Pal8to24_1) = eax;
//		mov     eax, [__CEXT_V(p_pal_bgcop)]
	eax = D(p_pal_bgcop);
//		lea     edx, [edx+edx*2]
	edx = edx+edx*2;
//		add     edx, eax
	edx += eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [edx+1]
	al = B(edx+1);
//		mov     [esp+0ch], eax
	D(esp+0xc) = eax;
//		fild    word [esp+0ch]
	FPUSH();
	st0 = (double)(short)W(esp+0xc);
//		fmul    qword [__CEXT_V(___1821e2h)]
	st0 = st0 * *(double *)___1821e2h;
//		fmul    qword [esp]
	st0 = st0 * *(double *)esp;
//		call    __CHP
//		fistp   dword [esp+8]
	D(esp+8) = (int)st0;
	FPOP();
//		mov     edx, [esp+8]
	edx = D(esp+8);
//		mov     ebx, esi
	ebx = esi;
//		shl     edx, 10h
	edx <<= 0x10;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
    edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		mov     [ecx+__CEXT_V(Pal8to24_1)+4], eax
	D(ecx+Pal8to24_1+4) = eax;
//		mov     eax, [__CEXT_V(___196ad8h)]
	eax = D(___196ad8h);
//		mov     edx, [__CEXT_V(p_pal_bgcop)]
	edx = D(p_pal_bgcop);
//		lea     eax, [eax+eax*2]
	eax = eax+eax*2;
//		add     edx, eax
	edx += eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [edx+2]
	al = B(edx+2);
//		mov     [esp+0ch], eax
	D(esp+0xc) = eax;
//		fild    word [esp+0ch]
	FPUSH();
	st0 = (double)(short)W(esp+0xc);
//		fmul    qword [__CEXT_V(___1821e2h)]
	st0 = st0 * *(double *)___1821e2h;
//		fmul    qword [esp]
	st0 = st0 * *(double *)esp;
//		call    __CHP
//		fistp   dword [esp+8]
	D(esp+8) = (int)st0;
	FPOP();
//		mov     edx, [esp+8]
	edx = D(esp+8);
//		mov     ebx, esi
	ebx = esi;
//		shl     edx, 10h
	edx <<= 0x10;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
    edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, [esp+10h]
	ebx = D(esp+0x10);
//		add     ecx, byte 0ch
	ecx += 0xc;
//		inc     ebx
	ebx++;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
	D(ecx+Pal8to24_1-4) = eax;
//		mov     [esp+10h], ebx
	D(esp+0x10) = ebx;
//		cmp     ebx, byte 20h
//		jl      ___2b416h
	if((int)ebx < 0x20) goto ___2b416h;
//		mov     ecx, 0c0h
	ecx = 0xc0;
//		mov     esi, 640000h
	esi = 0x640000;
___2b516h:
//		mov     edx, [__CEXT_V(___1a1edch)]
	edx = D(___1a1edch);
//		mov     eax, [ecx+__CEXT_V(Pal8to24_0)]
	eax = D(ecx+Pal8to24_0);
//		shl     edx, 10h
	edx <<= 0x10;
//		imul    edx
	PUSH(imul_eax(eax, edx));
    PUSH(imul_edx(eax, edx));
    POP(edx);
    POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
    if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
    eax = (int)eax >> 0x10;
//		mov     edx, eax
	edx = eax;
//		mov     ebx, esi
	ebx = esi;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [esp+8], eax
	D(esp+8) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
    edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		mov     edx, [__CEXT_V(___1a1edch)]
	edx = D(___1a1edch);
//		mov     [ecx+__CEXT_V(Pal8to24_1)], eax
	D(ecx+Pal8to24_1) = eax;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     eax, [ecx+__CEXT_V(Pal8to24_0)+4]
	eax = D(ecx+Pal8to24_0+4);
//		imul    edx
	PUSH(imul_eax(eax, edx));
    PUSH(imul_edx(eax, edx));
    POP(edx);
    POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
    if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
    eax = (int)eax >> 0x10;
//		mov     edx, eax
	edx = eax;
//		mov     ebx, esi
	ebx = esi;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [esp+8], eax
	D(esp+8) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
    edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		mov     edx, [__CEXT_V(___1a1edch)]
	edx = D(___1a1edch);
//		mov     [ecx+__CEXT_V(Pal8to24_1)+4], eax
	D(ecx+Pal8to24_1+4) = eax;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     eax, [ecx+__CEXT_V(Pal8to24_0)+8]
	eax = D(ecx+Pal8to24_0+8);
//		imul    edx
	PUSH(imul_eax(eax, edx));
    PUSH(imul_edx(eax, edx));
    POP(edx);
    POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
    if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
    eax = (int)eax >> 0x10;
//		add     ecx, byte 0ch
	ecx += 0xc;
//		mov     edx, eax
	edx = eax;
//		mov     ebx, esi
	ebx = esi;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [esp+8], eax
	D(esp+8) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
    eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
    edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
	D(ecx+Pal8to24_1-4) = eax;
//		cmp     ecx, 180h
//		jne     ___2b516h
	if(ecx != 0x180) goto ___2b516h;
//		mov     esp, ebp
	esp = ebp;
//		pop     ebp
	POP(ebp);
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

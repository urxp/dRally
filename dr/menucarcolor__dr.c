#include "x86.h"

	extern byte ___1802f8h[];
	extern byte ___180300h[];
	extern byte ___180308h[];
	extern byte ___18030ch[];

	extern byte Pal8to24_1[];

    static dword idiv_quo(dword, dword, dword);
    #pragma aux idiv_quo =      \
        "idiv   ebx"            \
        parm [eax][edx][ebx]


// 11564h
void loadMenuCarColor(float F1, float F2, float F3){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	double 	st0, st1, st2, st3, st4, st5, st6, st7, st_tmp;
	byte 	__esp[0x100];
	byte * esp = __esp + 0x100;

	PUSH(D(&F3));
	PUSH(D(&F2));
	PUSH(D(&F1));
	PUSH(0);

//		push    60h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
	esp -= 0x18;
//		mov     ebp, esp
	ebp = esp;
//		sub     esp, byte 44h
	esp -= 0x44;
//		and     esp, byte 0fffffff8h
	esp = (dword)esp & 0xfffffff8;
//		mov     eax, [ebp+1ch]
	eax = D(ebp+0x1c);
//		mov     [esp+38h], eax
	D(esp+0x38) = eax;
//		mov     eax, [ebp+20h]
	eax = D(ebp+0x20);
//		mov     [esp+40h], eax
	D(esp+0x40) = eax;
//		mov     eax, [ebp+24h]
	eax = D(ebp+0x24);
//		mov     [esp+3ch], eax
	D(esp+0x3c) = eax;
//		fld     dword [esp+38h]
	FPUSH();
	st0 = F32(esp+0x38);
//		fld     st0
	st_tmp = st0;
	FPUSH();
	st0 = st_tmp;
//		fld     qword [__CEXT_V(___1802f8h)]
	FPUSH();
	st0 = F64(___1802f8h);
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fdiv    st0, st1
	st0 = st0 / st1;
//		fld     dword [esp+40h]
	FPUSH();
	st0 = F32(esp+0x40);
//		fld     st0
	st_tmp = st0;
	FPUSH();
	st0 = st_tmp;
//		fdiv    st0, st3
	st0 = st0 / st3;
//		fld     dword [esp+3ch]
	FPUSH();
	st0 = F32(esp+0x3c);
//		fdivr   st4, st0
	st4 = st0 / st4;
//		fxch    st0, st3
	st_tmp = st0;
	st0 = st3;
	st3 = st_tmp;
//		fsubp   st5, st0
	st5 = st5 - st0;
	FPOP();
//		fxch    st0, st4
	st_tmp = st0;
	st0 = st4;
	st4 = st_tmp;
//		fld     qword [__CEXT_V(___180300h)]
	FPUSH();
	st0 = F64(___180300h);
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fmul    st0, st1
	st0 = st0 * st1;
//		fxch    st0, st5
	st_tmp = st0;
	st0 = st5;
	st5 = st_tmp;
//		fsubp   st2, st0
	st2 = st2 - st0;
	FPOP();
//		fxch    st0, st3
	st_tmp = st0;
	st0 = st3;
	st3 = st_tmp;
//		fsubp   st2, st0
	st2 = st2 - st0;
	FPOP();
//		fmul    st0, st2
	st0 = st0 * st2;
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fmulp   st2, st0
	st2 = st2 * st0;
	FPOP();
//		mov     esi, 40h
	esi = 0x40;
//		mov     ecx, 300h
	ecx = 0x300;
//		xor     edx, edx
	edx = 0;
//		mov     edi, 640000h
	edi = 0x640000;
//		mov     [esp+34h], edx
	D(esp+0x34) = edx;
//		fxch    st0, st2
	st_tmp = st0;
	st0 = st2;
	st2 = st_tmp;
//		fstp    dword [esp+1ch]
	F32(esp+0x1c) = (float)st0;
	FPOP();
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fstp    dword [esp+24h]
	F32(esp+0x24) = (float)st0;
	FPOP();
//		fstp    dword [esp+20h]
	F32(esp+0x20) = (float)st0;
	FPOP();
___115f2h:
//		fild    dword [esp+34h]
	FPUSH();
	st0 = (double)(int)D(esp+0x34);
//		fld     st0
	st_tmp = st0;
	FPUSH();
	st0 = st_tmp;
//		fmul    dword [esp+1ch]
	st0 = st0 * F32(esp+0x1c);
//		fld     dword [esp+38h]
	FPUSH();
	st0 = F32(esp+0x38);
//		fdiv    qword [__CEXT_V(___1802f8h)]
	st0 = st0 / F64(___1802f8h);
//		fld     st2
	st_tmp = st2;
	FPUSH();
	st0 = st_tmp;
//		fmul    dword [esp+24h]
	st0 = st0 * F32(esp+0x24);
//		fld     dword [esp+40h]
	FPUSH();
	st0 = F32(esp+0x40);
//		fdiv    qword [__CEXT_V(___1802f8h)]
	st0 = st0 / F64(___1802f8h);
//		fxch    st0, st4
	st_tmp = st0;
	st0 = st4;
	st4 = st_tmp;
//		fmul    dword [esp+20h]
	st0 = st0 * F32(esp+0x20);
//		fld     dword [esp+3ch]
	FPUSH();
	st0 = F32(esp+0x3c);
//		fdiv    qword [__CEXT_V(___1802f8h)]
	st0 = st0 / F64(___1802f8h);
//		mov     ebx, edi
	ebx = edi;
//		add     ecx, byte 0ch
	ecx += 0xc;
//		fxch    st0, st3
	st_tmp = st0;
	st0 = st3;
	st3 = st_tmp;
//		faddp   st4, st0
	st4 = st4 + st0;
	FPOP();
//		fxch    st0, st4
	st_tmp = st0;
	st0 = st4;
	st4 = st_tmp;
//		faddp   st1, st0
	st1 = st1 + st0;
	FPOP();
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		faddp   st3, st0
	st3 = st3 + st0;
	FPOP();
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		call    __CHP
	st0 = (int)st0;
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		call    __CHP
	st0 = (int)st0;
//		fxch    st0, st2
	st_tmp = st0;
	st0 = st2;
	st2 = st_tmp;
//		call    __CHP
	st0 = (int)st0;
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fistp   dword [esp+8]
	D(esp+8) = (int)st0;
	FPOP();
//		mov     edx, [esp+8]
	edx = D(esp+8);
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fistp   dword [esp+10h]
	D(esp+0x10) = (int)st0;
	FPOP();
//		shl     edx, 10h
	edx <<= 0x10;
//		fistp   dword [esp+0ch]
	D(esp+0xc) = (int)st0;
	FPOP();
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     edx, [esp+10h]
	edx = D(esp+0x10);
//		mov     ebx, edi
	ebx = edi;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-0ch], eax
	D(ecx+Pal8to24_1-0xc) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     edx, [esp+0ch]
	edx = D(esp+0xc);
//		mov     ebx, edi
	ebx = edi;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-8], eax
	D(ecx+Pal8to24_1-8) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, [esp+34h]
	ebx = D(esp+0x34);
//		inc     esi
	esi++;
//		inc     ebx
	ebx++;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
	D(ecx+Pal8to24_1-4) = eax;
//		mov     [esp+34h], ebx
	D(esp+0x34) = ebx;
//		cmp     ebx, byte 10h
//		jl      ___115f2h
	if((int)ebx < 0x10) goto ___115f2h;
//		fld     dword [__CEXT_V(___180308h)]
	FPUSH();
	st0 = F32(___180308h);
//		fld     st0
	st_tmp = st0;
	FPUSH();
	st0 = st_tmp;
//		fsub    dword [esp+38h]
	st0 = st0 - F32(esp+0x38);
//		fld     dword [__CEXT_V(___18030ch)]
	FPUSH();
	st0 = F32(___18030ch);
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fmul    st0, st1
	st0 = st0 * st1;
//		fld     st2
	st_tmp = st2;
	FPUSH();
	st0 = st_tmp;
//		fsub    dword [esp+40h]
	st0 = st0 - F32(esp+0x40);
//		fxch    st0, st3
	st_tmp = st0;
	st0 = st3;
	st3 = st_tmp;
//		fsub    dword [esp+3ch]
	st0 = st0 - F32(esp+0x3c);
//		fxch    st0, st3
	st_tmp = st0;
	st0 = st3;
	st3 = st_tmp;
//		fmul    st0, st2
	st0 = st0 * st2;
//		fxch    st0, st3
	st_tmp = st0;
	st0 = st3;
	st3 = st_tmp;
//		fmulp   st2, st0
	st2 = st2 * st0;
	FPOP();
//		mov     edi, 640000h
	edi = 0x640000;
//		lea     ecx, [esi*4+0]
	ecx = esi*4;
//		xor     edx, edx
	edx = 0;
//		sub     ecx, esi
	ecx -= esi;
//		mov     [esp+18h], edx
	D(esp+0x18) = edx;
//		shl     ecx, 2
	ecx <<= 2;
//		fxch    st0, st2
	st_tmp = st0;
	st0 = st2;
	st2 = st_tmp;
//		fstp    dword [esp+2ch]
	F32(esp+0x2c) = (float)st0;
	FPOP();
//		fstp    dword [esp+30h]
	F32(esp+0x30) = (float)st0;
	FPOP();
//		fstp    dword [esp+28h]
	F32(esp+0x28) = (float)st0;
	FPOP();
___1170ah:
//		fild    dword [esp+18h]
	FPUSH();
	st0 = (double)(int)D(esp+0x18);
//		fld     st0
	st_tmp = st0;
	FPUSH();
	st0 = st_tmp;
//		fmul    dword [esp+28h]
	st0 = st0 * F32(esp+0x28);
//		fld     st1
	st_tmp = st1;
	FPUSH();
	st0 = st_tmp;
//		fmul    dword [esp+2ch]
	st0 = st0 * F32(esp+0x2c);
//		fxch    st0, st2
	st_tmp = st0;
	st0 = st2;
	st2 = st_tmp;
//		fmul    dword [esp+30h]
	st0 = st0 * F32(esp+0x30);
//		mov     ebx, edi
	ebx = edi;
//		add     ecx, byte 0ch
	ecx += 0xc;
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fadd    dword [esp+38h]
	st0 = st0 + F32(esp+0x38);
//		fxch    st0, st2
	st_tmp = st0;
	st0 = st2;
	st2 = st_tmp;
//		fadd    dword [esp+40h]
	st0 = st0 + F32(esp+0x40);
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fadd    dword [esp+3ch]
	st0 = st0 + F32(esp+0x3c);
//		fxch    st0, st2
	st_tmp = st0;
	st0 = st2;
	st2 = st_tmp;
//		call    __CHP
	st0 = (int)st0;
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		call    __CHP
	st0 = (int)st0;
//		fxch    st0, st2
	st_tmp = st0;
	st0 = st2;
	st2 = st_tmp;
//		call    __CHP
	st0 = (int)st0;
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fistp   dword [esp+8]
	D(esp+8) = (int)st0;
	FPOP();
//		mov     edx, [esp+8]
	edx = D(esp+8);
//		fxch    st0, st1
	st_tmp = st0;
	st0 = st1;
	st1 = st_tmp;
//		fistp   dword [esp+10h]
	D(esp+0x10) = (int)st0;
	FPOP();
//		shl     edx, 10h
	edx <<= 0x10;
//		fistp   dword [esp+0ch]
	D(esp+0xc) = (int)st0;
	FPOP();
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     edx, [esp+10h]
	edx = D(esp+0x10);
//		mov     ebx, edi
	ebx = edi;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-0ch], eax
	D(ecx+Pal8to24_1-0xc) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     edx, [esp+0ch]
	edx = D(esp+0xc);
//		mov     ebx, edi
	ebx = edi;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-8], eax
	D(ecx+Pal8to24_1-8) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, [esp+18h]
	ebx = D(esp+0x18);
//		inc     esi
	esi++;
//		inc     ebx
	ebx++;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
	D(ecx+Pal8to24_1-4) = eax;
//		mov     [esp+18h], ebx
	D(esp+0x18) = ebx;
//		cmp     ebx, byte 10h
//		jl      ___1170ah
	if((int)ebx < 0x10) goto ___1170ah;
//		mov     esp, ebp
	esp = ebp;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		ret     0ch
	return;
}

#include "x86.h"

    extern byte MENU_BPA[];
    extern byte BPA_Buffer[];
    
    extern byte p_bpk_badtit[];
    extern byte p_bpk_badsnap[];
    extern byte p_bpk_escbox[];
    extern byte p_bpk_signline[];
    extern byte p_bpk_prep4[];
    extern byte ___1a1114h[];
    extern byte p_bpk_prepw1[];

    extern byte bpk_badtit[];
    extern byte bpk_badsnap[];
    extern byte bpk_escbox[];
    extern byte bpk_prep4[];
    extern byte bpk_signline[];
    extern byte bpk_prepw1[];

    void * allocMemSafe(dword size);
	void freeMemSafe(void *);
    void read__bpa(const char *, void *, const char *);
    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);

// 2faf0h
void loadAddBPK(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x80];
	byte * 	esp = __esp + 0x80;

//		push    24h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		mov     eax, 1b80h
	eax = 0x1b80;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_badtit)], eax
	D(p_bpk_badtit) = eax;
//		mov     eax, 0e400h
	eax = 0xe400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_badsnap)], eax
	D(p_bpk_badsnap) = eax;
//		mov     eax, 2eb8h
	eax = 0x2eb8;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_escbox)], eax
	D(p_bpk_escbox) = eax;
//		mov     eax, 110h
	eax = 0x110;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_signline)], eax
	D(p_bpk_signline) = eax;
//		mov     eax, 8700h
	eax = 0x8700;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_prep4)], eax
	D(p_bpk_prep4) = eax;
//		mov     eax, 18150h
	eax = 0x18150;
//		mov     ebx, __CEXT_V(bpk_badtit)
	ebx = bpk_badtit;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1114h)], eax
	D(___1a1114h) = eax;
//		mov     eax, 0f0d2h
	eax = 0xf0d2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_prepw1)], eax
	D(p_bpk_prepw1) = eax;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_badtit)]
	edx = D(p_bpk_badtit);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_badsnap)
	ebx = bpk_badsnap;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_badsnap)]
	ebx = D(p_bpk_badsnap);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_escbox)
	ebx = bpk_escbox;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_escbox)]
	ecx = D(p_bpk_escbox);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_prep4)
	ebx = bpk_prep4;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_prep4)]
	esi = D(p_bpk_prep4);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_signline)
	ebx = bpk_signline;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_signline)]
	edi = D(p_bpk_signline);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_prepw1)
	ebx = bpk_prepw1;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_prepw1)]
	ebp = D(p_bpk_prepw1);
//		push    ebp
	PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}

// 2fc50h
void unloadAddBPK(void){

	dword 	eax;

//		push    4
//		call    __CHK
//		mov     eax, [__CEXT_V(p_bpk_badtit)]
	eax = D(p_bpk_badtit);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_badsnap)]
	eax = D(p_bpk_badsnap);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_escbox)]
	eax = D(p_bpk_escbox);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_signline)]
	eax = D(p_bpk_signline);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_prep4)]
	eax = D(p_bpk_prep4);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1114h)]
	eax = D(___1a1114h);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_prepw1)]
	eax = D(p_bpk_prepw1);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		retn    
	return;
}

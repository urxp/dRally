#include "x86.h"

    extern byte Sound_CardType[];
    extern byte IsSoundEnabled[];
    extern byte ___199ff4h[];
    extern byte ___199ff8h[];
    extern byte ___24e640h[];

    void ___68d07h(void);
    void ___68d01h(void (*)(void));
    void freeMemory(void * mem);
    void ___6879ch(void);
    void ___6815ch(void);
	void ___649a8h(void);
    void ___5fff2h(void (*)(void));


// 648d8h
void ___648d8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

//		push    edx
//		cmp     byte [__CEXT_V(___199ff4h)], 0
//		je      ___64916h
	if(B(___199ff4h) == 0) goto ___64916h;
//		xor     dl, dl
	dl = 0;
//		mov     eax, __CEXT_F(___68d07h)
	eax = ___68d07h;
//		mov     [__CEXT_V(___199ff4h)], dl
	B(___199ff4h) = dl;
//		call    __CEXT_F(___68d01h)
	___68d01h(eax);
//		mov     eax, [__CEXT_V(___199ff8h)]
	eax = D(___199ff8h);
//		call    __CEXT_F(freeMemory)
	freeMemory(eax);
//		xor     edx, edx
	edx = 0;
//		mov     eax, [__CEXT_V(___24e640h)]
	eax = D(___24e640h);
//		mov     [__CEXT_V(___199ff8h)], edx
	D(___199ff8h) = edx;
//		call    __CEXT_F(freeMemory)
	freeMemory(eax);
//		mov     [__CEXT_V(___24e640h)], edx
	D(___24e640h) = edx;
___64916h:
//		call    __CEXT_F(___6879ch)
	___6879ch();
//		cmp     byte [__CEXT_V(Sound_CardType)], 0
//		je      ___6493ch
	if(B(Sound_CardType) == 0) goto ___6493ch;
//		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
//		je      ___6493ch
	if(B(IsSoundEnabled) == 0) goto ___6493ch;
//		call    __CEXT_F(___6815ch)
	___6815ch();
//		mov     eax, __CEXT_F(___649a8h)
	eax = ___649a8h;
//		call    __CEXT_F(___5fff2h)
	___5fff2h(eax);
___6493ch:
//		pop     edx
//		retn    
	return;
}

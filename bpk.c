#include "drally.h"


#define STACKSIZE 0x400
dword StackTop = 0;
//dword StackMax = 0;
dword Stack[STACKSIZE];

void pushStack(dword A){

    if(StackTop == STACKSIZE){

        printf("[dRally.BPK] STACK IS FULL!\n");
    }

    Stack[StackTop++] = A;

//    if(StackTop > StackMax) StackMax = StackTop;
}

dword popStack(){

    if(StackTop == 0){

        printf("[dRally.BPK] STACK IS EMPTY!\n");
    }

    return Stack[--StackTop];
}

void resetStack(void){ 
    
//    StackMax = 0;
    StackTop = 0;
}

	extern byte ___199f20h[];
	extern byte ___199f24h[];
	extern byte ___199f30h[];
	extern byte ___199f34h[];
	extern byte ___199f0ch[];
	extern byte ___199f08h[];
	extern byte ___199f28h[];
	extern byte ___199f2ch[];
	extern byte ___199f2ch[];
	extern byte ___199f10h[];
	extern byte ___199f14h[];
	extern byte ___199f1ch[];
	extern byte ___199f00h[];
	extern byte ___199f38h[];
	extern byte ___199f18h[];
	extern byte ___199f16h[];
	extern byte ___199f1eh[];
	extern byte ___199f1fh[];
    extern byte ___199f1ah[];
    extern byte ___196f00h[];

static byte ROR_BYTE(byte b, int n){

    return (b>>n)|(b<<(8-n));
}

static void __bpk_decode4(dword A1, dword A2, dword A3, dword A4){

    qword   ull_tmp;
    dword   eax, ebx, ecx, edx, edi, esi, ebp, tmp, cf;


    resetStack();

	//	push    ebp
	//	mov     ebp, esp
	//	pushad  
	//	mov     eax, [ebp+14h]
        eax = A4;
		D(___199f20h) = eax;
	//	mov     eax, [ebp+10h]
        eax = A3;
		D(___199f24h) = eax;
	//	mov     eax, [ebp+0ch]
        eax = A2;
		D(___199f30h) = eax;
	//	mov     eax, [ebp+8]
        eax = A1;
		D(___199f34h) = eax;
		eax = 0;
		D(___199f0ch) = eax;
		D(___199f08h) = eax;
		D(___199f28h) = eax;
		D(___199f2ch) = eax;
		B(___199f38h) = L(eax);
		D(___199f10h) = 9;
		W(___199f14h) = 0x200;
		W(___199f1ch) = 0x102;
___59323h:
		eax = D(___199f0ch);
		eax += D(___199f10h);
        tmp = eax;
        eax = D(___199f0ch);
        D(___199f0ch) = tmp;

		ecx = 8;
		edx = 0;

        ull_tmp = eax;
		//div     ecx
        eax = ull_tmp/ecx;
        edx = ull_tmp%ecx;
		
        eax += D(___199f20h);
		esi = eax;

		X(eax) = W(esi); esi += 2;

		X(ebx) = X(eax);

		L(eax) = B(esi++);

		ecx = edx;
		//jcxz    ___59357h
        if(X(ecx) == 0) goto ___59357h;
___59350h:

        cf = L(eax)&1;
		//shr     al, 1
        L(eax) >>= 1;
		//rcr     bx, 1
        X(ebx) >>= 1;
        if(cf) X(ebx) |= 0x8000;

		//loop    ___59350h
        if(--ecx) goto ___59350h;
___59357h:
		X(eax) = X(ebx);
		ebx = 0;
		ebx = D(___199f10h);
		ebx -= 9;
		ebx <<= 1;
		X(eax) &= W(ebx+___199f00h);
		//cmp     ax, word 100h
		//je      near ___595c4h
        if(X(eax) == 0x100) goto ___595c4h;
		//cmp     byte [___199f38h], 0
		//jne     near ___595c4h
        if(B(___199f38h) != 0) goto ___595c4h;
		//cmp     ax, word 101h
		//jne     near ___59465h
        if(X(eax) != 0x101) goto ___59465h;
		D(___199f10h) = 9;
		W(___199f14h) = 0x200;
		W(___199f1ch) = 0x102;
		eax = D(___199f0ch);
		eax += D(___199f10h);

        tmp = eax;
        eax = D(___199f0ch);
        D(___199f0ch) = tmp;

		ecx = 8;
		edx = 0;

		ull_tmp = eax;
		//div     ecx
        eax = ull_tmp/ecx;
        edx = ull_tmp%ecx;

		eax += D(___199f20h);
		esi = eax;
		X(eax) = W(esi); esi += 2;
		X(ebx) = X(eax);
		L(eax) = B(esi++);
		ecx = edx;
		//jcxz    ___593dfh
        if(X(ecx) == 0) goto ___593dfh;
___593d8h:

		cf = L(eax)&1;
		//shr     al, 1
        L(eax) >>= 1;
		//rcr     bx, 1
        X(ebx) >>= 1;
        if(cf) X(ebx) |= 0x8000;

		//loop    ___593d8h
        if(--ecx) goto ___593d8h;
___593dfh:
		X(eax) = X(ebx);
		ebx = 0;
		ebx = D(___199f10h);
		ebx -= 9;
		ebx <<= 1;
		X(eax) &= W(ebx+___199f00h);
		W(___199f18h) = X(eax);
		W(___199f16h) = X(eax);
		B(___199f1eh) = L(eax);
		B(___199f1fh) = L(eax);
		edi = D(___199f2ch);
		//cmp     edi, [___199f30h]
		//jl      short ___5945ah  
        if((int)edi < (int)D(___199f30h)) goto ___5945ah;
		edi = D(___199f28h);
		//cmp     dword [___199f34h], byte 0
		//je      short ___59449h   
        if(D(___199f34h) == 0) goto ___59449h;
		//cmp     edi, [___199f34h]
		//jne     short ___59449h  
        if(edi != D(___199f34h)) goto ___59449h;
		B(___199f38h) = 1;
		goto ___5945ah;
___59449h:
		edi += D(___199f24h);

		//ror     al, 3
        L(eax) = ROR_BYTE(L(eax), 3);

		B(edi) = L(eax);
		D(___199f28h)++;
___5945ah:
		D(___199f2ch)++;
		goto ___59323h;
___59465h:
		W(___199f18h) = X(eax);
		W(___199f1ah) = X(eax);
		//cmp     ax, [___199f1ch]
		//jl      short ___59496h 
        if((short)X(eax) < (short)W(___199f1ch)) goto ___59496h;
		X(eax) = W(___199f16h);
		W(___199f18h) = X(eax);
		L(eax) = B(___199f1fh);
		pushStack(eax);
		D(___199f08h)++;
___59496h:
		//cmp     word [___199f18h], 0ffh
		//jle     short ___594d5h    
        if((short)W(___199f18h) <= 0xff) goto ___594d5h;
		X(ebx) = W(___199f18h);
		X(ecx) = X(ebx);
		ebx = 0;
		X(ebx) = X(ecx);
		X(ebx) <<= 1;
		X(ebx) += X(ecx);
		ebx = ebx+___196f00h;
		L(eax) = B(ebx+2);
		pushStack(eax);
		D(___199f08h)++;
		X(eax) = W(ebx);
		W(___199f18h) = X(eax);
		goto ___59496h;
___594d5h:
		X(eax) = W(___199f18h);
		B(___199f1fh) = L(eax);
		B(___199f1eh) = L(eax);
		pushStack(eax);
		D(___199f08h)++;
		ecx = D(___199f08h);
		//jcxz    ___5954ch
        if(X(ecx) == 0) goto ___5954ch;
___594f5h:
		eax = popStack();
		edi = D(___199f2ch);
		//cmp     edi, [___199f30h]
		//jl      short ___59544h
        if((int)edi < (int)D(___199f30h)) goto ___59544h;
		edi = D(___199f28h);
		//cmp     dword [___199f34h], byte 0
		//je      short ___59533h
        if(D(___199f34h) == 0) goto ___59533h;
		//cmp     edi, [___199f34h]
		//jne     short ___59533h 
        if(edi != D(___199f34h)) goto ___59533h;
		B(___199f38h) = 1;
		goto ___59544h;
___59533h:
		edi += D(___199f24h);

		//ror     al, 3
        L(eax) = ROR_BYTE(L(eax), 3);

		B(edi) = L(eax);
		D(___199f28h)++;
___59544h:
		D(___199f2ch)++;
		//loop    ___594f5h
        if(--ecx) goto ___594f5h;
___5954ch:
		D(___199f08h) = ecx;
		X(ebx) = W(___199f1ch);
		X(ecx) = X(ebx);
		ebx = 0;
		X(ebx) = X(ecx);
		X(ebx) <<= 1;
		X(ebx) += X(ecx);
		ebx = ebx+___196f00h;
		L(eax) = B(___199f1eh);
		B(ebx+2) = L(eax);
		X(eax) = W(___199f16h);
		W(ebx) = X(eax);
		W(___199f1ch)++;
		X(eax) = W(___199f1ah);
		W(___199f16h) = X(eax);
		X(ebx) = W(___199f1ch);
		//cmp     bx, [___199f14h]
		//jl      short ___595bfh
        if((short)X(ebx) < (short)W(___199f14h)) goto ___595bfh;
		//cmp     dword [___199f10h], byte 0ch
		//je      short ___595bfh
        if(D(___199f10h) == 0xc) goto ___595bfh;
		D(___199f10h)++;
		W(___199f14h) <<= 1;
___595bfh:
		goto ___59323h;
___595c4h:
		ecx = D(___199f08h);
		//jcxz    ___595d0h
        if(X(ecx) == 0) goto ___595d0h;
___595cdh:
		eax = popStack();
		//loop    ___595cdh
        if(--ecx) goto ___595cdh;
___595d0h:
//		popad   
//		pop     ebp
//		ret     10h
    return;
}

void bpk_decode2(void * dst, void * src){

    __bpk_decode4(0, 0, dst, src);
}

/*
	[size]		- max number of decoded bytes to copy, copy all if 0
	[offset]	- copy decoded bytes from offset
	[dst]		- decoded destination pointer
	[src]		- encoded source pointer
*/
void bpk_decode4(dword size, dword offset, void * dst, void * src){

	__bpk_decode4(size, offset, dst, src);
}

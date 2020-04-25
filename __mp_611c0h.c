#include "drally.h"

    extern byte ___24e450h[];
    extern byte ___24e418h[];
    extern byte ___199fb6h[];
    extern byte ___24e3f0h[];
    extern byte ___199fb8h[];
    extern byte ___24cf28h[];
    extern byte ___24e4ach[];
    extern byte ___24e46ch[];
    extern byte ___24df28h[];

void ___608ech(dword A1, dword A2){

    dword   eax, ebx, ecx, edx, edi, esi, ebp;
    byte    esp[0xc];

    edx = A2;
    eax = A1;

		esi = D(___24e450h);
		D(esp) = eax;
		D(esp+4) = edx;
___6090bh:
		ebx = D(esp);
		ecx = D(esp+4);
		edx = ebx+ecx;
		eax = edx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		eax = D(4*eax+___24e3f0h);
		D(esp+8) = eax;
___60929h:
		eax = D(ebx*4+___24e3f0h);
        if((int)eax >= (int)D(esp+8)) goto ___60939h;
		ebx++;
		goto ___60929h;
___60939h:
		eax = D(esp+8);
___6093dh:
		edx = 4*ecx;
		edi = D(edx+___24e3f0h);
        if((int)eax >= (int)edi) goto ___60951h;
		ecx--;
		goto ___6093dh;
___60951h:
        if((int)ebx > (int)ecx) goto ___609ech;
		eax = D(ebx*4+___24e3f0h);
		D(ebx*4+___24e3f0h) = edi;
		D(edx+___24e3f0h) = eax;
		eax = D(ebx*4+___24e418h);
		ebp = D(edx+___24e418h);
		D(ebx*4+___24e418h) = ebp;
		D(edx+___24e418h) = eax;
		eax = 0;
        if((int)eax < (int)esi) goto ___60991h;
		eax = 0;
		goto ___609cbh;
___60991h:
		edx = ebx;
		edx <<= 0xa;
		L(edx) = B(edx+eax+___24cf28h);
		B(eax+___24df28h) = L(edx);
		eax++;
        if((int)eax < (int)esi) goto ___60991h;
		eax = 0;
        if((int)eax < (int)esi) goto ___609b2h;
		eax = 0;
		goto ___609e6h;
___609b2h:
		edx = ecx;
		edx <<= 0xa;
		edi = ebx;
		edi <<= 0xa;
		L(edx) = B(edx+eax+___24cf28h);
		B(edi+eax+___24cf28h) = L(edx);
		eax++;
___609cbh:
        if((int)eax < (int)esi) goto ___609b2h;
		eax = 0;
		goto ___609e6h;
___609d3h:
		edi = ecx;
		edi <<= 0xa;
		L(edx) = B(eax+___24df28h);
		B(edi+eax+___24cf28h) = L(edx);
		eax++;
___609e6h:
        if((int)eax < (int)esi) goto ___609d3h;
		ebx++;
		ecx--;
___609ech:
        if((int)ebx < (int)ecx) goto ___60929h;
		D(___24e450h) = esi;
		ebp = D(esp);
        if((int)ecx <= (int)ebp) goto ___60a0ah;
		edx = ecx;
		eax = ebp;
		___608ech(eax, edx);
___60a0ah:
		esi = D(___24e450h);
        if((int)ebx >= (int)D(esp+4)) goto ___60a1eh;
		D(esp) = ebx;
		goto ___6090bh;
___60a1eh:  
        return;
}

dword ___611c0h(dword A1, dword A2){

	int 	m, n, rslt;


	rslt = 0;
	D(___24e450h) = A1;

	n = -1;
	while(++n < 0xa) D(n*4+___24e418h) = n;

	___608ech(0, B(___199fb6h)-1);

	n = -1;
	while(++n < B(___199fb6h)){

		if(D(4*n+___24e3f0h) != D(___199fb8h)){

			m = -1;
			while(++m < A1) B(D(A2+4*n)+m) = B((n<<0xa)+m+___24cf28h);
		}
		else{

			rslt = n;
		}
	}

	W(D(___24e4ach)) = 0;
	W(D(___24e4ach)+2) = 0;
	//W(D(___24e46ch)) = 0;
	//W(D(___24e46ch)+2) = 0;

	return rslt;
}

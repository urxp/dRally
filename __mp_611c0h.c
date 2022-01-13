#include "drally.h"

    extern __DWORD__ ___24e450h;
    extern __DWORD__ ___24e418h[10];
    extern __BYTE__ ___199fb6h[];
    extern __DWORD__ ___24e3f0h[10];
    extern __BYTE__ ___199fb8h[];
    extern __BYTE__ ___24cf28h[];
    extern __POINTER__ ___24e4ach;
    extern __POINTER__ ___24e46ch;
    extern __BYTE__ ___24df28h[];

void ___608ech(__DWORD__ A1, __DWORD__ A2){

    __DWORD__   eax, ebx, ecx, edx, edi, esi, ebp;
    __BYTE__    esp[0xc];
	__DWORD__	tmpd;
	__BYTE__ 	tmpb;
	int 		n;


	esi = ___24e450h;
	D(esp) = A1;
	D(esp+4) = A2;
	
	while(1){

		ebx = D(esp);
		ecx = D(esp+4);

		D(esp+8) = ___24e3f0h[(int)(D(esp)+D(esp+4))/2];

		while(1){
		
			ebx--;
			while((int)___24e3f0h[++ebx] < (int)D(esp+8));

			ecx++;
			while((int)D(esp+8) < (int)___24e3f0h[--ecx]);

			if((int)ebx <= (int)ecx){

				tmpd = ___24e3f0h[ebx];
				___24e3f0h[ebx] = ___24e3f0h[ecx];
				___24e3f0h[ecx] = tmpd;

				tmpd = ___24e418h[ebx];
				___24e418h[ebx] = ___24e418h[ecx];
				___24e418h[ecx] = tmpd;

				n = -1;
				while(++n < (int)esi){
					
					B(___24df28h+n) = B(___24cf28h+0x400*ebx+n);
					B(___24cf28h+0x400*ebx+n) = B(___24cf28h+0x400*ecx+n);
					B(___24cf28h+0x400*ecx+n) = B(___24df28h+n);
				}

				ebx++;
				ecx--;
			}

			if((int)ebx >= (int)ecx) break;
		}

		___24e450h = esi;
        
		if((int)D(esp) < (int)ecx) ___608ech(D(esp), ecx);

		esi = ___24e450h;
		D(esp) = ebx;
        if((int)D(esp) >= (int)D(esp+4)) break;
	}
}

__DWORD__ ___611c0h(__DWORD__ A1, __POINTER__ * A2){

	int 	m, n, rslt;


	rslt = 0;
	___24e450h = A1;

	n = -1;
	while(++n < 0xa) ___24e418h[n] = n;

	___608ech(0, B(___199fb6h)-1);

	n = -1;
	while(++n < B(___199fb6h)){

		if(___24e3f0h[n] != D(___199fb8h)){

			m = -1;
			while(++m < A1) B(A2[n]+m) = B((n<<0xa)+m+___24cf28h);
		}
		else{

			rslt = n;
		}
	}

	W(___24e4ach) = 0;
	W(___24e4ach+2) = 0;
	//W(___24e46ch) = 0;
	//W(___24e46ch+2) = 0;

	return rslt;
}

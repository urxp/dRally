#include "drally.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___196b20h[];
	extern __BYTE__ ___1a1f40h[];	//  [0...13]
	extern __BYTE__ ___1a0f04h[];
	extern __BYTE__ ___1a1f64h[];
	extern __BYTE__ ___1a0ef8h[];
	extern __BYTE__ ___196abch[];
	extern __BYTE__ ___196b18h[];
	extern __BYTE__ ___196b1ch[];

int rand_watcom106(void);

void ___31588h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[4];
	int 		n;

	D(esp) = D(___1a1ef8h)-7;
	
	if((int)D(esp) < 0) D(esp) = 0;
	if((int)D(esp) > 5) D(esp) = 5;

	eax = 0;
	n = -1;
	while(++n < 0xe){

		if((D(esp)+n) == D(___1a1ef8h)) eax++;

		B(___1a1f40h+n) = D(esp)+eax;
		eax++;
	}

	memset(___1a0f04h, 0, 0x14);
	B(D(___1a1ef8h)+___1a0f04h) = 1;
	memset(___1a1f64h+3, 0, 3);
	memset(___1a0ef8h, 0, 0xc);

	while(1){

		B(___1a1f64h) = B((rand_watcom106()%5)+___196abch);
		B(___1a1f64h) += 9*(rand_watcom106()%2);

		if(B(___1a1f64h) != D(___196b18h)) break;
	}

	D(___196b18h) = B(___1a1f64h);

	while(1){

		B(___1a1f64h+1) = B((rand_watcom106()%6)+___196abch+2);
		B(___1a1f64h+1) += 9*(rand_watcom106()%2);
		
		if((B(___1a1f64h+1) != D(___196b1ch))&&(B(___1a1f64h+1) != B(___1a1f64h))) break;
	}

	D(___196b1ch) = B(___1a1f64h+1);

	while(1){

		B(___1a1f64h+2) = B((rand_watcom106()%4)+___196abch+5);
		B(___1a1f64h+2) += 9*(rand_watcom106()%2);

		if((B(___1a1f64h+2) != D(___196b20h))&&(B(___1a1f64h+2) != B(___1a1f64h+1))) break;
	}

	D(___196b20h) = B(___1a1f64h+2);
}

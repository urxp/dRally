#include "drally.h"

typedef struct xc50_s {
	__DWORD__ 	___0;			// +000
	__DWORD__ 	___4;			// +004
	__DWORD__ 	___8[75];		// +008
	__DWORD__ 	_134[75];		// +134
	__DWORD__	_260[75];		// +260
	__DWORD__ 	_38C;			// +38c
	__DWORD__	_390;			// +390
	__DWORD__	_394;			// +394
	__DWORD__ 	_398;			// +398
	__DWORD__	_39C[100];		// +39c
	__DWORD__	_52C[100];		// +52c
	__DWORD__	_6BC[100];		// +6bc
	__DWORD__	_84C[100];		// +84c
	__DWORD__	_9DC;			// +9dc
	__DWORD__ 	_9E0;			// +9e0
	__DWORD__	_9E4;			// +9e4
	__DWORD__	_9E8;			// +9e8
	__DWORD__	_9EC[75];		// +9ec
	__DWORD__	_B18[75];		// +b18
	__DWORD__	_C44;			// +c44
	__DWORD__	_C48;			// +c48
	__DWORD__	_C4C;			// +c4c
} xc50_t;

	extern xc50_t ___1f3b08h[];		// <0x1f3b08 - 0x1f4758)
	extern byte ___196d8ch[];
	extern byte ___196d94h[];
	extern byte ___243c88h[];
	extern byte ___196dc8h[];
	extern byte ___196dcch[];
	extern byte ___19bd66h[];
	extern byte ___243c98h[];

// SOMETHING WITH 3D-LIKE OBJECTS
void race___4f030h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[8];


		esi = D(___196d8ch);
		edi = D(___196d94h);
		edx = D(___243c88h);
		ecx = 0;
		if((int)edx <= 0) goto ___4f154h;
		ebp = 0xc50*edx;
		eax = edi;
		eax <<= 8;
		D(esp+0x4) = eax;
		eax = esi;
		eax <<= 8;
		D(esp) = eax;
		eax = 0;
___4f078h:
		ebx = D(___196dc8h);
		edx = D(eax+(void *)&___1f3b08h->_9DC);
		edx -= ebx;
		edx -= esi;
		D(eax+(void *)&___1f3b08h->_9E4) = edx;
		ebx = D(___196dcch);
		edx = D(eax+(void *)&___1f3b08h->_9E0);
		edx -= ebx;
		edx -= edi;
		D(eax+(void *)&___1f3b08h->_9E8) = edx;
		edx = 0;
		D(eax+(void *)&___1f3b08h->_C44) = edx;
		if(B(___19bd66h) == 0x30) goto ___4f146h;
		edx = D(esp);
		edx += D(eax+(void *)&___1f3b08h->_390);
		ebx = D(eax+(void *)&___1f3b08h->_9E4);
		ebx <<= 8;
		if((int)ebx <= (int)edx) goto ___4f0d9h;
		D(eax+(void *)&___1f3b08h->_C44) = 1;
___4f0d9h:
		edx = esi;
		edx = 0-edx;
		ebx = D(eax+(void *)&___1f3b08h->_38C);
		edx <<= 8;
		edx += ebx;
		ebx = D(eax+(void *)&___1f3b08h->_9E4);
		ebx <<= 8;
		if((int)ebx >= (int)edx) goto ___4f0ffh;
		D(eax+(void *)&___1f3b08h->_C44) = 1;
___4f0ffh:
		ebx = D(esp+0x4);
		ebx += D(eax+(void *)&___1f3b08h->_398);
		edx = D(eax+(void *)&___1f3b08h->_9E8);
		edx <<= 8;
		if((int)edx <= (int)ebx) goto ___4f120h;
		D(eax+(void *)&___1f3b08h->_C44) = 1;
___4f120h:
		edx = edi;
		edx = 0-edx;
		ebx = D(eax+(void *)&___1f3b08h->_394);
		edx <<= 8;
		edx += ebx;
		ebx = D(eax+(void *)&___1f3b08h->_9E8);
		ebx <<= 8;
		if((int)ebx >= (int)edx) goto ___4f146h;
		D(eax+(void *)&___1f3b08h->_C44) = 1;
___4f146h:
		eax += 0xc50;
		ecx++;
		if((int)eax < (int)ebp) goto ___4f078h;
___4f154h:
		D(___196d94h) = edi;
		D(___196d8ch) = esi;
		D(___243c98h) = ecx;
}

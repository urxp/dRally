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
	extern byte ___243c88h[];
	extern byte ___243c98h[];

void ___53378h_cdecl(dword, dword);

void race___53310h(void){

	dword	eax, ebx, ecx, edx, edi, esi, ebp;


		esi = D(___243c88h);
		ebx = 0;
		if((int)esi <= 0) goto ___53356h;
		eax = 0;
___5332ch:
		ecx = D(eax+(void *)&___1f3b08h->_9E4);
		ecx = ecx*ecx;
		edx = D(eax+(void *)&___1f3b08h->_9E8);
		edx = edx*edx;
		D(eax+(void *)&___1f3b08h->_C4C) = ebx;
		edx += ecx;
		ebx++;
		D(eax+(void *)&___1f3b08h->_C48) = edx;
		eax += 0xc50;
		if((int)ebx < (int)esi) goto ___5332ch;
___53356h:
		edx = esi-1;
		D(___243c98h) = ebx;
		eax = 0;
		D(___243c88h) = esi;
		___53378h_cdecl(eax, edx);
		ebx = D(___243c98h);
		return;
}

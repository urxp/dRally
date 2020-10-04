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
	extern byte ___196d94h[];
	extern byte ___196d8ch[];
	extern byte ___243c98h[];
	extern byte ___243d08h[];

void race___5326ch(void){

	dword 	eax, edx;
	int 	n;


	n = -1;
	while(++n < (int)___1f3b08h[D(___243c98h)].___0){

		edx = 0x100*___1f3b08h[D(___243c98h)]._9EC[n];
		eax = (long long)(int)edx/(int)___1f3b08h[D(___243c98h)]._260[n];
		eax = eax+0x80;
		eax = (int)eax>>8;
		edx = 0x100*___1f3b08h[D(___243c98h)]._B18[n];
		___1f3b08h[D(___243c98h)]._9EC[n] = eax+D(___196d8ch);
		eax = (long long)(int)edx/(int)___1f3b08h[D(___243c98h)]._260[n];
		eax = eax+0x80;
		eax = (int)eax>>8;
		___1f3b08h[D(___243c98h)]._B18[n] = eax+D(___196d94h);
	}

	D(___243d08h) = n;
}

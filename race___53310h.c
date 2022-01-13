#include "drally.h"
#include "drmath.h"

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
	extern __BYTE__ ___243c88h[];
	extern __BYTE__ ___243c98h[];

void ___53378h_cdecl(__DWORD__, __DWORD__);

void race___53310h(void){

	int 		n;


	n = -1;
	while(++n < (int)D(___243c88h)){

		___1f3b08h[n]._C48 = dRMath_sum2squares_i(___1f3b08h[n]._9E4, ___1f3b08h[n]._9E8);
		___1f3b08h[n]._C4C = n;
	}

	D(___243c98h) = n;
	___53378h_cdecl(0, D(___243c88h)-1);
}

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

void ___53378h_cdecl(int A1, int A2){

	__DWORD__ 	tmp;
	int 	val1, val2, val1_saved, n;


	val1 = A1;
	do {

		val2 = A2;
		val1_saved = val1;
		n = ___1f3b08h[(val1_saved+A2)/2]._C48;

		do {

			while(n > (int)___1f3b08h[val1]._C48) val1++;
			while(n < (int)___1f3b08h[val2]._C48) val2--;

			if(val1 <= val2){

				tmp = ___1f3b08h[val2]._C48;
				___1f3b08h[val2]._C48 = ___1f3b08h[val1]._C48;
				___1f3b08h[val1]._C48 = tmp;

				tmp = ___1f3b08h[val2]._C4C;
				___1f3b08h[val2]._C4C = ___1f3b08h[val1]._C4C;
				___1f3b08h[val1]._C4C = tmp;

				val1++;
				val2--;
			}

		} while(val1 < val2);

		if(val2 > val1_saved) ___53378h_cdecl(val1_saved, val2);

	} while(val1 < A2);
}

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
	extern __BYTE__ ___196d8ch[];
	extern __BYTE__ ___196d94h[];
	extern __BYTE__ ___243c88h[];
	extern __BYTE__ ___196dc8h[];
	extern __BYTE__ ___196dcch[];
	extern char ___19bd64h[16];
	extern __BYTE__ ___243c98h[];

// SOMETHING WITH 3D-LIKE OBJECTS
void race___4f030h(void){

	int 		i, j, n;


	n = -1;
	while(++n < (int)D(___243c88h)){

		___1f3b08h[n]._9E4 = ___1f3b08h[n]._9DC-D(___196dc8h)-D(___196d8ch);
		___1f3b08h[n]._9E8 = ___1f3b08h[n]._9E0-D(___196dcch)-D(___196d94h);
		___1f3b08h[n]._C44 = 0;

		if(___19bd64h[2] != 0x30){

			j = ___1f3b08h[n]._390+0x100*D(___196d8ch);
			i = 0x100*___1f3b08h[n]._9E4;
			if(i > j) ___1f3b08h[n]._C44 = 1;

			j = ___1f3b08h[n]._38C-0x100*D(___196d8ch);
			i = 0x100*___1f3b08h[n]._9E4;
			if(i < j) ___1f3b08h[n]._C44 = 1;

			j = ___1f3b08h[n]._398+0x100*D(___196d94h);
			i = 0x100*___1f3b08h[n]._9E8;
			if(i > j) ___1f3b08h[n]._C44 = 1;

			j = ___1f3b08h[n]._394-0x100*D(___196d94h);
			i = 0x100*___1f3b08h[n]._9E8;
			if(i < j) ___1f3b08h[n]._C44 = 1;
		}
	}
		
	D(___243c98h) = n;
}

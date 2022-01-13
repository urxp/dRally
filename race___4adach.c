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

typedef struct x2c_s {
    __DWORD__   __0;        // +00
    __DWORD__   __4;        // +04
    __DWORD__   __8;        // +08
    __DWORD__   __C;        // +0c
    __DWORD__   _10;        // +10
    __DWORD__   _14;        // +14
    __DWORD__   _18;        // +18
    __DWORD__   _1C;        // +1c
    __DWORD__   _20;        // +20
    __DWORD__   _24;        // +24
    __DWORD__   _28;        // +28
} x2c_t;


	extern xc50_t ___1f3b08h[100];		// <0x1f3b08 - 0x1f4758)
	extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)

	extern __BYTE__ ___243c9ch[];
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___243c88h[];
	extern __BYTE__ ___243c98h[];
	extern __BYTE__ ___243c94h[];
	extern int ___1e8848h[100][100];

// SOMETHING WITH TEXTURES
void race___4adach(void){

	int 	i,j,k;

	i = -1;
	while(++i < (int)D(___243c88h)){

		j = -1;
		while(++j < (int)___1f3b08h[i].___4){

			___1e8848h[i][j] = -1;

			k = -1;
			while(++k < (int)D(___243c94h)){

				if((i == ___240b48h[k]._24)&&(j == ___240b48h[k]._28)){

					if(___1e8848h[i][j] == -1){

						___1e8848h[i][j] = k;
					}
					else {

						___1e8848h[i][j-1] = k;
					}
				}
			}
		}
	}

	D(___243c98h) = i;
	D(___243d08h) = j;
	D(___243c9ch) = k;
}

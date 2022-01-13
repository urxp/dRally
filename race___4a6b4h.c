#include "drally.h"

#pragma pack(1)
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

	extern xc50_t ___1f3b08h[100];		// <0x1f3b08 - 0x1f4758)

	extern __BYTE__ ___243c88h[];
	extern __BYTE__ ___243c98h[];
	extern __DWORD__ ___1df9a0h[100][75];
	extern float ___243b30h[75];
	extern float ___2438d8h[75];
	extern float ___243a04h[75];

double dRMath_sqrt(double);


// TREES TEXTURES
void race___4a6b4h(void){

	double 	d_tmp, d_st0, d_st1;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x110];
	int 	i, j, k, n;
	xc50_t *	trees;


	D(___243c98h) = 0;

	if((int)D(___243c88h) > 0){

		trees = (xc50_t *)___1f3b08h;

		F64(esp+0x58) = dRMath_sqrt(425.0);
		F64(esp+0x60) = dRMath_sqrt(350.0);

		n = 0;
		while(1){

			i = -1;
			while(++i < (int)trees[n].___0) ___1df9a0h[D(___243c98h)][i] = 0;

			i = -1;
			while(++i < (int)trees[n].___4){

				___1df9a0h[D(___243c98h)][trees[n]._39C[i]]++;
				___1df9a0h[D(___243c98h)][trees[n]._52C[i]]++;
				___1df9a0h[D(___243c98h)][trees[n]._6BC[i]]++;
			}

			i = -1;
			while(++i < (int)trees[n].___0){

				___243b30h[i] = 0.0f;
				___2438d8h[i] = 0.0f;
				___243a04h[i] = 0.0f;
			}

			edx = 0;
			D(esp+0x50) = 0;

			if((int)trees[n].___4 > 0){

				while(1){

					ecx = trees[n]._39C[edx];
					ebx = trees[n]._52C[edx];
					FPUSH((int)trees[n].___8[ecx]);
					ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
					FPUSH((int)trees[n].___8[ebx]);
					ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
					FPUSH((int)trees[n]._134[ecx]);
					ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
					eax = trees[n]._6BC[edx];
					FPUSH((int)trees[n]._134[ebx]);
					ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
					FPUSH((int)trees[n]._134[eax]);
					ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
					FPUSH((int)trees[n].___8[eax]);
					ecx = trees[n]._260[ecx];
					ebx = trees[n]._260[ebx];
					eax = trees[n]._260[eax];
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					F64(esp+0xc8) = FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0xd0) = FPOP();
					ecx -= 0x100;
					ebx -= 0x100;
					eax -= 0x100;
					FPUSH(F64(esp+0xd0));
					D(esp+0x20) = ecx;
					D(esp+0x3c) = eax;
					FPUSH((int)D(esp+0x3c));
					FPUSH((int)D(esp+0x20));
					F64(esp+0x78) = FPOP();
					F64(esp+0xb0) = FPOP();
					ST(0) = ST(0)-F64(esp+0xc8);
					FPUSH(F64(esp+0xb0));
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0xf0) = FPOP();
					ST(0) = ST(0)-F64(esp+0x78);
					FPUSH(F64(esp+0xf0));
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0xf8) = FPOP();
					ST(0) = ST(0)*F64(esp+0xf8);
					D(esp+0x3c) = ebx;
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0x68) = FPOP();
					FPUSH((int)D(esp+0x3c));
					FPUSH(F64(esp+0x68));
					ST(0) = ST(0)-F64(esp+0xc8);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0xa8) = FPOP();
					F64(esp+0x108) = FPOP();
					FPUSH(F64(esp+0xa8));
					ST(0) = ST(0)-F64(esp+0x78);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x70,0x3f);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					F64(esp+0x70) = FPOP();
					FPUSH(F64(esp+0x108));
					ST(0) = ST(0)*F64(esp+0x70);
					d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
					F64(esp+0x98) = FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(0) = ST(0)-F64(esp+0x98);
					FPUSH(F64(esp+0x70));
					ST(0) = ST(0)*ST(1);
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					F64(esp+0x90) = FPOP();
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					ST(1) = ST(1)-ST(0); FPOP();
					FPUSH(F64(esp+0x90));
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0xd8) = FPOP();
					ST(0) = ST(0)-F64(esp+0x98);
					FPUSH(F64(esp+0xd8));
					ST(0) = ST(0)*ST(0);
					FPUSH(F64(esp+0xf8));
					ST(0) = ST(0)*ST(2);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(0) = ST(0)*F64(esp+0x108);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(3) = ST(3)-ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					ST(0) = ST(0)*F64(esp+0xf0);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					F64(esp+0xe0) = ST(0);
					ST(0) = ST(0)*F64(esp+0xe0);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(1) = ST(1)-ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(2) = ST(2)+ST(0); FPOP();
					F64(esp+0xe8) = ST(0);
					ST(0) = ST(0)*F64(esp+0xe8);
					ST(1) = ST(1)+ST(0); FPOP();
					FPUSH(1.0);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0x88) = FPOP();

					if(FPOP() >= F64(esp+0x88)){

						D(esp+0xe0) = 0;
						D(esp+0xe4) = 0x40590000;
						D(esp+0xe8) = 0;
						D(esp+0xec) = 0x40590000;
						D(esp+0xd8) = 0;
						D(esp+0xdc) = 0x40590000;
					}
					else {

						FPUSH(10000.0);
						ST(0) = ST(0)/F64(esp+0x88);
						ST(0) = dRMath_sqrt(ST(0));
						FPUSH(F64(esp+0xd8));
						ST(0) = ST(0)*ST(1);
						FPUSH(F64(esp+0xe0));
						ST(0) = ST(0)*ST(2);
						FPUSH(F64(esp+0xe8));
						ST(3) = ST(3)*ST(0); FPOP();
						d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
						F64(esp+0xd8) = FPOP();
						F64(esp+0xe0) = FPOP();
						F64(esp+0xe8) = FPOP();
					}

					eax = trees[n]._39C[edx];
					ebx = trees[n]._52C[edx];
					ecx = trees[n]._6BC[edx];
					FPUSH(___243a04h[eax]);
					FPUSH(___243b30h[eax]);
					FPUSH(___2438d8h[eax]);
					FPUSH(ST(2));
					FPUSH(ST(2));
					FPUSH(ST(2));
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					FPUSH(F64(esp+0xd8));
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(0) = ST(0)+ST(1);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(0) = ST(0)+F64(esp+0xe0);
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					ST(0) = ST(0)+F64(esp+0xe8);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(6) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(4) = ST(0); FPOP();
					ST(2) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					___243a04h[eax] = (float)FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					___243b30h[eax] = (float)FPOP();
					___2438d8h[eax] = (float)FPOP();
					FPUSH(___243a04h[ebx]);
					FPUSH(___243b30h[ebx]);
					FPUSH(___2438d8h[ebx]);
					FPUSH(ST(2));
					FPUSH(ST(2));
					FPUSH(ST(2));
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(0) = ST(0)+ST(6);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(0) = ST(0)+F64(esp+0xe0);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(0) = ST(0)+F64(esp+0xe8);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(5) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(3) = ST(0); FPOP();
					ST(1) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					___243a04h[ebx] = (float)FPOP();
					___243b30h[ebx] = (float)FPOP();
					___2438d8h[ebx] = (float)FPOP();
					FPUSH(___243a04h[ecx]);
					FPUSH(___243b30h[ecx]);
					FPUSH(___2438d8h[ecx]);
					FPUSH(ST(2));
					FPUSH(ST(2));
					FPUSH(ST(2));
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(6) = ST(6)+ST(0); FPOP();
					ST(0) = ST(0)+F64(esp+0xe0);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(0) = ST(0)+F64(esp+0xe8);
					d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
					ST(4) = ST(0); FPOP();
					ST(2) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					ST(3) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					___243a04h[ecx] = (float)FPOP();
					___243b30h[ecx] = (float)FPOP();
					___2438d8h[ecx] = (float)FPOP();
					edx++;
					D(esp+0x50)++;
					if((int)D(esp+0x50) >= (int)trees[n].___4) break;
				}
			}

			ebx = 0;
			ecx = 0;

			if((int)trees[n].___0 > 0){

				edx = 0;
				while(1){

					if((int)___1df9a0h[D(___243c98h)][ebx] >= 1){

						FPUSH((int)___1df9a0h[D(___243c98h)][ebx]);
						FPUSH(___243a04h[edx/4]);
						ST(0) = ST(0)/ST(1);
						FPUSH(___243b30h[edx/4]);
						ST(0) = ST(0)/ST(2);
						FPUSH(___2438d8h[edx/4]);
						ST(3) = ST(0)/ST(3); FPOP();
						d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
						___243a04h[edx/4] = (float)FPOP();
						___243b30h[edx/4] = (float)FPOP();
						___2438d8h[edx/4] = (float)FPOP();
					}

					FPUSH(___243a04h[edx/4]);
					ST(0) = ST(0)*ST(0);
					FPUSH(___243b30h[edx/4]);
					ST(0) = ST(0)*ST(0);
					ST(1) = ST(1)+ST(0); FPOP();
					FPUSH(___2438d8h[edx/4]);
					ST(0) = ST(0)*ST(0);
					ST(1) = ST(1)+ST(0); FPOP();
					FPUSH(1.0);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0xb8) = FPOP();

					if(FPOP() > F64(esp+0xb8)){

						D(esp+0xb8) = 0;
						D(esp+0xbc) = 0x3ff00000;
					}

					FPUSH(10000.0);
					ST(0) = ST(0)/F64(esp+0xb8);
					ST(0) = dRMath_sqrt(ST(0));
					FPUSH(___243a04h[edx/4]);
					FPUSH(ST(0));
					ST(0) = ST(0)*ST(2);
					FPUSH(___243b30h[edx/4]);
					FPUSH(ST(0));
					ST(0) = ST(0)*ST(4);
					FPUSH(___2438d8h[edx/4]);
					ST(5) = ST(5)*ST(0);
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					ST(4) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					___243a04h[edx/4] = (float)ST(0);
					ST(0) = ST(0)*(double)___243a04h[edx/4];
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					ST(1) = ST(0); FPOP();
					___243b30h[edx/4] = (float)ST(0);
					ST(0) = ST(0)*(double)___243b30h[edx/4];
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					ST(1) = ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					ST(1) = ST(1)+ST(0); FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					___2438d8h[edx/4] = (float)ST(0);
					ST(0) = ST(0)*(double)___2438d8h[edx/4];
					ST(1) = ST(1)+ST(0); FPOP();
					FPUSH(1.0);
					d_st0 = FPOP();
					d_st1 = FPOP();

					if(d_st0 > d_st1){

						FPUSH(1.0);
						ST(0) = ST(0)+(double)___243a04h[edx/4];
						___243a04h[edx/4] = (float)FPOP();
					}

					FPUSH(___243a04h[edx/4]);
					ST(0) = ST(0)*ST(0);
					FPUSH(___243b30h[edx/4]);
					ST(0) = ST(0)*ST(0);
					FPUSH(___2438d8h[edx/4]);
					ST(0) = ST(0)*ST(0);
					d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
					F32(esp+0x4c) = (float)FPOP();
					F32(esp+0x54) = (float)FPOP();
					F32(esp+0x48) = (float)FPOP();
					FPUSH(F32(esp+0x4c));
					ST(0) = ST(0)+(double)F32(esp+0x54);
					ST(0) = ST(0)+(double)F32(esp+0x48);
					ST(0) = dRMath_sqrt(ST(0));
					FPUSH(-10.0);
					FPUSH(___243a04h[edx/4]);
					ST(0) = ST(0)*ST(1);
					FPUSH(___243b30h[edx/4]);
					ST(2) = ST(2)*ST(0); FPOP();
					FPUSH(___2438d8h[edx/4]);
					ST(0) = ST(0)*-15.0;
					d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
					F64(esp+0x100) = ST(0);
					ST(0) = ST(0)*F64(esp+0x60);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F32(esp+0x38) = (float)FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F32(esp+0x44) = (float)FPOP();
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F32(esp+0x24) = (float)FPOP();
					FPUSH(F32(esp+0x38));
					ST(0) = ST(0)+(double)F32(esp+0x44);
					ST(0) = ST(0)+(double)F32(esp+0x24);
					F64(esp+0xc0) = ST(0);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0xa0) = FPOP();
					ST(0) = ST(0)/F64(esp+0xa0);
					FPUSH(0.0);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F64(esp+0x80) = FPOP();

					if(FPOP() >= F64(esp+0x80)){

						FPUSH(F64(esp+0x100));
						ST(0) = ST(0)*F64(esp+0x58);
						ST(0) = F64(esp+0xc0)/ST(0);
						FPUSH(3.0);
						d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
						ST(0) = ST(0)*ST(1);
						ST(1) = ST(1)+ST(0); FPOP();
					}
					else {

						FPUSH(F64(esp+0x80));
						ST(0) = 5.0*ST(0)+3.0;
					}

					ST(0) = (int)ST(0);
					D(esp+0x3c) = (int)FPOP();
					___1df9a0h[D(___243c98h)][ebx] = D(esp+0x3c);
					ebx++;
					ecx++;
					edi = trees[n].___0;
					edx += 4;
					if((int)ecx >= (int)edi) break;
				}
			}

			n++;
			D(___243c98h)++;

			if((int)D(___243c98h) >= (int)D(___243c88h)) break;
		}
	}
}

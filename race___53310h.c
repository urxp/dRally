#include "drally.h"
#include "drmath.h"

#pragma pack(1)
typedef struct xc50_s {
	int 		PointsN;			// +000
	int			TrianglesN;			// +004
	__DWORD__ 	CONST_X___8[75];		// +008
	__DWORD__ 	CONST_Y_134[75];		// +134
	__DWORD__	CONST_Z_260[75];		// +260
	__DWORD__ 	_38C;			// +38c
	__DWORD__	_390;			// +390
	__DWORD__	_394;			// +394
	__DWORD__ 	_398;			// +398
	__DWORD__	IndicesP1[100];		// +39c
	__DWORD__	IndicesP2[100];		// +52c
	__DWORD__	IndicesP3[100];		// +6bc
	__DWORD__	_84C[100];		// +84c
	__DWORD__	TRX_X;			// +9dc
	__DWORD__ 	TRX_Y;			// +9e0
	__DWORD__	X_REL_VIEWPORT_CENTER;			// +9e4
	__DWORD__	Y_REL_VIEWPORT_CENTER;			// +9e8
	__DWORD__	PointsX[75];		// +9ec
	__DWORD__	PointsY[75];		// +b18
	__DWORD__	_C44;			// +c44
	__DWORD__	_C48;			// +c48
	__DWORD__	_C4C;			// +c4c
} xc50_t;

	extern xc50_t ___1f3b08h[];		// <0x1f3b08 - 0x1f4758)
	extern int NUM_OF_OBJECTS;

// OBJECT ORDER
static void ___53378h_cdecl(int lo_i, int hi_i){

	__DWORD__ 	tmp;
	int 	id1, id2, id1_saved, n;


	id1 = lo_i;
	do {

		id2 = hi_i;
		id1_saved = id1;
		n = ___1f3b08h[(id1+id2)/2]._C48;

		do {

			while((int)___1f3b08h[id1]._C48 < n) id1++;
			while(n < (int)___1f3b08h[id2]._C48) id2--;

			if(id1 <= id2){

				tmp = ___1f3b08h[id2]._C48;
				___1f3b08h[id2]._C48 = ___1f3b08h[id1]._C48;
				___1f3b08h[id1]._C48 = tmp;

				tmp = ___1f3b08h[id2]._C4C;
				___1f3b08h[id2]._C4C = ___1f3b08h[id1]._C4C;
				___1f3b08h[id1]._C4C = tmp;

				id1++;
				id2--;
			}

		} while(id1 < id2);

		if(id1_saved < id2) ___53378h_cdecl(id1_saved, id2);

	} while(id1 < hi_i);
}

void race___53310h(void){

	int 		n;

	n = -1;
	while(++n < NUM_OF_OBJECTS){

		___1f3b08h[n]._C48 = dRMath_sum2squares_i(___1f3b08h[n].X_REL_VIEWPORT_CENTER, ___1f3b08h[n].Y_REL_VIEWPORT_CENTER);
		___1f3b08h[n]._C4C = n;
	}

	___53378h_cdecl(0, NUM_OF_OBJECTS-1);
}

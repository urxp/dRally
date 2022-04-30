#include "drally.h"

typedef struct xc50_s {
	int 		PointsN;			// +000
	int 		TrianglesN;			// +004
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
	extern int CURRENT_VIEWPORT_CENTER_X;
	extern int CURRENT_VIEWPORT_CENTER_Y;
	extern __BYTE__ NUM_OF_OBJECTS[];
	extern int TRX_VIEWPORT_TL_X;
	extern int TRX_VIEWPORT_TL_Y;
	extern char ___19bd64h[16];

// SOMETHING WITH 3D-LIKE OBJECTS
void race___4f030h(void){

	int 		i, j, n;


	n = -1;
	while(++n < (int)D(NUM_OF_OBJECTS)){

		___1f3b08h[n].X_REL_VIEWPORT_CENTER = ___1f3b08h[n].TRX_X-TRX_VIEWPORT_TL_X-CURRENT_VIEWPORT_CENTER_X;
		___1f3b08h[n].Y_REL_VIEWPORT_CENTER = ___1f3b08h[n].TRX_Y-TRX_VIEWPORT_TL_Y-CURRENT_VIEWPORT_CENTER_Y;
		___1f3b08h[n]._C44 = 0;

		if(___19bd64h[2] != 0x30){

			j = ___1f3b08h[n]._390+0x100*CURRENT_VIEWPORT_CENTER_X;
			i = 0x100*___1f3b08h[n].X_REL_VIEWPORT_CENTER;
			if(i > j) ___1f3b08h[n]._C44 = 1;

			j = ___1f3b08h[n]._38C-0x100*CURRENT_VIEWPORT_CENTER_X;
			i = 0x100*___1f3b08h[n].X_REL_VIEWPORT_CENTER;
			if(i < j) ___1f3b08h[n]._C44 = 1;

			j = ___1f3b08h[n]._398+0x100*CURRENT_VIEWPORT_CENTER_Y;
			i = 0x100*___1f3b08h[n].Y_REL_VIEWPORT_CENTER;
			if(i > j) ___1f3b08h[n]._C44 = 1;

			j = ___1f3b08h[n]._394-0x100*CURRENT_VIEWPORT_CENTER_Y;
			i = 0x100*___1f3b08h[n].Y_REL_VIEWPORT_CENTER;
			if(i < j) ___1f3b08h[n]._C44 = 1;
		}
	}
}

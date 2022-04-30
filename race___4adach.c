#include "drally.h"

typedef struct xc50_s {
	int 	PointsN;			// +000
	int 	TrianglesN;			// +004
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

typedef struct x2c_s {
    __DWORD__   width;     	// +00
    __DWORD__   height;    	// +04
    __DWORD__   offset;    	// +08
    __DWORD__   XPos;     	// +0c
    __DWORD__   YPos;       // +10
    __DWORD__   _14;        // +14
    __DWORD__   _18;        // +18
    __DWORD__   _1C;        // +1c
    __DWORD__   _20;        // +20
    __DWORD__   _24;        // +24
    __DWORD__   _28;        // +28
} x2c_t;


	extern xc50_t ___1f3b08h[100];		// <0x1f3b08 - 0x1f4758)
	extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)
	extern int NUM_OF_OBJECTS;
	extern int NUM_OF_TEXTURES;
	extern int ___1e8848h[100][100];

// SOMETHING WITH TEXTURES
void race___4adach(void){

	int 	object_i, triangle_i, texture_i;

	object_i = -1;
	while(++object_i < NUM_OF_OBJECTS){

		triangle_i = -1;
		while(++triangle_i < ___1f3b08h[object_i].TrianglesN){

			___1e8848h[object_i][triangle_i] = -1;

			texture_i = -1;
			while(++texture_i < NUM_OF_TEXTURES){

				if((object_i == ___240b48h[texture_i]._24)&&(triangle_i == ___240b48h[texture_i]._28)){

					if(___1e8848h[object_i][triangle_i] == -1){

						___1e8848h[object_i][triangle_i] = texture_i;
					}
					else {

						___1e8848h[object_i][triangle_i-1] = texture_i;
					}
				}
			}
		}
	}
}

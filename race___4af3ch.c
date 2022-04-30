#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct xc50_s {
	int 		PointsN;		// +000
	int 		TrianglesN;		// +004
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
    __DWORD__   width;    	// +00
    __DWORD__   height;  	// +04
    __DWORD__   offset;    	// +08
    __DWORD__   XPos;      	// +0c
    __DWORD__   YPos;     	// +10
    __DWORD__   _14;        // +14
    __DWORD__   _18;        // +18
    __DWORD__   _1C;        // +1c
    __DWORD__   _20;        // +20
    __DWORD__   _24;        // +24
    __DWORD__   _28;        // +28
} x2c_t;

	extern xc50_t ___1f3b08h[];		// <0x1f3b08 - 0x1f4758)
	extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)

	extern __POINTER__ TRX_IMA;
	extern int TRX_HEIGHT;
	extern int TRX_WIDTH;
	extern __POINTER__ TRX_MAS;
	extern __POINTER__ TRX_VAI;
	extern int TRX_HEIGHT_QTR;
	extern int TRX_WIDTH_QTR;
	extern __POINTER__ TRX_LR1;
	extern __POINTER__ ___243d74h;
	extern __POINTER__ RACE_PEDESTR_BPK;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1f2488h[];
	extern __BYTE__ ___1df720h[];
	extern __BYTE__ ___243c5ch[];
	extern int X___1de920h[0x100];
	extern int Y___1ded20h[0x100];
	extern __BYTE__ NUM_OF_OBJECTS[];
	extern __BYTE__ NUM_OF_TEXTURES[];
	extern __POINTER__ ___243d5ch;

static void helper00(__POINTER__ ptr, __DWORD__ dim){

	int		n;

	n = -1;
	while(++n < dim/2) switch_b(ptr+n, ptr+dim-n-1);
}


// REVERSE TRACK
void race___4af3ch(void){

	double 		d_tmp;
	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x3c];
	int 		i, j, dim, m, n;
	x2c_t * 	q;
	__BYTE__ 		b_tmp;
	double 		d1, d2, d3;
	__POINTER__ 		esip;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	helper00(TRX_IMA, TRX_WIDTH*TRX_HEIGHT);
	helper00(TRX_MAS, TRX_WIDTH*TRX_HEIGHT);
	helper00(TRX_VAI, TRX_WIDTH_QTR*TRX_HEIGHT_QTR);
	helper00(TRX_LR1, TRX_WIDTH_QTR*TRX_HEIGHT_QTR);

	D(esp+0x1c) = 0;
	while(1){

		edx = 0;

		while(1){

			b_tmp =  B(___243d74h+D(esp+0x1c)+edx);
			B(___243d74h+D(esp+0x1c)+edx) = B(___243d74h+D(esp+0x1c)+0x257ff-edx);
			B(___243d74h+D(esp+0x1c)+0x257ff-edx) = b_tmp;
			edx++;
			if((int)edx >= 0x12c00) break;
		}

		D(esp+0x20) = 0x125c0;
		D(esp+0x28) = 0;

		while(1){

			edx = 0;
			while(1){

				b_tmp = B(___243d74h+edx+D(esp+0x1c)+D(esp+0x28));
				B(___243d74h+edx+D(esp+0x1c)+D(esp+0x28)) = B(___243d74h+D(esp+0x1c)+D(esp+0x20)+edx);
				B(___243d74h+D(esp+0x1c)+D(esp+0x20)+edx) = b_tmp;
				edx++;
				if((int)edx >= 0x640) break;
			}

			D(esp+0x28) += 0x640;
			D(esp+0x20) -= 0x640;
			if(D(esp+0x28) == 0x9600) break;
		}

		D(esp+0x24) = 0x251c0;
		D(esp+0x2c) = 0x12c00;

		while(1){

			esi = D(esp+0x2c);
			ecx = D(esp+0x24);

			edx = 0;
			while(1){

				b_tmp = B(___243d74h+edx+D(esp+0x2c)+D(esp+0x1c));
				B(___243d74h+esi+D(esp+0x1c)) = B(___243d74h+ecx+D(esp+0x1c));
				B(___243d74h+edx+D(esp+0x1c)+D(esp+0x24)) = b_tmp;
				edx++;
				ecx++;
				esi++;
				if((int)edx >= 0x640) break;
			}

			D(esp+0x2c) += 0x640;
			D(esp+0x24) -= 0x640;
			if(D(esp+0x2c) == 0x1c200) break;
		}

		D(esp+0x1c) += 0x25800;
		if(D(esp+0x1c) == 0x96000) break;
	}

	j = -1;
	while(++j < 0x24){

		i = -1;
		while(++i < 0x80){

			b_tmp = B(RACE_PEDESTR_BPK+0x100*j+i);
			B(RACE_PEDESTR_BPK+0x100*j+i) = B(RACE_PEDESTR_BPK+0x100*j+0xff-i);
			B(RACE_PEDESTR_BPK+0x100*j+0xff-i) = b_tmp;
		}
	}

	n = -1;
	while(++n < 4){

		s_35e[n].XLocation = (float)(int)(TRX_WIDTH-1-(int)(double)s_35e[n].XLocation);
		s_35e[n].YLocation = (float)(int)(TRX_HEIGHT-1-(int)(double)s_35e[n].YLocation);
		s_35e[n].ImgIndex = (s_35e[n].ImgIndex+48)%96;
		s_35e[n].__156 = (float)(3.75*(double)(int)s_35e[n].ImgIndex);
		s_35e[n].Direction = (float)(3.75*(double)(int)s_35e[n].ImgIndex);
		s_35e[n].ImgOffset = s_35e[n].ImgIndex*sizeof(img40x40)+n*sizeof(car_spins_t);
	}

	n = -1;
	while(++n < 0x10){

		if((int)D(___1f2488h+0x120*n) > 0){
		
			D(___1f2488h+0x120*n) = TRX_WIDTH-1-D(___1f2488h+0x120*n);
		}
				
		if((int)D(___1f2488h+0x120*n+4) > 0){
		
			D(___1f2488h+0x120*n+4) = TRX_HEIGHT-1-D(___1f2488h+0x120*n+4);
		}
	}

	n = -1;
	while(++n < 0x14){

		if((int)D(___1df720h+0x20*n) > 0){
		
			D(___1df720h+0x20*n) = TRX_WIDTH-1-D(___1df720h+0x20*n)-0x10;
		}

		if((int)D(___1df720h+0x20*n+4) > 0){
		
			D(___1df720h+0x20*n+4) = TRX_HEIGHT-1-D(___1df720h+0x20*n+4)-0x10;
		}
	}

	n = -1;
	while(++n < (int)D(___243c5ch)){

		X___1de920h[n] = TRX_WIDTH-1-X___1de920h[n];
		Y___1ded20h[n] = TRX_HEIGHT-1-Y___1ded20h[n];
	}

	m = -1;
	while(++m < (int)D(NUM_OF_OBJECTS)){

		n = -1;
		while(++n < ___1f3b08h[m].PointsN){

			___1f3b08h[m].CONST_X___8[n] = 0-___1f3b08h[m].CONST_X___8[n];
			___1f3b08h[m].CONST_Y_134[n] = 0-___1f3b08h[m].CONST_Y_134[n];
		}

		eax = 0-___1f3b08h[m]._390;
		___1f3b08h[m]._390 = (int)(-1.0*(double)(int)___1f3b08h[m]._38C);
		___1f3b08h[m]._38C = eax;

		eax = 0-___1f3b08h[m]._398;
		___1f3b08h[m]._398 = (int)(-1.0*(double)(int)___1f3b08h[m]._394);
		___1f3b08h[m]._394 = eax;


		___1f3b08h[m].TRX_X = TRX_WIDTH-1-___1f3b08h[m].TRX_X;
		___1f3b08h[m].TRX_Y = TRX_HEIGHT-1-___1f3b08h[m].TRX_Y;
	} // w

	i = -1;
	while(++i < (int)D(NUM_OF_TEXTURES)){

		q = &___240b48h[i];

		q->XPos = 0x100*(TRX_WIDTH-1)-q->XPos-q->width*q->_14;
		q->YPos = 0x100*(TRX_HEIGHT-1)-q->YPos-q->height*q->_14;

		dim = q->width*q->height;
		eax = dim/2;
		j = -1;
		while(++j < (int)eax){

			b_tmp = B(___243d5ch+q->offset+j);
			B(___243d5ch+q->offset+j) = B(___243d5ch+dim+q->offset-j-1);
			B(___243d5ch+dim+q->offset-j-1) = b_tmp;
		}
	}

	return;
}

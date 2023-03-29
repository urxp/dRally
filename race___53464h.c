#include "drally.h"
#include "drmath.h"
#include "drally_race.h"

typedef struct x2c_s {
    __DWORD__   width;     	// +00
    __DWORD__   height;   	// +04
    __DWORD__   offset;   	// +08
    int   		XPos;      	// +0c
    int   		YPos;      	// +10
    int   		_14;        // +14
    __DWORD__   XScreen;  	// +18
    __DWORD__   YScreen;  	// +1c
    __DWORD__   _20;        // +20
    __DWORD__   _24;        // +24
    __DWORD__   _28;        // +28
} x2c_t;

typedef struct xc50_s {
	int 		PointsN;		// +000
	int 		TrianglesN;		// +004
	int 		CONST_X___8[75];		// +008
	int 		CONST_Y_134[75];		// +134
	int			CONST_Z_260[75];		// +260
	__DWORD__ 	_38C;			// +38c
	__DWORD__	_390;			// +390
	__DWORD__	_394;			// +394
	__DWORD__ 	_398;			// +398
	__DWORD__	IndicesP1[100];	// +39c
	__DWORD__	IndicesP2[100];	// +52c
	__DWORD__	IndicesP3[100];	// +6bc
	__DWORD__	_84C[100];		// +84c
	__DWORD__	TRX_X;			// +9dc
	__DWORD__ 	TRX_Y;			// +9e0
	int			X_REL_VIEWPORT_CENTER;			// +9e4
	int			Y_REL_VIEWPORT_CENTER;			// +9e8
	__DWORD__	PointsX[75];	// +9ec
	__DWORD__	PointsY[75];	// +b18
	__DWORD__	_C44;			// +c44
	__DWORD__	_C48;			// +c48
	__DWORD__	_C4C;			// +c4c
} xc50_t;

	extern int NUM_OF_OBJECTS;
	extern xc50_t ___1f3b08h[];		// <0x1f3b08 - 0x1f4758)
	extern x2c_t ___240b48h[];		// <0x240b48 - 0x240b74)
	extern int X1___243c6ch;
	extern int X3___243c64h;
	extern int Y1___243c78h;
	extern int Y2___243c74h;
	extern int Y3___243c70h;
	extern int X2___243c68h;
	extern int CURRENT_VIEWPORT_CENTER_X;
	extern int CURRENT_VIEWPORT_CENTER_Y;
	extern int CURRENT_VIEWPORT_X;
	extern __DWORD__ ___1df9a0h[100][75];
	extern int ___1e8848h[100][100];
	extern __BYTE__ ___243c9ch[];
	extern int TRX_VIEWPORT_TL_X;
	extern int TRX_VIEWPORT_TL_Y;
	extern int CURRENT_VIEWPORT_W;
	extern int CURRENT_VIEWPORT_H;
	extern __POINTER__ BACKBUFFER;
	extern __POINTER__ ___243d5ch;

	static __BYTE__ ___242e78h[0x100];
	static __BYTE__ ___242f78h[0x100];
	static __BYTE__ ___243188h[0x100];

void ___5e137h(__BYTE__ A0, int Y3, int X3, int Y2, int X2, int Y1, int X1);
void ___5e3e8h(int A1, int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9);
void ___5e769h(__BYTE__ * A0, int Y3, int X3, int Y2, int X2, int Y1, int X1);

static __DWORD__ helper00(int val0, int val1){
//val0(-171196, 106908), val1(94, 299)

	__DWORD__ 	eax, edx;

	edx = 0x100*val0;
	eax = (long long)(int)edx/val1;
	eax = eax+0x80;
	eax = (int)eax>>8;

	return eax;

//	return (256*val0/val1+128)/256;
}

static int objMap(int object_i){ return ___1f3b08h[NUM_OF_OBJECTS-object_i-1]._C4C; }

// OBJECTS
void race___53464h(void){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi;
	__DWORD__ 		A1, A4, A7;
	int 		a, b, c, i, j, n, m, object_i, xi, yi;
	__BYTE__ 		px;
	xc50_t *	p;
	x2c_t * 	q;


	object_i = -1;
	while(++object_i < NUM_OF_OBJECTS){

		p = &___1f3b08h[objMap(object_i)];

		if(p->_C44 != 1){

			n = -1;
			while(++n < p->PointsN){

				//p->PointsX[n] = helper00(0x100*p->X_REL_VIEWPORT_CENTER+p->CONST_X___8[n], p->CONST_Z_260[n])+CURRENT_VIEWPORT_CENTER_X;
				//p->PointsY[n] = helper00(0x100*p->Y_REL_VIEWPORT_CENTER+p->CONST_Y_134[n], p->CONST_Z_260[n])+CURRENT_VIEWPORT_CENTER_Y;

				p->PointsX[n] = CURRENT_VIEWPORT_CENTER_X+(256*(256*p->X_REL_VIEWPORT_CENTER+p->CONST_X___8[n])/p->CONST_Z_260[n]+128)/256;
				p->PointsY[n] = CURRENT_VIEWPORT_CENTER_Y+(256*(256*p->Y_REL_VIEWPORT_CENTER+p->CONST_Y_134[n])/p->CONST_Z_260[n]+128)/256;
			}

			n = -1;
			while(++n < p->TrianglesN){

				X1___243c6ch = p->PointsX[p->IndicesP1[n]];
				Y1___243c78h = p->PointsY[p->IndicesP1[n]];
				X2___243c68h = p->PointsX[p->IndicesP2[n]];
				Y2___243c74h = p->PointsY[p->IndicesP2[n]];
				X3___243c64h = p->PointsX[p->IndicesP3[n]];
				Y3___243c70h = p->PointsY[p->IndicesP3[n]];

				ebx = (X2___243c68h-X1___243c6ch)*(Y3___243c70h-Y1___243c78h)-((Y2___243c74h-Y1___243c78h)*(X3___243c64h-X1___243c6ch));

				if((int)ebx <= 0){

					a = abs(X1___243c6ch-CURRENT_VIEWPORT_CENTER_X);
					b = abs(X2___243c68h-CURRENT_VIEWPORT_CENTER_X);
					c = abs(X3___243c64h-CURRENT_VIEWPORT_CENTER_X);

					if((a < CURRENT_VIEWPORT_CENTER_X)||(b < CURRENT_VIEWPORT_CENTER_X)||(c < CURRENT_VIEWPORT_CENTER_X)){
						
						a = abs(Y1___243c78h-CURRENT_VIEWPORT_CENTER_Y);
						b = abs(Y2___243c74h-CURRENT_VIEWPORT_CENTER_Y);
						c = abs(Y3___243c70h-CURRENT_VIEWPORT_CENTER_Y);

						if((a < CURRENT_VIEWPORT_CENTER_Y)||(b < CURRENT_VIEWPORT_CENTER_Y)||(c < CURRENT_VIEWPORT_CENTER_Y)){
							
							ebx = p->_84C[n]-0x80;

							switch(ebx){
							case 0:	// TREE
								eax = 75*p->CONST_Y_134[p->IndicesP1[n]];
								ecx = 100-p->CONST_X___8[p->IndicesP1[n]];
								ecx = 0x36*((int)ecx>>8)+8;
								A7 = abs((int)eax>>L(ecx))&7;
								eax = 75*p->CONST_Y_134[p->IndicesP2[n]];
								ecx = 100-p->CONST_X___8[p->IndicesP2[n]];
								ecx = 0x36*((int)ecx>>8)+8;
								A4 = abs((int)eax>>L(ecx))&7;
								eax = 75*p->CONST_Y_134[p->IndicesP3[n]];
								ecx = 100-p->CONST_X___8[p->IndicesP3[n]];
								ecx = 0x36*((int)ecx>>8)+8;
								A1 = abs((int)eax>>L(ecx))&7;
								___5e3e8h(
									A1+0x6d,
									Y3___243c70h,
									X3___243c64h+CURRENT_VIEWPORT_X,
									A4+0x6d,
									Y2___243c74h,
									X2___243c68h+CURRENT_VIEWPORT_X,
									A7+0x6d,
									Y1___243c78h,
									X1___243c6ch+CURRENT_VIEWPORT_X
								);
								break;
							case 1:	// SHADOW
								___5e769h(
									___243188h,
									Y3___243c70h,
									X3___243c64h+CURRENT_VIEWPORT_X,
									Y2___243c74h,
									X2___243c68h+CURRENT_VIEWPORT_X,
									Y1___243c78h,
									X1___243c6ch+CURRENT_VIEWPORT_X
								);
								break;
							case 2:	// SHADOW
								___5e769h(
									___242f78h,
									Y3___243c70h,
									X3___243c64h+CURRENT_VIEWPORT_X,
									Y2___243c74h,
									X2___243c68h+CURRENT_VIEWPORT_X,
									Y1___243c78h,
									X1___243c6ch+CURRENT_VIEWPORT_X
								);
								break;
							case 3:	// SHADOW
								___5e769h(
									___242e78h,
									Y3___243c70h,
									X3___243c64h+CURRENT_VIEWPORT_X,
									Y2___243c74h,
									X2___243c68h+CURRENT_VIEWPORT_X,
									Y1___243c78h,
									X1___243c6ch+CURRENT_VIEWPORT_X
								);
								break;
							case 10:	// TREE
								___5e3e8h(
									___1df9a0h[objMap(object_i)][p->IndicesP3[n]]+0x6c,
									Y3___243c70h,
									X3___243c64h+CURRENT_VIEWPORT_X,
									___1df9a0h[objMap(object_i)][p->IndicesP2[n]]+0x6c,
									Y2___243c74h,
									X2___243c68h+CURRENT_VIEWPORT_X,
									___1df9a0h[objMap(object_i)][p->IndicesP1[n]]+0x6c,
									Y1___243c78h,
									X1___243c6ch+CURRENT_VIEWPORT_X
								);
								break;
							default:	// OBJECT
								___5e137h(
									p->_84C[n]&0xff,
									Y3___243c70h,
									X3___243c64h+CURRENT_VIEWPORT_X,
									Y2___243c74h,
									X2___243c68h+CURRENT_VIEWPORT_X,
									Y1___243c78h,
									X1___243c6ch+CURRENT_VIEWPORT_X
								);
								break;
							}
						} // i
					} // i
				} // i

				if(dRally_Race_getSettings(RACE_TEXTURES)){
				
					D(___243c9ch) = ___1e8848h[objMap(object_i)][n];

					if(D(___243c9ch) != -1){

						q = &___240b48h[D(___243c9ch)];

						//q->XScreen = helper00(q->XPos-0x100*(TRX_VIEWPORT_TL_X+CURRENT_VIEWPORT_CENTER_X), q->_14)+CURRENT_VIEWPORT_CENTER_X;
						//q->YScreen = helper00(q->YPos-0x100*(TRX_VIEWPORT_TL_Y+CURRENT_VIEWPORT_CENTER_Y), q->_14)+CURRENT_VIEWPORT_CENTER_Y;

						q->XScreen = CURRENT_VIEWPORT_CENTER_X+(256*(q->XPos-256*(TRX_VIEWPORT_TL_X+CURRENT_VIEWPORT_CENTER_X))/q->_14+128)/256;
						q->YScreen = CURRENT_VIEWPORT_CENTER_Y+(256*(q->YPos-256*(TRX_VIEWPORT_TL_Y+CURRENT_VIEWPORT_CENTER_Y))/q->_14+128)/256;

						if(((int)(0-q->width) < (int)q->XScreen)&&((int)q->XScreen < CURRENT_VIEWPORT_W)){

							if(((int)(0-q->height) < (int)q->YScreen)&&((int)q->YScreen < CURRENT_VIEWPORT_H)){

								xi = (int)q->XScreen+CURRENT_VIEWPORT_X+0x60;
								yi = (int)q->YScreen;

								int width = q->width;
								int stride = width;
								int height = q->height;
								__BYTE__ *src = ___243d5ch + q->offset;
								__BYTE__ *dest = BACKBUFFER + 0x200 * yi + xi;

								// y clip
								if (yi < 0) {
									dest += (-yi) * 0x200;
									src += (-yi) * width;
									height += yi;
									yi = 0;
								}
								int ydiff = yi + height - 0xc8;
								if (ydiff > 0) {
									height -= ydiff;
								}

								// x clip
								if (xi < 0) {
									dest += (-xi);
									src += (-xi);
									width += xi;
									xi = 0;
								}
								int xdiff = xi + width - 0x200;
								if (xdiff > 0) {
									width -= xdiff;
								}

								int yy = height;
								while (yy--) {
									int xx = width;
									__BYTE__* s = src;
									__BYTE__* d = dest;
									while (xx--) {
										if ((px = *s++)) *d = px;
										d++;
									}
									src += stride;
									dest += 0x200;
								}
							}
						}
					} // i
				} // i
			} // w
		} // i
	} // w
}

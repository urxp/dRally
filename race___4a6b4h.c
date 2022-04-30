#include "drally.h"
#include "drmath.h"

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
	__DWORD__	IndicesP1[100];	// +39c
	__DWORD__	IndicesP2[100];	// +52c
	__DWORD__	IndicesP3[100];	// +6bc
	__DWORD__	_84C[100];		// +84c
	__DWORD__	TRX_X;			// +9dc
	__DWORD__ 	TRX_Y;			// +9e0
	__DWORD__	X_REL_VIEWPORT_CENTER;			// +9e4
	__DWORD__	Y_REL_VIEWPORT_CENTER;			// +9e8
	__DWORD__	PointsX[75];	// +9ec
	__DWORD__	PointsY[75];	// +b18
	__DWORD__	_C44;			// +c44
	__DWORD__	_C48;			// +c48
	__DWORD__	_C4C;			// +c4c
} xc50_t;

	extern xc50_t ___1f3b08h[100];		// <0x1f3b08 - 0x1f4758)

	extern int NUM_OF_OBJECTS;
	extern __DWORD__ ___1df9a0h[100][75];

	static double ___243b30h[75];
	static double ___2438d8h[75];
	static double ___243a04h[75];

// TREES TEXTURES
void race___4a6b4h(void){

	double 	d_tmp, vx, vy, vz;
	__BYTE__ 	esp[0x110];
	int 	i, j, k, n, b, a, c, x0, x1, y0, y1, z0, z1;
	int 	*y, *z, *x;
	xc50_t *	objs;


	objs = (xc50_t *)___1f3b08h;

	n = -1;
	while(++n < NUM_OF_OBJECTS){

		i = -1;
		while(++i < (int)objs[n].PointsN) ___1df9a0h[n][i] = 0;

		i = -1;
		while(++i < (int)objs[n].TrianglesN){

			___1df9a0h[n][objs[n].IndicesP1[i]]++;
			___1df9a0h[n][objs[n].IndicesP2[i]]++;
			___1df9a0h[n][objs[n].IndicesP3[i]]++;
		}

		i = -1;
		while(++i < (int)objs[n].PointsN){

			___243b30h[i] = 0.0;
			___2438d8h[i] = 0.0;
			___243a04h[i] = 0.0;
		}

		i = -1;
		while(++i < objs[n].TrianglesN){

			a = objs[n].IndicesP1[i];
			b = objs[n].IndicesP2[i];
			c = objs[n].IndicesP3[i];
			x = objs[n].CONST_X___8;
			y = objs[n].CONST_Y_134;
			z = objs[n].CONST_Z_260;

			vx = (double)(  (y[b]-y[a])*(z[c]-z[a])  -  (y[c]-y[a])*(z[b]-z[a])  );
			vy = (double)(  (z[b]-z[a])*(x[c]-x[a])  -  (z[c]-z[a])*(x[b]-x[a])  );
			vz = (double)(  (x[b]-x[a])*(y[c]-y[a])  -  (x[c]-x[a])*(y[b]-y[a])  )/256.0;

			d_tmp = dRMath_magnitude3(vx, vy, vz);

			if(d_tmp > 256.0){

				vx *= 100.0/d_tmp;
				vy *= 100.0/d_tmp;
				vz *= 100.0/d_tmp;
			}
			else {

				vy = 100.0;
				vz = 100.0;
				vx = 100.0;
			}

			___243a04h[a] += vx;
			___243a04h[b] += vx;
			___243a04h[c] += vx;
			___243b30h[a] += vy;
			___243b30h[b] += vy;
			___243b30h[c] += vy;
			___2438d8h[a] += vz;
			___2438d8h[b] += vz;
			___2438d8h[c] += vz;
		}

		i = -1;
		while(++i < objs[n].PointsN){

			if((int)___1df9a0h[n][i] >= 1){

				___243b30h[i] /= (double)(int)___1df9a0h[n][i];
				___243a04h[i] /= (double)(int)___1df9a0h[n][i];
				___2438d8h[i] /= (double)(int)___1df9a0h[n][i];
			}

			d_tmp = dRMath_magnitude3(___243a04h[i], ___243b30h[i], ___2438d8h[i]);
			if(d_tmp < 1.0) d_tmp = 1.0;

			___243a04h[i] *= 100.0/d_tmp;
			___243b30h[i] *= 100.0/d_tmp;
			___2438d8h[i] *= 100.0/d_tmp;

			d_tmp = dRMath_magnitude3(___243a04h[i], ___243b30h[i], ___2438d8h[i]);
			if(d_tmp < 1.0){
				
				___243a04h[i] += 1.0;
				d_tmp = dRMath_magnitude3(___243a04h[i], ___243b30h[i], ___2438d8h[i]);
			}

			F64(esp+0xc0) = -10.0*___243a04h[i]-10.0*___243b30h[i]-15.0*___2438d8h[i];
			F64(esp+0x80) = F64(esp+0xc0)/(d_tmp*dRMath_sqrt(126.0));

			if(F64(esp+0x80) <= 0.0) F64(esp+0x80) = F64(esp+0xc0)/(d_tmp*dRMath_sqrt(425.0));

			___1df9a0h[n][i] = (int)(3.0*(1.0+F64(esp+0x80)));
		}
	}
}

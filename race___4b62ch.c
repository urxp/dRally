#include "drally.h"
#include "drmath.h"

	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___243cf4h[];
	extern byte ___243cfch[];
	extern void * ___243d74h;
	extern byte ___2438d0h[];
	extern byte ___1df520h[];
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern byte ___243cf8h[];
	extern void * ___243d54h;
	extern byte ___243ca8h[];
	extern byte ___1de580h[];
	extern void * ___243d78h;
	extern byte ___243d30h[];
	extern byte ___242178h[];
	extern byte ___242578h[];
	extern byte ___241d78h[];

#define LOC_PI	create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)

#define CTRL_NULL			0x00
#define CTRL_ACCELERATE		0x01
#define CTRL_BRAKE			0x02
#define CTRL_STEER_LEFT		0x04
#define CTRL_STEER_RIGHT	0x08
#define CTRL_TURBO_BOOST	0x10
#define CTRL_MACHINE_GUN	0x20
#define CTRL_DROP_MINE		0x40
#define CTRL_HORN			0x42

int rand_watcom106(void);

static int helper00(int u, int v){
/*
	if(u < v) v = u;
	if(v < 0) v = 0;

	return v;
*/
	return ((u<v)?(u<0)?0:u:(v<0)?0:v)>>2;
}

static void helper_drug(int eax, int edx, int i, int action){

	int 	ecx;

	ecx = 0;
	while(1){

		if((edx < (int)D(___1e6ed0h+0x35e*D(___243c60h)+0x34e))&&(eax > (int)D(___1e6ed0h+0x35e*D(___243c60h)+0x34e))) ecx = 0x1;
		eax -= 0x3c;
		edx -= 0x3c;
		if(eax < i) break;
	}
	
	if(ecx != 0){

		if(D(___1e6ed0h+0x35e*D(___243c60h)+0x10a) == 0){

			if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= action;
		}
	}
}

static void helper_machine_gun(double dval){

	int 	i, j, n;

	i = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)+dval*dRMath_sin(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0)*LOC_PI/180.0));
	j = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)+dval*dRMath_cos(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0)*LOC_PI/180.0));

	n = -1;
	while(++n < (int)D(___243cf4h)){

		if(D(___243c60h) != n){
			
			if(dRMath_abs_i((int)(double)F32(___1e6ed0h+0x35e*n+0xb4)-i) < 0x14){

				if(dRMath_abs_i((int)(double)F32(___1e6ed0h+0x35e*n+0xb8)-j) < 0x14){
					
					B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_MACHINE_GUN;
				}
			}
		}
	}
}

// RACE CARS AI
void race___4b62ch(void){

	dword 		eax, ebx, ecx, edx;
	__BYTE__ 	b1, b2;
	int 		i, j, n;


	D(___243cfch) = 0;

	i = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)+35.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0)*LOC_PI/180.0));
	j = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)+35.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0)*LOC_PI/180.0));

	n = -1;
	while(++n < (int)D(___243cf4h)){

		if(D(___243c60h) != n){

			ebx = i-(int)(double)F32(___1e6ed0h+0x35e*n+0xb4);
			edx = j-(int)(double)F32(___1e6ed0h+0x35e*n+0xb8);

			if((dRMath_abs_i(ebx) < 0x14)&&(dRMath_abs_i(edx) < 0x14)){

				if(B(___243d74h+D(___1e6ed0h+0x35e*n+0x10)+(int)ebx+0x14+0x28*((int)edx+0x14)) > 3){
					
					if(D(___1e6ed0h+0x35e*D(___243c60h)+0x186) == 0){
					
						if(D(___1e6ed0h+0x35e*D(___243c60h)+0x10a) == 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x186) = 0x64;
					}
				}
			}
		}
	}

	i = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)+25.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0)*LOC_PI/180.0));
	j = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)+25.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0)*LOC_PI/180.0));

	n = -1;
	while(++n < (int)D(___2438d0h)){

		if(dRMath_abs_i(D(___1df520h+0x10*n)-i) < 0x14){
			
			if(dRMath_abs_i(D(___1df520h+0x10*n+4)-j) < 0x14){

				if(D(___1e6ed0h+0x35e*D(___243c60h)+0x186) == 0){
			
					if(D(___1e6ed0h+0x35e*D(___243c60h)+0x10a) == 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x186) = 0x3c;
				}
			}
		}
	}

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x192) > 5){
	
		if(D(___1e6ed0h+0x35e*D(___243c60h)+0x182) == 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x182) = 0x64;
	}

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x196) > 3){
	
		if(D(___1e6ed0h+0x35e*D(___243c60h)+0x186) == 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x186) = 0x64;
	}

	D(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) = CTRL_NULL;
	
	helper_drug(0x230, 0x212, 0x3c, CTRL_STEER_LEFT);
	helper_drug(0x212, 0x1f4, 0x1e, CTRL_STEER_RIGHT);

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x17e) >= 0x64){

		if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x17e) > 0x94){
		
			if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0xb0) > 0x3f000000) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_BRAKE;
		}

		if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x17e) < 0x94) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_STEER_LEFT;
		if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x182) > 0) D(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) = CTRL_BRAKE;
	}
	else {

		ebx = B(___243d78h+((int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)>>0x2)+D(___243d30h)*((int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)>>0x2));

		if((0.0 < (double)F32(___1de580h+0x94*D(___243c60h)+4))||((int)D(___1e6ed0h+0x35e*D(___243c60h)+0xb0) > 0x3f000000)){

			j = helper00(D(___243d2ch)-1,
				(int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)+40.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0+26.0)*LOC_PI/180.0)));
			i = helper00(D(___243d28h)-1,
				(int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)+40.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0+26.0)*LOC_PI/180.0)));
			b1 = 0x10-B(___243d54h+D(___243cf8h)*j+i);
			
			j = helper00(D(___243d2ch)-1,
				(int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)+40.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0-26.0)*LOC_PI/180.0)));
			i = helper00(D(___243d28h)-1,
				(int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)+40.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+180.0-26.0)*LOC_PI/180.0)));
			b2 = 0x10-B(___243d54h+D(___243cf8h)*j+i);

			if(D(___1e6ed0h+0x35e*D(___243c60h)+0x186) != 0){

				eax = D(___242178h+4*ebx)+1;
				ecx = b1;
				if((int)ecx > (int)eax) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_STEER_RIGHT;

				eax = D(___242178h+4*ebx)-1;
				ecx = b2;
				if((int)ecx < (int)eax) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_STEER_LEFT;
			}
			else {

				if(b1 > 9) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_STEER_RIGHT;
				if(b2 < 7) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_STEER_LEFT;
			}
		}

		if((rand_watcom106()%2) == 0){

			if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x196) > 3){

				if(D(___1e6ed0h+0x35e*D(___243c60h)+0x10a) == 0){

					if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0){
					
						B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_STEER_RIGHT;
					}
				}
			}
		}

		if(((double)F32(___1de580h+0x94*D(___243c60h)+4)*(double)F32(___242578h+4*ebx)) > (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)){

			if(D(___1e6ed0h+0x35e*D(___243c60h)+0x182) == 0) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_ACCELERATE;
		}

		F32(___1e6ed0h+0x35e*D(___243c60h)+0xa8) = (float)((double)F32(___1de580h+0x94*D(___243c60h)+0x14)*(double)F32(___241d78h+4*ebx));
	}

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x186) > 0){
		
		B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_TURBO_BOOST;
		D(___1e6ed0h+0x35e*D(___243c60h)+0x186) -= 1;
	}

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x17e) > 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x17e) -= 1;
	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x182) > 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x182) -= 1;

	i = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)+55.0*dRMath_sin((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)*LOC_PI/180.0));
	j = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)+55.0*dRMath_cos((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)*LOC_PI/180.0));

	n = -1;
	while(++n < (int)D(___243cf4h)){

		if(D(___243c60h) != n){

			if(dRMath_abs_i((int)(double)F32(___1e6ed0h+0x35e*n+0xb4)-i) < 0x14){

				if(dRMath_abs_i((int)(double)F32(___1e6ed0h+0x35e*n+0xb8)-j) < 0x14){

					if(D(___1e6ed0h+0x35e*D(___243c60h)+0x1a2) == 0){
					
						B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_DROP_MINE;
						D(___1e6ed0h+0x35e*D(___243c60h)+0x1a2) = 0x15e;
					}
				}
			}
		}
	}

	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0x1a2) > 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x1a2) -= 1;

	helper_machine_gun(20.0);
	helper_machine_gun(50.0);
	helper_machine_gun(80.0);

	if((D(___1e6ed0h+0x35e*D(___243c60h)+0x186) == 0x46)&&((rand_watcom106()%5) == 0)) D(___1e6ed0h+0x35e*D(___243c60h)+0x35a) = 1;
	if(D(___1e6ed0h+0x35e*D(___243c60h)+0x186) == 0) D(___1e6ed0h+0x35e*D(___243c60h)+0x35a) = 0;
	if(D(___1e6ed0h+0x35e*D(___243c60h)+0x35a) == 1) B(___1e6ed0h+0x35e*D(___243c60h)+4*D(___243ca8h)+0x20) |= CTRL_HORN;
}

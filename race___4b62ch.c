#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ NUM_OF_CARS[];
	extern __BYTE__ ___243cfch[];
	extern __POINTER__ ___243d74h;
	extern __BYTE__ ___1df520h[];
	extern int TRX_WIDTH;
	extern int TRX_HEIGHT;
	extern __POINTER__ TRX_LR1;
	extern __BYTE__ ___1de580h[];
	extern __POINTER__ TRX_VAI;
	extern int TRX_WIDTH_QTR;
	extern int TRX_OHI_DAT[0x100];
	extern float TRX_DRV_DAT[0x200];

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

static int helper00(int u, int v){ return ((u<v)?((u<0)?0:u):((v<0)?0:v))>>2; }

static void helper_drug(int eax, int edx, int i, int action, int idx){

	int 	ecx;
	struct_35e_t * 	s_35e;
	struct_94_t * 	s_94;
	
	s_35e = (struct_35e_t *)___1e6ed0h;
	s_94 = (struct_94_t *)___1de580h;

	ecx = 0;
	while(1){

		if((edx < (int)s_35e[idx].Drug)&&(eax > (int)s_35e[idx].Drug)) ecx = 0x1;
		eax -= 60;
		edx -= 60;
		if(eax < i) break;
	}
	
	if(ecx != 0){

		if(s_35e[idx].Finished == 0){

			if((int)s_94[idx].__18 > 0) s_35e[idx].Ctrls[getCounter(4)] |= action;
		}
	}
}

static void helper_machine_gun(double dval, int idx){

	int 			i, j, n;
	double 			theta;
	struct_35e_t * 	s_35e;
	
	s_35e = (struct_35e_t *)___1e6ed0h;

	theta = ((double)s_35e[idx].Direction+180.0)*LOC_PI/180.0;
	i = (int)((double)s_35e[idx].XLocation+dval*dRMath_sin(theta));
	j = (int)((double)s_35e[idx].YLocation+dval*dRMath_cos(theta));

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(idx != n){
			
			if((dRMath_abs_i((int)(double)s_35e[n].XLocation-i) < 20)&&(dRMath_abs_i((int)(double)s_35e[n].YLocation-j) < 20)){
					
				s_35e[idx].Ctrls[getCounter(4)] |= CTRL_MACHINE_GUN;
			}
		}
	}
}

// RACE CARS AI
void race___4b62ch(int idx){

	__DWORD__ 		eax, ebx, ecx, edx;
	__BYTE__ 	b1, b2;
	int 		i, j, n;
	double 		theta;
	struct_35e_t * 	s_35e;
	struct_94_t *	s_94;
	img40x40 *	carimage;

	s_35e = (struct_35e_t *)___1e6ed0h;
	s_94 = (struct_94_t *)___1de580h;
	D(___243cfch) = 0;


	theta = ((double)s_35e[idx].Direction+180.0)*LOC_PI/180.0;
	i = (int)((double)s_35e[idx].XLocation+35.0*dRMath_sin(theta));
	j = (int)((double)s_35e[idx].YLocation+35.0*dRMath_cos(theta));

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(idx != n){

			ebx = i-(int)(double)s_35e[n].XLocation;
			edx = j-(int)(double)s_35e[n].YLocation;

			if((dRMath_abs_i(ebx) < 20)&&(dRMath_abs_i(edx) < 20)){

				carimage = (img40x40 *)(___243d74h+s_35e[n].ImgOffset);

				if((*carimage)[(int)edx+20][(int)ebx+20] > 3){
					
					if((s_35e[idx].__186 == 0)&&(s_35e[idx].Finished == 0)) s_35e[idx].__186 = 100;
				}
			}
		}
	}

	theta = ((double)s_35e[idx].Direction+180.0)*LOC_PI/180.0;
	i = (int)((double)s_35e[idx].XLocation+25.0*dRMath_sin(theta));
	j = (int)((double)s_35e[idx].YLocation+25.0*dRMath_cos(theta));

	n = -1;
	while(++n < (int)getCounter(6)){

		if((dRMath_abs_i(D(___1df520h+0x10*n)-i) < 20)&&(dRMath_abs_i(D(___1df520h+0x10*n+4)-j) < 20)){

			if((s_35e[idx].__186 == 0)&&(s_35e[idx].Finished == 0)) s_35e[idx].__186 = 60;
		}
	}

	if((s_35e[idx].__182 == 0)&&((int)s_35e[idx].__192 > 5)) s_35e[idx].__182 = 100;
	if((s_35e[idx].__186 == 0)&&((int)s_35e[idx].__196 > 3)) s_35e[idx].__186 = 100;

	s_35e[idx].Ctrls[getCounter(4)] = CTRL_NULL;
	
	helper_drug(560, 530, 60, CTRL_STEER_LEFT, idx);
	helper_drug(530, 500, 30, CTRL_STEER_RIGHT, idx);

	if((int)s_35e[idx].__17e >= 100){

		if((int)s_35e[idx].__17e > 148){
		
			if(s_35e[idx].__b0 > 0.5f) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_BRAKE;
		}

		if((int)s_35e[idx].__17e < 148) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_STEER_LEFT;
		if((int)s_35e[idx].__182 > 0) s_35e[idx].Ctrls[getCounter(4)] = CTRL_BRAKE;
	}
	else {

		ebx = B(TRX_VAI+((int)(double)s_35e[idx].XLocation>>0x2)+TRX_WIDTH_QTR*((int)(double)s_35e[idx].YLocation>>0x2));

		if((0.0f < s_94[idx].__4)||(s_35e[idx].__b0 > 0.5f)){

			theta = ((double)s_35e[idx].Direction+180.0+26.0)*LOC_PI/180.0;
			i = helper00(TRX_WIDTH-1, (int)((double)s_35e[idx].XLocation+40.0*dRMath_sin(theta)));
			j = helper00(TRX_HEIGHT-1, (int)((double)s_35e[idx].YLocation+40.0*dRMath_cos(theta)));
			b1 = 0x10-B(TRX_LR1+TRX_WIDTH_QTR*j+i);
			
			theta = ((double)s_35e[idx].Direction+180.0-26.0)*LOC_PI/180.0;
			i = helper00(TRX_WIDTH-1, (int)((double)s_35e[idx].XLocation+40.0*dRMath_sin(theta)));
			j = helper00(TRX_HEIGHT-1, (int)((double)s_35e[idx].YLocation+40.0*dRMath_cos(theta)));
			b2 = 0x10-B(TRX_LR1+TRX_WIDTH_QTR*j+i);

			if(s_35e[idx].__186 != 0){

				eax = TRX_OHI_DAT[ebx]+1;
				ecx = b1;
				if((int)ecx > (int)eax) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_STEER_RIGHT;

				eax = TRX_OHI_DAT[ebx]-1;
				ecx = b2;
				if((int)ecx < (int)eax) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_STEER_LEFT;
			}
			else {

				if(b1 > 9) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_STEER_RIGHT;
				if(b2 < 7) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_STEER_LEFT;
			}
		}

		if((rand_watcom106()%2) == 0){

			if((int)s_35e[idx].__196 > 3){

				if(s_35e[idx].Finished == 0){

					if((int)s_94[idx].__18 > 0){
					
						s_35e[idx].Ctrls[getCounter(4)] |= CTRL_STEER_RIGHT;
					}
				}
			}
		}

		if((s_94[idx].__4*TRX_DRV_DAT[ebx]) > s_35e[idx].__b0){

			if(s_35e[idx].__182 == 0) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_ACCELERATE;
		}

		s_35e[idx].__a8 = s_94[idx].__14*TRX_DRV_DAT[ebx+0x100];
	}

	if((int)s_35e[idx].__186 > 0){
		
		s_35e[idx].Ctrls[getCounter(4)] |= CTRL_TURBO_BOOST;
		s_35e[idx].__186 -= 1;
	}

	if((int)s_35e[idx].__17e > 0) s_35e[idx].__17e -= 1;
	if((int)s_35e[idx].__182 > 0) s_35e[idx].__182 -= 1;

	theta = (double)s_35e[idx].Direction*LOC_PI/180.0;
	i = (int)((double)s_35e[idx].XLocation+55.0*dRMath_sin(theta));
	j = (int)((double)s_35e[idx].YLocation+55.0*dRMath_cos(theta));

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(idx != n){

			if((dRMath_abs_i((int)(double)s_35e[n].XLocation-i) < 20)&&(dRMath_abs_i((int)(double)s_35e[n].YLocation-j) < 20)){

				if(s_35e[idx].MineTimer == 0){
				
					s_35e[idx].Ctrls[getCounter(4)] |= CTRL_DROP_MINE;
					s_35e[idx].MineTimer = 350;
				}
			}
		}
	}

	if((int)s_35e[idx].MineTimer > 0) s_35e[idx].MineTimer -= 1;

	helper_machine_gun(20.0, idx);
	helper_machine_gun(50.0, idx);
	helper_machine_gun(80.0, idx);

	if((s_35e[idx].__186 == 70)&&((rand_watcom106()%5) == 0)) s_35e[idx].__35a = 1;
	if(s_35e[idx].__186 == 0) s_35e[idx].__35a = 0;
	if(s_35e[idx].__35a == 1) s_35e[idx].Ctrls[getCounter(4)] |= CTRL_HORN;
}

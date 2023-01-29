#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern int ___243cbch;
	extern int Y___243c90h;
	extern int X___243c8ch;
	extern __DWORD__ MY_CAR_IDX;
	extern __BYTE__ ___1e6ed0h[];
	extern int X_Inc;
	extern int X_IncOld;
	extern int Y_Inc;
	extern int Y_IncOld;
	extern int CURRENT_VIEWPORT_CENTER_X;
	extern int CURRENT_VIEWPORT_CENTER_Y;
	extern int TRX_WIDTH;
	extern int CURRENT_VIEWPORT_W;
	extern int CURRENT_VIEWPORT_H;
	extern int TRX_HEIGHT;
	extern int TRX_VIEWPORT_TL_Y;
	extern int TRX_VIEWPORT_TL_X;


#define L_PI 3.14159265359

static int limit_i(int min_val, int val, int max_val){ return (val<min_val)?min_val:(val>max_val)?max_val:val; }

void race___4ee9ch(void){

	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	X_IncOld = X_Inc;
	Y_IncOld = Y_Inc;
	X_Inc = (int)(dRMath_sin(L_PI*((double)s_35e[MY_CAR_IDX].Direction+180.0)/180.0)*48.0*(double)s_35e[MY_CAR_IDX].__b0/3.0);
	Y_Inc = (int)(dRMath_cos(L_PI*((double)s_35e[MY_CAR_IDX].Direction+180.0)/180.0)*32.0*(double)s_35e[MY_CAR_IDX].__b0/3.0);

	if((X_Inc != X_IncOld)||(Y_Inc != Y_IncOld)) ___243cbch = 5;

	if(___243cbch > 0){

		X___243c8ch += (X_Inc-X___243c8ch)/___243cbch;
		Y___243c90h += (Y_Inc-Y___243c90h)/___243cbch;

		___243cbch--;
	}

	TRX_VIEWPORT_TL_X = limit_i(0, X___243c8ch+(int)(double)s_35e[MY_CAR_IDX].XLocation-CURRENT_VIEWPORT_CENTER_X, TRX_WIDTH-CURRENT_VIEWPORT_W);
	TRX_VIEWPORT_TL_Y = limit_i(0, Y___243c90h+(int)(double)s_35e[MY_CAR_IDX].YLocation-CURRENT_VIEWPORT_CENTER_Y, TRX_HEIGHT-CURRENT_VIEWPORT_H);
}

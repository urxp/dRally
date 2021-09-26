#include "drally.h"
#include "drmath.h"

	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___243cfch[];
	extern byte ___1de580h[];
	extern byte ___243ca8h[];
	extern byte ___243ce8h[];
	extern byte ___196db8h[];
	extern byte ___243d24h[];
	extern byte ___243d20h[];
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern void * ___243d60h;
	extern void * ___243d74h;
	extern byte ___243cb0h[];
	extern byte ___243cb4h[];

int rand_watcom106(void);

// RACE ENGINE
void race___4c434h(void){

	double 	d_tmp, d_st0, d_st1;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x64];
	int 	breaker, i, j;
	void * 	ebxp;
	void * 	edip;	


	ebx = D(___243c60h);
	eax = 0x35e*ebx;
	D(___243cfch) = 0;
	D(___1e6ed0h+eax+0x15e) = 0;
	edx = 0x94*ebx;
	F32(___1e6ed0h+eax+0x15a) = F32(___1e6ed0h+eax+0x15e);
	esi = D(___1de580h+edx+0x18);
	F32(___1e6ed0h+eax+0xb0) = (float)((double)F32(___1e6ed0h+eax+0xb0)-(double)F32(___1e6ed0h+eax+0xb0)/50.0);
	
	if((int)esi > 0){

		if(D(___1e6ed0h+eax+0x10a) == 0){

			ebx = 4*D(___243ca8h)+eax;
			L(ecx) = B(___1e6ed0h+ebx+0x20);

			if((L(ecx)&1) != 0){
				
				if(((L(ecx)&0x10) == 0)||((int)D(___1de580h+edx+0x34) <= 0)){

					ecx = D(___243c60h);
					ebx = 0x35e*ecx;
					eax = 37*ecx;
					F32(___1e6ed0h+ebx+0xb0) = (float)((double)F32(___1e6ed0h+ebx+0xb0)+0.8*(double)F32(___1de580h+4*eax+4)/30.0);
				}
				else {

					if(D(___1de580h+edx+0x20) == 0){

						F32(___1e6ed0h+eax+0xb0) = (float)((double)F32(___1e6ed0h+eax+0xb0)+1.3*(double)F32(___1de580h+edx+4)/30.0);
					}
					else {

						F32(___1e6ed0h+eax+0xb0) = (float)((double)F32(___1e6ed0h+eax+0xb0)+1.5*(double)F32(___1de580h+edx+4)/30.0);
						D(___1de580h+edx+0x18) -= 0x16;

						if((int)D(___1de580h+edx+0x18) < 0){
						
							ebx = 0;
							D(___1de580h+edx+0x18) = ebx;
						}

						edx = D(___243c60h);
						D(___1de580h+0x94*edx+0x58) = 1;
					}
				}

				eax = 0x35e*D(___243c60h);
				F32(___1e6ed0h+eax+0xb0) = (float)(0.986*(double)F32(___1e6ed0h+eax+0xb0));
			}

			edi = D(___243ce8h);

			if(edi == D(___243c60h)){

				edx = D(___1de580h+0x94*D(___243c60h)+0x58);
				if(edx == 1) D(___196db8h)++;
			}

			ecx = D(___243ce8h);

			if(ecx == D(___243c60h)){

				esi = D(___1de580h+0x94*D(___243c60h)+0x58);
				if(esi == 0) D(___196db8h) = 0;
			}

			edx = 0x35e*D(___243c60h);
			eax = 4*D(___243ca8h)+edx;
			L(edx) = B(___1e6ed0h+eax+0x20);

			if((L(edx)&2) != 0){

				if(((L(edx)&2) == 0)||((L(edx)&0x40) == 0)){

					ebx = D(___243c60h);
					F32(___1e6ed0h+0x35e*ebx+0xb0) = (float)(0.986*((double)F32(___1e6ed0h+0x35e*ebx+0xb0)-(double)F32(___1de580h+0x94*ebx+4)/90.0));

				}
			}

			ecx = D(___243c60h);

			if((B(___1e6ed0h+0x35e*ecx+4*D(___243ca8h)+0x20)&0x10) != 0){

				eax = 0x94*ecx;

				if((int)D(___1de580h+eax+0x34) > 0){

					if((int)D(___1de580h+eax+0x18) > 0){

						D(___1de580h+eax+0x34) = D(___1de580h+eax+0x34)+0xfffffe70;
						
						if((int)D(___1de580h+eax+0x34) < 0){
						
							ecx = 0;
							D(___1de580h+eax+0x34) = ecx;
						}
					}
				}
			}

			esi = D(___243c60h);
			eax = 0x35e*esi;
			edx = D(___243ca8h);

			if((B(eax+edx*4+___1e6ed0h+0x20)&0x10) == 0){

				eax = 0x94*esi;

				if((int)D(eax+___1de580h+0x18) > 0){

					edx = D(eax+___1de580h+0x34);
					edx += 0x14;
					D(eax+___1de580h+0x34) = edx;
					if((int)edx > 0x19000) D(eax+___1de580h+0x34) = 0x19000;
				}
			}
		}

		edx = D(___243c60h);
		eax = 0x94*edx;
		
		if((int)D(eax+___1de580h+0x18) <= 0){
		
			edi = edi^edi;
			D(eax+___1de580h+4) = edi;
		}

		eax = D(___243c60h);
		edx = 0x35e*eax;

		if(D(edx+___1e6ed0h+0x10a) != 0){

			eax = 0x35e*D(___243c60h);
			FPUSH(F32(eax+___1e6ed0h+0xbc));
			FPUSH(ST(0));
			ST(0) = ST(0)/10.0;
			ST(1) = ST(1)-ST(0); FPOP();
			F32(eax+___1e6ed0h+0xbc) = (float)FPOP();
		}
		else {

			ebx = eax;
			eax <<= 3;
			eax += ebx;
			eax <<= 2;
			ebx += eax;
			ebx <<= 2;
			FPUSH(0.0);
			d_st0 = FPOP();

			if(d_st0 >= (double)F32(ebx+___1de580h+4)){

				eax = 0x35e*D(___243c60h);
				FPUSH(F32(eax+___1e6ed0h+0xbc));
				FPUSH(ST(0));
				ST(0) = ST(0)/10.0;
				ST(1) = ST(1)-ST(0); FPOP();
				F32(eax+___1e6ed0h+0xbc) = (float)FPOP();
			}
			else {

				FPUSH(F32(edx+___1e6ed0h+0xc0));
				ST(0) = ST(0)*(double)F32(edx+___1e6ed0h+0xb0);
				ST(0) = ST(0)*(double)F32(ebx+___1de580h+0xc);
				ST(0) = ST(0)/(double)F32(ebx+___1de580h+4);
				FPUSH(0.0);
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				F32(edx+___1e6ed0h+0xbc) = (float)FPOP();
				d_st0 = FPOP();

				if(d_st0 <= (double)F32(edx+___1e6ed0h+0xbc)){

					eax = D(edx+___1e6ed0h+0xbc);
					D(esp+0x18) = eax;
				}
				else {
				
					FPUSH(F32(edx+___1e6ed0h+0xbc));
					ST(0) = -1.0*ST(0);
					F32(esp+0x18) = (float)FPOP();
				}

				FPUSH(F32(esp+0x18));
				d_st0 = FPOP();

				if(d_st0 > 20.0){

					eax = 0x35e*D(___243c60h);
					FPUSH(F32(eax+___1e6ed0h+0xb0));
					FPUSH(ST(0));
					ST(0) = ST(0)/50.0;
					ST(1) = ST(1)-ST(0); FPOP();
					F32(eax+___1e6ed0h+0xb0) = (float)FPOP();
				}
			}
		}

		edi = D(___243c60h);
		edx = 0x35e*edi;
		eax = D(___243ca8h);

		if((B(edx+eax*4+___1e6ed0h+0x20)&8) != 0){

			if((D(edx+___1e6ed0h+0x18) == 0)&&(D(edx+___1e6ed0h+0x1c) == 0)){

				FPUSH(90.0);
				ST(0) = ST(0)/(double)F32(edx+___1e6ed0h+0xa8);
				eax = 8*edi;
				eax += edi;
				eax <<= 2;
				eax += edi;
				ST(0) = (double)F32(eax*4+___1de580h+0x10)/ST(0);
				FPUSH(F32(edx+___1e6ed0h+0xbc));
				ST(0) = ST(0)/36.0;
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				ST(0) = (double)F32(___243cfch)-ST(0);
				F32(___243cfch) = (float)ST(0);
				ST(0) = ST(0)*2.0;
				ST(1) = ST(1)*ST(0); FPOP();
				FPUSH(F32(edx+___1e6ed0h+0xc0));
				FPUSH(F32(edx+___1e6ed0h+0xa8));
				ST(0) = (double)F32(edx+___1e6ed0h+0xac)-ST(0);
				d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
				ST(0) = (double)F32(___243cfch)-ST(0);
				d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
				F32(edx+___1e6ed0h+0xac) = (float)FPOP();
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				F32(___243cfch) = (float)FPOP();
				d_st0 = FPOP();

				if(d_st0 > -36.0){
				
					FPUSH(F32(edx+___1e6ed0h+0xc0));
					ST(0) = ST(0)-2.0;
					F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
				}
			}
		}

		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		d_st0 = FPOP();
		
		if(d_st0 > (double)F32(edx+___1e6ed0h+0xac)){
		
			FPUSH(F32(edx+___1e6ed0h+0xac));
			ST(0) = ST(0)+360.0;
			F32(edx+___1e6ed0h+0xac) = (float)FPOP();
		}

		esi = D(___243c60h);
		edx = 0x35e*esi;
		eax = D(___243ca8h);

		if((B(edx+eax*4+___1e6ed0h+0x20)&4) != 0){

			if((D(edx+___1e6ed0h+0x18) == 0)&&(D(edx+___1e6ed0h+0x1c) == 0)){

				FPUSH(90.0);
				ST(0) = ST(0)/(double)F32(edx+___1e6ed0h+0xa8);
				eax = 8*esi;
				eax += esi;
				eax <<= 2;
				eax += esi;
				ST(0) = (double)F32(eax*4+___1de580h+0x10)/ST(0);
				FPUSH(F32(edx+___1e6ed0h+0xbc));
				ST(0) = ST(0)/36.0;
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				ST(0) = ST(0)+(double)F32(___243cfch);
				F32(___243cfch) = (float)ST(0);
				ST(0) = ST(0)*2.0;
				ST(1) = ST(1)*ST(0); FPOP();
				FPUSH(F32(edx+___1e6ed0h+0xa8));
				ebx = D(edx+___1e6ed0h+0xc0);
				ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xac);
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				ST(0) = ST(0)+(double)F32(___243cfch);
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				F32(edx+___1e6ed0h+0xac) = (float)FPOP();
				F32(___243cfch) = (float)FPOP();

				if((int)ebx < 0x42100000){
						
					FPUSH(F32(edx+___1e6ed0h+0xc0));
					FPUSH(ST(0));
					ST(0) = ST(0)+2.0;
					ST(1) = ST(0); FPOP();
					F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
				}
			}
		}

		eax = 0x35e*D(___243c60h);
		
		if((int)D(eax+___1e6ed0h+0xac) >= 0x43b40000){
		
			FPUSH(F32(eax+___1e6ed0h+0xac));
			ST(0) = ST(0)-360.0;
			F32(eax+___1e6ed0h+0xac) = (float)FPOP();
		}

		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		d_st0 = FPOP();
			
		if(d_st0 < (double)F32(edx+___1e6ed0h+0xc0)){
		
			FPUSH(F32(edx+___1e6ed0h+0xc0));
			ST(0) = ST(0)-1.0;
			F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
		}

		edx = 0x35e*D(___243c60h);
		d_st0 = 0.0;
		
		if(d_st0 > (double)F32(edx+___1e6ed0h+0xc0)){
		
			FPUSH(1.0);
			ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xc0);
			F32(edx+___1e6ed0h+0xc0) = (float)FPOP();
		}

		edx = D(___243c60h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
			
		if((int)D(eax*4+___1de580h+0x18) > 0){
		
			eax = 0x35e*D(___243c60h);
			FPUSH(F32(eax+___1e6ed0h+0x104));
			ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xac);
			F32(eax+___1e6ed0h+0xac) = (float)FPOP();
		}

		edx = 0x35e*D(___243c60h);
		FPUSH(0.0);
		d_st0 = FPOP();

		if(d_st0 > (double)F32(edx+___1e6ed0h+0xac)){
		
			FPUSH(F32(edx+___1e6ed0h+0xac));
			ST(0) = ST(0)+360.0;
			F32(edx+___1e6ed0h+0xac) = (float)FPOP();
		}

		eax = 0x35e*D(___243c60h);
			
		if((int)D(eax+___1e6ed0h+0xac) >= 0x43b40000){
		
			FPUSH(F32(eax+___1e6ed0h+0xac));
			ST(0) = ST(0)-360.0;
			F32(eax+___1e6ed0h+0xac) = (float)FPOP();
		}
	}

	edx = 0x35e*D(___243c60h);
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+180.0;
	FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(1);
	FPUSH(180.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)/ST(1);
	FPUSH(ST(0));
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+90.0;
	ST(0) = ST(0)+180.0;
	ST(0) = ST(0)*ST(4);
	ST(0) = ST(0)/ST(3);
	FPUSH(ST(0));
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)-90.0;
	ST(0) = ST(0)+180.0;
	ST(6) = ST(6)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(4) = ST(0)/ST(4); FPOP();
	FPUSH(ST(3));
	ST(0) = dRMath_sin(ST(0));
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = dRMath_cos(ST(0));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = dRMath_cos(ST(0));
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	ST(0) = dRMath_cos(ST(0));
	F64(esp+0x10) = FPOP();
	FPUSH(F32(edx+___1e6ed0h+0xbc));
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = ST(0)*ST(3);
	ST(0) = ST(0)/11.0;
	FPUSH(F64(esp+0x10));
	ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
	ST(4) = ST(4)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = ST(0)/11.0;
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	F64(esp+0x10) = FPOP();
	FPUSH(F32(edx+___1e6ed0h+0xb0));
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(0) = ST(0)*ST(2);
	FPUSH(F64(esp+0x10));
	ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
	ST(3) = ST(3)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	F64(esp+8) = FPOP();
	FPUSH(F32(___243cfch));
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(0) = ST(0)*ST(5);
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	F32(esp+0x34) = (float)ST(0);
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	F32(esp+0x38) = (float)FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(0) = ST(0)+(double)F32(esp+0x38);
	FPUSH(F64(esp+8));
	ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(0);
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(esp+0x30) = (float)FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(esp+0x3c) = (float)FPOP();
	FPUSH(F32(esp+0x30));
	ST(0) = ST(0)+(double)F32(esp+0x3c);
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(4) = ST(4)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(0);
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(___243d24h) = (float)FPOP();
	ST(1) = ST(1)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	F32(___243d20h) = (float)FPOP();
	d_st0 = 0.0;
	d_st1 = FPOP();

	if(d_st0 == d_st1){

		D(esp+0x58) = 0x3f800000;
	}
	else {

		d_st0 = 0.0;

		if(d_st0 <= (double)F32(edx+___1e6ed0h+0xb0)){

			eax = D(edx+___1e6ed0h+0xb0);
			D(esp+0x60) = eax;
		}
		else {

			FPUSH(F32(edx+___1e6ed0h+0xb0));
			ST(0) = -1.0*ST(0);
			F32(esp+0x60) = (float)FPOP();
		}

		FPUSH(F32(esp+0x60));
		FPUSH(F32(esp+0x34));
		ST(0) = ST(0)+(double)F32(esp+0x38);
		ST(0) = ST(0)*ST(0);
		FPUSH(F32(esp+0x30));
		ST(0) = ST(0)+(double)F32(esp+0x3c);
		ST(0) = ST(0)*ST(0);
		ST(1) = ST(1)+ST(0); FPOP();
		ST(0) = dRMath_sqrt(ST(0));
		ST(1) = ST(1)/ST(0); FPOP();
		F32(esp+0x58) = (float)FPOP();
	}

	edx = 0x35e*D(___243c60h);
	FPUSH(180.0);
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(1);
	FPUSH(26.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)+ST(1);
	FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(1);
	FPUSH(180.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)/ST(1);
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(5);
	ST(4) = ST(4)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = ST(0)*ST(2);
	ST(0) = ST(0)/ST(1);
	ST(0) = dRMath_cos(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(5);
	ST(0) = ST(0)-26.0;
	ST(0) = ST(0)*ST(3);
	ST(0) = ST(0)/ST(2);
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(6) = ST(6)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(0) = ST(0)-26.0;
	ST(3) = ST(3)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(1) = ST(0)/ST(1); FPOP();
	ST(0) = dRMath_cos(ST(0));
	FPUSH(F32(esp+0x58));
	ST(0) = ST(0)*(double)F32(esp+0x34);
	FPUSH(F32(esp+0x58));
	ST(0) = ST(0)*(double)F32(esp+0x38);
	FPUSH(F32(esp+0x58));
	ST(0) = ST(0)*(double)F32(esp+0x30);
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
	FPUSH(F32(esp+0x58));
	ST(0) = ST(0)*(double)F32(esp+0x3c);
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(0) = ST(0)*18.0;
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
	d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
	ST(0) = ST(0)*18.0;
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = ST(0)*create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f);
	d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
	ST(0) = ST(0)*18.0;
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15a);
	d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
	ST(0) = ST(0)*18.0;
	d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
	F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
	FPUSH(F32(___243d24h));
	ecx = ecx^ecx;
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
	FPUSH(F32(___243d20h));
	D(___243d24h) = ecx;
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
	D(___243d20h) = ecx;
	F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0xfc));
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15a);
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x100));
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15a);
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	F32(edx+___1e6ed0h+0x15a) = (float)FPOP();
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	F32(edx+___1e6ed0h+0x15e) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15a));
	FPUSH(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0x15e));
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(4) = ST(4)+ST(0); FPOP();
	ST(2) = ST(2)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(edx+___1e6ed0h+0xc4) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15e));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	F32(edx+___1e6ed0h+0xcc) = (float)FPOP();
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(2) = ST(2)+ST(0); FPOP();
	ST(2) = ST(2)+ST(0); FPOP();
	F32(edx+___1e6ed0h+0xc8) = (float)FPOP();
	F32(edx+___1e6ed0h+0xd0) = (float)FPOP();
	FPUSH(180.0);
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(1);
	FPUSH(154.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)+ST(1);
	ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
	FPUSH(180.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)/ST(1);
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(4);
	ST(3) = ST(3)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
	ST(0) = ST(0)/ST(1);
	ST(0) = dRMath_cos(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(4);
	FPUSH(-154.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)+ST(1);
	ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
	ST(0) = ST(0)/ST(3);
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(6);
	ST(2) = ST(2)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
	ST(0) = ST(0)/ST(3);
	ST(0) = dRMath_cos(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(6) = ST(6)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(0) = ST(0)+90.0;
	ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
	ST(3) = ST(0)/ST(3); FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(0) = dRMath_sin(ST(0));
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	FPUSH(18.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(1);
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	FPUSH(create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(1);
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	ST(0) = ST(0)*ST(2);
	d_tmp = ST(0); ST(0) = ST(6); ST(6) = d_tmp;
	ST(1) = ST(1)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	ST(0) = ST(0)*8.0;
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = ST(0)*ST(1);
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	ST(1) = ST(1)*ST(0); FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15a));
	ST(2) = ST(2)+ST(0); FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15a));
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(edx+___1e6ed0h+0xd4) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15a));
	FPUSH(F32(edx+___1e6ed0h+0x15e));
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(6) = ST(6)+ST(0); FPOP();
	ST(3) = ST(3)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	F32(edx+___1e6ed0h+0xdc) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15e));
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(edx+___1e6ed0h+0xe4) = (float)FPOP();
	ST(2) = ST(2)+ST(0); FPOP();
	ST(2) = ST(2)+ST(0); FPOP();
	F32(edx+___1e6ed0h+0xd8) = (float)FPOP();
	F32(edx+___1e6ed0h+0xe0) = (float)FPOP();
	FPUSH(180.0);
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(1);
	FPUSH(create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(1);
	ST(0) = ST(0)/180.0;
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(3);
	ST(0) = ST(0)*ST(2);
	ST(0) = ST(0)/180.0;
	ST(0) = dRMath_cos(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(4);
	ST(0) = ST(0)+90.0;
	ST(0) = ST(0)*ST(3);
	ST(0) = ST(0)/180.0;
	ST(0) = dRMath_cos(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(0) = ST(0)+ST(5);
	ST(0) = ST(0)-90.0;
	ST(0) = ST(0)*ST(4);
	ST(0) = ST(0)/180.0;
	ST(0) = dRMath_sin(ST(0));
	FPUSH(F32(edx+___1e6ed0h+0xac));
	ST(6) = ST(6)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(5); ST(5) = d_tmp;
	ST(0) = ST(0)-90.0;
	ST(4) = ST(4)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = ST(0)/180.0;
	ST(0) = dRMath_cos(ST(0));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	FPUSH(create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(1);
	ST(0) = ST(0)*22.0;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0x15e);
	FPUSH(F32(edx+___1e6ed0h+0xb8));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	F32(edx+___1e6ed0h+0xf8) = (float)FPOP();
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xf8);
	edi = D(___243d28h);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	eax = D(esp+0x5c);
	eax = eax*edi;
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(0) = ST(0)*22.0;
	d_tmp = ST(0); ST(0) = ST(3); ST(3) = d_tmp;
	ST(0) = ST(0)*ST(2);
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	FPUSH(8.0);
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = ST(0)*ST(1);
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(3) = ST(3)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(4); ST(4) = d_tmp;
	ST(0) = ST(0)*ST(4);
	FPUSH(F32(edx+___1e6ed0h+0x15a));
	ST(4) = ST(4)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(4) = ST(4)*ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(edx+___1e6ed0h+0xf4) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15a));
	ST(2) = ST(2)+ST(0); FPOP();
	FPUSH(F32(edx+___1e6ed0h+0xb4));
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	F32(edx+___1e6ed0h+0xec) = (float)FPOP();
	FPUSH(F32(edx+___1e6ed0h+0x15e));
	d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
	ST(0) = ST(0)+(double)F32(edx+___1e6ed0h+0xf4);
	FPUSH(F32(edx+___1e6ed0h+0x15e));
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	ST(3) = ST(3)+ST(0); FPOP();
	ST(1) = ST(1)+ST(0); FPOP();
	d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
	F32(edx+___1e6ed0h+0xf0) = (float)FPOP();
	F32(edx+___1e6ed0h+0xe8) = (float)FPOP();
	eax += D(esp+0x5c);

	if((int)eax < 0){

		D(esp+0x2c) = 0xf;
	}
	else {

		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;

		if((int)eax >= (int)edx){

			D(esp+0x2c) = 0xf;
		}
		else {

			edx = ___243d60h;
			L(eax) = B(___243d60h+eax);
			L(eax) &= 0xf;
			eax &= 0xff;
			D(esp+0x2c) = eax;
		}
	}

	eax = 0x35e*D(___243c60h);
	FPUSH(F32(eax+___1e6ed0h+0xb8));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xc8);
	edi = D(___243d28h);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx = D(esp+0x5c);
	edx = edx*edi;
	FPUSH(F32(eax+___1e6ed0h+0xb4));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xc4);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	eax = D(esp+0x5c);
	eax += edx;

	if((int)eax < 0){

		D(esp+0x50) = 0xf;
	}
	else {

		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;

		if((int)eax >= (int)edx){

			D(esp+0x50) = 0xf;
		}
		else {

			edx = ___243d60h;
			L(eax) = B(___243d60h+eax);
			L(eax) &= 0xf;
			eax &= 0xff;
			D(esp+0x50) = eax;
		}
	}

	eax = 0x35e*D(___243c60h);
	FPUSH(F32(eax+___1e6ed0h+0xb8));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xd0);
	edi = D(___243d28h);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx = D(esp+0x5c);
	edx = edx*edi;
	FPUSH(F32(eax+___1e6ed0h+0xb4));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xcc);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx += D(esp+0x5c);

	if((int)edx < 0){

		D(esp+0x48) = 0xf;
	}
	else {

		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;

		if((int)edx >= (int)eax){

			D(esp+0x48) = 0xf;
		}
		else {

			eax = ___243d60h;
			L(eax) = B(___243d60h+edx);
			L(eax) &= 0xf;
			eax &= 0xff;
			D(esp+0x48) = eax;
		}
	}

	eax = 0x35e*D(___243c60h);
	FPUSH(F32(eax+___1e6ed0h+0xb8));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xd8);
	edi = D(___243d28h);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx = D(esp+0x5c);
	edx = edx*edi;
	FPUSH(F32(eax+___1e6ed0h+0xb4));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xd4);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx += D(esp+0x5c);

	if((int)edx < 0){

		D(esp+0x4c) = 0xf;
	}
	else {

		ebx = D(___243d2ch);
		eax = edi;
		eax = eax*ebx;

		if((int)edx >= (int)eax){

			D(esp+0x4c) = 0xf;
		}
		else {

			eax = ___243d60h;
			L(eax) = B(___243d60h+edx);
			L(eax) &= 0xf;
			eax &= 0xff;
			D(esp+0x4c) = eax;
		}
	}

	eax = 0x35e*D(___243c60h);
	FPUSH(F32(eax+___1e6ed0h+0xb8));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xe0);
	edi = D(___243d28h);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx = D(esp+0x5c);
	edx = edx*edi;
	FPUSH(F32(eax+___1e6ed0h+0xb4));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xdc);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	eax = D(esp+0x5c);
	eax += edx;

	if((int)eax < 0){

		D(esp+0x54) = 0xf;
	}
	else {

		ebx = D(___243d2ch);
		edx = edi;
		edx = edx*ebx;

		if((int)eax >= (int)edx){

			D(esp+0x54) = 0xf;
		}
		else {

			edx = ___243d60h;
			L(eax) = B(___243d60h+eax);
			L(eax) &= 0xf;
			eax &= 0xff;
			D(esp+0x54) = eax;
		}
	}

	eax = 0x35e*D(___243c60h);
	FPUSH(F32(eax+___1e6ed0h+0xb8));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xe8);
	edi = D(___243d28h);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx = D(esp+0x5c);
	edx = edx*edi;
	FPUSH(F32(eax+___1e6ed0h+0xb4));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xe4);
	ST(0) = (int)ST(0);
	D(esp+0x5c) = (int)FPOP();
	edx += D(esp+0x5c);

	if((int)edx < 0){

		D(esp+0x40) = 0xf;
	}
	else {

		ebx = D(___243d2ch);
		eax = edi*ebx;

		if((int)edx >= (int)eax){

			D(esp+0x40) = 0xf;
		}
		else {

			eax = ___243d60h;
			L(eax) = B(___243d60h+edx);
			L(eax) &= 0xf;
			eax &= 0xff;
			D(esp+0x40) = eax;
		}
	}

	eax = 0x35e*D(___243c60h);
	FPUSH(F32(eax+___1e6ed0h+0xb8));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xf0);
	edi = D(___243d28h);
	D(esp+0x5c) = (int)FPOP();
	edx = D(esp+0x5c);
	edx = edx*edi;
	FPUSH(F32(eax+___1e6ed0h+0xb4));
	ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xec);
	D(esp+0x5c) = (int)FPOP();
	edx += D(esp+0x5c);

	if((int)edx < 0){

		D(esp+0x44) = 0xf;
	}
	else {

		eax = edi*D(___243d2ch);

		if((int)edx >= (int)eax){

			D(esp+0x44) = 0xf;
		}
		else {

			D(esp+0x44) = B(___243d60h+edx)&0xf;
		}
	}

	D(___1e6ed0h+0x35e*D(___243c60h)+0xc) = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)/3.75);
	D(___1e6ed0h+0x35e*D(___243c60h)+0x10) = 0x25800*D(___243c60h)+0x640*D(___1e6ed0h+0x35e*D(___243c60h)+0xc);
	ecx = (int)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x15e)+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8)-20.0);
	ebxp = ___243d74h+(int)D(___1e6ed0h+0x35e*D(___243c60h)+0x10);
	edip = ___243d60h+(int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4)-0x14+(int)D(___243d28h)*(int)ecx+(int)(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x15a);
	esi = 0xf;

	j = -1;
	while(++j < 0x28){

		breaker = 0;

		i = -1;
		while(++i < 0x28){

			if(((signed char)B(ebxp+0x28*j+i) > 3)&&((signed char)(B(edip+D(___243d28h)*j+i)&0xf) < 4)){

				esi = B(edip+D(___243d28h)*j+i)&0xf;
				D(___243cb0h) = i;
				D(___243cb4h) = j;
				breaker = 1;
				break;
			}
		}

		if(breaker == 1) break;
	}

	eax = 0x35e*D(___243c60h);
	D(eax+___1e6ed0h+0x14) = esi;

	if((int)esi >= 4){

		ebx = ebx^ebx;
		D(eax+___1e6ed0h+0x14) = ebx;
	}
	else {

		edx = D(___243cb0h);
		edx -= 0x14;
		D(eax+___1e6ed0h+0x172) = edx;
		edx = D(___243cb4h);
		D(eax+___1e6ed0h+0x18e) = esi;
		edx -= 0x14;
		ecx = D(eax+___1e6ed0h+0x192);
		D(eax+___1e6ed0h+0x176) = edx;

		if((int)ecx > 3){

			esi = esi^esi;
			edi = 1;
			D(eax+___1e6ed0h+0xb0) = esi;
			D(eax+___1e6ed0h+0x16a) = edi;
			D(eax+___1e6ed0h+0x16e) = esi;

			while(1){

				eax = 0x35e*D(___243c60h);

				if((int)D(eax+___1e6ed0h+0x14) >= 4){

					esi = esi^esi;
					D(eax+___1e6ed0h+0x14) = esi;
					break;
				}

				ebx = D(eax+___1e6ed0h+0x16a);
				eax = rand_watcom106();
				ebx += ebx;
				edx = eax;
				ebx++;
				edx = (int)edx>>0x1f;
				edx = (long long)(int)eax%(int)ebx;
				eax = 0x35e*D(___243c60h);
				ebx = D(eax+___1e6ed0h+0x16a);
				edx -= ebx;
				D(esp+0x5c) = edx;
				ebx = D(eax+___1e6ed0h+0x16a);
				FPUSH((int)D(esp+0x5c));
				F32(eax+___1e6ed0h+0x162) = (float)FPOP();
				eax = rand_watcom106();
				ebx += ebx;
				edx = eax;
				ebx++;
				edx = (int)edx>>0x1f;
				edx = (long long)(int)eax%(int)ebx;
				ebx = 0x35e*D(___243c60h);
				edi = D(ebx+___1e6ed0h+0x16e);
				esi = D(ebx+___1e6ed0h+0x16a);
				edi++;
				edx -= esi;
				esi = 5;
				D(esp+0x5c) = edx;
				edx = edi;
				eax = edi;
				edx = (int)edx>>0x1f;
				edx = (long long)(int)eax%(int)esi;
				D(ebx+___1e6ed0h+0x16e) = edi;
				FPUSH((int)D(esp+0x5c));
				F32(ebx+___1e6ed0h+0x166) = (float)FPOP();

				if(edx == 0){
					
					eax = D(___1e6ed0h+ebx+0x16a);
					
					if((int)eax < 0x1e){
					
						edx = eax+1;
						D(___1e6ed0h+ebx+0x16a) = edx;
					}
				}

				eax = 0x35e*D(___243c60h);
				FPUSH(F32(eax+___1e6ed0h+0x166));
				ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb8);
				F32(eax+___1e6ed0h+0xb8) = (float)ST(0);
				ST(0) = ST(0)-20.0;
				ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0x15e);
				edi = D(___243d28h);
				ST(0) = (int)ST(0);
				D(esp+0x5c) = (int)FPOP();
				edi = edi*D(esp+0x5c);
				FPUSH(F32(eax+___1e6ed0h+0x15a));
				FPUSH(F32(eax+___1e6ed0h+0x162));
				ST(0) = ST(0)+(double)F32(eax+___1e6ed0h+0xb4);
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				ST(0) = (int)ST(0);
				d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
				F32(eax+___1e6ed0h+0xb4) = (float)ST(0);
				ST(0) = (int)ST(0);
				D(esp+0x5c) = (int)FPOP();
				ecx = D(esp+0x5c);
				D(esp+0x5c) = (int)FPOP();
				edip = ___243d60h+(int)ecx+(int)edi-0x14+(int)D(esp+0x5c);
				ecx = D(eax+___1e6ed0h+0x10);
				ebxp = ___243d74h+ecx;
				esi = 0xf;
				edx = 0;
				eax = 0;

				ecx = 0;
				while(1){

					if((signed char)B(ebxp) <= 3){

						edip++;
						ebxp++;
						ecx++;

						if(ecx == 0x28){

							edip = edip+D(___243d28h)-0x28;
							edx++;
							if(edx == 0x28) break;
							ecx = 0;
						}
					}
					else {

						L(eax) = B(edip);
						L(eax) &= 0xf;

						if((signed char)L(eax) >= 4){

							edip++;
							ebxp++;
							ecx++;

							if(ecx == 0x28){

								edip = edip+D(___243d28h)-0x28;
								edx++;
								if(edx == 0x28) break;
								ecx = 0;
							}
						}
						else {

							esi = eax;
							D(___243cb0h) = ecx;
							D(___243cb4h) = edx;
							break;
						}
					}
				}

				eax = 0x35e*D(___243c60h);
				D(eax+___1e6ed0h+0x14) = esi;

				if((int)esi < 4){
					
					FPUSH(F32(eax+___1e6ed0h+0x162));
					FPUSH(F32(eax+___1e6ed0h+0x166));
					ST(0) = (double)F32(eax+___1e6ed0h+0xb8)-ST(0);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					ST(0) = (double)F32(eax+___1e6ed0h+0xb4)-ST(0);
					d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
					F32(eax+___1e6ed0h+0xb8) = (float)FPOP();
					F32(eax+___1e6ed0h+0xb4) = (float)FPOP();
				}
			}
		}

		eax = 0x35e*D(___243c60h);
		ecx = D(eax+___1e6ed0h+0x192);

		if((ecx != 0)&&((int)ecx <= 3)){

			FPUSH(-1.0);
			FPUSH(F32(eax+___1e6ed0h+0x15a));
			ST(0) = ST(0)*ST(1);
			FPUSH(F32(eax+___1e6ed0h+0x15e));
			ST(2) = ST(2)*ST(0); FPOP();
			edi = edi^edi;
			edx = 1;
			D(eax+___1e6ed0h+0xb0) = edi;
			D(eax+___1e6ed0h+0x14) = edx;
			d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
			F32(eax+___1e6ed0h+0x100) = (float)FPOP();
			F32(eax+___1e6ed0h+0xfc) = (float)FPOP();
		}

		eax = 0x35e*D(___243c60h);
		if(D(eax+___1e6ed0h+0x192) == 0){
	
			if(((int)D(esp+0x48) < 4)||((int)D(esp+0x4c) < 4)){

				if((int)D(esp+0x2c) >= 4){
					
					eax = 0x35e*D(___243c60h);
					FPUSH(F32(eax+___1e6ed0h+0xac));
					FPUSH(ST(0));
					ST(0) = ST(0)+20.0;
					ST(1) = ST(0); FPOP();
					F32(eax+___1e6ed0h+0xac) = (float)FPOP();
				}
			}

			if(((int)D(esp+0x50) < 4)||((int)D(esp+0x54) < 4)){

				if((int)D(esp+0x2c) >= 4){
				
					eax = 0x35e*D(___243c60h);
					FPUSH(F32(eax+___1e6ed0h+0xac));
					ST(0) = ST(0)-20.0;
					F32(eax+___1e6ed0h+0xac) = (float)FPOP();
				}
			}

			edx = 0x35e*D(___243c60h);
			d_st0 = 0.0;
			
			if(d_st0 > (double)F32(edx+___1e6ed0h+0xac)){
			
				FPUSH(F32(edx+___1e6ed0h+0xac));
				ST(0) = ST(0)+360.0;
				F32(edx+___1e6ed0h+0xac) = (float)FPOP();
			}

			eax = 0x35e*D(___243c60h);
			
			if((int)D(eax+___1e6ed0h+0xac) >= 0x43b40000){
			
				FPUSH(F32(eax+___1e6ed0h+0xac));
				ST(0) = ST(0)-360.0;
				F32(eax+___1e6ed0h+0xac) = (float)FPOP();
			}

			eax = 0x35e*D(___243c60h);
			F32(___1e6ed0h+eax+0xb0) = (float)((double)F32(___1e6ed0h+eax+0xb0)-0.125*(double)F32(___1e6ed0h+eax+0xb0));

			esi = 1;
			D(___1e6ed0h+eax+0x14) = esi;
		}
	}

	if((D(esp+0x50) == 4)||(D(esp+0x48) == 4)||(D(esp+0x4c) == 4)||(D(esp+0x54) == 4)||(D(esp+0x40) == 4)||(D(esp+0x44) == 4)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)-(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/35.0);
	}

	if((D(esp+0x48) == 5)||(D(esp+0x4c) == 5)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0x104) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x104)+0.2);
		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)-(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/30.0);
	}

	if((D(esp+0x50) == 5)||(D(esp+0x54) == 5)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0x104) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x104)-0.2);
		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)-(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/30.0);
	}

	if((D(esp+0x50) == 6)||(D(esp+0x48) == 6)||(D(esp+0x4c) == 6)||(D(esp+0x54) == 6)||(D(esp+0x40) == 6)||(D(esp+0x44) == 6)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)-(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/9.0);
	}

	if((D(esp+0x50) == 7)||(D(esp+0x48) == 7)||(D(esp+0x4c) == 7)||(D(esp+0x54) == 7)||(D(esp+0x40) == 7)||(D(esp+0x44) == 7)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)-(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/20.0);
	}

	if((D(esp+0x50) == 0xa)||(D(esp+0x4c) == 0xa)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0x104) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x104)-0.15);
	}

	if((D(esp+0x48) == 0xa)||(D(esp+0x54) == 0xa)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0x104) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x104)+0.15);
	}

	if((D(esp+0x50) == 0xb)||(D(esp+0x48) == 0xb)||(D(esp+0x4c) == 0xb)||(D(esp+0x54) == 0xb)||(D(esp+0x40) == 0xb)||(D(esp+0x44) == 0xb)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/75.0);
	}

	if((D(esp+0x50) == 0xc)||(D(esp+0x4c) == 0xc)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0x104) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x104)-0.05);
	}

	if((D(esp+0x48) == 0xc)||(D(esp+0x54) == 0xc)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0x104) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x104)+0.05);
	}

	if((D(esp+0x50) == 0xd)||(D(esp+0x48) == 0xd)||(D(esp+0x4c) == 0xd)||(D(esp+0x54) == 0xd)||(D(esp+0x40) == 0xd)||(D(esp+0x44) == 0xd)){

		F64(esp+0x10) = 7.0*(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0);
		D(esp+0x5c) = rand_watcom106();
		F32(___1e6ed0h+0x35e*D(___243c60h)+0xac) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+(double)(int)D(esp+0x5c)*F64(esp+0x10)*create_double(0,0,0,0,0,0,0xf0,0x3e));
		F64(esp+0x10) = 7.0*(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0);
		D(esp+0x5c) = rand_watcom106();
		F32(___1e6ed0h+0x35e*D(___243c60h)+0xac) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)-(double)(int)D(esp+0x5c)*F64(esp+0x10)*create_double(0,0,0,0,0,0,0xf0,0x3e));
		d_st0 = 0.0;
		if(d_st0 > (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)) F32(___1e6ed0h+0x35e*D(___243c60h)+0xac) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)+360.0);
		if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0xac) >= 0x43b40000) F32(___1e6ed0h+0x35e*D(___243c60h)+0xac) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xac)-360.0);
		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)-(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/30.0);
	}

	if((D(esp+0x50) == 0xe)||(D(esp+0x48) == 0xe)||(D(esp+0x4c) == 0xe)||(D(esp+0x54) == 0xe)||(D(esp+0x40) == 0xe)||(D(esp+0x44) == 0xe)){

		F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)-(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb0)/40.0);
	}

	D(esp+0x20) = D(___243d28h)-0x14;
	F32(esp+0x28) = (float)(double)(int)D(esp+0x20);
	F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x15a)+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4));
	F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8) = (float)((double)F32(___1e6ed0h+0x35e*D(___243c60h)+0x15e)+(double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8));
	d_st0 = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb4);

	if(d_st0 > (double)F32(esp+0x28)) D(___1e6ed0h+0x35e*D(___243c60h)+0xb4) = D(esp+0x28);
	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0xb4) < 0x41a00000) D(___1e6ed0h+0x35e*D(___243c60h)+0xb4) = 0x41a00000;

	D(esp+0x1c) = D(___243d2ch)-0x14;
	F32(esp+0x24) = (float)(double)(int)D(esp+0x1c);
	d_st0 = (double)F32(___1e6ed0h+0x35e*D(___243c60h)+0xb8);
		
	if(d_st0 > (double)F32(esp+0x24)) D(___1e6ed0h+0x35e*D(___243c60h)+0xb8) = D(esp+0x24);
	if((int)D(___1e6ed0h+0x35e*D(___243c60h)+0xb8) < 0x41a00000) D(___1e6ed0h+0x35e*D(___243c60h)+0xb8) = 0x41a00000;
}

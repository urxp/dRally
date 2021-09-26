#include "drally.h"
#include "sfx.h"

	extern byte ___1f2488h[];
	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern void * ___243d74h;
	extern byte ___243ce8h[];
	extern byte ___243d28h[];
	extern void * ___243d58h;
	extern byte ___1de580h[];
	extern byte ___1de7d0h[];
	extern byte ___196dd0h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
int rand_watcom106(void);
double dRMath_sqrt(double);

// pickups
void race___526ach(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x1c];
	void * 	edxp;
	void * 	esp0xc;


	edx = 0;
	D(esp) = edx;
	esp0xc = ___1f2488h+0x20;

	while(1){

		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ebx = D(esp);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x18) = (int)FPOP();
		D(esp+8) = (int)FPOP();
		ecx = D(ebx+___1f2488h);
		esi = D(ebx+___1f2488h+4);
		edx = D(esp+0x18);
		eax = D(esp+8);
		edx -= ecx;
		eax -= esi;

		ebx = edx;
		if((int)edx < 0) ebx = 0-ebx;

		if((int)ebx < 0x11){

			ebx = eax;

			if((int)eax < 0) ebx = 0-ebx;

			if((int)ebx < 0x11){
					
				ecx = 0x35e*D(___243c60h);
				edxp = ___243d74h+D(ecx+___1e6ed0h+0x10)+(int)edx;

				if(((B(edxp+0x28*((int)eax+0x12)+0x12) > 3)||(B(edxp+0x28*((int)eax+0x12)+0x16) > 3))||((B(edxp+0x28*((int)eax+0x16)+0x12) > 3)||(B(edxp+0x28*((int)eax+0x16)+0x16) > 3))){

					eax = D(esp);
					if((int)D(eax+___1f2488h+8) > 0){
							
						ebx = D(___243ce8h);
						eax = D(___243c60h);

						if(eax != ebx){

							edx = 0x35e*eax;
							eax = 0x35e*ebx;
							FPUSH(F32(edx+___1e6ed0h+0xb4));
							ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb4);
							FPUSH(F32(edx+___1e6ed0h+0xb8));
							d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
							D(esp+0x14) = (int)FPOP();
							edx = D(esp+0x14);
							edx = edx*edx;
							ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb8);
							D(esp+4) = (int)FPOP();
							eax = D(esp+4);
							eax = eax*eax;
							edx += eax;
							D(esp+0x18) = edx;
							FPUSH((int)D(esp+0x18));
							ST(0) = dRMath_sqrt(ST(0));   
							D(esp+0x18) = (int)FPOP();
							ecx = 0x4b*D(esp+0x18);
							eax = 0x9000;
							eax -= ecx;
							ecx = eax;

							if((int)eax > 0x1000){
								
								edx = 0x12;
								eax = 0xa;
								ebx = 0;
								dRally_Sound_pushEffect(eax, SFX_MINE, ebx, ecx, 0x21000, 0x8000);
							}
						}
						else {

							ecx = 0x9000;
							dRally_Sound_pushEffect(4, SFX_MINE, 0, ecx, 0x21000, 0x8000);
						}

						ebp = D(esp);
						ebx = 0;
						edx = 0;

						while(1){

							memcpy(___243d58h+D(ebp+___1f2488h)-8+D(___243d28h)*(D(ebp+___1f2488h+4)+edx-8), esp0xc+ebx, 0x10);
							ebx += 0x10;
							edx++;
							if((int)edx >= 0x10) break;
						}

						eax = D(ebp+___1f2488h+8);
						eax--;

						switch(eax){
						case 0:
							eax = 0x94*D(___243c60h);
							ecx = D(eax+___1de580h+0x30);
							ecx += 0x7800;
							D(eax+___1de580h+0x30) = ecx;
							if((int)ecx > 0x19000) D(eax+___1de580h+0x30) = 0x19000;
							break;
						case 1:
							eax = 0x94*D(___243c60h);
							edi = D(eax+___1de580h+0x34);
							edi += 0x3c00;
							D(eax+___1de580h+0x34) = edi;
							if((int)edi > 0x19000) D(eax+___1de580h+0x34) = 0x19000;
							break;
						case 2:
							eax = 0x94*D(___243c60h);
							D(eax+___1de580h+0x50)++;
							break;
						case 3:
							edi = D(___243c60h);
							eax = 0x35e*edi;
							ebp = 0x230;
							edx = D(___243ce8h);
							D(eax+___1e6ed0h+0x34e) = ebp;

							if(edi == edx){

								ecx = 0x10000;
								edx = 6;
								eax = 2;
								ebx = 0;
								dRally_Sound_pushEffect(eax, SFX_SIENI, ebx, ecx, 0x50000, 0x8000);
							}
							break;
						case 4:
							eax = rand_watcom106();
							ebx = 4;
							edx = eax%ebx;
							edx += 2;
							D(ebp+___1f2488h+0x1c) = edx;
							eax = 0x94*D(___243c60h);
							edx = D(ebp+___1f2488h+0x1c);
							ebx = D(eax+___1de580h+0x18);
							edx <<= 0xa;
							ebx += edx;
							D(eax+___1de580h+0x18) = ebx;
							if((int)ebx > 0x19000) D(eax+___1de580h+0x18) = 0x19000;
							break;
						case 5:
							edi = D(___243ce8h);
							if(edi == D(___243c60h)) D(___1de7d0h+0x4c) = 1;
							break;
						case 6:
							eax = 0x94*D(___243c60h);
							D(eax+___1de580h+0x50) += 0xa;
							break;
						case 7:
							eax = 0x94*D(___243c60h);
							esi = 0x14;
							edx = esi;
							D(ebp+___1f2488h+0x1c) = esi;
							edx <<= 0xa;
							ebp = D(eax+___1de580h+0x18);
							ebp += edx;
							D(eax+___1de580h+0x18) = ebp;
							if((int)ebp > 0x19000) D(eax+___1de580h+0x18) = 0x19000;
							break;
						default:
							break;
						}

						eax = D(esp);
						D(eax+___1f2488h+0x14) = 0x8c;
						edx = D(esp);
						eax = D(eax+___1f2488h+8);
						ebx = 0xf0;
						D(edx+___1f2488h+0x18) = eax;
						eax = edx;
						edx = 0;
						D(___196dd0h) = ebx;
						D(eax+___1f2488h+8) = edx;
						eax = rand_watcom106();
						ebx = 0x96;
						edx = eax%ebx;
						eax = D(esp);
						edx += 0xc8;
						ecx = 0;
						D(eax+___1f2488h+0xc) = edx;
						D(eax+___1f2488h+0x10) = ecx;
					}
				}
			}
		}

		D(esp) += 0x120;
		esp0xc += 0x120;
		if(D(esp) == 0x1200) break;
	}
}

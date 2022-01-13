#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___196e60h[];
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243d9eh[];
	extern __BYTE__ ___1de580h[];

void ___44730h(void){

	__DWORD__ 		eax;
	struct_35e_t * 	s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;

	if(D(___196e60h) != 0){

		if(B(___243d9eh+0x12) == 0xff){

			D(___1de580h+0x94*D(___243c60h)+0x18) = B(___243d9eh+2);
			D(___1de580h+0x94*D(___243c60h)+0x18) = B(___243d9eh+2)+0x100*B(___243d9eh+3);
			D(___1de580h+0x94*D(___243c60h)+0x34) = B(___243d9eh+4);
			D(___1de580h+0x94*D(___243c60h)+0x18) = 0x10*(B(___243d9eh+2)+0x100*B(___243d9eh+3));
			D(___1de580h+0x94*D(___243c60h)+0x30) = B(___243d9eh+5);
			D(___1de580h+0x94*D(___243c60h)+0x30) = 0x400*B(___243d9eh+5);
			D(___1de580h+0x94*D(___243c60h)+0x34) = 0x400*B(___243d9eh+4);
			D(___1de580h+0x94*D(___243c60h)+0x50) = B(___243d9eh+6);

			eax = B(___243d9eh+7);
			s_35e[D(___243c60h)].__108 = ((int)eax>>4)&0xff;
			s_35e[D(___243c60h)].__10a = ((int)eax>>3)&0x01;
			s_35e[D(___243c60h)].__0 = B(___243d9eh+8);
			s_35e[D(___243c60h)].XLocation = (float)((double)B(___243d9eh+0xa)+(double)(float)(256.0*(double)B(___243d9eh+9)));
			s_35e[D(___243c60h)].YLocation = (float)((double)B(___243d9eh+0xc)+(double)(float)(256.0*(double)B(___243d9eh+0xb)));
			s_35e[D(___243c60h)].__14e = (float)((double)B(___243d9eh+0xe)+(double)(float)(256.0*(double)B(___243d9eh+0xd)));
			s_35e[D(___243c60h)].__152 = (float)((double)B(___243d9eh+0x10)+(double)(float)(256.0*(double)B(___243d9eh+0xf)));
			s_35e[D(___243c60h)].ImgIndex = B(___243d9eh+0x11);
			s_35e[D(___243c60h)].Direction = (float)(3.75*(double)B(___243d9eh+0x11));
			s_35e[D(___243c60h)].ImgOffset = 0x25800*D(___243c60h)+0x640*B(___243d9eh+0x11);
		}
	}
}

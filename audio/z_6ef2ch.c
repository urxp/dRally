#include "x86.h"

#define CCA_M_IMUL_PART(vx)	\
	ebx = vx;	\
	eax = ebx ? 0x13fa * ecx / ebx : 0;

#define ORG_M_IMUL_PART(vx)	\
	ebx = vx;	\
	eax = 0;	\
	if(ebx != 0){	\
\
		eax = imul_eax(0xda76000, ecx);	\
		edx = imul_edx(0xda76000, ecx);	\
		ebx *= 0x5780;	\
		eax = idiv_quo(eax, edx, ebx);	\
		eax = (eax >> 1) + (eax & 1);	\
	}

#define M_IMUL_PART(vx)	\
	ebx = vx;	\
	eax = 0;	\
	if(ebx != 0){	\
\
		eax = imul_eax(0x6d3b, 0x40*ecx);	\
		edx = imul_edx(0x6d3b, 0x40*ecx);	\
		eax = (1 + idiv_quo(eax, edx, 0xaf*ebx)) >> 1;	\
	}

    extern byte ___688d0h[];
    extern byte ___68910h[];
    extern byte ___68990h[];
    extern byte ___68a10h[];
    extern byte ___68a90h[];
    extern byte ___68c40h[];
    extern byte ___19a279h[];
    extern byte ___19a281h[];
    extern byte SFX_Ptr[];
    extern byte ___19a468h[];
    extern byte ___19a469h[];
    extern byte ___19a46ah[];
    extern byte ___19a46ch[];
    extern byte ___19a470h[];
    extern byte ___19a474h[];
    extern byte ___19a478h[];
    extern byte ___19a47ch[];
    extern byte ___19a480h[];
    extern byte ___19a484h[];
    extern byte ___19a49ch[];
    extern byte ___19a4bah[];
    extern byte ___19a4bch[];
    extern byte ___19a53ch[];
    extern byte ___19a53dh[];
    extern byte ___19a53eh[];
    extern byte ___19a53fh[];
    extern byte ___19a540h[];
    extern byte ___19a542h[];
    extern byte ___19a562h[];
    extern byte ___19a582h[];
    extern byte ___19a592h[];
    extern byte ___19a5a2h[];
    extern byte ___19a5b2h[];
    extern byte ___19a5c2h[];
    extern byte ___19a5d2h[];
    extern byte ___19a5e0h[];
    extern byte ___19a5e2h[];
    extern byte ___19a5e4h[];
    extern byte ___19a5f4h[];
    extern byte ___19a604h[];
    extern byte ___19a624h[];
    extern byte ___19a644h[];
    extern byte ___19a664h[];
    extern byte ___19a674h[];
    extern byte ___19a684h[];
    extern byte ___19a685h[];
    extern byte ___19a686h[];
    extern byte ___24e7a0h[];
    extern byte ___24e7a5h[];
    extern byte ___24e7a6h[];
    extern byte ___24e830h[];
    extern byte ___24e850h[];
    extern byte ___24e854h[];
    extern byte ___24e85ch[];
    extern byte ___24e864h[];
    extern byte ___24e86eh[];
    extern byte S3M_InitialTempo[];
    extern byte S3M_GlobalVolume[];
    extern byte S3M_InitialSpeed[];
    extern byte ___24e872h[];
    extern byte ___24e874h[];
    extern byte ___24e878h[];
    extern byte ___24e879h[];
    extern byte ___24e87ah[];
    extern byte ___24e87ch[];
    extern byte ___24e87dh[];
    extern byte ___24e87eh[];
    extern byte ___24e87fh[];
    extern byte ___24e880h[];
    extern byte ___24e8a0h[];

	void ___68c42h(void);
    int rand__clib3r(void);

    static dword idiv_quo(dword, dword, dword);
    #pragma aux idiv_quo =      \
        "idiv   ebx"            \
        parm [eax][edx][ebx]	\
		value [eax]

	static dword idiv_rem(dword, dword, dword);
    #pragma aux idiv_rem =		\
        "idiv   ebx"           	\
        parm [eax][edx][ebx]  	\
        value [edx]

    static dword imul_edx(dword, dword);
    #pragma aux imul_edx =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [edx]

    static dword imul_eax(dword, dword);
    #pragma aux imul_eax =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [eax]


// 6ef2ch
void ___6ef2ch__audio(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

	ah = B(___19a281h);
	if(ah == 0){


	if(B(___19a468h) != 0){

		B(___19a469h) = 0;
		B(___19a53dh) = 0;
		B(___19a53ch) = 1;
		B(___19a46ah) = 0;
		B(___19a53eh) = 0;
		B(___19a540h) = 1;
		B(___19a53fh) = 0;
		B(___19a684h) = 0;
		B(___19a685h) = 0;
		B(___19a686h) = 0;
		W(___19a5e2h) = 0;
		B(___24e87eh) = 0;

		while(B(___24e87eh) < 0x10){

			eax = B(___24e87eh);
			W(eax*2+___19a542h) = 0;
			W(eax*2+___19a562h) = 0;
			B(eax+___19a582h) = 0;
			B(eax+___19a592h) = 0;
			B(eax+___19a5a2h) = 0;
			B(eax+___19a5b2h) = 0;
			B(eax+___19a5c2h) = 0;
			B(eax+___19a5d2h) = 0;
			B(eax+___19a5e4h) = 0;
			B(eax+___19a5f4h) = 0;
			W(eax*2+___19a604h) = 0;
			W(eax*2+___19a624h) = 0;
			W(eax*2+___19a644h) = 0;
			W(eax*2+___24e880h) = 0;
			B(eax+___19a664h) = 0;
			B(eax+___19a674h) = 0;
			B(___24e87eh)++;
		}

		___68c42h();
		B(___19a468h) = 0;
	}

	if(D(___19a46ch) != 0xffffffff){
	
		B(___19a469h) = ((int)D(___19a46ch) >> 8) & 0xff;
		B(___19a53fh) = B(___19a46ch);

		if(B(___19a53fh) > 0x3f) B(___19a53fh) = 0x3f;

		B(___19a53dh) = 0;
		B(___19a53ch) = 1;
		D(___19a46ch) = 0xffffffff;
	}

	if((B(___19a53eh) == 0)&&(B(___24e7a6h) == 0)){

	B(___24e7a5h) = 1;
	if(B(___24e7a5h) == B(___19a53ch)){

		ecx = 0xffff;
		esi = D(SFX_Ptr);
		ebx = 0;

		while(1){

			if(bl == B(___19a53dh)){

				if(B(___19a469h) < B(___24e86eh)){

					eax = B(___19a469h);
					edx = D(___24e85ch);

					if(B(edx+eax) != 0xff){

						if(B(edx+eax) != 0xfe) break;
						B(___19a469h)++;
						continue;
					}
				}

				B(___19a469h) = bl;

				eax = (ebx == esi) ? 0x10 : (int)D(___19a279h) >> 0x18;

				B(___24e87eh) = bl;
				B(___24e872h) = al;

				if(bl < al){

					while(B(___24e87eh) < B(___24e872h)){

						eax = B(___24e87eh);
						W(eax*2+___19a542h) = bx;
						W(eax*2+___19a562h) = bx;
						B(eax+___19a582h) = bl;
						B(eax+___19a592h) = bl;
						B(eax+___19a5a2h) = bl;
						B(eax+___19a5b2h) = bl;
						B(eax+___19a5c2h) = bl;
						B(eax+___19a5d2h) = bl;
						B(eax+___19a5e4h) = bl;
						B(eax+___19a5f4h) = bl;
						W(eax*2+___19a604h) = bx;
						W(eax*2+___19a624h) = bx;
						W(eax*2+___19a644h) = bx;
						W(eax*2+___24e880h) = bx;
						B(eax+___19a664h) = bl;
						B(eax+___19a674h) = bl;
						W(eax*2+___688d0h) = cx;
						D(eax*4+___68910h) = ebx;
						D(eax*4+___68990h) = ebx;
						D(eax*4+___68a10h) = ebx;
						B(___24e87eh)++;
					}
				}

				B(___19a685h) = bl;
				B(___19a686h) = bl;
				W(___19a5e2h) = bx;
				B(___19a684h) = bl;
			}
			else {

				B(___19a469h)--;
				B(___19a53dh) = 0;
				break;
			}

			eax = B(___19a469h);
			edx = D(___24e85ch);
			if(B(edx+eax) != 0xfe) break;
			B(___19a469h)++;
		}

		al = B(___19a469h);
		B(___19a469h)++;
		edx = al;
		eax = D(___24e85ch);
		eax = B(edx+eax) & 0xff;
		edx = D(___24e854h);
		eax = D(edx+eax*4);
		cl = 0;
		D(___24e8a0h) = eax;
		B(___19a46ah) = cl;
		al = B(___19a53fh);
		B(___19a53ch) = cl;
		
		if(al > 0){
			ebx = 2;
			dh = 0;

			while(1){
				eax = D(___24e8a0h);
				dl = B(eax);
				eax++;
				B(___24e87fh) = dl;
				D(___24e8a0h) = eax;
				if(dh == dl){
					cl = B(___19a53fh);
					cl--;
					B(___19a53fh) = cl;
					al = B(___19a46ah);
					B(___19a46ah)++;
					if(dl >= cl) break;
				}
				else {
					if((dl&0x20) != 0) D(___24e8a0h) = eax+ebx;
					if((B(___24e87fh)&0x40) != 0) D(___24e8a0h)++;
					if((B(___24e87fh)&0x80) != 0) D(___24e8a0h) += ebx;
				}
			}
		}
	}

	ch = 0;
	B(___24e87eh) = ch;

	while(B(___24e87eh) < 0x10){

		eax = B(___24e87eh);
		B(eax+___19a592h) = 0;
		B(___24e87eh)++;
	}

	esi = 0x7a12;

while(1){

	eax = D(___24e8a0h);
	dl = B(eax);
	eax++;
	B(___24e87fh) = dl;
	D(___24e8a0h) = eax;
	if(dl == 0) break;
	al = dl;
	eax &= 0x1f;
	dh = 0;
	ebx = 0;
	B(___24e87dh) = dh;
	al = B(eax+___24e830h);
	W(___24e87ah) = bx;
	B(___24e87eh) = al;

	if(al == 0xff){

		if((dl&0x20) != 0) D(___24e8a0h) += 2;
		if((B(___24e87fh)&0x40) != 0) D(___24e8a0h)++;
		if((B(___24e87fh)&0x80) != 0) D(___24e8a0h) += 2;

		al = 0;
		B(___24e87fh) = al;
	}

	if((B(___24e87fh)&0x20) != 0){
		eax = D(___24e8a0h);
		dl = B(eax);
		eax++;
		B(___24e87dh) = dl;
		D(___24e8a0h) = eax;

		if(dl == 0xfe){
			eax = B(___24e87eh);
			W(eax*2+___688d0h) = 0xffff;
		}

		eax = D(___24e8a0h);
		dh = 0;
		dl = B(eax);
		ebx = 0;
		W(___24e87ah) = dx;
		bl = dl;
		edx = D(___24e7a0h);
		eax++;
		edx = (int)edx >> 0x10;
		D(___24e8a0h) = eax;
		if((int)ebx > (int)edx){
			edi = 0;
			W(___24e87ah) = di;
		}
	}

	if((B(___24e87fh)&0x40) != 0){
		eax = D(___24e8a0h);
		dl = B(eax);
		eax++;
		B(___24e87ch) = dl;
		D(___24e8a0h) = eax;
	}

	if((B(___24e87fh)&0x80) != 0){
	eax = D(___24e8a0h);
	eax++;
	dl = B(eax-1);
	D(___24e8a0h) = eax;
	eax++;
	B(___24e879h) = dl;
	dl = B(eax-1);
	D(___24e8a0h) = eax;
	al = B(___24e879h);
	B(___24e878h) = dl;

	if(al >= 7){

	if(al <= 7){

		if(dl == 0){
			eax = B(___24e87eh);
			al = B(eax+___19a5a2h);
			B(___24e878h) = al;
		}

		if(B(___24e87dh) == 0){
			eax = B(___24e87eh);
			if(W(eax*2+___19a644h) == 0){
				dl = 0;
				B(___24e878h) = dl;
				B(___24e879h) = dl;
			}
		}
		else {
			if((W(___24e87ah) != 0)||(W(2*B(___24e87eh)+___19a542h) != 0)){
				al = B(___24e87dh);
				eax &= 0xf;
				ax = W(eax*2+___19a484h);
				ecx = B(___24e87dh);
				eax &= 0xffff;
				ecx = (int)ecx >> 4;
				eax = (int)eax >> cl;
				edx = eax;
				eax = B(___24e87eh);
				B(___24e87dh) = 0;
				bx = W(___24e87ah);
				W(eax*2+___19a644h) = dx;
				if(bx == 0){
					B(___24e87fh) &= 0xdf;
				}
			}
			else {
				cl = 0;
				al = B(___24e87fh) & 0xdf;
				B(___24e878h) = cl;
				B(___24e879h) = cl;
				B(___24e87fh) = al;
			}
		}
	}
	else if(al == 0x13){

		eax = dl;
		eax = (int)eax >> 4;
		if(eax == 0xd){
			eax = B(___24e87eh);
			dl &= 0xf;
			B(eax+___19a5e4h) = dl;
			dl = (dl != 0) ? 1 : 0;
			edx &= 0xff;
			if(edx != 0) B(eax+___19a5e4h) = 0xf;
			ah = 0;
			al = B(___24e87fh);
			edx = eax;
			al = B(___24e87ch);
			edx = 256*edx;
			edx += eax;
			eax = B(___24e87eh);
			W(eax*2+___19a604h) = dx;
			dh = 0;
			bx = W(___24e87ah);
			dl = B(___24e87dh);
			ch = B(___24e87fh) & 0x9f;
			edx = 256*edx;
			edx += ebx;
			B(___24e87fh) = ch;
			W(eax*2+___19a624h) = dx;
		}
	}}}







	if((B(___24e87fh)&0x20) != 0){

	cx = W(___24e87ah);

	if(cx != 0){
		eax = B(___24e87eh);
		ebx = D(___24e864h);
		edx = cx;
		W(eax*2+___19a542h) = cx;
		dl = B(edx+ebx);
		B(eax+___19a582h) = dl;
		cl = B(___24e87dh);
		if((cl != 0)&&(cl != 0xff)){
			al = cl;
			eax &= 0xf;
			ax = W(eax*2+___19a484h);
			ecx = B(___24e87dh);
			eax &= 0xffff;
			ecx = (int)ecx >> 4;
			eax = (int)eax >> cl;
			edx = eax;
			eax = B(___24e87eh);
			W(eax*2+___19a562h) = dx;
			dx = W(___24e87ah);
			W(eax*2+___688d0h) = dx;
		}
	}
	else {
		eax = B(___24e87eh);
		ax = W(eax*2+___19a542h);
		edx = 0;
		W(___24e87ah) = ax;
		dx = ax;
		eax = D(___24e7a0h);
		eax = (int)eax >> 0x10;

		if((int)edx <= (int)eax){

			dl = B(___24e87dh);
			if(dl == 0xff){
				edx = D(___24e864h);
				eax = W(___24e87ah);
				eax += edx;
				edx = B(___24e87eh);
				al = B(eax);
				B(edx+___19a582h) = al;
				cl = B(___24e87dh);
				if((cl != 0)&&(cl != 0xff)){
					al = cl;
					eax &= 0xf;
					ax = W(eax*2+___19a484h);
					ecx = B(___24e87dh);
					eax &= 0xffff;
					ecx = (int)ecx >> 4;
					eax = (int)eax >> cl;
					edx = eax;
					eax = B(___24e87eh);
					W(eax*2+___19a562h) = dx;
					dx = W(___24e87ah);
					W(eax*2+___688d0h) = dx;
				}
			}
			else if(dl != 0){
				cl = B(___24e87dh);
				if((cl != 0)&&(cl != 0xff)){
					al = cl;
					eax &= 0xf;
					ax = W(eax*2+___19a484h);
					ecx = B(___24e87dh);
					eax &= 0xffff;
					ecx = (int)ecx >> 4;
					eax = (int)eax >> cl;
					edx = eax;
					eax = B(___24e87eh);
					W(eax*2+___19a562h) = dx;
					dx = W(___24e87ah);
					W(eax*2+___688d0h) = dx;
				}
			}
			else {

				edx = D(___24e864h);
				eax = W(___24e87ah);
				eax += edx;
				edx = B(___24e87eh);
				al = B(eax);
				B(edx+___19a582h) = al;
				cl = B(___24e87dh);
				if((cl != 0)&&(cl != 0xff)){
					al = cl;
					eax &= 0xf;
					ax = W(eax*2+___19a484h);
					ecx = B(___24e87dh);
					eax &= 0xffff;
					ecx = (int)ecx >> 4;
					eax = (int)eax >> cl;
					edx = eax;
					eax = B(___24e87eh);
					W(eax*2+___19a562h) = dx;
					dx = W(___24e87ah);
					W(eax*2+___688d0h) = dx;
				}
			}
		}
		else {
			bl = 0;
			B(___24e87dh) = bl;
			bh = B(___24e87fh) & 0xdf;
			W(___24e87ah) = cx;
			B(___24e87fh) = bh;
			cl = B(___24e87dh);
			if((cl != 0)&&(cl != 0xff)){
				al = cl;
				eax &= 0xf;
				ax = W(eax*2+___19a484h);
				ecx = B(___24e87dh);
				eax &= 0xffff;
				ecx = (int)ecx >> 4;
				eax = (int)eax >> cl;
				edx = eax;
				eax = B(___24e87eh);
				W(eax*2+___19a562h) = dx;
				dx = W(___24e87ah);
				W(eax*2+___688d0h) = dx;
			}
		}
	}
	}

	if((B(___24e87fh)&0x40) != 0){

		edx = B(___24e87eh);
		al = B(___24e87ch);
		B(edx+___19a582h) = al;
	}

	if((B(___24e87fh)&0x80) != 0){
		al = B(___24e879h);
		al--;

		switch(eax & 0xff){
		case 0:
			al = B(___24e878h);
			edx = esi;
			ebx = B(S3M_InitialTempo);
			B(S3M_InitialSpeed) = al;
			edx = (int)edx >> 0x1f;
			eax = esi;
			eax = idiv_quo(eax, edx, ebx);
			bh = 0;
			W(___68c40h) = ax;
			B(___24e879h) = bh;
			B(___24e878h) = bh;
			break;
		case 1:
			al = B(___24e878h);
			B(___19a469h) = al;
			B(___19a53ch) = 1;
			dh = 0;
			B(___24e879h) = dh;
			B(___24e878h) = dh;
			break;
		case 2:
			al = B(___24e878h) & 0xf;
			bl = 1;
			B(___19a53ch) = bl;
			if(al > 9) B(___24e878h) += 6;
			eax = B(___24e878h);
			eax = (int)eax >> 4;
			edx = (int)eax * 0xa;
			al = B(___24e878h);
			eax &= 0xf;
			eax += edx;
			B(___24e878h) = al;
			if(al > 0x3f) B(___24e878h) = 0x3f;
			al = B(___24e878h);
			B(___19a53fh) = al;
			al = 0;
			B(___24e879h) = al;
			B(___24e878h) = al;
			break;
		case 3:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				B(___24e878h) = B(eax+___19a5a2h);
			}

			al = B(___24e878h) & 0xf;

			if(al == 0xf){

				edx = B(___24e878h);
				eax = B(___24e87eh);
				ebx = edx;
				ebx = (int)ebx >> 4;
				edx = B(eax+___19a582h);
				edx += ebx;
				B(eax+___19a582h) = dl;
				if(dl > 0x40) B(eax+___19a582h) = 0x40;
			}

			al = B(___24e878h) & 0xf0;

			if(al == 0xf0){

				dl = B(___24e878h) & 0xf;
				eax = B(___24e87eh);
				ch = B(eax+___19a582h) - dl;
				B(eax+___19a582h) = ch;

				if(ch > 0x40){

					dh = 0;
					B(eax+___19a582h) = dh;
				}
			}
			break;
		case 4:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}

			dl = B(___24e878h);

			if(dl >= 0xe0){

				edi = 0x7dff;
				dl &= 0xf;
				eax = B(___24e87eh);
				ebx = dl;
				eax += eax;
				ebx <<= 2;
				ecx = W(eax+___19a562h);
				edi -= ebx;

				if((int)ecx > (int)edi){

					W(eax+___688d0h) = 0xffff;
					dh = 0;
					B(___24e879h) = dh;
				}
				else {

					dh = B(___24e878h) & 0xf0;

					if(dh == 0xf0){

						dh = 0;
						edi = ecx;
						edx <<= 2;
						edi += edx;
						ebx = D(___24e850h);
						edx = W(eax+___19a542h);
						W(eax+___19a562h) = di;
						ecx = D(ebx+edx*4);

						M_IMUL_PART(di)

						edx = B(___24e87eh);
						D(edx*4+___68990h) = eax;
					}

					al = B(___24e878h) & 0xf0;

					if(al != 0xe0){

						dh = 0;
						B(___24e879h) = dh;
					}
					else {

						dl = B(___24e878h) & 0xf;
						eax = B(___24e87eh);
						bx = W(eax*2+___19a562h);
						dh = 0;
						ebx += edx;
						W(eax*2+___19a562h) = bx;
						ebx = D(___24e850h);
						edx = W(eax*2+___19a542h);
						ecx = D(ebx+edx*4);
						ax = W(eax*2+___19a562h);

						M_IMUL_PART(ax)

						edx = B(___24e87eh);
						D(edx*4+___68990h) = eax;
						dh = 0;
						B(___24e879h) = dh;
					}
				}
			}
			break;
		case 5:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}

			if(B(___24e878h) >= 0xe0){

				dl = B(___24e878h) & 0xf;
				eax = B(___24e87eh);
				ebx = dl;
				eax += eax;
				ebx <<= 2;
				ecx = W(eax+___19a562h);
				ebx += 0x200;

				if((int)ecx < (int)ebx){

					W(eax+___688d0h) = 0xffff;
					al = 0;
					B(___24e879h) = al;
				}
				else {

					dh = B(___24e878h) & 0xf0;

					if(dh == 0xf0){

						dh = 0;
						edi = ecx;
						edx = 4*edx;
						edi -= edx;
						ebx = D(___24e850h);
						edx = W(eax+___19a542h);
						W(eax+___19a562h) = di;
						ecx = D(ebx+edx*4);

						M_IMUL_PART(di)

						edx = B(___24e87eh);
						D(edx*4+___68990h) = eax;
					}

					al = B(___24e878h) & 0xf0;

					if(al != 0xe0){

						al = 0;
						B(___24e879h) = al;
					}
					else {

						dl = B(___24e878h) & 0xf;
						eax = B(___24e87eh);
						bx = W(eax*2+___19a562h);
						dh = 0;
						ebx -= edx;
						W(eax*2+___19a562h) = bx;
						ebx = D(___24e850h);
						edx = W(eax*2+___19a542h);
						ecx = D(ebx+edx*4);
						ax = W(eax*2+___19a562h);

						M_IMUL_PART(ax)

						edx = B(___24e87eh);
						D(edx*4+___68990h) = eax;
						al = 0;
						B(___24e879h) = al;
					}
				}
			}
			break;
		case 6:		
			break;
		case 7:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}

			edx = B(___24e87eh);
			al = B(___24e878h);
			B(edx+___19a5c2h) = al;
			break;
		case 8:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}
			break;
		case 9:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}

			al = B(___24e87dh);

			if((al == 0xff)||(al == 0)){

				eax = B(___24e87eh);
				al = B(eax+___19a5f4h);
				B(___24e87dh) = al;
			}

			eax = 0;
			al = B(___24e87eh);
			dl = 0;
			B(eax+___19a5e4h) = dl;
			dl = B(___24e87dh);
			B(eax+___19a5f4h) = dl;
			al = dl;
			al &= 0xf;
			edx = 0;
			dl = al;
			eax = 0;
			al = B(___24e878h);
			eax = (int)eax >> 4;
			eax += edx;
			B(___24e87dh) = al;

			if(al >= 0xc){

				bl = al + 4;
				B(___24e87dh) = bl;
			}

			eax = 0;
			al = B(___24e87eh);
			dl = B(eax+___19a5f4h);
			bh = B(___24e87dh);
			dl &= 0xf0;
			bh += dl;
			dh = 0;
			dl = bh;
			edx <<= 8;
			W(eax*2+___19a604h) = dx;
			ah = B(eax+___19a5f4h);
			ah &= 0xf;
			al = B(___24e878h);
			al &= 0xf;
			B(___24e87dh) = bh;
			ah += al;
			B(___24e87dh) = ah;

			if(ah >= 0xc){

				ch = ah + 4;
				B(___24e87dh) = ch;
			}

			eax = 0;
			al = B(___24e87eh);
			dl = B(eax+___19a5f4h);
			dl &= 0xf0;
			B(___24e87dh) += dl;
			dh = 0;
			bx = W(eax*2+___19a604h);
			dl = B(___24e87dh);
			ebx += edx;
			W(eax*2+___19a604h) = bx;
			break;
		case 10:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}
			break;
		case 11:	
			if(B(___24e878h) == 0){
			
				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}
			break;
		case 12:
		case 13:
			dl = 0;
			edi = D(___19a480h);
			B(___24e878h) = dl;
			edi++;
			B(___24e879h) = dl;
			D(___19a480h) = edi;
			break;
		case 14:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}

			eax = 0;
			al = B(___24e878h);
			edx = eax;
			eax = 0;
			al = B(___24e87eh);
			edx <<= 8;
			D(eax*4+___68910h) = edx;
			dx = W(eax*2+___19a542h);
			W(eax*2+___688d0h) = dx;
			dh = 0;
			B(___24e879h) = dh;
			B(___24e878h) = dh;
			break;
		case 15:
			dl = 0;
			edi = D(___19a480h);
			B(___24e878h) = dl;
			edi++;
			B(___24e879h) = dl;
			D(___19a480h) = edi;
			break;
		case 16:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}
			break;
		case 17:
			if(B(___24e878h) == 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5a2h);
				B(___24e878h) = al;
			}

			edx = 0;
			dl = B(___24e87eh);
			al = B(___24e878h);
			B(edx+___19a5c2h) = al;
			break;
		case 18:
			eax = (int)B(___24e878h) >> 4;
			switch(eax){
			case 0:
				cl = 0;
				B(___24e878h) = cl;
				B(___24e879h) = cl;
				D(___19a470h)++;
				break;
			case 1:
				bl = 0;
				B(___24e878h) = bl;
				B(___24e879h) = bl;
				D(___19a474h)++;
				break;
			case 2:
				al = B(___24e878h) & 0xf;
				dl = 0;
				eax &= 0xff;
				B(___24e879h) = dl;
				ax = W(eax*2+___19a49ch);
				B(___24e878h) = dl;
				W(___19a5e2h) = ax;
				break;
			case 3:
				eax = 0;
				al = B(___24e87eh);
				dh = B(eax+___19a5d2h);
				dh &= 0xfc;
				dl = B(___24e878h);
				dl &= 3;
				dl |= dh;
				B(eax+___19a5d2h) = dl;
				al = 0;
				B(___24e879h) = al;
				B(___24e878h) = al;
				break;
			case 4:
				eax = 0;
				al = B(___24e87eh);
				dh = B(eax+___19a5d2h);
				dh &= 0xf3;
				dl = B(___24e878h);
				dl &= 3;
				cl = 0;
				dl <<= 2;
				B(___24e879h) = cl;
				dl |= dh;
				B(___24e878h) = cl;
				B(eax+___19a5d2h) = dl;
				break;
			case 5:
			case 6:
			case 7:
				ah = 0;
				ebp = D(___19a480h);
				B(___24e878h) = ah;
				ebp++;
				B(___24e879h) = ah;
				D(___19a480h) = ebp;
				break;
			case 8:
				al = B(___24e878h);
				al &= 0xf;
				edx = eax;
				bl = 0;
				edx &= 0xff;
				eax = 0;
				B(___24e879h) = bl;
				al = B(___24e87eh);
				edx <<= 0xc;
				B(___24e878h) = bl;
				D(eax*4+___68a90h) = edx;
				break;
			case 9:
				ah = 0;
				ebp = D(___19a480h);
				B(___24e878h) = ah;
				ebp++;
				B(___24e879h) = ah;
				D(___19a480h) = ebp;
				break;
			case 10:
				dl = 0;
				B(___24e878h) = dl;
				B(___24e879h) = dl;
				D(___19a478h)++;
				break;
			case 11:
				bh = B(___24e878h);

				if((bh&0xf) != 0){

					al = 0;
					B(___24e878h) = al;
					B(___24e879h) = al;
				}
				else {

					cl = B(___19a686h);

					if(cl != 0){

						al = B(___19a685h);
						al--;
						B(___19a685h) = al;

						if(al == 0){

							B(___19a686h) = al;
							al = 0;
							B(___24e878h) = al;
							B(___24e879h) = al;
						}
						else {

							al = B(___19a684h);
							dh = 1;
							B(___19a53fh) = al;
							B(___19a53ch) = dh;
							B(___19a53dh) = dh;
							al = 0;
							B(___24e878h) = al;
							B(___24e879h) = al;
						}
					}
					else {

						al = B(___19a46ah);
						B(___19a684h) = al;
						al = 0;
						B(___24e878h) = al;
						B(___24e879h) = al;
					}
				}
				break;
			case 12:
				al = B(___24e878h) & 0xf;
				edx = B(___24e87eh);
				B(edx+___19a5e4h) = al;
				break;
			case 13:
				break;
			case 14:
				al = B(___24e878h) & 0xf;
				al++;
				B(___19a540h) = al;
				break;
			case 15:
				dh = 0;
				eax = D(___19a47ch);
				B(___24e878h) = dh;
				eax++;
				B(___24e879h) = dh;
				D(___19a47ch) = eax;
				break;
			default:
				ah = 0;
				ebp = D(___19a480h);
				B(___24e878h) = ah;
				ebp++;
				B(___24e879h) = ah;
				D(___19a480h) = ebp;
				break;
			}
			break;
		case 19:
			cl = B(___24e878h);
			if(cl != 0){
				eax = esi;
				ebx = 0;
				edx = esi;
				bl = cl;
				edx = (int)edx >> 0x1f;
				eax = idiv_quo(eax, edx, ebx);
				B(S3M_InitialTempo) = cl;
				W(___68c40h) = ax;
			}
			ch = 0;
			B(___24e878h) = ch;
			B(___24e879h) = ch;
			break;
		case 20:
			dl = 0;
			edi = D(___19a480h);
			B(___24e878h) = dl;
			edi++;
			B(___24e879h) = dl;
			D(___19a480h) = edi;
			break;
		case 21:
			al = B(___24e878h);
			bl = 0;
			B(S3M_GlobalVolume) = al;
			B(___24e879h) = bl;
			B(___24e878h) = bl;
			break;
		default:
			dl = 0;
			edi = D(___19a480h);
			B(___24e878h) = dl;
			edi++;
			B(___24e879h) = dl;
			D(___19a480h) = edi;
			break;
		}

		eax = B(___24e87eh);
		dl = B(___24e879h);
		B(eax+___19a592h) = dl;
		dl = B(___24e878h);
		B(eax+___19a5a2h) = dl;
	}
	
	if(B(___24e87eh) != 0xff){

		if(W(___19a5e2h) != 0){
			eax = B(___24e87eh);
			ecx = D(___19a5e0h);
			ax = W(eax*2+___19a562h);
			ecx = (int)ecx >> 0x10;
			M_IMUL_PART(ax)
			edi = 0;
			edx = B(___24e87eh);
			W(___19a5e2h) = di;
		}
		else {
			eax = B(___24e87eh);
			ebx = D(___24e850h);
			edx = W(eax*2+___19a542h);
			ecx = D(ebx+edx*4);
			ax = W(eax*2+___19a562h);
			M_IMUL_PART(ax)
			edx = B(___24e87eh);
		}

		D(edx*4+___68990h) = eax;
		eax = B(___24e87eh);
		edx = B(S3M_GlobalVolume);
		ebx = B(eax+___19a582h);
		edx = (int)edx * (int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
	}
}

	al = B(___19a46ah);
	B(___19a46ah)++;
	if(B(___19a46ah) >= 0x40) B(___19a53ch) = 1;

	dl = B(___19a540h);
	al = B(S3M_InitialSpeed);
	ax = al * dl;
	B(___19a53eh) = al;

	}

	if(B(___19a53eh) != 0){
	ah = 0;
	B(___24e87eh) = ah;
	esi = 0xffff;


while(B(___24e87eh) < 0x10){

	eax = B(___24e87eh);
	dl = B(eax+___19a592h);
	if(dl != 0){
	B(___24e879h) = dl;
	dl = B(eax+___19a5a2h);
	B(___24e878h) = dl;
	dl = B(___24e879h) - 4;

	switch(edx & 0xff){
	case 0:
		cl = B(___24e878h);

		if((cl&0xf) == 0){

			ch = B(S3M_InitialSpeed);

			if(ch != B(___19a53eh)){

				ebx = cl;
				edx = B(___24e87eh);
				ebx = (int)ebx >> 4;
				eax = B(edx+___19a582h);
				eax += ebx;
				B(edx+___19a582h) = al;
				eax = dl;

				if(B(eax+___19a582h) > 0x40){

					eax = B(___24e87eh);
					B(eax+___19a582h) = 0x40;
				}
			}
		}

		if((B(___24e878h)&0xf0) == 0){

			bh = B(S3M_InitialSpeed);

			if(bh != B(___19a53eh)){

				dl = B(___24e878h) & 0xf;
				eax = B(___24e87eh);
				ecx = dl;
				ebx = B(eax+___19a582h);

				if((int)ebx < (int)ecx){

					cl ^= dl;
					B(eax+___19a582h) = cl;
				}
				else {

					ch = bl - dl;
					B(eax+___19a582h) = ch;
				}
			}
		}

		eax = B(___24e87eh);
		edx = B(S3M_GlobalVolume);
		ebx = B(eax+___19a582h);
		edx = (int)edx * (int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		break;
	case 1:
		bh = B(___24e878h);
		if(bh < 0xe0){
			eax = B(___24e87eh);
			ax = W(eax*2+___19a562h);
			edx = bh;
			ebx = 0x7dff;
			edx <<= 2;
			eax &= 0xffff;
			ebx -= edx;
			if((int)eax > (int)ebx){

				eax = B(___24e87eh);
				W(eax*2+___688d0h) = si;
			}
			else {

				dh = 0;
				dl = B(___24e878h);
				eax = B(___24e87eh);
				edx <<= 2;
				W(eax*2+___19a562h) += dx;
				eax = B(___24e87eh);
				ax = W(eax*2+___19a542h);
				edx = D(___24e850h);
				eax &= 0xffff;
				ecx = D(edx+eax*4);
				eax = B(___24e87eh);
				ax = W(eax*2+___19a562h);
				M_IMUL_PART(ax)
				edx = B(___24e87eh);
				D(edx*4+___68990h) = eax;
			}
		}
		break;
	case 2:
		bl = B(___24e878h);
		if(bl < 0xe0){
			eax = B(___24e87eh);
			edx = W(eax*2+___19a562h);
			eax = bl;
			eax <<= 2;
			eax += 0x200;
			if((int)edx < (int)eax){

				eax = B(___24e87eh);
				W(eax*2+___688d0h) = si;
			}
			else {
				dh = 0;
				dl = bl;
				eax = B(___24e87eh);
				edx <<= 2;
				W(eax*2+___19a562h) -= dx;
				eax = B(___24e87eh);
				ax = W(eax*2+___19a542h);
				eax &= 0xffff;
				edx = eax*4;
				eax = D(___24e850h);
				ecx = D(edx+eax);
				eax = B(___24e87eh);
				ax = W(eax*2+___19a562h);
				M_IMUL_PART(ax)
				edx = B(___24e87eh);
				D(edx*4+___68990h) = eax;
			}
		}
		break;
	case 3:
		eax = B(___24e87eh);
		edx = al;
		ax = W(eax*2+___19a644h);

		if(ax != W(edx*2+___19a562h)){

			ah = 0;
			edx = B(___24e87eh);
			al = B(___24e878h);
			W(edx*2+___24e880h) = ax;
			eax = dl;
			edx = al;
			ax = W(eax*2+___19a644h);

			if(ax <= W(edx*2+___19a562h)){

				eax = dl;
				edx = W(eax*2+___19a562h);
				eax = B(___24e878h);
				eax <<= 2 ;

				if((int)eax > (int)edx){

					eax = B(___24e87eh);
					edi = 0;
					W(eax*2+___19a562h) = di;
				}
				else {

					dh = 0;
					dl = B(___24e878h);
					eax = B(___24e87eh);
					edx <<= 2;
					W(eax*2+___19a562h) -= dx;
				}

				eax = B(___24e87eh);
				eax += eax;
				dx = W(eax+___19a562h);
				cx = W(eax+___19a644h);

				if(dx < cx) W(eax+___19a562h) = cx;

				eax = B(___24e87eh);
				ebx = D(___24e850h);
				edx = W(eax*2+___19a542h);
				ecx = D(ebx+edx*4);
				ax = W(eax*2+___19a562h);
				M_IMUL_PART(ax)
				edx = B(___24e87eh);
				D(edx*4+___68990h) = eax;
			}
			else {

				eax = dl;
				dh = 0;
				dl = B(___24e878h);
				di = W(eax*2+___19a562h);
				edx <<= 2;
				edi += edx;
				ebx = al;
				W(eax*2+___19a562h) = di;
				eax = bl;
				edx = eax*2;
				ax = W(ebx*2+___19a562h);

				if(ax <= W(edx+___19a644h)){

					eax = B(___24e87eh);
					ebx = D(___24e850h);
					edx = W(eax*2+___19a542h);
					ecx = D(ebx+edx*4);
					ax = W(eax*2+___19a562h);
					M_IMUL_PART(ax)
					edx = B(___24e87eh);
					D(edx*4+___68990h) = eax;
				}
				else {

					eax = B(___24e87eh);
					edx = eax*2;
					eax = B(___24e87eh);
					dx = W(edx+___19a644h);
					W(eax*2+___19a562h) = dx;
					eax = B(___24e87eh);
					ebx = D(___24e850h);
					edx = W(eax*2+___19a542h);
					ecx = D(ebx+edx*4);
					ax = W(eax*2+___19a562h);
					M_IMUL_PART(ax)
					edx = B(___24e87eh);
					D(edx*4+___68990h) = eax;
				}
			}
		}
		break;
	case 4:
		eax = B(___24e87eh);
		al = B(eax+___19a5d2h) & 3;

		switch(eax & 0xff){
		case 0:
			eax = B(___24e87eh);
			al = B(eax+___19a5b2h);
			eax &= 0xff;
			edx = D(eax*2+___19a4bah);
			eax = B(___24e87eh);
			al = B(eax+___19a5c2h);
			edx = (int)edx >> 0x10;
			al &= 0xf;
			eax &= 0xff;
			eax <<= 2 ;
			eax = (int)eax * (int)edx;
			eax++;
			eax = (int)eax >> 9;
			D(___24e874h) = eax;
			break;
		case 1:
			eax = B(___24e87eh);
			al = B(eax+___19a5c2h);
			eax &= 0xf;
			edx = eax*4;
			eax = B(___24e87eh);
			al = B(eax+___19a5b2h);
			ebx = 0x20;
			eax &= 0xff;
			ebx -= eax;
			edx = (int)edx * (int)ebx;
			edx = (int)edx >> 4;
			D(___24e874h) = edx;
			break;
		case 2:
			eax = B(___24e87eh);
			al = B(eax+___19a5b2h);
			eax &= 0xff;
			if((short)W(eax*2+___19a4bch) < 0){
				eax = B(___24e87eh);
				al = B(eax+___19a5c2h);
				eax &= 0xf;
				eax <<= 2 ;
				eax = 0 - eax;
			}
			else {
				eax = B(___24e87eh);
				al = B(eax+___19a5c2h);
				eax &= 0xf;
				eax <<= 2;
			}
			D(___24e874h) = eax;
			break;
		case 3:
			eax = B(___24e87eh);
			al = B(eax+___19a5c2h);
			eax &= 0xf;
			edx = eax*4;
			eax = rand__clib3r() - 0x4000;
			eax = (int)eax * (int)edx;
			eax = (int)eax >> 0xe;
			D(___24e874h) = eax;
			break;
		default: 	
			break;
		}

		al = B(___19a53eh);
		if(al != B(S3M_InitialSpeed)){
			eax = B(___24e87eh);
			edx = B(eax+___19a5c2h);
			ebx = edx;
			ebx = (int)ebx >> 4;
			edx = B(eax+___19a5b2h);
			edx += ebx;
			B(eax+___19a5b2h) = dl;
			if(dl > 0x40){
				dh = dl - 0x40;
				B(eax+___19a5b2h) = dh;
			}
		}

		eax = B(___24e87eh);
		edx = W(eax*2+___19a542h);
		di = W(___24e874h);
		ebx = edx*4;
		ax = W(eax*2+___19a562h);
		edx = D(___24e850h);
		eax += edi;
		ecx = D(edx+ebx);
		M_IMUL_PART(ax)
		edx = B(___24e87eh);
		D(edx*4+___68990h) = eax;
		break;
	case 5:
		eax = B(___24e87eh);
		edx = B(eax+___19a664h);
		eax = B(___24e878h);
		eax = (int)eax >> 4;
		eax++;
		if((int)edx >= (int)eax){

			eax = B(___24e87eh);
			edx = B(eax+___19a674h);
			eax = B(___24e878h);
			eax = (int)eax >> 4;
			eax++;
			if((int)edx < (int)eax){
				eax = B(___24e87eh);
				edx = al;
				edi = 0;
				bl = B(eax+___19a674h);
				D(edx*4+___68a10h) = edi;
				bl++;
				edx = al;
				B(eax+___19a674h) = bl;
				dl = B(edx+___19a674h);
				eax = B(___24e878h);
				eax = (int)eax >> 4;
				edx &= 0xff;
				eax++;
				if((int)edx >= (int)eax){
					eax = B(___24e87eh);
					bh = 0;
					B(eax+___19a664h) = bh;
					eax = B(___24e87eh);
					cl = 0;
					B(eax+___19a674h) = cl;
				}
			}
		}
		else {
			eax = B(___24e87eh);
			edx = al;
			ebx = B(edx+___19a582h);
			edx = B(S3M_GlobalVolume);
			ebx = (int)ebx * (int)edx;
			ch = B(eax+___19a664h);
			ch++;
			edx = al;
			ebx <<= 4;
			B(eax+ ___19a664h) = ch;
			D(edx*4+___68a10h) = ebx;
		}
		break;
	case 6:
		eax = B(___24e87eh);
		al = B(eax+___19a5e4h);

		switch(al){
		case 0:
			eax = B(___24e87eh);
			al = B(eax+___19a5f4h);
			B(___24e87dh) = al;
			eax = B(___24e87eh);
			B(eax+___19a5e4h) = 1;
			break;
		case 1:
			eax = B(___24e87eh);
			ax = W(eax*2+___19a604h);
			eax &= 0xffff;
			eax = (int)eax >> 8;
			B(___24e87dh) = al;
			eax = B(___24e87eh);
			B(eax+___19a5e4h) = 2;
			break;
		case 2:
			eax = B(___24e87eh);
			al = B(eax*2+___19a604h);
			B(___24e87dh) = al;
			eax = B(___24e87eh);
			cl = 0;
			B(eax+___19a5e4h) = cl;
			break;
		default:
			break;
		}

		eax = B(___24e87eh);
		ax = W(eax*2+___19a542h);
		edx = D(___24e850h);
		eax &= 0xffff;
		edx = D(edx+eax*4);
		al = B(___24e87dh);
		eax &= 0xf;
		ax = W(eax*2+___19a484h);
		ecx = B(___24e87dh);
		eax &= 0xffff;
		ecx = (int)ecx >> 4;
		eax = (int)eax >> cl;
		ecx = edx;
		M_IMUL_PART(ax)
		edx = B(___24e87eh);
		D(edx*4+___68990h) = eax;
		break;
	case 7:
		eax = B(___24e87eh);
		al = B(eax+___19a5d2h) & 3;

		switch(eax & 0xff){
		case 0:
			eax = B(___24e87eh);
			al = B(eax+___19a5b2h);
			eax &= 0xff;
			edx = D(eax*2+___19a4bah);
			eax = B(___24e87eh);
			al = B(eax+___19a5c2h);
			edx = (int)edx >> 0x10;
			eax &= 0xf;
			eax <<= 2;
			eax = (int)eax * (int)edx;
			eax++;
			eax = (int)eax >> 9;
			D(___24e874h) = eax;
			break;
		case 1:
			eax = B(___24e87eh);
			al = B(eax+___19a5c2h) & 0xf;
			edx = al;
			eax = B(___24e87eh);
			edx <<= 2;
			al = B(eax+___19a5b2h);
			ebx = 0x20;
			eax &= 0xff;
			ebx -= eax;
			edx = (int)edx * (int)ebx;
			edx = (int)edx >> 4;
			D(___24e874h) = edx;
			break;
		case 2:
			eax = B(___24e87eh);
			al = B(eax+___19a5b2h);
			eax &= 0xff;
			if((short)W(eax*2+___19a4bch) < 0){

				eax = B(___24e87eh);
				al = B(eax+___19a5c2h);
				eax &= 0xf;
				eax <<= 2;
				eax = 0 - eax;
			}
			else {

				eax = B(___24e87eh);
				al = B(eax+___19a5c2h);
				eax &= 0xf;
				eax <<= 2;
			}
			D(___24e874h) = eax;
			break;
		case 3:
			eax = B(___24e87eh);
			al = B(eax+___19a5c2h);
			eax &= 0xf;
			edx = eax*4;
			eax = rand__clib3r() - 0x4000;
			eax = (int)eax * (int)edx;
			eax = (int)eax >> 0xe;
			D(___24e874h) = eax;
			break;
		default:
			break;
		}

		dh = B(S3M_InitialSpeed);
		if(dh != B(___19a53eh)){
			eax = B(___24e87eh);
			edx = B(eax+___19a5c2h);
			ebx = edx;
			ebx = (int)ebx >> 4;
			edx = B(eax+___19a5b2h);
			edx += ebx;
			B(eax+___19a5b2h) = dl;
			if(dl >= 0x40){
				bh = dl - 0x40;
				B(eax+___19a5b2h) = bh;
			}
		}
		eax = B(___24e87eh);
		ebx = D(___24e850h);
		edx = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		ax = W(eax*2+___19a562h);
		ax += W(___24e874h);
		M_IMUL_PART(ax)
		edx = eax;
		eax = B(___24e87eh);
		cl = B(___24e878h);
		D(eax*4+___68990h) = edx;
		if(cl != 0){
			if((cl&0xf) == 0){
				dl = B(___19a53eh);
				if(dl != B(S3M_InitialSpeed)){
					edx = cl;
					ebx = edx;
					ebx = (int)ebx >> 4;
					edx = B(eax+___19a582h);
					edx += ebx;
					B(eax+___19a582h) = dl;
					if(dl > 0x40){
						B(eax+___19a582h) = 0x40;
					}
				}
			}
			cl = B(___24e878h);
			if((cl&0xf0) == 0){
				ch = B(S3M_InitialSpeed);
				if(ch != B(___19a53eh)){
					dl = cl;
					eax = B(___24e87eh);
					dl &= 0xf;
					dh = B(eax+___19a582h);
					dh -= dl;
					B(eax+___19a582h) = dh;
					if(dh > 0x40){
						bh = 0;
						B(eax+___19a582h) = bh;
					}
				}
			}
		}

		eax = B(___24e87eh);
		ebx = B(S3M_GlobalVolume);
		edx = B(eax+___19a582h);
		edx = (int)edx * (int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		break;
	case 8:
		eax = B(___24e87eh);
		ebx = eax*2;
		eax = B(___24e87eh);
		edx = eax*2;
		ax = W(ebx+___19a644h);
		if(ax != W(edx+___19a562h)){
			eax = B(___24e87eh);
			ebx = eax*2;
			eax = B(___24e87eh);
			edx = eax*2;
			ax = W(ebx+___19a644h);
			if(ax <= W(edx+___19a562h)){
				eax = B(___24e87eh);
				ax = W(eax*2+___24e880h);
				eax &= 0xffff;
				edx = eax*4;
				eax = B(___24e87eh);
				ax = W(eax*2+___19a562h);
				eax &= 0xffff;
				if((int)edx > (int)eax){
					eax = B(___24e87eh);
					ecx = 0;
					W(eax*2+___19a562h) = cx;
				}
				else {
					eax = B(___24e87eh);
					edx = al;
					dx = W(edx*2+___24e880h);
					di = W(eax*2+___19a562h);
					edx <<= 2;
					edi -= edx;
					W(eax*2+___19a562h) = di;
				}
				eax = B(___24e87eh);
				eax += eax;
				dx = W(eax+___19a562h);
				bx = W(eax+___19a644h);
				if(dx < bx) W(eax+___19a562h) = bx;
			}
			else {
				eax = B(___24e87eh);
				edx = al;
				dx = W(edx*2+___24e880h);
				cx = W(eax*2+___19a562h);
				edx <<= 2;
				ecx += edx;
				W(eax*2+___19a562h) = cx;
				eax = B(___24e87eh);
				ebx = eax*2;
				eax = B(___24e87eh);
				edx = eax*2;
				ax = W(ebx+___19a562h);
				if(ax > W(edx+___19a644h)){
					eax = B(___24e87eh);
					edx = eax*2;
					eax = B(___24e87eh);
					ebx = eax*2;
					ax = W(edx+___19a644h);
					W(ebx+___19a562h) = ax;
				}
			}

			eax = B(___24e87eh);
			ebx = D(___24e850h);
			edx = W(eax*2+___19a542h);
			ecx = D(ebx+edx*4);
			ax = W(eax*2+___19a562h);
			M_IMUL_PART(ax)
			edx = B(___24e87eh);
			D(edx*4+___68990h) = eax;
		}
		ch = B(___24e878h);
		if(ch != 0){
			if((ch&0xf) == 0){
				al = B(___19a53eh);
				if(al != B(S3M_InitialSpeed)){
					edx = ch;
					eax = B(___24e87eh);
					ebx = edx;
					ebx = (int)ebx >> 4;
					edx = B(eax+___19a582h);
					edx += ebx;
					B(eax+___19a582h) = dl;
					if(dl > 0x40){
						B(eax+___19a582h) = 0x40;
					}
				}
			}
			if((B(___24e878h)&0xf0) == 0){
				if(B(S3M_InitialSpeed) != B(___19a53eh)){
					eax = B(___24e87eh);
					B(eax+___19a582h) -= B(___24e878h) & 0xf;
					if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0;
				}
			}
		}
		eax = B(___24e87eh);
		edx = B(S3M_GlobalVolume);
		ebx = B(eax+___19a582h);
		edx = (int)edx * (int)ebx;
		D(eax*4+___68a10h) = 16*edx;
		break;
	case 9:
	case 10:
	case 11:
	case 12:
		break;
	case 13:
		eax = B(___19a540h);
		edx = B(S3M_InitialSpeed);
		edx = (int)edx * (int)eax;
		eax = B(___19a53eh);
		edx -= eax;
		ebx = B(___24e878h) & 0xf;
		eax = edx;
		edx = (int)edx >> 0x1f;
		edx = idiv_rem(eax, edx, ebx);

		if(edx == 0){

		dl = B(S3M_InitialSpeed);
		eax = B(___19a540h);
		edx = (int)edx * (int)eax;
		eax = B(___19a53eh);

		if(edx != eax){

		edx = 2*B(___24e87eh);
		W(edx+___688d0h) = W(edx+___19a542h);
		
		switch((B(___24e878h) >> 4) - 1){
		case 0:
			eax = B(___24e87eh);
			if(B(eax+___19a582h) < 1){
				B(eax+___19a582h) = 0;
			}
			else {
				B(eax+___19a582h)--;
			}
			break;
		case 1:
			eax = B(___24e87eh);
			if(B(eax+___19a582h) < 2){
				B(eax+___19a582h) = 0;
			}
			else {
				B(eax+___19a582h) -= 2;
			}
			break;
		case 2:
			eax = B(___24e87eh);
			if(B(eax+___19a582h) < 4){
				B(eax+___19a582h) = 0;
			}
			else {
				B(eax+___19a582h) -= 4;
			}
			break;
		case 3:
			eax = B(___24e87eh);
			if(B(eax+___19a582h) < 8){
				B(eax+___19a582h) = 0;
			}
			else{
				B(eax+___19a582h) -= 8;
			}
			break;
		case 4:
			eax = B(___24e87eh);
			if(B(eax+___19a582h) < 0x10){
				B(eax+___19a582h) = 0;
			}
			else {
				B(eax+___19a582h) -= 0x10;
			}
			break;
		case 5:
			eax = B(___24e87eh);
			edx = 2*B(eax+___19a582h);
			eax = edx;
			edx = (int)edx >> 0x1f;
			eax = idiv_quo(eax, edx, 3);
			edx = B(___24e87eh);
			B(edx+___19a582h) = al;
			break;
		case 6:
			eax = B(___24e87eh);
			B(eax+___19a582h) >>= 1;
			break;
		case 7:
			break;
		case 8:
			eax = B(___24e87eh);
			B(eax+___19a582h)++;
			if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0x40;
			break;
		case 9:		
			eax = B(___24e87eh);
			B(eax+___19a582h) += 2;
			if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0x40;
			break;
		case 10:
			eax = B(___24e87eh);
			B(eax+___19a582h) += 4;
			if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0x40;
			break;
		case 11:
			eax = B(___24e87eh);
			B(eax+___19a582h) += 8;
			if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0x40;
			break;
		case 12:
			eax = B(___24e87eh);
			B(eax+___19a582h) += 0x10;
			if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0x40;
			break;
		case 13:
			eax = B(___24e87eh);
			edx = B(eax+___19a582h);
			edx = 3*edx;
			eax = edx;
			edx = (int)edx >> 0x1f;
			eax = eax - edx;
			eax = (int)eax >> 1;
			dl = al;
			eax = B(___24e87eh);
			B(eax+___19a582h) = dl;
			eax = B(___24e87eh);
			if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0x40;
			break;
		case 14:
			eax = B(___24e87eh);
			B(eax+___19a582h) *= 2;
			eax = B(___24e87eh);
			if(B(eax+___19a582h) > 0x40) B(eax+___19a582h) = 0x40;
			break;
		default:
			break;
		}

		eax = B(___24e87eh);
		edx = B(S3M_GlobalVolume);
		ebx = B(eax+___19a582h);
		edx = (int)edx * (int)ebx;
		D(eax*4+___68a10h) = 16*edx;
		}
		}
		break;
	case 14:
		switch((B(eax+___19a5d2h) & 0xc) >> 2){
		case 0:
			eax = B(___24e87eh);
			eax = B(eax+___19a5b2h) & 0xff;
			edx = D(eax*2+___19a4bah);
			eax = B(___24e87eh);
			eax = B(eax+___19a5c2h) & 0xf;
			edx = (int)edx >> 0x10;
			eax = (int)eax * (int)edx;
			eax = (int)eax >> 8;
			D(___24e874h) = eax;
			break;
		case 1: 	
			eax = B(___24e87eh);
			eax = B(eax+___19a5b2h) & 0xff;
			edx = 0x20 - eax;
			eax = B(___24e87eh);
			eax = B(eax+___19a5c2h) & 0xf;
			eax = (int)eax * (int)edx;
			eax = (int)eax >> 6;
			D(___24e874h) = eax;
			break;
		case 2:		
			edx = B(eax+___19a5b2h);
			eax = B(eax+___19a5c2h) & 0xf;
			if((short)W(edx*2+___19a4bch) < 0) eax *= -1;
			D(___24e874h) = eax;
			break;
		case 3:		
			edx = B(eax+___19a5c2h) & 0xf;
			eax = rand__clib3r() - 0x4000;
			eax = (int)eax * (int)edx;
			eax = (int)eax >> 0xd;
			D(___24e874h) = eax;
			break;
		default:
			break;
		}

		if(B(S3M_InitialSpeed) != B(___19a53eh)){

			eax = B(___24e87eh);
			edx = B(eax+___19a5c2h);
			ebx = edx;
			ebx = (int)ebx >> 4;
			edx = B(eax+___19a5b2h);
			edx += ebx;
			B(eax+___19a5b2h) = edx & 0x3f;
		}

		eax = B(___24e87eh);
		eax = B(eax+___19a582h) & 0xff;
		D(___24e874h) += eax;

		if((int)D(___24e874h) < 0) D(___24e874h) = 0;
		if((int)D(___24e874h) > 0x40) D(___24e874h) = 0x40;

		eax = B(S3M_GlobalVolume);
		ecx = D(___24e874h);
		edx = eax;
		edx = (int)edx * (int)ecx;
		eax = B(___24e87eh);
		D(eax*4+___68a10h) = 16*edx;
		break;
	case 15:
		edx = B(___24e878h);
		edx = (int)edx >> 4;
		if(edx >= 0xc){
		ecx = eax*2;
		if(edx <= 0xc){
			if(B(eax+___19a5e4h) == 0){
				B(eax+___19a592h) = dl;
				B(eax+___19a5a2h) = dl;
				W(ecx+___688d0h) = si;
			}
			else {
				B(eax+___19a5e4h)--;
			}
		}
		else if(edx == 0xd){
			if(B(eax+___19a5e4h) == 0){
				edx = W(ecx+___19a604h);
				edx = (int)edx >> 8;
				B(___24e87fh) = dl;
				B(___24e87ch) = B(ecx+___19a604h);
				edx = W(ecx+___19a624h);
				edx = (int)edx >> 8;
				B(___24e87dh) = dl;
				W(___24e87ah) = W(ecx+___19a624h) & 0xff;

				if((B(___24e87fh)&0x20) != 0){

					if(W(___24e87ah) != 0){

						W(ecx+___19a542h) = W(___24e87ah);
						ebx = D(___24e864h);
						edx = W(___24e87ah);
						B(eax+___19a582h) = B(edx+ebx);
					}
					else {

						W(___24e87ah) = W(ecx+___19a542h);

						if(W(___24e87ah) == 0){

							B(___24e87dh) = 0;
						}
						else {

							if(!B(___24e87dh)||(B(___24e87dh) == 0xff)){

								edx = D(___24e864h);
								eax = W(___24e87ah);
								eax += edx;
								edx = B(___24e87eh);
								B(edx+___19a582h) = B(eax);
							}
						}
					}

					eax = 2*B(___24e87eh);
					W(eax+___688d0h) = W(___24e87ah);

					if(B(___24e87dh)&&(B(___24e87dh) != 0xff)){

						dl = B(___24e87dh);
						edx &= 0xf;
						dx = W(edx*2+___19a484h);
						ecx = B(___24e87dh);
						edx &= 0xffff;
						ecx = (int)ecx >> 4;
						edx = (int)edx >> cl;
						W(eax+___19a562h) = dx;
					}
				}

				if((B(___24e87fh)&0x40) != 0){

					edx = B(___24e87eh);
					B(edx+___19a582h) = B(___24e87ch);
				}

				eax = B(___24e87eh);
				ebx = D(___24e850h);
				edx = W(eax*2+___19a542h);
				ecx = D(ebx+edx*4);
				ax = W(eax*2+___19a562h);
				M_IMUL_PART(ax)
				edx = eax;
				eax = B(___24e87eh);
				D(eax*4+___68990h) = edx;
				ebx = B(eax+___19a582h);
				edx = B(S3M_GlobalVolume);
				edx = (int)edx * (int)ebx;
				D(eax*4+___68a10h) = 16*edx;
				B(eax+___19a592h) = 0;
				B(eax+___19a5a2h) = 0;
			}
			else {
				B(eax+___19a5e4h)--;
			}
		}
	}
		break;
	case 16:
		break;
	case 17:
		switch(B(eax+___19a5d2h) & 3){
		case 0:
			edx = B(eax+___19a5b2h);
			edx = D(edx*2+___19a4bah);
			al = B(eax+___19a5c2h);
			edx = (int)edx >> 0x10;
			eax &= 0xf;
			eax = (int)eax * (int)edx;
			eax++;
			eax = (int)eax >> 9;
			D(___24e874h) = eax;
			break;
		case 1:
			ebx = 0x20;
			edx = B(eax+___19a5b2h);
			al = B(eax+___19a5c2h);
			ebx -= edx;
			eax &= 0xf;
			eax = (int)eax * (int)ebx;
			eax = (int)eax >> 4;
			D(___24e874h) = eax;
			break;
		case 2:
			edx = B(eax+___19a5b2h);
			eax = B(eax+___19a5c2h) & 0xf;
			if((short)W(edx*2+___19a4bch) < 0) eax *= -4;
			D(___24e874h) = eax;
			break;
		case 3:
			edx = B(eax+___19a5c2h) & 0xf;
			eax = rand__clib3r() - 0x4000;
			eax = (int)eax * (int)edx;
			eax = (int)eax >> 0xe;
			D(___24e874h) = eax;
			break;
		default:	
			break;
		}

		if(B(S3M_InitialSpeed) != B(___19a53eh)){

			eax = B(___24e87eh);
			edx = B(eax+___19a5c2h);
			ebx = edx;
			ebx = (int)ebx >> 4;
			edx = B(eax+___19a5b2h);
			edx += ebx;
			B(eax+___19a5b2h) = dl;

			if(dl >= 0x40) B(eax+___19a5b2h) = dl - 0x40;
		}

		ecx = D(___24e850h);
		eax = B(___24e87eh);
		di = W(___24e874h);
		edx = W(eax*2+___19a542h);
		ax = W(eax*2+___19a562h);
		eax += edi;
		ecx = D(ecx+edx*4);
		M_IMUL_PART(ax)
		edx = B(___24e87eh);
		D(edx*4+___68990h) = eax;
		break;
	default:
		break;
	}
	}

	B(___24e87eh)++;
}

	B(___19a540h) = 1;
	B(___19a53eh)--;
}
}
}

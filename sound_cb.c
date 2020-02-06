typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;

#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))

#define X(r)	(*(word *)&r)
#define H(r)	(*((byte *)&r + 1))
#define L(r)	(*(byte *)&r)

#define __BOUNDS(v, l, h) (v)<(l)?(l):(v)>(h)?(h):(v)

extern byte ___68d7ch[];
extern byte ___68e14h[];
extern byte ___68d88h[];
extern byte ___68d84h[];
extern byte ___68d90h[];
extern byte ___68e94h[];
extern byte ___68d94h[];
extern byte ___68d7dh[];
extern byte ___68d48h[];
extern byte ___68d40h[];
extern byte ___68d80h[];
extern byte ___68d5eh[];
extern byte ___68d5ch[];
extern byte ___68d5dh[];
extern byte ___68d68h[];
extern byte ___68d34h[];
extern byte ___68d38h[];
extern byte ___68d60h[];
extern byte ___68d44h[];
extern byte ___68d64h[];
extern byte ___68d6ch[];
extern byte ___68d78h[];
extern byte ___68d72h[];
extern byte AUDIO_DATA_CB[];
extern byte ___68c40h[];
extern byte SOUND_SAMPLERATE[];
extern byte ___68d70h[];
extern byte ___68d74h[];
extern byte ___688d0h[];
extern byte ___68b30h[];
extern byte ___68b10h[];
extern byte ___68c38h[];
extern byte ___68910h[];
extern byte ___68a10h[];
extern byte ___68bb0h[];
extern byte ___68990h[];
extern byte ___68d30h[];
extern byte ___68d8ch[];
extern byte ___68a90h[];
extern byte ___68eb4h[];
extern byte ___68c3ch[];

dword ___694c0h_cdecl(dword esi, dword * edi){

	dword 	n, eax, ebx, ecx, edx, ebp, p_esi;

	p_esi = esi;

		eax = D(___68d7ch);
		ecx = D(esi*4+___68e14h);
		edx = D(___68d88h);
		ebp = D(___68d84h);

		if(B(esi+___68e94h)){

			edx = ~edx;
			ebp = ~ebp;
			edx += 1;
			ebp += !edx;
		}

		esi = D(esi*4+___68d94h);

		n = -1;
		while(++n < D(___68d90h)){

			ebx = B(esi+1);
			eax = B(esi);
			ebx -= eax;
			ebx = (ebx<<5)|(ecx>>0x1b);
			H(eax) = B(___68d7dh);
			ebx += D(___68d48h);
			L(eax) += B(ebx+0x1fe0);
			ecx += edx;
			ebx = D(eax*4+D(___68d40h));
			esi += ebp+!!(ecx < edx);
			edi[n] += ebx;
		}

		D(p_esi*4+___68e14h) = ecx;
		D(p_esi*4+___68d94h) = esi;

		return esi;
}

dword ___69923h_cdecl(dword esi, dword * edi){

	dword 	n, eax, ebx, ecx, edx, ebp, p_esi;

	p_esi = esi;

		eax = D(___68d7ch);
		ecx = D(esi*4+___68e14h);
		edx = D(___68d88h);
		ebp = D(___68d84h);

		if(B(esi+___68e94h)){
				
			edx = ~edx;
			ebp = ~ebp;
			edx += 1;
			ebp += !edx;
		}

		esi = D(esi*4+___68d94h);

		n = -1;
		while(++n < D(___68d90h)){

			ebx = B(esi+1);
			eax = B(esi);
			ebx -= eax;
			ebx = (ebx<<5)|(ecx>>0x1b);
			H(eax) = B(___68d7dh);
			ebx += D(___68d48h);
			L(eax) += B(ebx+0x1fe0);
			ecx += edx;
			ebx = D(eax*4+D(___68d40h));
			esi += ebp+!!(ecx < edx);
			edi[n] += ebx;
			edi[n+0x3c0] += ebx;
		}

		D(p_esi*4+___68e14h) = ecx;
		D(p_esi*4+___68d94h) = esi;

		return esi;
}

dword ___69e52h_cdecl(dword esi, dword * edi){

	dword 	n, eax, ebx, ecx, edx, edx2, ebp, p_esi;

	p_esi = esi;

		eax = D(___68d7ch);
		ecx = D(esi*4+___68e14h);
		edx2 = D(___68d80h);
		ebp = D(___68d84h);
		edx = D(___68d88h);

		if(B(esi+___68e94h)){
				
			edx = ~edx;
			ebp = ~ebp;
			edx += 1;
			ebp += !edx;
		}

		esi = D(esi*4+___68d94h);

		n = -1;
		while(++n < D(___68d90h)){

			ebx = B(esi+1);
			eax = B(esi);
			ebx -= eax;
			ebx = (ebx<<5)|(ecx>>0x1b);
			H(eax) = B(___68d7dh);
			ebx += D(___68d48h);
			L(eax) += B(ebx+0x1fe0);
			ecx += edx;
			L(edx2) = L(eax);
			ebx = D(eax*4+D(___68d40h));
			esi += ebp+!!(ecx < edx);
			edi[n] += ebx;
			ebx = D(edx2*4+D(___68d40h));
			edi[n+0x3c0] += ebx;
		}

		D(p_esi*4+___68e14h) = ecx;
		D(p_esi*4+___68d94h) = esi;

		return esi;
}

byte shrink_bytes(dword d){

	byte 	rslt = 0;

	dword 	n = -1;
	while(++n < sizeof(d)) rslt |= ((d>>(8*n))&1)<<n;

	return rslt;
}

void new___6a600h_cdecl(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

	ebp = D(___68d68h);
	edi = D(___68d60h);
	ecx = D(___68d38h);		// L
	esi = D(___68d34h);		// R
	ebx = D(___68d64h);
	edx = D(___68d44h);

	switch(shrink_bytes(D(___68d5ch)&0x00ffffff)){
	case 0:
		while(ebp){

			B(edi) = B(edx+(int)(short)W(esi+2));
			D(esi) = 0;
			edi += 1;
			esi += 4;
			ebp--;
		}
		break;
	case 1:
		while(ebp){

			B(edi) = B(edx+(int)(short)W(ecx+2));
			B(edi+1) = B(edx+(int)(short)W(esi+2));
			D(esi) = D(ecx) = 0;
			edi += 2;
			esi += 4;
			ecx += 4;
			ebp--;
		}
		break;
	case 2:
		while(ebp){

			W(edi) = __BOUNDS((int)D(esi), -32768, 32767);
			D(esi) = 0;
			edi += 2;
			esi += 4;
			ebp--;
		}
		break;
	case 3:
		while(ebp){

			W(edi) = __BOUNDS((int)D(ecx), -32768, 32767);		// L
			W(edi+2) = __BOUNDS((int)D(esi), -32768, 32767);	// R
			D(esi) = D(ecx) = 0;
			edi += 4;
			esi += 4;
			ecx += 4;
			ebp--;
		}
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		while(ebp){

			W(ebx) = __BOUNDS((int)D(ecx), -32768, 32767);
			W(edi) = __BOUNDS((int)D(esi), -32768, 32767);
			D(esi) = D(ecx) = 0;
			edi += 2;
			ebx += 2;
			esi += 4;
			ecx += 4;
			ebp--;
		}
		break;
	default:
		break;
	}
}

void new___6a600h_cdecl(void);
dword ___694c0h_cdecl(dword, dword *);
dword ___69923h_cdecl(dword, dword *);
dword ___69e52h_cdecl(dword, dword *);


void ___691deh_cdecl(dword eax, dword edx, dword edi){

	dword 	ebx, ecx, esi, ebp;
	unsigned long long 	ll_tmp, ll_tmp_sig;
	dword (*loc_cb)(dword, dword *);

	D(___68d60h) = edi;
	D(___68d64h) = edx;
	D(___68d68h) = eax;
	D(___68d6ch) = eax;
	D(___68d78h) = 0;

	while(1){

		if(W(___68d72h) == 0){

			(*(void (**)(void))AUDIO_DATA_CB)();
			edx = W(___68c40h);
			eax = W(SOUND_SAMPLERATE);
			ll_tmp = (long long)(int)eax * (long long)(int)edx;
			eax = ll_tmp;
			edx = ll_tmp >> 0x20;
			edx = (edx<<0x10)|(eax>>0x10);
			eax <<= 0x10;
			ebx = 0x30d4;
			ll_tmp = edx;
			ll_tmp <<= 0x20;
			ll_tmp |= eax;
			eax = ll_tmp/ebx;
			edx = ll_tmp%ebx;
			D(___68d70h) += eax;
		}

		eax = W(___68d72h);
		if(eax > D(___68d6ch)) eax = D(___68d6ch);
		W(___68d72h) -= X(eax);
		D(___68d74h) = eax;
		esi = 0;

		while(1){

			ebx = W(esi*2+___688d0h);

			if(ebx){

				if(X(ebx) != 0xffff){

					ebx--;
					ebx <<= 2;
					ebx += D(___68c38h);
					ebx = D(ebx);
					D(esi*4+___68b30h) = ebx;
					B(esi+___68e94h) = 0;
					eax = D(ebx);
					eax += D(esi*4+___68910h);
					L(edx) = B(ebx+0x10);
					L(edx) &= 3;

					if(L(edx)){

						if(L(edx) != 1){

							if((eax >= D(ebx+4))&&(eax > D(ebx+8))){

								eax -= D(ebx+8);
								ebp = D(ebx+4);
								ebp -= D(ebx+8);
								ebp <<= 1;
								ll_tmp_sig = (long long)(int)eax;
								eax = ll_tmp_sig/(int)ebp;
								edx = ll_tmp_sig%(int)ebp;
								ebp >>= 1;

								if(eax > ebp){

									B(esi+___68e94h) = 1;
									eax = edx;
									eax = 0-eax;
									eax += ebp;
								}
								else {
								
									eax = edx;
								}

								eax += D(ebx+8);
							}
						}
						else {

							if((eax >= D(ebx+4))&&(eax > D(ebx+8))){

								eax -= D(ebx+8);
								ebp = D(ebx+4);
								ebp -= D(ebx+8);
								ll_tmp_sig = (long long)(int)eax;
								eax = ll_tmp_sig/(int)ebp;
								edx = ll_tmp_sig%(int)ebp;
								eax = edx;
								eax += D(ebx+8);
							}
						}

						D(esi*4+___68d94h) = eax;
						D(esi*4+___68e14h) = 0;
					}
					else {

						if(eax >= D(ebx+4)){

							eax = 0;
							D(esi*4+___68d94h) = eax;
							D(esi*4+___68e14h) = eax;
							B(esi+___68e94h) = L(eax);
							D(esi*4+___68b30h) = eax;
							B(esi+___68b10h) = 1;
						}
						else {

							D(esi*4+___68d94h) = eax;
							D(esi*4+___68e14h) = 0;
						}
					}
				}
				else {

					eax = 0;
					D(esi*4+___68d94h) = eax;
					D(esi*4+___68e14h) = eax;
					B(esi+___68e94h) = L(eax);
					D(esi*4+___68b30h) = eax;
					B(esi+___68b10h) = 1;
				}

				W(esi*2+___688d0h) = 0;
				D(esi*4+___68910h) = 0;
			}

			ebx = D(esi*4+___68b30h);

			if(ebx){

				eax = D(esi*4+___68a10h);
				ll_tmp = (long long)(int)eax * (long long)(int)D(esi*4+___68bb0h);
				eax = ll_tmp;
				edx = ll_tmp>>0x20;
				eax = (eax>>0x19)|(edx<<7);
				eax <<= 8;

				if(eax){
					
					H(eax)--;
					D(___68d7ch) = eax;
					eax = D(esi*4+___68990h);
					ll_tmp = (long long)(int)eax * (long long)(int)D(___68d30h);
					eax = ll_tmp;
					edx = ll_tmp>>0x20;
					D(___68d84h) = edx;
					X(eax) = 0;
					D(___68d88h) = eax;
					eax = (eax>>0x10)|(edx<<0x10);
					D(___68d8ch) = eax;
					edi = D(___68d78h);
					edi <<= 2;

					if((B(___68d5ch)&1) == 0){

						edi += D(___68d34h);
						loc_cb = ___694c0h_cdecl;
					}
					else {

						eax = D(esi*4+___68a90h);
						eax >>= 0xc;
						if(eax == 0){

							edi += D(___68d34h);
							loc_cb = ___694c0h_cdecl;
						}
						else {

							if(L(eax) < 0xf){

								if((L(eax) < 7)||(L(eax) > 8)){

									edx = B(eax+___68eb4h);
									edx = (int)edx * (int)D(___68d7ch);
									edx >>= 8;
									L(eax) = 0-L(eax);
									L(eax) += 0x10;
									eax = B(eax+___68eb4h);
									eax = (int)eax * (int)D(___68d7ch);
									eax >>= 8;
									D(___68d7ch) = edx;
									D(___68d80h) = eax;
									edi += D(___68d34h);
									loc_cb = ___69e52h_cdecl;
								}
								else {

									edi += D(___68d34h);
									eax = (int)D(___68d7ch)*0x96;
									eax >>= 8;
									D(___68d7ch) = eax;
									loc_cb = ___69923h_cdecl;
								}
							}
							else {
									
								edi += D(___68d38h);
								loc_cb = ___694c0h_cdecl;
							}
						}
					}

					ecx = D(___68d74h);

					while(1){

						if(B(esi+___68e94h) == 0){

							eax = D(ebx+4);
							eax -= D(esi*4+___68d94h);
						}
						else {
								
							eax = D(esi*4+___68d94h);
							eax -= D(ebx+8);
						}

						if((int)eax < 0) eax = 0;
						edx = 0;

						if(D(___68d8ch) == edx){

							D(___68d90h) = ecx;
						}
						else {

							edx = (edx<<0x10)|(eax>>0x10);
							eax <<= 0x10;
							X(eax) = W(esi*4+___68e14h);
							if(B(esi+___68e94h) == 0) X(eax) = 0-X(eax);
							ll_tmp = edx;
							ll_tmp <<= 0x20;
							ll_tmp |= eax;
							eax = ll_tmp/D(___68d8ch);
							edx = ll_tmp%D(___68d8ch);
							eax++;
							D(___68d90h) = eax;
							if(D(___68d90h) > ecx) D(___68d90h) = ecx;
						}

						ecx -= D(___68d90h);
						eax = loc_cb(esi, edi);
						edi += 4*D(___68d90h);
						if(ecx == 0) break;
						if((B(ebx+0x10)&3) == 0){

							D(esi*4+___68d94h) = 0;
							D(esi*4+___68e14h) = 0;
							D(esi*4+___68b30h) = 0;
							B(esi+___68b10h) = 1;
							break;
						}

						if((B(ebx+0x10)&2) != 0){

							if(B(esi+___68e94h)){

								eax -= D(ebx+8);
								D(esi*4+___68e14h) = ~D(esi*4+___68e14h);
								eax = ~eax;
								D(esi*4+___68e14h) += 1;
								eax += 1+!D(esi*4+___68e14h);
								eax += D(ebx+8);
							}
							else {
									
								eax -= D(ebx+0xc);
								D(esi*4+___68e14h) = ~D(esi*4+___68e14h);
								eax = ~eax;
								D(esi*4+___68e14h) += 1;
								eax += 1+!D(esi*4+___68e14h);
								eax += D(ebx+0xc);
							}

							D(esi*4+___68d94h) = eax;
							B(esi+___68e94h) ^= 1;
						}
						else {
								
							eax -= D(ebx+0xc);
							eax += D(ebx+8);
							D(esi*4+___68d94h) = eax;
						}
					}
				}
			}
		
			esi++;
			if(esi > D(___68c3ch)) break;
		}

		eax = D(___68d74h);
		D(___68d78h) += eax;
		D(___68d6ch) -= eax;
		if(D(___68d6ch) == 0) break;
	}
	
	new___6a600h_cdecl();
}

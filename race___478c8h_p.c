#include "drally.h"
#include "drally_keyboard.h"
#include "drmemory.h"
#include "sfx.h"

#pragma pack(1)
typedef struct x21_s {
    __DWORD__   __0;    //  +00
    __DWORD__   __4;    //  +04
    __DWORD__   __8;    //  +08
    __DWORD__   __C;    //  +0c
    __DWORD__   _10;    //  +10
    __DWORD__   _14;    //  +14
    __DWORD__   _18;    //  +18
    __DWORD__   _1C;    //  +1c
    __BYTE__    _20;    //  +20
} x21_t;

	extern __BYTE__ ___2432cch[];
	extern __BYTE__ ___2432d0h[];
	extern __BYTE__ ___2432e0h[];
	extern __BYTE__ ___2432e8h[];
	extern __POINTER__ ___2432d8h;
	extern __POINTER__ ___2432d4h;
	extern __POINTER__ BACKBUFFER;
	extern x21_t ___243e74h[];
	extern __BYTE__ kmap[];
	extern __BYTE__ ___2432e4h[];
	extern __BYTE__ ___243d14h[];
	extern __BYTE__ ___24330ch[];
	extern __BYTE__ ___2432dch[];
	extern __POINTER__ CPY_GEN_MES_BPK;
	extern __BYTE__ ___243878h[];
	extern __BYTE__ ___243330h[];
	extern __BYTE__ * VGA13_ACTIVESCREEN;
	extern int CURRENT_VIEWPORT_X;
	extern __BYTE__ ___24387ch[];

	static int ___1a30a0h[100];
	
void ___59cd8h(void);
__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
int rand_watcom106(void);
void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___58c60h(void);
void __VGA13_PRESENTSCREEN__(void);
__DWORD__ ___47d8ch(__DWORD__);
void ___47e90h(__DWORD__);
void ___4495ch(void);

static int r204(unsigned int val){

	val %= 204;

	return (val>101)?(203-val):val;
}

// PAUSE, RACE OVER, DIALOG BOX LOAD ANIMATION
static void ___47304h(void){

#if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
	// TODO fix the animation
	for (int i = 0; i < 76; i++) {
		memcpy(&___2432d8h[(i + 64) * 320 + (320 - 204 + CURRENT_VIEWPORT_X)/ 2], &CPY_GEN_MES_BPK[i * 204], 204);
	}
#else
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
    int     i, j, n, k, l;
    long long   ll_tmp;


    ebp = 0;
    D(___2432e4h) = ebp;

    n = -1;
    while(++n < 969){

		if(___243e74h[n]._20 != 100){

            l = D(___24330ch)+___243e74h[n]._20;

            if(l >= 70){

                k = ___243e74h[n]._20-1;
                while(++k < 70){

                    ___243e74h[n].__0 += ___243e74h[n].__8;
                    ___243e74h[n].__4 += ___243e74h[n].__C;
                }

                ___243e74h[n]._20 = 70;
            }
            else {
                    
                ___243e74h[n]._20 += B(___24330ch);
                
                i = -1;
                while(++i < (int)D(___24330ch)){
                    
                    ___243e74h[n].__0 += ___243e74h[n].__8;
                    ___243e74h[n].__4 += ___243e74h[n].__C;
                }

                ebx = (int)(___243e74h[n].__0+0x8000)>>0x10;            // x
                edx = (int)(___243e74h[n].__4+0x8000)>>0x10;            // y
                D(___2432d8h+0x140*(edx+0)+ebx) = ___243e74h[n]._10;
                D(___2432d8h+0x140*(edx+1)+ebx) = ___243e74h[n]._14;
                D(___2432d8h+0x140*(edx+2)+ebx) = ___243e74h[n]._18;
                D(___2432d8h+0x140*(edx+3)+ebx) = ___243e74h[n]._1C;
            }

            if(___243e74h[n]._20 >= 70){

                ebx = (int)(___243e74h[n].__0+0x8000)>>0x10;            // x
                eax = (int)(___243e74h[n].__4+0x8000)>>0x10;            // y
                D(___2432d8h+0x140*(eax+0)+ebx) = ___243e74h[n]._10;
                D(___2432d8h+0x140*(eax+1)+ebx) = ___243e74h[n]._14;
                D(___2432d8h+0x140*(eax+2)+ebx) = ___243e74h[n]._18;
                D(___2432d8h+0x140*(eax+3)+ebx) = ___243e74h[n]._1C;
                D(___2432e4h)++;
            }
        }
        else {

            ebp++;

            if(((int)D(___2432e8h) < 0xf24)&&((int)ebp < 0x14)){

                ___243e74h[n]._10 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+0));
                ___243e74h[n]._14 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+1));
                ___243e74h[n]._18 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+2));
                ___243e74h[n]._1C = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+3));
                ___243e74h[n].__0 = 0x10000*___1a30a0h[D(___2432e0h)];
                ___243e74h[n].__4 = 0xc40000;

                ll_tmp = (int)(D(___2432cch)+(CURRENT_VIEWPORT_X>>0x1)+0x39-___1a30a0h[D(___2432e0h)]);
                ll_tmp <<= 0x10;
                ___243e74h[n].__8 = ll_tmp/70;
                ll_tmp = (int)(D(___2432d0h)-132);
                ll_tmp <<= 0x10;
                ___243e74h[n].__C = ll_tmp/70;
                ___243e74h[n]._20 = 0;
                D(___2432e8h) += 0x4;
                D(___2432d0h) += 0x4;

                if(D(___2432d0h) == 0x4c){

                    D(___2432d0h) = 0;
                    D(___2432cch) += 0x4;
                }

                D(___2432e0h)++;
                if((int)D(___2432e0h) >= 100) D(___2432e0h) = 0;
            }
        }
    }
#endif
}

// PAUSE, RACE OVER, DIALOG BOX UNLOAD ANIMATION
static int ___47620h(void){

#if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
	// TODO fix the animation
	return 969;
#else
	int 	i, j, n, rslt;

	rslt = 0;
	n = -1;
	while(++n < 969){

		if(___243e74h[n]._20 <= 70){
	
			i = -1;
			while(++i < (int)D(___24330ch)){
				
				___243e74h[n].__C += D(___2432dch);
				___243e74h[n].__0 += ___243e74h[n].__8;
				___243e74h[n].__4 += ___243e74h[n].__C;
			}

			if((int)___243e74h[n].__0 <= 0){

				___243e74h[n].__0 = 0;
				___243e74h[n].__8 = 0-___243e74h[n].__8;
			}

			if((int)___243e74h[n].__0 >= 0x13c0000){

				___243e74h[n].__0 = 0x13c0000;
				___243e74h[n].__8 = 0-___243e74h[n].__8;
			}

			i = (int)(___243e74h[n].__4+0x8000)>>0x10;
			j = (int)(___243e74h[n].__0+0x8000)>>0x10;

			if(i <= 196){

				D(___2432d8h+j+0x140*(i+0)) = ___243e74h[n]._10;
				D(___2432d8h+j+0x140*(i+1)) = ___243e74h[n]._14;
				D(___2432d8h+j+0x140*(i+2)) = ___243e74h[n]._18;
				D(___2432d8h+j+0x140*(i+3)) = ___243e74h[n]._1C;
			}
			else {

				___243e74h[n]._20 = 70;
				rslt++;
			}
		}
	}

	return rslt;
#endif
}

void race___478c8h(__DWORD__ A1){

	int 	i, j, n;


    D(___2432cch) = 0;
    D(___2432d0h) = 0;
    D(___2432e0h) = 0;
    D(___2432e8h) = 0;
    ___2432d8h = ___3f71ch__allocateMemory(0xfa00);
    ___2432d4h = ___3f71ch__allocateMemory(0xfa00);
    j = 0;
    memset(___2432d8h, 0, 0xfa00);

	n = -1;
    while(++n < 200) memcpy(___2432d4h+0x140*n, BACKBUFFER+0x200*n+0x60, 0x140);

	n = -1;
    while(++n < 969){

		___243e74h[n].__0 = 0;
		___243e74h[n].__4 = 0;
		___243e74h[n].__8 = 0;
		___243e74h[n].__C = 0;
		___243e74h[n]._20 = 0x64;
    }

	n = -1;
    while(++n < 100) ___1a30a0h[n] = rand_watcom106()%316;

	memcpy(___2432d8h, ___2432d4h, 0xfa00);
	memcpy(VGA13_ACTIVESCREEN, ___2432d8h, 0xfa00);
    __VGA13_PRESENTSCREEN__();
    dRally_Sound_freeEffectChannel(0x5);
    dRally_Sound_pushEffect(0x5, SFX_MONSTER, 0, 0x10000, 0x28000, 0x8000);
    memset(kmap, 0, 0x100);
    D(___2432e4h) = 0;

    i = 0;
	n = 0;
	while(n == 0){

		if(((int)D(___2432e4h) >= 0x3c8)&&(i == 0)){
		
		    i = 0x1;
		    dRally_Sound_freeEffectChannel(0x5);
        }

		___59cd8h();
		if((kmap[DR_SCAN_ENTER] != 0)||(kmap[DR_SCAN_KP_ENTER] != 0)||(kmap[DR_SCAN_Y] != 0)||(kmap[DR_SCAN_N] != 0)) n = 0x1;
		if(kmap[DR_SCAN_F1] != 0) j = n = 0x1;
		if((D(___243d14h) == -1)&&(kmap[DR_SCAN_Y] == 1)) D(___243d14h) = 0x1;

		resetCounter(2);
		resetCounter(5);
		___58c60h();
		memcpy(VGA13_ACTIVESCREEN+0x5000, ___2432d8h+0x5000, 0xaa00);
		__VGA13_PRESENTSCREEN__();
		memcpy(___2432d8h+0x5000, ___2432d4h+0x5000, 0xaa00);
		___47304h();
		D(___24330ch) = getCounter(2);
		if((int)D(___24330ch) < 1) D(___24330ch) = 1;
		if(((int)D(___2432e4h) >= 0x3c8)&&(A1 != 0)) n = 0x1;
	}

	memset(kmap, 0, 0x100);
	dRally_Sound_freeEffectChannel(0x5);

	D(___2432d0h) = 0;
	D(___2432dch) = 0x3333;
	D(___2432cch) = 0;

	i = 0;
	n = -1;
	while(++n < 969){

		___243e74h[n].__8 = 0x10000*((rand_watcom106()%4)-2);
		___243e74h[n].__C = 0x10000*((rand_watcom106()%3)-r204(D(___2432cch))/25);
		___243e74h[n]._10 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+0));
		___243e74h[n]._14 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+1));
		___243e74h[n]._18 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+2));
		___243e74h[n]._1C = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+3));
		if(___243e74h[n]._20 != 0x64) i++;
		D(___2432d0h) += 4;
		
		if(D(___2432d0h) == 0x4c){
		
			D(___2432d0h) = 0;
			D(___2432cch) += 4;
		}
	}

	dRally_Sound_pushEffect(0x5, SFX_EXPLOSION, 0, 0x10000, 0x28000, 0x8000);

	while(1){

		resetCounter(5);
		resetCounter(2);
		___58c60h();
		memcpy(VGA13_ACTIVESCREEN, ___2432d8h, 0xfa00);
		__VGA13_PRESENTSCREEN__();
		memcpy(___2432d8h, ___2432d4h, 0xfa00);
		if(___47620h() >= i) break;
		D(___24330ch) = getCounter(2);
		if((int)D(___24330ch) < 1) D(___24330ch) = 1;
	}

	dRally_Sound_freeEffectChannel(0x5);
	memcpy(VGA13_ACTIVESCREEN, ___2432d4h, 0xfa00);
	__VGA13_PRESENTSCREEN__();
	dRMemory_free(___2432d8h);
	dRMemory_free(___2432d4h);
	resetCounter(5);
	resetCounter(2);
	setCounter(3, D(___243878h));
	D(___243330h) = D(___243878h);
	if(j != 0) kmap[DR_SCAN_F1] = 0x1;
}

void race___47ed8h(__DWORD__ A0){

	__DWORD__	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x338];


	D(___24387ch) = 0;
	D(___2432cch) = 0;
	D(___2432d0h) = 0;
	D(___2432e0h) = 0;
	D(___2432e8h) = 0;
	___2432d8h = ___3f71ch__allocateMemory(0xfa00);
	___2432d4h = ___3f71ch__allocateMemory(0xfa00);
	memset(___2432d8h, 0, 0xfa00);
	ebx = 0;

	edx = 0;
	while(1){

		memcpy(___2432d4h+edx, BACKBUFFER+ebx+0x60, 0x140);
		edx += 0x140;
		ebx += 0x200;
		if((int)edx >= 0xfa00) break;
	}

	eax = 0;
	while(1){

		___243e74h[eax].__0 = 0;
		___243e74h[eax].__4 = 0;
		___243e74h[eax].__C = 0;
		___243e74h[eax].__8 = 0;
		___243e74h[eax]._20 = 0x64;
		eax++;
		if(eax == 969) break;
	}

	ebx = 0;
	while(1){

		eax = rand_watcom106();
		edx = (int)eax>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x13c);
		___1a30a0h[ebx] = edx;
		ebx++;
		if(ebx == 100) break;
	}

	memcpy(___2432d8h, ___2432d4h, 0xfa00);
	memcpy(VGA13_ACTIVESCREEN, ___2432d8h, 0xfa00);
	dRally_Sound_freeEffectChannel(5);
	dRally_Sound_pushEffect(5, 0x11, 0, 0x10000, 0x28000, 0x8000);
	memset(kmap, 0, 0x100);
	edx = 0;
	D(___2432e4h) = 0;
	D(esp+0x334) = 0;

	while(1){

		if((int)D(___2432e4h) >= 0x3c8){

			if(D(esp+0x334) == 0){
					
				dRally_Sound_freeEffectChannel(5);
				D(esp+0x334) = 1;
			}

			if(A0 == 0){

				___59cd8h();

				eax = 0;
				while(1){

					edx += B(kmap+eax);
					eax++;
					if((int)eax >= 0x100) break;
				}
			}

			if(A0 == 1){

				if(___47d8ch(0x63) != 0) edx = 1;
				if(___47d8ch(0x62) != 0){
				
					edx = 1;
					D(___243d14h) = 1;
				}
			}

			if((A0 == 0)&&(D(___243d14h) == -1)&&(B(kmap+0x15) == 1)) D(___243d14h) = 1;
		} // i

		if((A0 == 0)&&(edx != 0)) ___47e90h((D(___243d14h) != 1)?0x63:0x62);

		resetCounter(2);
		resetCounter(5);
		___58c60h();
		memcpy(VGA13_ACTIVESCREEN+0x5000, ___2432d8h+0x5000, 0xfa00-0x5000);
		memcpy(___2432d8h+0x5000, ___2432d4h+0x5000, 0xfa00-0x5000);
		___47304h();
		D(___24330ch) = getCounter(2);
		if((int)D(___24330ch) < 1) D(___24330ch) = 1;
		if(edx != 0) break;
	} // w

	memset(kmap, 0, 0x100);
	dRally_Sound_freeEffectChannel(5);

	ebx = 0;
	while(1){

		eax = ebx/0x19;
		D(esp+4*ebx) = 0-eax;
		ebx++;
		if((int)ebx >= 0x66) break;
	}

	eax = 0x198;
	edx = 0x198;
	while(1){

		D(esp+eax) = D(esp+edx);
		edx -= 4;
		eax += 4;
		if(eax == 0x330) break;
	}

	D(___2432d0h) = 0;
	D(esp+0x330) = 0;
	D(___2432dch) = 0x3333;
	D(___2432cch) = 0;

	ebp = 0;
	while(1){

		if(___243e74h[ebp]._20 != 0x64) D(esp+0x330)++;
		edx = rand_watcom106()%3;
		___243e74h[ebp].__C = 0x10000*(D(esp+4*D(___2432cch))+edx);
		edx = rand_watcom106()%4;
		___243e74h[ebp].__8 = 0x10000*(edx-2);
		___243e74h[ebp]._10 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+0));
		___243e74h[ebp]._14 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+1));
		___243e74h[ebp]._18 = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+2));
		___243e74h[ebp]._1C = D(CPY_GEN_MES_BPK+D(___2432cch)+0xcc*(D(___2432d0h)+3));
		D(___2432d0h) += 4;
		
		if(D(___2432d0h) == 0x4c){

			D(___2432d0h) = 0;
			D(___2432cch) += 4;
		}

		ebp++;
		if((int)ebp >= 969) break;
	}

	dRally_Sound_pushEffect(5, 0x15, 0, 0x10000, 0x28000, 0x8000);

	while(1){

		resetCounter(2);
		resetCounter(5);
		___58c60h();
		memcpy(VGA13_ACTIVESCREEN, ___2432d8h, 0xfa00);
		memcpy(___2432d8h, ___2432d4h, 0xfa00);
		if((int)___47620h() >= (int)D(esp+0x330)) break;
		D(___24330ch) = getCounter(2);
		if((int)D(___24330ch) < 1) D(___24330ch) = 1;
	}

	dRally_Sound_freeEffectChannel(5);
	memcpy(VGA13_ACTIVESCREEN, ___2432d4h, 0xfa00);
	dRMemory_free(___2432d8h);
	dRMemory_free(___2432d4h);
	resetCounter(2);
	resetCounter(5);
	setCounter(3, D(___243878h));
	D(___243330h) = D(___243878h);
	___4495ch();
	D(___24387ch) = 1;
	return;
}

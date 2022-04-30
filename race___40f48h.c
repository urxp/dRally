#include "drally.h"
#include "sfx.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243330h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___24332ch[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243cd4h[];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___1a10a0h[];
	extern __BYTE__ ___1a10a8h[];
	extern int LAP_PREVIOUS_MIN;
	extern int LAP_PREVIOUS_SEC;
	extern __BYTE__ ___1a1090h[];
	extern int LAP_PREVIOUS_100;
	extern int CURRENT_VIEWPORT_X;
	extern __BYTE__ ___1c9f10h[];
	extern __POINTER__ BACKBUFFER;
	extern int NUM_OF_CARS;
	extern __BYTE__ ___243854h[];
	extern __POINTER__ GOALNUM2_BPK;
	extern __BYTE__ ___1de210h[];
	extern int NUM_OF_LAPS;
	extern __BYTE__ ___1de580h[];
	extern __POINTER__ DAMSLID_BPK;
	extern __BYTE__ ___1c9ec0h[];
	extern __BYTE__ ___1c9ee0h[];
	extern __BYTE__ ___1c9ef0h[];
	extern __BYTE__ ___1c9ed0h[];
	extern __BYTE__ ___1c9f00h[];
	extern __BYTE__ ___1d8a10h[];
	extern __BYTE__ ___1d2710h[];
	extern __BYTE__ ___243338h[];
	extern __BYTE__ ___2435c4h[];
	extern __POINTER__ SIDEBOM1_BPK;
	extern __BYTE__ ___243cdch[];
	extern __BYTE__ ___243cb8h[];
	extern __BYTE__ ___1d7810h[];
	extern __BYTE__ ___1de530h[];
	extern __BYTE__ ___196de8h[];
	extern __BYTE__ ___196dech[];
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___196df4h[];
	extern __BYTE__ ___1d5890h[0x1f80];
	extern __POINTER__ RASTI1_BPK;


void race___40864h(void);
__DWORD__ ___4256ch_cdecl(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3, __DWORD__ A4, __DWORD__ A5, __DWORD__ A6, __DWORD__ A7, __DWORD__ A8);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___424c8h_v2(const char *, int x, int y);
void DamageWarning(void);
double dRMath_ceil(double);

static void helper00(int A0){

    int     eax, edx;

    eax = A0;
    edx = (int)eax>>0x1f;
    ___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
    edx = (int)eax>>0x1f;
    ___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x3c);
    ___4256ch_cdecl(___1d7810h, 6, 6, eax, 16, 0x587b-0x40+CURRENT_VIEWPORT_X, -6, 0);

    eax = A0;
    edx = (int)eax>>0x1f;
    ___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
    edx = (int)eax>>0x1f;
    ___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x3c);
    ___4256ch_cdecl(___1d7810h, 6, 6, edx, 16, 0x5889-0x40+CURRENT_VIEWPORT_X, 6, 0);

    eax = A0;
    edx = (int)eax>>0x1f;
    ___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);

    ___4256ch_cdecl(___1d7810h, 6, 6, (int)(1.42*(double)(int)edx), 16, 0x5897-0x40+CURRENT_VIEWPORT_X, 6, 0);
}

static int helper01(int A0){

    int     eax, edx;

    edx = 0x10000*A0;
    eax = 0x10000*edx;
    edx = (int)edx>>0x10;
    ___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x20000);

    return eax;
}

// LEFT SIDE PANEL
void race___40f48h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, P1, P2, P3, P4;
	__BYTE__ 	esp[0x38];
	int 	i, j, k, n;
    __BYTE__    px;
    __POINTER__  edip;
    struct_54_t *   s_54;
    struct_35e_t *  s_35e;


    s_35e = (struct_35e_t *)___1e6ed0h;
    s_54 = (struct_54_t *)___1de7d0h;

    D(___243334h) = getCounter(3)-D(___243330h);
    D(___243330h) = getCounter(3);
    D(___24332ch) = helper01(D(___243334h));

	if((int)getCounter(1) > 0xbe){

		if(s_35e[D(MY_CAR_IDX)].Finished == 0){

            D(___243cd4h) += D(___243334h);
            D(___243ca0h) += D(___243334h);
            n = D(___243cd4h)/70;
            D(___1a10a0h) = n/60;
            D(___1a10a8h) = n%60;
            D(___1a1090h) = (int)(1.42*(double)(int)(D(___243cd4h)%70));
            n = D(___243ca0h)/70;
            LAP_PREVIOUS_MIN = n/60;
            LAP_PREVIOUS_SEC = n%60;
            LAP_PREVIOUS_100 = (int)(1.42*(double)(int)(D(___243ca0h)%70));
        }
    }

	if(CURRENT_VIEWPORT_X < 0x40) race___40864h();
		
    n = -1;
    while(++n < 0xc8) memcpy(BACKBUFFER+0x200*n+0x20+CURRENT_VIEWPORT_X, ___1c9f10h+0x40*n, 0x40);

    // FINISH FLAGS
    n = -1;
    while(++n < NUM_OF_CARS){

        if(s_35e[D(___243854h+4*n)].Finished != 0){

            j = -1;
            while(++j < 28){

                i = -1;
                while(++i < 22){

                    if((px = B(GOALNUM2_BPK+22*j+i)) != 0) B(BACKBUFFER+0x200*(32*n+j+78)+CURRENT_VIEWPORT_X+i+36) = px;
                }
            }
        }
    }

    n = NUM_OF_CARS-2;
    while(++n < 3){

        j = -1;
        while(++j < 0x20){

            i = j%2;
            while(i < 0x40){

                B(BACKBUFFER+0x200*(0x20*n+j+104)+0x20+i+CURRENT_VIEWPORT_X) = 0;
                i += 2;
            }
        }
    }

// RACE NUMBER OF LAPS
    n = -1;
    while(++n < NUM_OF_CARS){

        j = -1;
        while(++j < 10){

            i = -1;
            while(++i < 8){

                if((px = B(___1de210h+0x50*NUM_OF_LAPS+8*j+i)) != 0) B(BACKBUFFER+0x200*(0x20*n+j+90)+CURRENT_VIEWPORT_X+i+0x3a-5*!n) = px;
            }
        }
    }

// TOTAL NUMBER OF LAPS
    n = -1;
    while(++n < NUM_OF_CARS){

        j = -1;
        while(++j < 10){

            i = -1;
            while(++i < 8){

                if((px = B(___1de210h+0x50*s_35e[D(___243854h+4*n)].Lap+8*j+i)) != 0) B(BACKBUFFER+0x200*(0x20*n+j+90)+CURRENT_VIEWPORT_X+i+0x24-2*!n) = px;
            }
        }
    }

    0x19000;
    102400;

// 2ND CAR DAMAGE BAR
    if(NUM_OF_CARS > 1){

        k = (int)(64.0-(dRMath_ceil((double)(int)D(___1de580h+0x94*D(___243854h+4)+0x18)/1024.0)/1.57));

        n = -1;
        while(++n < 9){

            memcpy(BACKBUFFER+0x200*(n+104)+0x20+0x40-k+CURRENT_VIEWPORT_X, DAMSLID_BPK+0x40*n+0x40-k, k);
        }
    }

// 3RD CAR DAMAGE BAR
    if(NUM_OF_CARS > 2){

        k = (int)(64.0-(dRMath_ceil((double)(int)D(___1de580h+0x94*D(___243854h+8)+0x18)/1024.0)/1.57));

        n = -1;
        while(++n < 9){

            memcpy(BACKBUFFER+0x200*(n+136)+0x20+0x40-k+CURRENT_VIEWPORT_X, DAMSLID_BPK+0x40*n+0x40-k, k);
        }
    }

// 4TH CAR DAMAGE BAR
    if(NUM_OF_CARS > 3){

        k = (int)(64.0-(dRMath_ceil((double)(int)D(___1de580h+0x94*D(___243854h+0xc)+0x18)/1024.0)/1.57));

        n = -1;
        while(++n < 9){

            memcpy(BACKBUFFER+0x200*(n+168)+0x20+0x40-k+CURRENT_VIEWPORT_X, DAMSLID_BPK+0x40*n+0x40-k, k);
        }
    }

// DRIVER'S NAMES
    n = -1;
    while(++n < NUM_OF_CARS){

        ___424c8h_v2(___1de580h+0x94*D(___243854h+4*n)+0x44, CURRENT_VIEWPORT_X+0x23, 32*n+74-72*!n);
    }

// POSITIONS
    D(___1c9ec0h+0) = s_35e[D(___243854h)].Position;
    D(___1c9ec0h+4) = s_35e[D(___243854h+4)].Position;
    D(___1c9ec0h+8) = s_35e[D(___243854h+8)].Position;
    D(___1c9ec0h+0xc) =  s_35e[D(___243854h+0xc)].Position;

    ebx = 0;
    while(1){

        if((int)D(4*ebx+___1c9ee0h) > (int)D(4*ebx+___1c9ec0h)){

            D(4*ebx+___1c9ef0h) = 0x70000*(D(4*ebx+___1c9ee0h)-1);
            D(4*ebx+___1c9ed0h) = 7*(D(4*ebx+___1c9ec0h)-1);
            D(4*ebx+___1c9f00h) = 0x10000*(D(4*ebx+___1c9ec0h)-D(4*ebx+___1c9ee0h));
        }

        if((int)D(4*ebx+___1c9ee0h) < (int)D(4*ebx+___1c9ec0h)){

            D(4*ebx+___1c9ef0h) = 0x70000*(D(4*ebx+___1c9ee0h)-1);
            D(4*ebx+___1c9ed0h) = 7*(D(4*ebx+___1c9ec0h)-1);
            D(4*ebx+___1c9f00h) = 0x10000*(D(4*ebx+___1c9ec0h)-D(4*ebx+___1c9ee0h));
        }

        eax = D(4*ebx+___1c9f00h)+0x8000;
        eax = (int)eax>>0x10;

        if((int)eax <= 0){

            eax = D(4*ebx+___1c9f00h);
            ___imul32((__POINTER__)&eax, (__POINTER__)&edx, D(___24332ch));
            eax += 0x8000;
            edx += !!(eax < 0x8000);
            eax = (eax >> 0x10)|(edx << 0x10);
            D(4*ebx+___1c9ef0h) += eax;
            eax = D(4*ebx+___1c9ef0h)+0x8000;
            eax = (int)eax>>0x10;

            if((int)eax < (int)D(4*ebx+___1c9ed0h)) D(4*ebx+___1c9ef0h) = 0x70000*(D(4*ebx+___1c9ec0h)-1);
        }
        else {

            eax = D(4*ebx+___1c9f00h);
            ___imul32((__POINTER__)&eax, (__POINTER__)&edx, D(___24332ch));
            eax += 0x8000;
            edx += !!(eax < 0x8000);
            eax = (eax >> 0x10)|(edx << 0x10);
            D(4*ebx+___1c9ef0h) += eax;
            eax = D(4*ebx+___1c9ef0h)+0x8000;
            eax = (int)eax>>0x10;

            if((int)eax > (int)D(4*ebx+___1c9ed0h)) D(4*ebx+___1c9ef0h) = 0x70000*(D(4*ebx+___1c9ec0h)-1);
        }

        ebx++;
        if(ebx == 4) break;
    }

    eax = D(___1c9ef0h)+0x8000;
    eax = (int)eax>>0x10;

    j = -1;
    while(++j < 0x20){

        i = -1;
        while(++i < 0x20) B(BACKBUFFER+0x9080-0x40+CURRENT_VIEWPORT_X+0x200*j+i) = B(___1d8a10h+0x400*eax+0x20*j+i);
    }

    ebp = 0x1;
    if((int)ebp < NUM_OF_CARS){

        edi = 0x4;
        D(esp+0x18) = 0xe000;

        while(1){

            esi = D(___1c9ef0h+edi)+0x8000;
            esi = (int)esi>>0x10;

            j = -1;
            while(++j < 0x18){

                i = -1;
                while(++i < 0x18) B(BACKBUFFER+D(esp+0x18)+0x88-0x40+CURRENT_VIEWPORT_X+0x200*j+i) = B(___1d2710h+0x240*esi+0x18*j+i);
            }

            D(esp+0x18) += 0x4000;
            edi += 4;
            ebp++;
            if((int)ebp >= NUM_OF_CARS) break;
        }
    }

// POSITIONS
    D(___1c9ee0h) = s_35e[D(___243854h)].Position;
    D(___1c9ee0h+4) = s_35e[D(___243854h+4)].Position;
    D(___1c9ee0h+8) = s_35e[D(___243854h+8)].Position;
    D(___1c9ee0h+0xc) = s_35e[D(___243854h+0xc)].Position;

// SPEEDMETER
    eax = (int)(162.0*((double)s_35e[D(MY_CAR_IDX)].__b0/(double)F32(___1de580h+0x94*D(MY_CAR_IDX)+4)));
    eax++;
    if((int)eax < 1) eax = 1;
    ebp = 4*eax;

    while(1){

        if((int)ebp >= 0x288) break;

        ebx = 0x21-D(ebp+___243338h);
        edx = D(ebp+___2435c4h);
        edip = BACKBUFFER+0x200*D(___243338h+ebp)+0x60+edx-0x40+CURRENT_VIEWPORT_X;
        H(ecx) = 0;
        L(ecx) = L(ebx);
        eax = 0x20;
        L(eax) -= L(edx);
        X(eax) <<= 8;
        X(edx) = (short)X(eax)>>0xf;
        ___idiv16((__POINTER__)&eax, (__POINTER__)&edx, X(ebx));
        X(esi) = X(eax);

        eax = 0;
        while(1){

            X(eax) += X(esi);
            X(edx) = (short)X(eax)>>0xf;
            edx <<= 0x10;
            X(edx) = (short)X(eax)>>0xf;
            L(edx) = H(eax);
            if((signed char)B(edip+(int)edx) >= 0x40) B(edip+(int)edx) = H(ecx);
            edip++;
            if((signed char)B(edip+(int)edx) >= 0x40) B(edip+(int)edx) = H(ecx);
            edip += 0x1ff;
            L(ecx)--;
            if(L(ecx) == 0) break;
        }

        ebp = ebp+0x4;
    }

    if((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x2c) == 0){

// NO WEAPONS - TIME
        if((int)D(___243cdch) <= 0){

            helper00(D(___243ca0h));
        }
        else {
                
            helper00(D(___243cb8h));

            D(___243cdch) -= D(___243334h);
            if((int)D(___243cdch) < 0) D(___243cdch) = 0;
        }
    }
    else {

// AMMO BAR
        n = (int)(create_double(0x9a,0x99,0x99,0x99,0x99,0x99,0x41,0x3f)*(double)(int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x30));
        n = (n < 0) ? 0x37 : 0x37-n;

        if(n != 0){

            j = -1;
            while(++j < 3){

                i = -1;
                while(++i < n) B(BACKBUFFER+0x5e64-0x40+CURRENT_VIEWPORT_X+0x37-n+0x200*j+i) = 0;
            }
        }

// MINES BAR
        n = -1;
        while(++n < (int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x28)){

            j = -1;
            while(++j < 6){

                i = -1;
                while(++i < 8){

                    if((px = B(SIDEBOM1_BPK+8*j+i)) != 0) B(BACKBUFFER+0x5200+0x8*n+0x60-0x40+CURRENT_VIEWPORT_X+0x200*j+i) = px;
                }
            }
        }
    }

// TURBO BAR SOMETHING
    n = (int)(create_double(0x3d,0x0a,0xd7,0xa3,0x70,0x3d,0x42,0x3f)*(double)(int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x34));
    n = (n < 0) ? 0x3a : 0x3a-n;

    if(n != 0){

        j = -1;
        while(++j < 7){

            i = -1;
            while(++i < n){

                if((signed char)B(BACKBUFFER+0x4464-0x40+CURRENT_VIEWPORT_X+0x3a-n+0x200*j+i) >= 0x40) B(BACKBUFFER+0x4464-0x40+CURRENT_VIEWPORT_X+0x3a-n+0x200*j+i) = 0;
            }
        }
    }

// DAMAGE PERCENTAGE SYMBOL
    n = (int)(100.0-dRMath_ceil((double)(int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18)*create_double(0,0,0,0,0,0,0x50,0x3f)));
    k = ___4256ch_cdecl(___1de210h, 8, 10, n, 0, CURRENT_VIEWPORT_X+0x8e2e, -8, -16);

    j = -1;
    while(++j < 10){

        i = -1;
        while(++i < 8){

            if((px = B(___1de530h+8*j+i)) != 0) B(BACKBUFFER+k+0x200*j+i) = px;
        }
    }

    DamageWarning();

// MY CAR DAMAGE PREVIEW
    if((n = (int)dRMath_ceil((double)(int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18)/20480.0)) < 0) n = 0;
    
    j = -1;
    while(++j < 21){

        i = -1;
        while(++i < 64) B(BACKBUFFER+0x200*(j+50)+CURRENT_VIEWPORT_X+i+0x20) = B(___1d5890h+0x540*(5-n)+0x40*j+i);
    }

// DEATH CROSS
    n = -1;
    while(++n < NUM_OF_CARS){

        if((int)D(___1de580h+0x94*D(___243854h+4*n)+0x18) <= 0){

            j = -1;
            while(++j < 32){

                i = -1;
                while(++i < 64){

                    if((px = B(RASTI1_BPK+64*j+i)) != 0) B(BACKBUFFER+0x200*(0x20*n+j+72)+CURRENT_VIEWPORT_X+i+0x20) = px;
                }
            }
        }
    }
}

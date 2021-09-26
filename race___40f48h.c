#include "drally.h"
#include "sfx.h"

	extern byte ___243894h[];
	extern byte ___243330h[];
	extern byte ___243334h[];
	extern byte ___243ca4h[];
	extern byte ___24332ch[];
	extern byte ___243ce8h[];
	extern byte ___1e6ed0h[];
	extern byte ___243cd4h[];
	extern byte ___243ca0h[];
	extern byte ___1a10a0h[];
	extern byte ___1a10a8h[];
	extern byte ___1a1094h[];
	extern byte ___1a109ch[];
	extern byte ___1a1090h[];
	extern byte ___1a102ch[];
	extern byte ___196d98h[];
	extern byte ___1c9f10h[];
	extern void * ___243d80h;
	extern byte ___243cf4h[];
	extern byte ___243854h[];
	extern void * ___243d3ch;
	extern byte ___1de210h[];
	extern byte ___1a1134h[];
	extern byte ___1de580h[];
	extern void * ___243d48h;
	extern byte ___1c9ec0h[];
	extern byte ___1c9ee0h[];
	extern byte ___1c9ef0h[];
	extern byte ___1c9ed0h[];
	extern byte ___1c9f00h[];
	extern byte ___1d8a10h[];
	extern byte ___1d2710h[];
	extern byte ___243338h[];
	extern byte ___2435c4h[];
	extern void * ___243d34h;
	extern byte ___243cdch[];
	extern byte ___243cb8h[];
	extern byte ___1d7810h[];
	extern byte ___1de530h[];
	extern byte ___196de8h[];
	extern byte ___196dech[];
	extern byte ___1de7d0h[];
	extern byte ___196df4h[];
	extern byte ___1d5890h[];
	extern void * ___243d84h;


void race___40864h(void);
dword ___4256ch_cdecl(void * A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___424c8h_cdecl(dword A1, const char * A2);
double dRMath_ceil(double);

static void helper00(int A0){

    int     eax, edx;

    eax = A0;
    edx = (int)eax>>0x1f;
    ___idiv32(&eax, &edx, 0x46);
    edx = (int)eax>>0x1f;
    ___idiv32(&eax, &edx, 0x3c);
    ___4256ch_cdecl(___1d7810h, 6, 6, eax, 16, 0x587b-0x40+D(___196d98h), -6, 0);

    eax = A0;
    edx = (int)eax>>0x1f;
    ___idiv32(&eax, &edx, 0x46);
    edx = (int)eax>>0x1f;
    ___idiv32(&eax, &edx, 0x3c);
    ___4256ch_cdecl(___1d7810h, 6, 6, edx, 16, 0x5889-0x40+D(___196d98h), 6, 0);

    eax = A0;
    edx = (int)eax>>0x1f;
    ___idiv32(&eax, &edx, 0x46);

    ___4256ch_cdecl(___1d7810h, 6, 6, (int)(1.42*(double)(int)edx), 16, 0x5897-0x40+D(___196d98h), 6, 0);
}

static int helper01(int A0){

    int     eax, edx;

    edx = 0x10000*A0;
    eax = 0x10000*edx;
    edx = (int)edx>>0x10;
    ___idiv32(&eax, &edx, 0x20000);

    return eax;
}

// LEFT SIDE PANEL
void race___40f48h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, P1, P2, P3, P4;
	byte 	esp[0x38];
	int 	i, j, k, n;
    __BYTE__    px;
    void *  edip;


    D(___243334h) = D(___243894h)-D(___243330h);
    D(___243330h) = D(___243894h);
    D(___24332ch) = helper01(D(___243334h));

	if((int)D(___243ca4h) > 0xbe){

		if(D(___1e6ed0h+0x35e*D(___243ce8h)+0x10a) == 0){

            D(___243cd4h) += D(___243334h);
            D(___243ca0h) += D(___243334h);
            n = D(___243cd4h)/70;
            D(___1a10a0h) = n/60;
            D(___1a10a8h) = n%60;
            D(___1a1090h) = (int)(1.42*(double)(int)(D(___243cd4h)%70));
            n = D(___243ca0h)/70;
            D(___1a1094h) = n/60;
            D(___1a109ch) = n%60;
            D(___1a102ch) = (int)(1.42*(double)(int)(D(___243ca0h)%70));
        }
    }

	if((int)D(___196d98h) < 0x40) race___40864h();
		
    n = -1;
    while(++n < 0xc8) memcpy(___243d80h+0x200*n+0x20+D(___196d98h), ___1c9f10h+0x40*n, 0x40);


    n = -1;
    while(++n < (int)D(___243cf4h)){

        if(D(___1e6ed0h+0x35e*D(___243854h+4*n)+0x10a) != 0){

            j = -1;
            while(++j < 0x1c){

                i = -1;
                while(++i < 0x16){

                    if((px = B(___243d3ch+0x16*j+i)) != 0) B(___243d80h+0x9c64+0x4000*n-0x40+D(___196d98h)+0x200*j+i) = px;
                }
            }
        }
    }

    n = D(___243cf4h)-1;

    if(n < 3){

        k = 0x4000*n+0xd060;

        while(1){

            j = 0;

            i = -1;
            while(++i < 0x20){

                eax = i;
                edx = (int)eax>>0x1f;
                ___idiv32(&eax, &edx, 2);

                if((int)edx < 0x40){

                    while(1){

                        B(___243d80h+k-0x40+D(___196d98h)+j+edx) = 0;
                        edx += 0x2;
                        if((int)edx >= 0x40) break;
                    }
                }

                j += 0x200;
            }

            k += 0x4000;
            n++;
            if(k >= 0x19060) break;
        }
    }

// RACE NUMBER OF LAPS
    n = -1;
    while(++n < (int)D(___243cf4h)){

        j = -1;
        while(++j < 0xa){

            i = -1;
            while(++i < 8){

                if((px = B(___1de210h+0x50*D(___1a1134h)+8*j+i)) != 0) B(___243d80h+0xb43a+D(___196d98h)-5*!n+0x4000*n+0x200*j+i) = px;
            }
        }
    }

// MY CAR NUMBER OF LAPS
    j = -1;
    while(++j < 0xa){

        i = -1;
        while(++i < 8){

            if((px = B(___1de210h+0x50*B(___1e6ed0h+0x108+0x35e*D(___243854h))+8*j+i)) != 0) B(___243d80h+0xb462-0x40+D(___196d98h)+0x200*j+i) = px;
        }
    }

// 2ND, 3RD, 4TH CAR NUMBER OF LAPS
    if((int)D(___243cf4h) > 1){

        n = 1;
        while(1){

            j = -1;
            while(++j < 0xa){

                i = -1;
                while(++i < 8){

                    if((px = B(___1de210h+0x50*B(0x35e*D(___243854h+4*n)+___1e6ed0h+0x108)+8*j+i)) != 0) B(___243d80h+0xb400+0x4000*n+0x24+D(___196d98h)+0x200*j+i) = px;
                }
            }

            n++;
            if(n >= (int)D(___243cf4h)) break;
        }
    }

// 2ND CAR DAMAGE BAR
    if((int)D(___243cf4h) > 1){

        k = (int)(64.0-(dRMath_ceil(create_double(0,0,0,0,0,0,0x50,0x3f)*(double)(int)D(___1de580h+0x94*D(___243854h+4)+0x18))/1.57));

        n = -1;
        while(++n < 9){

            memcpy(___243d80h+0xd000+0x200*n+0xa0-k-0x40+D(___196d98h), ___243d48h+0x40*n+0x40-k, k);
        }
    }

// 3RD CAR DAMAGE BAR
    if((int)D(___243cf4h) > 2){

        k = (int)(64.0-(dRMath_ceil(create_double(0,0,0,0,0,0,0x50,0x3f)*(double)(int)D(___1de580h+0x94*D(___243854h+8)+0x18))/1.57));

        n = -1;
        while(++n < 9){

            memcpy(___243d80h+0x11000+0x200*n+0xa0-k-0x40+D(___196d98h), ___243d48h+0x40*n+0x40-k, k);
        }
    }

// 4TH CAR DAMAGE BAR
    if((int)D(___243cf4h) > 3){

        k = (int)(64.0-(dRMath_ceil(create_double(0,0,0,0,0,0,0x50,0x3f)*(double)(int)D(___1de580h+0x94*D(___243854h+0xc)+0x18))/1.57));

        n = -1;
        while(++n < 9){

            memcpy(___243d80h+0x15000+0x200*n+0xa0-k-0x40+D(___196d98h), ___243d48h+0x40*n+0x40-k, k);
        }
    }

    ___424c8h_cdecl(0x463-0x40+D(___196d98h), ___1de580h+0x94*D(___243854h)+0x44);

// 2ND, 3RD, 4TH DRIVER'S NAMES
    if((int)D(___243cf4h) > 1){

        n = 1;
        while(1){

            ___424c8h_cdecl(0x9463+0x4000*n+D(___196d98h)-0x40, ___1de580h+0x94*D(___243854h+4*n)+0x44);
            
            n++;
            if(n >= (int)D(___243cf4h)) break;
        }
    }


// POSITIONS
    D(___1c9ec0h+0) = B(___1e6ed0h+0x109+0x35e*D(___243854h));
    D(___1c9ec0h+4) = B(___1e6ed0h+0x109+0x35e*D(___243854h+4));
    D(___1c9ec0h+8) = B(___1e6ed0h+0x109+0x35e*D(___243854h+8));
    D(___1c9ec0h+0xc) =  B(___1e6ed0h+0x109+0x35e*D(___243854h+0xc));

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
            ___imul32(&eax, &edx, D(___24332ch));
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
            ___imul32(&eax, &edx, D(___24332ch));
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
        while(++i < 0x20) B(___243d80h+0x9080-0x40+D(___196d98h)+0x200*j+i) = B(___1d8a10h+0x400*eax+0x20*j+i);
    }

    ebp = 0x1;
    if((int)ebp < (int)D(___243cf4h)){

        edi = 0x4;
        D(esp+0x18) = 0xe000;

        while(1){

            esi = D(___1c9ef0h+edi)+0x8000;
            esi = (int)esi>>0x10;

            j = -1;
            while(++j < 0x18){

                i = -1;
                while(++i < 0x18) B(___243d80h+D(esp+0x18)+0x88-0x40+D(___196d98h)+0x200*j+i) = B(___1d2710h+0x240*esi+0x18*j+i);
            }

            D(esp+0x18) += 0x4000;
            edi += 4;
            ebp++;
            if((int)ebp >= (int)D(___243cf4h)) break;
        }
    }

// POSITIONS
    D(___1c9ee0h) = B(___1e6ed0h+0x35e*D(___243854h)+0x109);
    D(___1c9ee0h+4) = B(___1e6ed0h+0x35e*D(___243854h+4)+0x109);
    D(___1c9ee0h+8) = B(___1e6ed0h+0x35e*D(___243854h+8)+0x109);
    D(___1c9ee0h+0xc) = B(___1e6ed0h+0x35e*D(___243854h+0xc)+0x109);

// SPEEDMETER
    eax = (int)(162.0*((double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb0)/(double)F32(___1de580h+0x94*D(___243ce8h)+4)));
    eax++;
    if((int)eax < 1) eax = 1;
    ebp = 4*eax;

    while(1){

        if((int)ebp >= 0x288) break;

        ebx = 0x21-D(ebp+___243338h);
        edx = D(ebp+___2435c4h);
        edip = ___243d80h+0x200*D(___243338h+ebp)+0x60+edx-0x40+D(___196d98h);
        H(ecx) = 0;
        L(ecx) = L(ebx);
        eax = 0x20;
        L(eax) -= L(edx);
        X(eax) <<= 8;
        X(edx) = (short)X(eax)>>0xf;
        ___idiv16(&eax, &edx, X(ebx));
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

    if((int)D(___1de580h+0x94*D(___243ce8h)+0x2c) == 0){

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
        n = (int)(create_double(0x9a,0x99,0x99,0x99,0x99,0x99,0x41,0x3f)*(double)(int)D(___1de580h+0x94*D(___243ce8h)+0x30));
        n = (n < 0) ? 0x37 : 0x37-n;

        if(n != 0){

            j = -1;
            while(++j < 3){

                i = -1;
                while(++i < n) B(___243d80h+0x5e64-0x40+D(___196d98h)+0x37-n+0x200*j+i) = 0;
            }
        }

// MINES BAR
        n = -1;
        while(++n < (int)D(___1de580h+0x94*D(___243ce8h)+0x28)){

            j = -1;
            while(++j < 6){

                i = -1;
                while(++i < 8){

                    if((px = B(___243d34h+8*j+i)) != 0) B(___243d80h+0x5200+0x8*n+0x60-0x40+D(___196d98h)+0x200*j+i) = px;
                }
            }
        }
    }

// TURBO BAR SOMETHING
    n = (int)(create_double(0x3d,0x0a,0xd7,0xa3,0x70,0x3d,0x42,0x3f)*(double)(int)D(___1de580h+0x94*D(___243ce8h)+0x34));
    n = (n < 0) ? 0x3a : 0x3a-n;

    if(n != 0){

        j = -1;
        while(++j < 7){

            i = -1;
            while(++i < n){

                if((signed char)B(___243d80h+0x4464-0x40+D(___196d98h)+0x3a-n+0x200*j+i) >= 0x40) B(___243d80h+0x4464-0x40+D(___196d98h)+0x3a-n+0x200*j+i) = 0;
            }
        }
    }

// DAMAGE PERCENTAGE SYMBOL
    n = (int)(100.0-dRMath_ceil((double)(int)D(___1de580h+0x94*D(___243ce8h)+0x18)*create_double(0,0,0,0,0,0,0x50,0x3f)));
    k = ___4256ch_cdecl(___1de210h, 8, 0xa, n, 0, D(___196d98h)-0x40+0x8e6e, -8, -16);

    j = -1;
    while(++j < 0xa){

        i = -1;
        while(++i < 8){

            if((px = B(___1de530h+8*j+i)) != 0) B(___243d80h+k+0x200*j+i) = px;
        }
    }

// LOOK OUT
    if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) < 0x5000){

        if(D(___196de8h) == 0) dRally_Sound_pushEffect(2, SFX_LOOK_OUT, 0, 0x10000, 0x50000, 0x8000);

        D(___196de8h) = 1;
    }

    if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) < 0x2800){

        if(D(___196dech) == 0) dRally_Sound_pushEffect(2, SFX_LOOK_OUT, 0, 0x10000, 0x50000, 0x8000);

        D(___196dech) = 1;
    }

// THIS SUCKS - KILLED AS DUKE NUKEM
    if(D(___1de580h+0x94*D(___243ce8h)+0x18) == 0){

        if(strcmp(___1de7d0h+0x54*D(___243ce8h), "DUKE NUKEM") == 0){

            if(D(___196df4h) == 0) dRally_Sound_pushEffect(2, SFX_THIS_SUCKS, 0, 0x10000, 0x50000, 0x8000);

            D(___196df4h) = 1;
        }
    }

// MY CAR DAMAGE PREVIEW
    if((n = (int)dRMath_ceil((double)(int)D(___1de580h+0x94*D(___243ce8h)+0x18)/20480.0)) < 0) n = 0;
    
    j = -1;
    while(++j < 0x15){

        i = -1;
        while(++i < 0x40) B(___243d80h+0x6420+D(___196d98h)+0x200*j+i) = B(___1d5890h+0x1a40-0x540*n+0x40*j+i);
    }

// DEATH CROSS
    n = -1;
    while(++n < (int)D(___243cf4h)){

        if((int)D(___1de580h+0x94*D(___243854h+4*n)+0x18) <= 0){

            j = -1;
            while(++j < 0x20){

                i = -1;
                while(++i < 0x40){

                    if((px = B(___243d84h+0x40*j+i)) != 0) B(___243d80h+0x9000+0x4000*n+0x20+D(___196d98h)+0x200*j+i) = px;
                }
            }
        }
    }
}

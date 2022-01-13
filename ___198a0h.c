#include "drally.h"
#include "drally_fonts.h"
#include "drmemory.h"

	extern __BYTE__ ___185a54h[];
	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10cch;
	extern __POINTER__ ___24e4ach;
	extern __BYTE__ ___1a116ch[];
	extern __BYTE__ ___1a1f4eh[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a0ffch[];
	extern __DWORD__ ___19dec0h[4];
	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a110ch;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___19de70h[20];
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a10fch;
	extern __BYTE__ ___199f9ch[];
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___196adch[];
	extern __DWORD__ ___19bd60h;
	extern __BYTE__ ___185a54h[];
	extern __BYTE__ ___185a24h[];

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___13710h(__DWORD__, __DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
__DWORD__ ___23594h_cdecl(__POINTER__, __DWORD__);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___23488h_cdecl(__POINTER__, __DWORD__, __DWORD__);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
int ___25138h_cdecl(const char *);
void ___197d0h_cdecl(__DWORD__, __DWORD__);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___1c6bch_cdecl(__DWORD__);
void shop_main(void);
void ___10754h(void);
void ___60705h(void_cb);
void ___61278h(void);
void ___623d4h(void);
__DWORD__ ___61cd0h(void);
void ___1123ch(void);
void __STOSB(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3);
void __STOSD(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3);

__DWORD__ ___198a0h(void){
#if defined(DR_MULTIPLAYER)
    __DWORD__   	eax, ebx, ecx, edx, edi, esi;
    __BYTE__    	esp[0x110];
	__POINTER__ 	vp0, vp1;


    D(esp+0xc4) = 0x58;
    D(esp+0xdc) = 0x68;
    vp0 = ___3f71ch__allocateMemory(0x1f);
    vp1 = ___3f71ch__allocateMemory(0x1f);
    itoa_watcom106(D(___185a54h), esp+0xac, 0xa);
    ___135fch(0, 0x173, 0x27f, 0x6d);
    ___23230h();
    ___13710h(4, 0);
    ___13248h_cdecl(0xe9, 0xe9, 0x88, 0x64, 1);
    ___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, "Wait...", 0x294fa);
    ___12cb8h__VESA101_PRESENTSCREEN();
    W(___24e4ach+2) = W(___24e4ach);
    __STOSB(esp+0xb4, 0, 4);

    ebx = 0;
	while(1){

        ___2ab50h();

        if(___23594h_cdecl(vp0, 0xa) != 0){

			if(B(vp0+1) == 1) B(esp+B(vp0)+0xb4) = 1;
			if(B(vp0+1) == 2) B(esp+B(vp0)+0xb4) = 1;
			if(B(vp0+1) == 0) B(esp+B(vp0)+0xb4) = 0;
        }

        if(___23594h_cdecl(vp0, 0x12) != 0){
			
			if(B(vp0+1) == 1) B(esp+B(vp0)+0xb4) = 1;
			if(B(vp0+1) == 0) B(esp+B(vp0)+0xb4) = 0;
		}

        ebx++;
        if((int)ebx >= 0x46) break;
	}

    eax = 0;
    D(esp+0xd8) = 4;

    if(B(esp+0xb4) != 0){

        while(1){
            eax++;
            if((int)eax >= 4) break;
            if(B(esp+eax+0xb4) == 0){
                
                D(esp+0xd8) = eax;
                break;
            }
        }
    }
    else {

        D(esp+0xd8) = eax;
    }

    if((int)D(esp+0xd8) > 3){

        ___13710h(4, 0);
        ___13248h_cdecl(0x46, 0xc6, 0x1e2, 0x58, 1);
        ___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, "All netgames are reserved!", 0x20851);
        ___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, "Press any key to continue.", 0x25851);
        ___12cb8h__VESA101_PRESENTSCREEN();
        ___5994ch();
        ___59b3ch();

        while(1){

            if(___5994ch() != 0) break;
        }

        ___5994ch();
        ___59b3ch();

        return 0;
    }

    edx = -1;
    while(++edx < 0x15){

        strcpy(___1a116ch+0x96*edx, ___1a116ch+0x96*(edx+1));
        B(___1a1f4eh+edx) = B(___1a1f4eh+edx+1);
    }

    strcpy(___1a116ch+0xc4e, "-- ");
    strcat(___1a116ch+0xc4e, ___1a01e0h+0x6c*D(___1a1ef8h));
    strcat(___1a116ch+0xc4e, " has initialized a new netgame.");
    B(___1a1f4eh+0x15) = 0;
    ___23488h_cdecl(___1a116ch+0xc4e, strlen(___1a116ch+0xc4e)+1, 6);
    ___23230h();
    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
    D(esp+0x108) = 1;
    eax = 0;

    while(1){

        B(___1a0ffch+eax) = 0;
        eax += 0xb;
        if(eax == 0x2c) break;
    }

    memset((__POINTER__)___19dec0h, 0, 4*sizeof(__DWORD__));
    B(vp0) = B(esp+0xd8);
    B(vp0+1) = 1;

    edx = 0;
    eax = 0;
    while(1){

        edx++;
        B(vp0+edx+1) = B(___1a01e0h+ 0x6c*D(___1a1ef8h)+eax);
        eax++;
        if((int)eax >= 0xb) break;
    }

    edx = 0;
    eax = 0;

    while(1){

        edx++;
        B(vp0+edx+0xc) = B(esp+eax+0xac);
        eax++;
        if((int)eax >= 7) break;
    }

    edx = 0;
    B(vp0+0x14) = B(___196ab8h);
    eax = 0;

    while(1){

        edx++;
        B(vp0+edx+0x14) = B(___1a2010h+eax+1);
        eax++;
        if((int)eax >= 9) break;
    }

    B(vp0+0x1e) = B(___185a14h_UseWeapons);
    ___13248h_cdecl(D(esp+0xc8-4), D(esp+0xe0-4), 0x1c2, 0x106, 1);
    strcpy(esp, ___1a01e0h+0x6c*D(___1a1ef8h));
    strcat(esp, "'s game");
    ecx = 0x280*(D(esp+0xdc)+0x73)+D(esp+0xc4)+0x16;
    ___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, esp, ecx);
    strcpy(esp, "Selected tracks: ");
    itoa_watcom106(D(___196ab8h), esp+0x50, 0xa);
    edx = D(esp+0xdc);
    edx = edx+0x2e;
    strcat(esp, esp+0x50);
    eax = 4*edx;
    ecx = D(esp+0xc4);
    eax = eax+edx;
    eax = 0x80*eax;
    ___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, esp, ecx+eax+0x5d);
    edx = D(esp+0xdc);
    strcpy(esp, "Starting money: $");
    edx += 0x3e;
    strcat(esp, esp+0xac);
    eax = 4*edx;
    ecx = D(esp+0xc4);
    eax += edx;
    eax <<= 7;
    ecx += eax;
    ecx += 0x5d;
    ___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, esp, ecx);
    strcpy(esp, "Weapon mode: ");
    strcat(esp, (D(___185a14h_UseWeapons) == 0)?"Off":"On");
    edx = D(esp+0xdc);
    edx += 0x4e;
    eax = 4*edx;
    eax += edx;
    edx = D(esp+0xc4);
    eax <<= 7;
    eax += edx;
    ecx = eax+0x5d;
    ___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, esp, ecx);
    edx = D(esp+0xdc);
    edx += 0x27;
    eax = 4*edx;
    eax += edx;
    eax = 0x80*eax;
    ebx = 0;
    ecx = 0x40;
    edx = ecx;
    esi = 0;
    L(edx) >>= 2;

    while(1){

        H(ecx) = L(edx);

        while(1){

            D(___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+D(esp+0xc4)+0x17+ebx) = D(___19de70h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x40)]+esi);
            ebx += 4;
            esi += 4;
            H(ecx)--;
            if(H(ecx) == 0) break;
        }

        ebx += 0x280;
        L(edx) <<= 2;
        ebx -= edx;
        L(edx) >>= 2;
        L(ecx)--;
        if(L(ecx) == 0) break;
    }

    edx = D(esp+0xdc);
    ebx = 4*edx;
    ebx += edx;
    ebx <<= 7;
    L(ecx) = 0xc4;
    eax = ebx+0x6180;
    esi = D(esp+0xc4);
    ebx += 0x10400;

    while(1){

        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+esi+0x57) = 9;
        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+esi+0x17) = L(ecx);
        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+esi+0x18) = L(ecx);
        eax += 0x280;
        if(eax == ebx) break;
    }

    edx = D(esp+0xdc);
    edx += 0x68;
    esi = 4*edx;
    edi = D(esp+0xc4);
    esi += edx;
    eax = 4;
    esi <<= 7;

    while(1){

        eax++;
        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+edi+eax+0x16) = 9;
        if((int)eax >= 0x40) break;
    }

    B(___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+edi+0x57) = 0xf;
    edx = D(esp+0xdc);
    edx += 0xa;
    eax = 4*edx;
    eax += edx;
    edx = D(esp+0xc4);
    eax <<= 7;
    strcpy(esp, "Initializing a new netgame");
    eax += edx;
    ecx = eax+0x64;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, esp, ecx);
    edx = D(esp+0xdc);
    edx += 0xda;
    eax = 4*edx;
    eax += edx;
    ebx = D(esp+0xc4);
    eax <<= 7;
    strcpy(esp, "Press ENTER when all players have arrived");
    eax += ebx;
    ecx = eax+0x14;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, esp, ecx);
    edx = D(esp+0xdc);
    edx += 0xea;
    eax = 4*edx;
    strcpy(esp, "or press ESC to close your game.");
    eax += edx;
    ecx = D(esp+0xc4);
    eax <<= 7;
    eax += ecx;
    ecx = eax+0x14;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, esp, ecx);
    eax = D(esp+0xdc);
    eax += 0x8d;
    D(esp+0xd4) = eax;
    edx = eax;
    eax <<= 2;
    eax += edx;
    strcpy(esp, "1.");
    eax <<= 7;
    edi = D(esp+0xc4);
    D(esp+0xd0) = eax;
    esi = eax+edi;
    ecx = esi+0x27;
    eax = ___25138h_cdecl(esp);
    ecx -= eax;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, esp, ecx);
    edx = D(___1a1ef8h);
    eax = 8*edx;
    eax -= edx;
    eax <<= 2;
    esi += 0x2c;
    eax -= edx;
    ecx = esi;
    eax <<= 2;
    D(esp+0xbc) = esi;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, ___1a01e0h+eax, ecx);
    eax = D(esp+0xdc);
    eax += 0x9d;
    ecx = D(esp+0xc4);
    D(esp+0xc0) = eax;
    edx = eax;
    eax <<= 2;
    eax += edx;
    strcpy(esp, "2.");
    eax <<= 7;
    ecx += eax;
    ecx += 0x27;
    eax = ___25138h_cdecl(esp);
    ecx -= eax;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, esp, ecx);
    edx = D(esp+0xdc);
    edx += 0xad;
    eax = 4*edx;
    eax += edx;
    edx = D(esp+0xc4);
    eax <<= 7;
    strcpy(esp, "3.");
    edx += eax;
    ecx = edx+0x27;
    eax = ___25138h_cdecl(esp);
    ecx -= eax;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, esp, ecx);
    edx = D(esp+0xdc);
    edx += 0xbd;
    eax = 4*edx;
    eax += edx;
    edx = D(esp+0xc4);
    eax <<= 7;
    strcpy(esp, "4.");
    edx += eax;
    ecx = edx+0x27;
    eax = ___25138h_cdecl(esp);
    ecx -= eax;
    ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, esp, ecx);
    ___12cb8h__VESA101_PRESENTSCREEN();
    W(___24e4ach+2) = W(___24e4ach);
    ___5994ch();
    ___59b3ch();
    D(esp+0xf8) = -1;
    eax = D(esp+0xd0);
    D(esp+0xe0) = eax;
    eax = D(esp+0xbc);
    D(esp+0xe4) = eax;
    eax = D(esp+0xd8);
    edx = 0;
    eax += 0xb;
    D(esp+0xf0) = edx;
    D(esp+0x104) = eax;
    eax = D(esp+0xbc);
    edx = D(esp+0xc0);
    D(esp+0xe8) = eax;
    eax = 4*edx;
    eax += edx;
    eax <<= 7;
    edx = D(esp+0xd4);
    D(esp+0xc8) = eax;
    eax = 4*edx;
    eax += edx;
    eax <<= 7;
    D(esp+0x100) = eax+0xbb80;
    edx = D(esp+0xc4);
    ecx = 1;
    edx += 0x2c;
    D(esp+0xcc) = eax;
    D(esp+0xec) = edx;

	while(1){

        ebx = D(esp+0xf8);
        if((ebx == 0x1c)||(ebx == 0x9c)) break;
        ___2ab50h();
        edi = D(esp+0xf0);
        edi++;
        B(esp+0x10c) = 1;
        D(esp+0xf0) = edi;

        while(1){

            edx = D(esp+0x104);
            eax = ___23594h_cdecl(vp1, edx);

            if(eax == 0){

                H(eax) = 0;
                B(esp+0x10c) = H(eax);
            }
            else {

                if(B(vp1) == 1){
                        
                    ebx = 0;
                    edx = 0;

                    while(1){

                        edx++;
                        L(eax) = B(vp1+ebx+5);
                        ebx++;
                        B(esp+edx+0x9f) = L(eax);
                        if((int)edx >= 0xb) break;
                    }

                    eax = 0;
                    edx = 0;
                    L(eax) = B(vp1+2);
                    L(edx) = B(vp1+1);
                    eax <<= 8;
                    edx += eax;
                    eax = 0;
                    L(eax) = B(vp1+3);
                    eax <<= 0x10;
                    edx += eax;
                    eax = 0;
                    L(eax) = B(vp1+4);
                    eax <<= 0x18;
                    edx += eax;
                    eax = 0;

                    ebx = 0;
                    while(1){

                        if((edx == ___19dec0h[0])||(edx == ___19dec0h[1])||(edx == ___19dec0h[2])||(edx == ___19dec0h[3])||(___19dec0h[ebx] != 0)){

                            ebx++;
                            eax++;
                            if((int)ebx >= 4) break;
                        }
                        else {

                            eax = 0xb*eax;
                            strcpy(___1a0ffch+eax, esp+0xa0);
                            edi = D(esp+0x108);
                            ecx = 1;
                            edi += ecx;
                            ___19dec0h[ebx] = edx;
                            D(esp+0x108) = edi;
                            break;
                        }
                    }
			    }

                if(B(vp1) == 0){
                    
                    edx = B(vp1+2);
                    eax = B(vp1+1);
                    edx <<= 8;
                    eax += edx;
                    edx = B(vp1+3);
                    edx <<= 0x10;
                    eax += edx;
                    edx = B(vp1+4);
                    esi = ___19dec0h[0];
                    edx <<= 0x18;
                    ebx = 0;
                    eax += edx;
                    edx = 0;

                    if(eax != esi){

                        while(1){

                            edx++;
                            ebx++;
                            if((int)edx >= 4) break;
                            if(eax == ___19dec0h[edx]){

                                ebx = 0xb*ebx;
                                B(___1a0ffch+ebx) = 0;
                                eax = 0;
                                ecx = 1;
                                ___19dec0h[edx] = eax;
                                D(esp+0x108) -= ecx;
                                break;
                            }
                        }
                    }
                    else {

                        ebx = 0xb*ebx;
                        B(___1a0ffch+ebx) = 0;
                        eax = 0;
                        ecx = 1;
                        ___19dec0h[edx] = eax;
                        D(esp+0x108) -= ecx;
                    }
                }
            }

            if(B(esp+0x10c) != 1) break;
        }

        eax = D(esp+0xf0);
        edx = (int)eax>>0x1f;
        ___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 4);

        if(edx == 0){
        
        	edx = 0x1f;
        	___23488h_cdecl(vp0, edx, 0xa);
		}

        D(esp+0xf8) = ___5994ch();
        if(D(esp+0x108) == 4) D(esp+0xf8) = 0x1c;

        if((D(esp+0xf8) == 0x1c)||(D(esp+0xf8) == 0x9c)){

			if((int)D(esp+0x108) > 1){

				B(vp0+1) = 2;
				B(vp0+2) = B(esp+0x108);
				___23488h_cdecl(vp0, 0x1f, 0xa);
			}
		}

        if((D(esp+0xf8) == 0x1c)||(D(esp+0xf8) == 0x9c)){

        	if((int)D(esp+0x108) <= 1) D(esp+0xf8) = -1;
		}

        if(ecx != 0){
				
			esi = D(esp+0xcc);

			while(1){

				memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+D(esp+0xc4)+0x2c, 0xc4, 0x190);
				esi += 0x280;
				if(esi == D(esp+0x100)) break;
			}

			___197d0h_cdecl(0, 3);
			edi = D(esp+0xc8);
			___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, ___1a01e0h+0x6c*D(___1a1ef8h), D(esp+0xe8));
			D(esp+0xf4) = D(esp+0xec)+edi;

			esi = 0x21;
			while(1){

				if(strlen(___1a0ffch+esi) > 0) ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, ___1a0ffch+esi, D(esp+0xf4));

				D(esp+0xf4) = D(esp+0xf4)+0x2800;
				esi -= 0xb;
				if(esi == 0) break;
			}

			ebx = 0x190;
			eax = D(esp+0xe4);
			___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0xe0)+D(esp+0xc4)+0x2c, ebx, 0x4b);
			ecx = 0;
		}

        if(D(esp+0xf8) == 1) break;
	}

	___12e78h_cdecl(___1a10fch, (font_props_t *)___185c0bh, "press   to enter chat mode", 0x390a3);
	___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "F1", 0x390d9);
	___23230h();

	if((D(esp+0xf8) == 0x1c)||(D(esp+0xf8) == 0x9c)){

		ebx = -1;
		while(++ebx < 0x15){

			strcpy(___1a116ch+0x96*ebx, ___1a116ch+0x96*(ebx+1));
			B(___1a1f4eh+ebx) = B(___1a1f4eh+ebx+1);
		}

		strcpy(___1a116ch+0xc4e, "-- ");
		strcat(___1a116ch+0xc4e, ___1a01e0h+0x6c*D(___1a1ef8h));
		strcat(___1a116ch+0xc4e, "'s game started with ");
		itoa_watcom106(D(esp+0x108), esp, 0xa);
		strcat(___1a116ch+0xc4e, esp);
		strcat(___1a116ch+0xc4e, " players and ");
		itoa_watcom106(D(___196ab8h), esp, 0xa);
		strcat(___1a116ch+0xc4e, esp);
		strcat(___1a116ch+0xc4e, " track(s).");
		B(___1a1f4eh+0x15) = 0;
		___23230h();
		___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
		___23488h_cdecl(___1a116ch+0xc4e, strlen(___1a116ch+0xc4e)+1, 6);
		dRMemory_free(vp0);
		dRMemory_free(vp1);
		___61278h();
		___623d4h();
		D(___199f9ch) = D(esp+0xd8)+1;
		if(___61cd0h() == 0) ___1123ch();
		D(___196adch) = D(esp+0x108);
		___19bd60h = 1;

		if(CONNECTION_TYPE == 2) ___60705h(___10754h);

		___1c6bch_cdecl(D(___185a54h));
		shop_main();
		D(___185a24h) = 1;

		return 1;
	}

	ebx = -1;
	while(++ebx < 0x15){

        strcpy(___1a116ch+0x96*ebx, ___1a116ch+0x96*(ebx+1));
        B(___1a1f4eh+ebx) = B(___1a1f4eh+ebx+1);
	}

	strcpy(___1a116ch+0xc4e, "-- ");
	strcat(___1a116ch+0xc4e, ___1a01e0h+0x6c*D(___1a1ef8h));
	strcat(___1a116ch+0xc4e, " closed the netgame.");
	B(___1a1f4eh+0x15) = 0;
	___23230h();
	___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
	___23488h_cdecl(___1a116ch+0xc4e, strlen(___1a116ch+0xc4e)+1, 6);
	B(vp0+1) = 0;
	___23488h_cdecl(vp0, 0x1f, 0xa);
	W(___24e4ach+2) = W(___24e4ach);
	memset(___24e4ach+4, 0, 0x1000);
	___5994ch();
	___59b3ch();
	dRMemory_free(vp0);
	dRMemory_free(vp1);
#endif // DR_MULTIPLAYER
	return 0;
}

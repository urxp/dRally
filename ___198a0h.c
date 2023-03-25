#include "drally.h"
#include "drally_fonts.h"
#include "drmemory.h"
#include "drally_structs_fixed.h"
#include "drally_keyboard.h"
#include "netpage.h"

	extern __DWORD__ MP_MONEY;
	extern NetPage * ___24e4ach;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a0ffch[];
	extern __DWORD__ ___19dec0h[4];
	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___19de70h[20];
	extern __BYTE__ ___199f9ch[];
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___196adch[];
	extern __DWORD__ ___19bd60h;
	extern __BYTE__ ___185a24h[];

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___13710h(__DWORD__, __DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
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
void dRChatbox_push(const char * line, int col);

// Network Initialize Game
__DWORD__ ___198a0h(void){

#if defined(DR_MULTIPLAYER)
    __DWORD__   	eax, ebx, ecx, edx, esi;
    __BYTE__    	esp[0x110];
	__POINTER__ 	vp0, vp1;
    racer_t *       s_6c;
    int             n, k, i, j;
    char            LastLine[0x96];
    int             co;


    s_6c = (racer_t *)___1a01e0h;
    D(esp+0xc4) = 0x58;
    D(esp+0xdc) = 0x68;
    vp0 = ___3f71ch__allocateMemory(0x1f);
    vp1 = ___3f71ch__allocateMemory(0x1f);
    itoa_watcom106(MP_MONEY, esp+0xac, 0xa);
    ___135fch(0, 371, 639, 109);
    ___23230h();
    ___13710h(4, 0);
    ___13248h_cdecl(233, 233, 136, 100, 1);
    ___12e78h_v3(___1a10cch___185ba9h, "Wait...", 250, 264);
    ___12cb8h__VESA101_PRESENTSCREEN();
    ___24e4ach->read_p = ___24e4ach->write_p;
    memset(esp+0xb4, 0, 4);

    n = -1;
	while(++n < 0x46){

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
        ___12e78h_v3(___1a10cch___185ba9h, "All netgames are reserved!", 81, 208);
        ___12e78h_v3(___1a10cch___185ba9h, "Press any key to continue.", 81, 240);
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

    strcat(strcat(strcpy(LastLine, "-- "), s_6c[D(___1a1ef8h)].name), " has initialized a new netgame.");
    dRChatbox_push(LastLine, 0);
    ___23488h_cdecl(LastLine, strlen(LastLine)+1, 6);
    ___23230h();
    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
    D(esp+0x108) = 1;

    n = -1;
    while(++n < 4) B(___1a0ffch+11*n) = 0;

    memset((__POINTER__)___19dec0h, 0, 4*sizeof(__DWORD__));

    B(vp0) = B(esp+0xd8);
    B(vp0+1) = 1;

    n = -1;
    while(++n < 11) B(vp0+n+2) = s_6c[D(___1a1ef8h)].name[n];

    n = -1;
    while(++n < 7) B(vp0+n+13) = B(esp+n+0xac);

    n = -1;
    while(++n < 9) B(vp0+n+21) = B(___1a2010h+n+1);

    B(vp0+20) = B(___196ab8h);
    B(vp0+30) = D(___185a14h_UseWeapons);

    ___13248h_cdecl(D(esp+0xc8-4), D(esp+0xe0-4), 0x1c2, 0x106, 1);
    ___12e78h_v3(___1a110ch___185c0bh, strcat(strcpy(esp, s_6c[D(___1a1ef8h)].name), "'s game"), D(esp+0xc4)+0x16, D(esp+0xdc)+0x73);
    ___12e78h_v3(___1a110ch___185c0bh, strcat(strcpy(esp, "Selected tracks: "), itoa_watcom106(D(___196ab8h), esp+0x50, 10)), D(esp+0xc4)+0x5d, D(esp+0xdc)+0x2e);
    ___12e78h_v3(___1a110ch___185c0bh, strcat(strcpy(esp, "Starting money: $"), esp+0xac), D(esp+0xc4)+0x5d, D(esp+0xdc)+0x3e);
    ___12e78h_v3(___1a110ch___185c0bh, strcat(strcpy(esp, "Weapon mode: "), (D(___185a14h_UseWeapons) == 0)?"Off":"On"), D(esp+0xc4)+0x5d, D(esp+0xdc)+0x4e);

    j = -1;
    while(++j < 0x40){

        i = -1;
        while(++i < 0x40){

            B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0xdc)+0x27)+D(esp+0xc4)+0x17+0x280*j+i) = B(___19de70h[s_6c[D(___1a1ef8h)].face]+0x40*j+i);
        }
    }

    n = -1;
    while(++n < 65){

        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(esp+0xdc)+0x6180+0x280*n+D(esp+0xc4)+0x57) = 9;
        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(esp+0xdc)+0x6180+0x280*n+D(esp+0xc4)+0x17) = 0xc4;
        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(esp+0xdc)+0x6180+0x280*n+D(esp+0xc4)+0x18) = 0xc4;
    }

    n = -1;
    while(++n < 60){

        B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0xdc)+0x68)+D(esp+0xc4)+n+0x1b) = 9;
    }

    B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0xdc)+0x68)+D(esp+0xc4)+0x57) = 0xf;

    ___12e78h_v3(___1a1108h___185c0bh, "Initializing a new netgame", D(esp+0xc4)+0x64, D(esp+0xdc)+0xa);
    ___12e78h_v3(___1a1108h___185c0bh, "Press ENTER when all players have arrived", D(esp+0xc4)+0x14, D(esp+0xdc)+0xda);
    ___12e78h_v3(___1a1108h___185c0bh, "or press ESC to close your game.", D(esp+0xc4)+0x14, D(esp+0xdc)+0xea);

    D(esp+0xd4) = D(esp+0xdc)+0x8d;
    D(esp+0xd0) = 0x280*D(esp+0xd4);
    D(esp+0xbc) = 0x280*D(esp+0xd4)+D(esp+0xc4)+0x2c;
    ___12e78h_v3(___1a1108h___185c0bh, s_6c[D(___1a1ef8h)].name, D(esp+0xc4)+0x2c, D(esp+0xd4));
    D(esp+0xc0) = D(esp+0xd4)+0x10;

    ___12e78h_v3(___1a1108h___185c0bh, "1.", D(esp+0xc4)+0x27-___25138h_cdecl("1."), D(esp+0xd4)+0x00);
    ___12e78h_v3(___1a1108h___185c0bh, "2.", D(esp+0xc4)+0x27-___25138h_cdecl("2."), D(esp+0xd4)+0x10);
    ___12e78h_v3(___1a1108h___185c0bh, "3.", D(esp+0xc4)+0x27-___25138h_cdecl("3."), D(esp+0xd4)+0x20);
    ___12e78h_v3(___1a1108h___185c0bh, "4.", D(esp+0xc4)+0x27-___25138h_cdecl("4."), D(esp+0xd4)+0x30);
    ___12cb8h__VESA101_PRESENTSCREEN();

    ___24e4ach->read_p = ___24e4ach->write_p;
    ___5994ch();
    ___59b3ch();
    D(esp+0xf8) = -1;
    D(esp+0xe0) = D(esp+0xd0);
    D(esp+0xe4) = D(esp+0xbc);
    D(esp+0xf0) = 0;
    D(esp+0x104) = D(esp+0xd8)+0xb;
    D(esp+0xe8) = D(esp+0xbc);
    D(esp+0xc8) = 0x280*D(esp+0xc0);
    D(esp+0x100) = 0x280*D(esp+0xd4)+0xbb80;
    D(esp+0xcc) = 0x280*D(esp+0xd4);
    D(esp+0xec) = D(esp+0xc4)+0x2c;

    ecx = 1;
	while(1){

        if((D(esp+0xf8) == DR_SCAN_ENTER)||(D(esp+0xf8) == DR_SCAN_KP_ENTER)) break;
        ___2ab50h();
        B(esp+0x10c) = 1;
        D(esp+0xf0)++;

        while(1){

            if(___23594h_cdecl(vp1, D(esp+0x104)) == 0){

                B(esp+0x10c) = 0;
            }
            else {

                if(B(vp1) == 1){
                        
                    memcpy(esp+0xa0, vp1+5, 11);

                    eax = 0;
                    ebx = 0;
                    while(1){

                        if((D(vp1+1) == ___19dec0h[0])||(D(vp1+1) == ___19dec0h[1])||(D(vp1+1) == ___19dec0h[2])||(D(vp1+1) == ___19dec0h[3])||(___19dec0h[ebx] != 0)){

                            ebx++;
                            eax++;
                            if((int)ebx >= 4) break;
                        }
                        else {

                            strcpy(___1a0ffch+11*eax, esp+0xa0);
                            ___19dec0h[ebx] = D(vp1+1);
                            ecx = 1;
                            D(esp+0x108)++;
                            break;
                        }
                    }
			    }

                if(B(vp1) == 0){
                    
                    edx = 0;
                    ebx = 0;
                    if(D(vp1+1) != ___19dec0h[0]){

                        while(1){

                            edx++;
                            ebx++;
                            if((int)edx >= 4) break;
                            if(D(vp1+1) == ___19dec0h[edx]){

                                B(___1a0ffch+11*ebx) = 0;
                                ___19dec0h[edx] = 1;
                                ecx = 1;
                                D(esp+0x108)--;
                                break;
                            }
                        }
                    }
                    else {

                        B(___1a0ffch+11*ebx) = 0;
                        ___19dec0h[edx] = 0;
                        ecx = 1;
                        D(esp+0x108)--;
                    }
                }
            }

            if(B(esp+0x10c) != 1) break;
        }

        if((D(esp+0xf0)%4) == 0) ___23488h_cdecl(vp0, 0x1f, 0xa);

        D(esp+0xf8) = ___5994ch();
        if(D(esp+0x108) == 4) D(esp+0xf8) = DR_SCAN_ENTER;

        if((D(esp+0xf8) == DR_SCAN_ENTER)||(D(esp+0xf8) == DR_SCAN_KP_ENTER)){

			if((int)D(esp+0x108) > 1){

				B(vp0+1) = 2;
				B(vp0+2) = B(esp+0x108);
				___23488h_cdecl(vp0, 0x1f, 0xa);
			}
		}

        if((D(esp+0xf8) == DR_SCAN_ENTER)||(D(esp+0xf8) == DR_SCAN_KP_ENTER)){

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
            ___12e78h_v3(___1a1108h___185c0bh, s_6c[D(___1a1ef8h)].name, D(esp+0xe8)%0x280, D(esp+0xe8)/0x280);

            k = -1;
			while(++k < 3){

				if(strlen(___1a0ffch+11*(3-k)) > 0){
                    
                    co = D(esp+0xec)+D(esp+0xc8)+0x2800*k;
                    ___12e78h_v3(___1a1108h___185c0bh, ___1a0ffch+11*(3-k), co%0x280, co/0x280);
                }
			}

			___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0xe4), ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0xe0)+D(esp+0xc4)+0x2c, 0x190, 0x4b);
			ecx = 0;
		}

        if(D(esp+0xf8) == DR_SCAN_ESCAPE) break;
	}



    ___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
    ___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
	___23230h();

	if((D(esp+0xf8) == DR_SCAN_ENTER)||(D(esp+0xf8) == DR_SCAN_KP_ENTER)){

		strcat(strcat(strcpy(LastLine, "-- "), s_6c[D(___1a1ef8h)].name), "'s game started with ");
		strcat(strcat(LastLine, itoa_watcom106(D(esp+0x108), esp, 0xa)), " players and ");
		strcat(strcat(LastLine, itoa_watcom106(D(___196ab8h), esp, 0xa)), " track(s).");
        dRChatbox_push(LastLine, 0);
		___23230h();
		___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
		___23488h_cdecl(LastLine, strlen(LastLine)+1, 6);

		dRMemory_free(vp0);
		dRMemory_free(vp1);
		___61278h();
		___623d4h();
		D(___199f9ch) = D(esp+0xd8)+1;
		if(___61cd0h() == 0) ___1123ch();
		D(___196adch) = D(esp+0x108);
		___19bd60h = 1;

		if(CONNECTION_TYPE == 2) ___60705h(&___10754h);

		___1c6bch_cdecl(MP_MONEY);
		shop_main();
        D(___185a24h) = 1;

		return 1;
	}
    else {

        strcat(strcat(strcpy(LastLine, "-- "), s_6c[D(___1a1ef8h)].name), " closed the netgame.");
        dRChatbox_push(LastLine, 0);
        ___23230h();
        ___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
        ___23488h_cdecl(LastLine, strlen(LastLine)+1, 6);

        B(vp0+1) = 0;
        ___23488h_cdecl(vp0, 0x1f, 0xa);
        ___24e4ach->read_p = ___24e4ach->write_p;
        memset(___24e4ach->data, 0, 0x1000);
        ___5994ch();
        ___59b3ch();
        dRMemory_free(vp0);
        dRMemory_free(vp1);

        return 0;
    }
#else
    return 0;
#endif
}

#include "drally.h"
#include "drmemory.h"
#include "drally_structs_fixed.h"

#define COOXY(x,y) (0x280*(y)+(x))

	const char ___106cbh[19][4] = { 
		"TR1","TR2","TR3","TR4","TR5","TR6","TR7","TR8","TR9",
		"TR1","TR2","TR3","TR4","TR5","TR6","TR7","TR8","TR9",
		"TR0" };

	__DWORD__ ___10718h[4] = { COOXY( 51, 177), COOXY(163, 216), COOXY( 51, 274), COOXY(163, 313) };
	__DWORD__ ___10728h[4] = { COOXY( 24, 201), COOXY(136, 240), COOXY( 24, 298), COOXY(136, 337) };
	__DWORD__ ___10738h[4] = { COOXY( 53, 129), COOXY(165, 168), COOXY( 53, 226), COOXY(165, 265) };

	extern __BYTE__ ___196a74h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a1100h__VESA101h_DefaultScreenBuffer;
	extern __POINTER__ ___1a0f8ch;
	extern __POINTER__ ___1a0f94h;
	extern __BYTE__ ___1a1ef8h[];
	extern __POINTER__ ___1a0f9ch;
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___1a54d0h[];
	extern __POINTER__ ___1a1114h;
	extern int NUM_OF_LAPS;
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1a1f64h[];
	extern char ___19bd64h[16];
	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1a0ef8h[];
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
	extern __DWORD__ MP_MONEY;
#endif // DR_MULTIPLAYER
	extern __POINTER__ ___1a0fb4h;
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___19de70h[20];
	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___185a34h[];
	extern __BYTE__ ___1a1168h[];
	extern __BYTE__ ___196adch[];
	extern int LAP_BEST_SEC;
	extern int LAP_BEST_MIN;
	extern int LAP_PREVIOUS_100;
	extern int LAP_PREVIOUS_SEC;
	extern int LAP_PREVIOUS_MIN;
	extern __BYTE__ ___1a1090h[];
	extern __BYTE__ ___1a10a8h[];
	extern __BYTE__ ___1a10a0h[];
	extern __BYTE__ ___196ab0h[];
	extern int LAP_BEST_100;
	extern __BYTE__ ___196aa4h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __DWORD__ ___196a94h_difficulty;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __POINTER__ ___1a0fb8h;
	extern __POINTER__ ___1a0fe0h;
	extern record_t ___19f750h[6][18];
	extern int LAP_RECORD_MIN;
	extern int LAP_RECORD_SEC;
	extern int LAP_RECORD_100;
	extern __BYTE__ ___1a103ch[];
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a18h[];
	extern __BYTE__ ___196ae8h[];
	extern __BYTE__ ___196aa0h[];
	extern __BYTE__ ___196a9ch[];
	extern __BYTE__ ___196a98h[];
	extern __BYTE__ ___196aa8h[];
	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___196aach[];
	extern __DWORD__ ___243d44h;
	extern __BYTE__ ___196af0h[];
	extern __BYTE__ ___196aech[];
	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___196ad4h[];
	extern __BYTE__ ___196a80h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___18d492h[][0xf];
	extern __DWORD__ ___24cc58h_msx_volume;
	extern __BYTE__ ___185a20h[];

void dRChatbox_push(const char * line, int col);
__POINTER__ ___3f71ch__allocateMemory(__DWORD__ size);
void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void ___12e78h_cdecl(__BYTE__ *, __BYTE__ *, const char *, __DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
int rand_watcom106(void);
__DWORD__ ___251e8h_cdecl(const char *);
void ___3a968h_cdecl(__DWORD__);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void __WAIT_5(void);
void ___60a84h(void);
__DWORD__ ___60b60h(__DWORD__, __DWORD__, __POINTER__, __DWORD__);
void ___2ab50h(void);
__DWORD__ ___611c0h(__DWORD__ A1, __POINTER__ * A2);
void ___3881ch(void);
void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void ___60719h(void);
void race_main(int MyIndex, int NumCars);
void ___60705h(void (*A)(void));
#if defined(DR_MULTIPLAYER)
void ___38878h_cdecl(void);
void ___10754h(void);
void ___3986ch(void);
void ___1e4f8h(void);
void ___23488h_cdecl(__POINTER__, __BYTE__, __BYTE__);
#endif // DR_MULTIPLAYER
void ___2ec68h_cdecl(void);
void ___11378h_cdecl(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3);
void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch);
void dRally_Sound_setMusicVolume(__DWORD__ vol);
void dRally_Sound_setSampleRate(__DWORD__ freq);
void dRally_Sound_play(void);
void ___606dfh(void);
void __VESA101_SETMODE(void);
void ___605deh_cdecl(__DWORD__, __DWORD__);
void ___12940h(void);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void ___31588h(void);
void ___3892ch_cdecl(__DWORD__);
void ___22808h(void);
void ___3deb8h(void);
void ___117d4h(void);
void ___117f4h(void);
void ___3079ch_cdecl(__DWORD__);

typedef char char9[9];

static const char9 ___196b2ch[19] = {
	[0] = "TSHAPE01",
	[1] = "TSHAPE02",
	[2] = "TSHAPE03",
	[3] = "TSHAPE04",
	[4] = "TSHAPE05",
	[5] = "TSHAPE06",
	[6] = "TSHAPE07",
	[7] = "TSHAPE08",
	[8] = "TSHAPE09",
	[9] = "TSHAPE10",
	[10] = "TSHAPE11",
	[11] = "TSHAPE12", 
	[12] = "TSHAPE13",
	[13] = "TSHAPE14",
	[14] = "TSHAPE15",
	[15] = "TSHAPE16",
	[16] = "TSHAPE17",
	[17] = "TSHAPE18",
	[18] = "TSHAPE19"
};

// PREPARE TO RACE
void ___33010h_cdecl(int NumCars){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0xfc];
	int 	i, j, m, n, bool_tmp;
	__BYTE__ 	px;
	__POINTER__ 	ebxp;
	__POINTER__	esip;
	__POINTER__ 	ecxp;
	__POINTER__ 	eaxp;
	char 	buffer[0x96];
	__POINTER__ esp0x98[4];
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;
	memcpy(esp, ___106cbh, 4*19);
	memcpy(esp+0x88, ___10718h, 0x10);
	memcpy(esp+0xa8, ___10728h, 0x10);
	D(___196a74h) = 0;
	memcpy(esp+0xb8, ___10738h, 0x10);
	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101_BACKGROUND, 0x4b000);

/* PREPARE TO RACE BANNER ********************************************************************** */
	j = -1;
	while(++j < 0x36){

		i = -1;
		while(++i < 0x280){

			if((px = read_b(___1a0f8ch+0x280*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x42900+0x280*j+i, px);
		}
	}
/* ********************************************************************** PREPARE TO RACE BANNER */
/* ROSTER BACKGROUND *************************************************************************** */
	j = -1;
	while(++j < 0x112){

		i = -1;
		while(++i < 0xe1){

			if((px = read_b(___1a0f94h+0xe1*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfa0d+0x280*j+i, px);
		}
	}
/* *************************************************************************** ROSTER BACKGROUND */

	if(NumCars < 4){

		j = -1;
		while(++j < 0x5b){

			i = j%2;
			while(i < 0x64){

				write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*j+i+0x28d03, 0xc4);
				i += 2;
			}
		}
	}

	if(NumCars < 3){

		j = -1;
		while(++j < 0x5b){

			i = j%2;
			while(i < 0x64){

				write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*j+i+0x22b13, 0xc4);
				i += 2;
			}
		}
	}

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		D(___1de7d0h+0x48) = !!(B(___1a1f64h+D(___1a1028h)) > 8);

		switch(D(___1a1028h)){
		case 0:
			old_bpa_read("MENU.BPA", ___1a54d0h, strcat(strcpy(esp+0x4c, ___196b2ch[B(___1a1f64h)]), ".bpk"));
			bpk_decode2(___1a1114h, ___1a54d0h);

			j = -1;
			while(++j < 0x112){

				i = -1;
				while(++i < 0x168){

					if((px = read_b(___1a1114h+0x168*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfb08+0x280*j+i, px);
				}
			}

			strcpy(___19bd64h, esp+4*B(___1a1f64h));
			NUM_OF_LAPS = 4;
			break;
		case 1:
			old_bpa_read("MENU.BPA", ___1a54d0h, strcat(strcpy(esp+0x4c, ___196b2ch[B(___1a1f64h+1)]), ".bpk"));
			bpk_decode2(___1a1114h, ___1a54d0h);

			j = -1;
			while(++j < 0x112){

				i = -1;
				while(++i < 0x168){

					if((px = read_b(___1a1114h+0x168*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfb08+0x280*j+i, px);
				}
			}

			strcpy(___19bd64h, esp+4*B(___1a1f64h+1));
			NUM_OF_LAPS = 5;
			break;
		case 2:
			old_bpa_read("MENU.BPA", ___1a54d0h, strcat(strcpy(esp+0x4c, ___196b2ch[B(___1a1f64h+2)]), ".bpk"));
			bpk_decode2(___1a1114h, ___1a54d0h);

			j = -1;
			while(++j < 0x112){

				i = -1;
				while(++i < 0x168){

					if((px = read_b(___1a1114h+0x168*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfb08+0x280*j+i, px);
				}
			}

			strcpy(___19bd64h, esp+4*B(___1a1f64h+2));
			NUM_OF_LAPS = 6;
			break;
		case 3:
			old_bpa_read("MENU.BPA", ___1a54d0h, "TSHAPE19.BPK");
			bpk_decode2(___1a1114h, ___1a54d0h);

			j = -1;
			while(++j < 0x112){

				i = -1;
				while(++i < 0x168){

					if((px = read_b(___1a1114h+0x168*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfb08+0x280*j+i, px);
				}
			}

			strcpy(___19bd64h, "TR0");
			NUM_OF_LAPS = 9;
			D(___1de7d0h+0x48) = 0;
			break;
		default:
			break;
		}

		edx = D(___1a1028h);
		B(esp+0xcc) = B(edx*4+___1a0ef8h);
		B(esp+0xcd) = B(edx*4+___1a0ef8h+1);
		B(esp+0xce) = B(edx*4+___1a0ef8h+2);
		B(esp+0xcf) = B(edx*4+___1a0ef8h+3);

		if(edx == 3){
			
			B(esp+0xcc) = D(___1a1ef8h);
			B(esp+0xcd) = D(___1a1ef8h);
		}
#if defined(DR_MULTIPLAYER)
	}
	else {

		B(esp+0xcc) = 0;
		B(esp+0xce) = 2;
		B(esp+0xcd) = 1;
		B(esp+0xcf) = 3;
		___1a0f9ch = ___3f71ch__allocateMemory(4);
		B(___1a0f9ch) = D(___1a1ef8h);
		___23488h_cdecl(___1a0f9ch, 1, 0x13);
		dRMemory_free(___1a0f9ch);
		edx = B(___1a2010h+1+D(___196ad4h));
		strcpy(esp+0x4c, ___196b2ch[edx]);
		strcat(esp+0x4c, ".bpk");
		old_bpa_read("MENU.BPA", ___1a54d0h, esp+0x4c);
		bpk_decode2(___1a1114h, ___1a54d0h);

		j = -1;
			while(++j < 0x112){

				i = -1;
				while(++i < 0x168){

					if((px = B(___1a1114h+0x168*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xfb08+0x280*j+i) = px;
				}
			}

		eax = B(D(___196ad4h)+___1a2010h+1);
		strcpy(___19bd64h, esp+4*eax);
		L(edx) = B(D(___196ad4h)+___1a2010h+1);
		NUM_OF_LAPS = 5;

		if(L(edx) <= 8){

			D(___1de7d0h+0x48) = 0;
		}
		else {

			D(___1de7d0h+0x48) = 1;
		}
	}
#endif // DR_MULTIPLAYER

	strcpy(esp+0x4c, "NUMBER OF LAPS: ");
	itoa_watcom106(NUM_OF_LAPS, esp+0x74, 0xa);
	strcat(esp+0x4c, esp+0x74);
	___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, 0x3800d);
	strcpy(esp+0x4c, "PRIZE MONEY: ");

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		if(D(___1a1028h) == 0) strcat(esp+0x4c, "$750");
		if(D(___1a1028h) == 1) strcat(esp+0x4c, "$3000");
		if(D(___1a1028h) == 2) strcat(esp+0x4c, "$12000");
		if(D(___1a1028h) == 3) strcat(esp+0x4c, "GLORY");

#if defined(DR_MULTIPLAYER)
	}
	else {

		strcat(esp+0x4c, "$");
		D(esp+0xd4) = 3*MP_MONEY/10;
		itoa_watcom106(D(esp+0xd4), esp+0x74, 0xa);
		strcat(esp+0x4c, esp+0x74);
	}
#endif // DR_MULTIPLAYER

	eax = ___251e8h_cdecl(esp+0x4c);
	___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, 0x3816b-eax);

/* ROSTER FACES ******************************************************************************** */
	if(D(___1a1028h) != 3){

		D(esp+0xd0) = 0;

		if(NumCars > 0){

			D(esp+0xf4) = 0;

			while(1){

				itoa_watcom106(s_6c[B(esp+D(esp+0xd0)+0xcc)].rank, esp+0x4c, 0xa);
				strcat(esp+0x4c, ".");
				eax = ___251e8h_cdecl(esp+0x4c);
				___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+D(esp+0xf4)+0x88)-eax);
				strcpy(esp+0x4c, s_6c[B(esp+D(esp+0xd0)+0xcc)].name);
				strupr_watcom106(esp+0x4c);
				___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+D(esp+0xf4)+0xa8));

				j = -1;
				while(++j < 0x40){

					i = -1;
					while(++i < 0x40){

						px = read_b(___19de70h[s_6c[B(esp+D(esp+0xd0)+0xcc)].face]+0x40*j+i);
						write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+D(esp+0xf4)+0xb8)+0x280*j+i, px);
					}
				}

				D(esp+0xf4) += 4;
				D(esp+0xd0) += 1;

				if((int)D(esp+0xd0) >= NumCars) break;
			}
		}
	}
	else {

		strupr_watcom106(strcpy(esp+0x4c, "adversary"));
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+0xa8));

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x40){

				px = read_b(___1a0fb4h+0x40*j+i);
				write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0xb8)+0x280*j+i, px);
			}
		}

		itoa_watcom106(s_6c[B(esp+0xcc)].rank, esp+0x4c, 0xa);
		strcat(esp+0x4c, ".");
		eax = ___251e8h_cdecl(esp+0x4c);
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+0x8c)-eax);
		strcpy(esp+0x4c, s_6c[B(esp+0xcc)].name);
		strupr_watcom106(esp+0x4c);
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+0xac));

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x40){

				px = read_b(___19de70h[s_6c[B(esp+0xcc)].face]+0x40*j+i);
				write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0xbc)+0x280*j+i, px);
			}
		}
	}
/* ******************************************************************************** ROSTER FACES */

	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
	___3a968h_cdecl(-1);
	
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){
		
		dRally_Sound_setPosition(0x1e00);
	}
	else {
#endif // DR_MULTIPLAYER
		dRally_Sound_setPosition(0x2800);
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER
	
	dRally_Sound_setMasterVolume(0x10000);
	___12cb8h__VESA101_PRESENTSCREEN();
	__WAIT_5();

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){
	
		if(D(___196a84h) != 0) D(___185a34h) = 1;

		if(D(___196a84h) == 0){
			
			esp0x98[0] = (__POINTER__)&s_6c[B(___1a1168h)];
			esp0x98[1] = (__POINTER__)&s_6c[B(___1a1168h+1)];
			esp0x98[2] = (__POINTER__)&s_6c[B(___1a1168h+2)];
			esp0x98[3] = (__POINTER__)&s_6c[B(___1a1168h+3)];
			___1a0f9ch = ___3f71ch__allocateMemory(4);
			B(___1a0f9ch) = D(___1a1ef8h);
			___60a84h();
			
			n = 0;
			esi = 0;
			while(1){

				if(D(___196a84h) != 0) break;
				___38878h_cdecl();
				___2ab50h();
				___2ab50h();

				if((esi%10) == 1) n = ___60b60h(1, D(___196adch), (__POINTER__)&s_6c[D(___1a1ef8h)], sizeof(racer_t));
				if((esi%900) == 899) ___23488h_cdecl(___1a0f9ch, 1, 0x13);

				esi++;
			
				if(n == 0xff) break;
			}

			___611c0h(0x6c, (__POINTER__ *)esp0x98);
			if(n == 0xff) ___3881ch();
			___12cb8h__VESA101_PRESENTSCREEN();
			dRMemory_free(___1a0f9ch);
		}
	}
#endif // DR_MULTIPLAYER

	if(D(___196a84h) != 0){
		
		D(___185a34h) = 1;
		return;
	}

	LAP_BEST_SEC = 0;
	LAP_BEST_MIN = 0;
	LAP_PREVIOUS_100 = 0;
	LAP_PREVIOUS_SEC = 0;
	LAP_PREVIOUS_MIN = 0;
	D(___1a1090h) = 0;
	D(___1a10a8h) = 0;
	D(___1a10a0h) = 0;
	D(___196ab0h) = 0;
	LAP_BEST_100 = 0;

	edx = 0;
	n = -1;
	while(++n < 0x14){

		if(((int)edx < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) edx = s_6c[n].points;
	}

	D(___1de7d0h+0x4c) = 0;

#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif
			if((int)D(___196aa4h) > 0) D(___1de7d0h+0x4c) = 1;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER

	n = -1;
	while(++n < NumCars){

		strcpy(___1de7d0h+0x54*n, s_6c[B(esp+n+0xcc)].name);
		strupr_watcom106(___1de7d0h+0x54*n);
		D(___1de7d0h+0x54*n+0x10) = s_6c[B(esp+n+0xcc)].damage;
		D(___1de7d0h+0x54*n+0x14) = s_6c[B(esp+n+0xcc)].engine;
		D(___1de7d0h+0x54*n+0x18) = s_6c[B(esp+n+0xcc)].tires;
		D(___1de7d0h+0x54*n+0x30) = s_6c[B(esp+n+0xcc)].car;
		D(___1de7d0h+0x54*n+0x1c) = s_6c[B(esp+n+0xcc)].armor;

		edx = B(esp+n+0xcc);
		if(edx != D(___1a1ef8h)){

			D(___1de7d0h+0x54*n+0x44) = ___196a94h_difficulty;
		}
		else {
		
			D(___1de7d0h+0x54*n+0x44) = 3;
		}

		D(___1de7d0h+0x54*n+0x2c) = D(___185a14h_UseWeapons);
		D(___1de7d0h+0x54*n+0x20) = s_6c[B(esp+n+0xcc)].rocket_fuel;
		D(___1de7d0h+0x54*n+0x24) = s_6c[B(esp+n+0xcc)].spikes;
		D(___1de7d0h+0x54*n+0x28) = s_6c[B(esp+n+0xcc)].mines;		// LOAD BOUGHT MINES 

		edx = B(esp+n+0xcc);
		if(edx != D(___1a1ef8h)){
#if defined(DR_MULTIPLAYER)			
			if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
				D(___1de7d0h+0x54*n+0x28) = 0;
				D(___1de7d0h+0x54*n+0x24) = 0;
				D(___1de7d0h+0x54*n+0x20) = 0;
				if(((rand_watcom106()%5) == 0)&&(D(___185a14h_UseWeapons) != 0)) D(___1de7d0h+0x54*n+0x20) = 1;
				if(((rand_watcom106()%5) == 0)&&(D(___185a14h_UseWeapons) != 0)) D(___1de7d0h+0x54*n+0x24) = 1;
				if(((rand_watcom106()%5) == 0)&&(D(___185a14h_UseWeapons) != 0)) D(___1de7d0h+0x54*n+0x28) = 8;
#if defined(DR_MULTIPLAYER)	
			}
#endif // DR_MULTIPLAYER
		}

		eaxp = ___1a0fb8h;

#if defined(DR_MULTIPLAYER)	
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			eax = B(esp+n+0xcc);
			if(eax != D(___1a1ef8h)) eaxp = ___1a0fe0h;
#if defined(DR_MULTIPLAYER)	
		}
#endif // DR_MULTIPLAYER

		D(___1de7d0h+0x54*n+0x34) = B(eaxp+3*s_6c[B(esp+n+0xcc)].color);
		D(___1de7d0h+0x54*n+0x38) = B(eaxp+3*s_6c[B(esp+n+0xcc)].color+1);
		D(___1de7d0h+0x54*n+0x3c) = B(eaxp+3*s_6c[B(esp+n+0xcc)].color+2);

#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0){

			if((int)(D(___196adch)-1) < n){

				D(___1de7d0h+0x54*n+0x34) = B(___1a0fe0h+0x1e);
				D(___1de7d0h+0x54*n+0x38) = B(___1a0fe0h+0x1f);
				D(___1de7d0h+0x54*n+0x3c) = B(___1a0fe0h+0x20);
			}
		}
#endif // DR_MULTIPLAYER
	}//w

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		n = -1;
		while(++n < 4){

			D(___1de7d0h+0x54*n+0x34) = B(___1a0fe0h+0x1e);
			D(___1de7d0h+0x54*n+0x38) = B(___1a0fe0h+0x1f);
			D(___1de7d0h+0x54*n+0x3c) = B(___1a0fe0h+0x20);
		}
	}
#endif // DR_MULTIPLAYER

	edx = 0;
	n = -1;
	while(++n < NumCars){

		if(((int)edx < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) edx = s_6c[n].points;
	}

	if((int)edx < (int)s_6c[D(___1a1ef8h)].points){
#if defined(DR_MULTIPLAYR)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			strcpy(___1de7d0h, "ADVERSARY"); 
			D(___1de7d0h+0x44) = ___196a94h_difficulty;
			D(___1de7d0h+0x10) = 0;
			D(___1de7d0h+0x20) = 0;
			D(___1de7d0h+0x24) = 1;
			D(___1de7d0h+0x30) = 6;
			D(___1de7d0h+0x28) = 8*!!D(___185a14h_UseWeapons);
			D(___1de7d0h+0x2c) = D(___185a14h_UseWeapons);
			D(___1de7d0h+2*0x54+0x34) = B(___1a0fe0h+0x1e);
			D(___1de7d0h+2*0x54+0x38) = B(___1a0fe0h+0x1f);
			D(___1de7d0h+2*0x54+0x3c) = B(___1a0fe0h+0x20);
			D(___1de7d0h+3*0x54+0x34) = D(___1de7d0h+2*0x54+0x34);
			D(___1de7d0h+3*0x54+0x38) = D(___1de7d0h+2*0x54+0x38);
			D(___1de7d0h+3*0x54+0x3c) = D(___1de7d0h+2*0x54+0x3c);
#if defined(DR_MULTIPLAYR)
		}
#endif // DR_MULTIPLAYER
	}

	LAP_RECORD_MIN = ___19f750h[s_6c[D(___1a1ef8h)].car][B(___1a1f64h+D(___1a1028h))].min;
	LAP_RECORD_SEC = ___19f750h[s_6c[D(___1a1ef8h)].car][B(___1a1f64h+D(___1a1028h))].sec;
	LAP_RECORD_100 = ___19f750h[s_6c[D(___1a1ef8h)].car][B(___1a1f64h+D(___1a1028h))].sec100;
	D(___1de7d0h+0x50) = 0;

#if defined(DR_MULTIPLAYER)	
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
		if((int)edx >= (int)s_6c[D(___1a1ef8h)].points){

			if(D(___1a1028h) == 0) D(___1de7d0h+0x50) = 50;

			if(((int)s_6c[D(___1a1ef8h)].rank > 0)&&((int)s_6c[D(___1a1ef8h)].rank < 6)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 260;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 500;
			}

			if(((int)s_6c[D(___1a1ef8h)].rank > 5)&&((int)s_6c[D(___1a1ef8h)].rank < 0xb)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 200;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 300;
			}

			if(((int)s_6c[D(___1a1ef8h)].rank > 0xa)&&((int)s_6c[D(___1a1ef8h)].rank < 0x10)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 120;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 150;
			}

			if(((int)s_6c[D(___1a1ef8h)].rank > 0xf)&&((int)s_6c[D(___1a1ef8h)].rank < 0x15)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 60;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 80;
			}
		}
#if defined(DR_MULTIPLAYER)	
	}

	if(___19bd60h != 0) D(___1de7d0h+0x50) = MP_MONEY/0x32;

	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		if((int)edx < (int)s_6c[D(___1a1ef8h)].points) D(___1de7d0h+0x50) = 0x190;
#if defined(DR_MULTIPLAYER)	
	}
#endif // DR_MULTIPLAYER

	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();

#if defined(DR_MULTIPLAYER)	
	if(___19bd60h != 0){
	
		D(___1a103ch) = D(___1a1ef8h);

		if(CONNECTION_TYPE == 2) ___60719h();
	}
#endif // DR_MULTIPLAYER

	race_main(D(___1a103ch), NumCars);

#if defined(DR_MULTIPLAYER)	
	if((___19bd60h != 0)&&(CONNECTION_TYPE == 2)) ___60705h(&___10754h);
#endif // DR_MULTIPLAYER

	D(___185a18h) = D(___196ae8h) = D(___1de7d0h+0x40+0x54*D(___1a103ch));

	edx = 0;
	n = -1;
	while(++n < 0x14){

		if((int)edx < (int)s_6c[n].points){
		
			if(n != D(___1a1ef8h)) edx = s_6c[n].points;
		}
	}

	bool_tmp = 0;
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) bool_tmp = 1;
#endif // DR_MULTIPLAYER

	if(((int)edx >= (int)s_6c[D(___1a1ef8h)].points)||bool_tmp){

		eax = 0;

		n = -1;
		while(++n < NumCars){

			if((n != D(___1a103ch))&&(D(___1de7d0h+0x54*n+0x10) == 100)) eax++;
		}

		if((eax == (NumCars-1))&&((int)D(___1de7d0h+0x54*D(___1a103ch)+0x10) < 100)) D(___196aa0h) = 1;

#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			if((D(___196ae8h) != 4)&&((int)D(___1de7d0h+0x54*D(___1a103ch)+0x10) < 3)){
			
				if(D(___185a14h_UseWeapons) == 1) D(___196a9ch) = 1;
			}
#if defined(DR_MULTIPLAYER)
		}
		else {

			if(((int)D(___1de7d0h+0x54*D(___1a103ch)+0x10) < 3)||(D(___185a14h_UseWeapons) == 1)) D(___196a9ch) = 1;
		}
#endif // DR_MULTIPLAYER

		if(D(___196ae8h) != 1){

			D(___196a98h) = 0;
		}
		else {

			D(___196a98h)++;
		}

#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			if((int)D(___196aa4h) > 0){

				if((D(___1de7d0h+0x4c) != 1)||(D(___1de7d0h+0x4c) != D(___196ae8h))){

					D(___196aa4h) = 0-D(___196aa4h);
				}
				else {

					if((int)D(___1de7d0h+0x54*D(___1a103ch)+0x10) >= 100) D(___196aa4h) = 0-D(___196aa4h);
				}
			}
#if defined(DR_MULTIPLAYER)
		}
			
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			if((int)D(___196aa8h) > 0){

				edx = -1;
				while(++edx < 4){

					ebx = B(___1a0ef8h+4*D(___1a1028h)+edx);
					if(ebx == D(___196aach)) eax = edx;
				}

				if(D(___1de7d0h+0x54*eax+0x10) != 100) D(___196aa8h) = 0-D(___196aa8h);
			}
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}

	if(s_6c[D(___1a1ef8h)].loanshark_type != -1) s_6c[D(___1a1ef8h)].loanshark_counter++;
	___243d44h = 0;

	n = -1;
	while(++n < 0x14){

		s_6c[n].spikes = 0;
		s_6c[n].rocket_fuel = 0;
		s_6c[n].sabotage = 0;
		s_6c[n].mines = 0;
	}

	___2ec68h_cdecl();
	D(___196af0h) = 0;
	D(___196aech) = 0;

	n = -1;
	while(++n < 4) s_6c[B(esp+n+0xcc)].bonus = 0;

	ebx = 0;
	n = -1;
	while(++n < 0x14){

		if(((int)ebx < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) ebx = s_6c[n].points;
	}

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
		if(((int)ebx >= (int)s_6c[D(___1a1ef8h)].points)&&(D(___196ab0h) == 0)){

			n = -1;
			while(++n < 4){

				if((D(___196ae8h) != 4)&&(D(___1a1028h) == 0)){

					s_6c[B(esp+n+0xcc)].bonus = 50*D(___1de7d0h+0x54*n+0xc);
					if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
				}

				if(((int)s_6c[D(___1a1ef8h)].rank > 0)&&((int)s_6c[D(___1a1ef8h)].rank < 6)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){
						
						s_6c[B(esp+n+0xcc)].bonus = 260*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						s_6c[B(esp+n+0xcc)].bonus = 500*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}
				}

				if(((int)s_6c[D(___1a1ef8h)].rank > 5)&&((int)s_6c[D(___1a1ef8h)].rank < 0xb)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						s_6c[B(esp+n+0xcc)].bonus = 200*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						s_6c[B(esp+n+0xcc)].bonus = 300*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}
				}

				if(((int)s_6c[D(___1a1ef8h)].rank > 0xa)&&((int)s_6c[D(___1a1ef8h)].rank < 0x10)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						s_6c[B(esp+n+0xcc)].bonus = 120*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						s_6c[B(esp+n+0xcc)].bonus = 150*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}
				}

				if(((int)s_6c[D(___1a1ef8h)].rank > 0xf)&&((int)s_6c[D(___1a1ef8h)].rank < 0x15)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						s_6c[B(esp+n+0xcc)].bonus = 60*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						s_6c[B(esp+n+0xcc)].bonus = 80*D(___1de7d0h+0x54*n+0xc);
						if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;
					}
				}

				switch(D(___1a1028h)){
				case 0:
					if((D(___1de7d0h+0x54*n+0x40) == 1)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 750;
						if(n == D(___1a103ch)) D(___196aech) = 750;
					}

					if((D(___1de7d0h+0x54*n+0x40) == 2)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 375;
						if(n == D(___1a103ch)) D(___196aech) = 375;
					}

					if((D(___1de7d0h+0x54*n+0x40) == 3)&&(D(___1de7d0h+0x54*n+0x10) != 100)){
						
						s_6c[B(esp+n+0xcc)].bonus += 187;
						if(n == D(___1a103ch)) D(___196aech) = 187;
					}
					break;
				case 1:
					if((D(___1de7d0h+0x54*n+0x40) == 1)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 3000;
						if(n == D(___1a103ch)) D(___196aech) = 3000;
					}

					if((D(___1de7d0h+0x54*n+0x40) == 2)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 1500;
						if(n == D(___1a103ch)) D(___196aech) = 1500;
					}

					if((D(___1de7d0h+0x54*n+0x40) == 3)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 375;
						if(n == D(___1a103ch)) D(___196aech) = 375;
					}
					break;
				case 2:
					if((D(___1de7d0h+0x54*n+0x40) == 1)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 12000;
						if(n == D(___1a103ch)) D(___196aech) = 12000;
					}

					if((D(___1de7d0h+0x54*n+0x40) == 2)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 6000;
						if(n == D(___1a103ch)) D(___196aech) = 6000;
					}

					if((D(___1de7d0h+0x54*n+0x40) == 3)&&(D(___1de7d0h+0x54*n+0x10) != 100)){

						s_6c[B(esp+n+0xcc)].bonus += 1500;
						if(n == D(___1a103ch)) D(___196aech) = 1500;
					}
					break;
				default:
					break;
				}

				s_6c[B(esp+n+0xcc)].money += s_6c[B(esp+n+0xcc)].bonus;
				s_6c[B(esp+n+0xcc)].income += s_6c[B(esp+n+0xcc)].bonus;
				if(D(___1de7d0h+0x54*n+0x40) == 1) s_6c[B(esp+n+0xcc)].wins++;
			}//w
		}//i
#if defined(DR_MULTIPLAYER)
	}

	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		if((int)ebx < (int)s_6c[D(___1a1ef8h)].points){

			D(___196af0h) = 0x190*D(___1de7d0h+0x54*D(___1a103ch)+0xc);
			s_6c[B(esp+D(___1a103ch)+0xcc)].bonus = D(___196af0h);
		}
#if defined(DR_MULTIPLAYER)
	}

	if(___19bd60h != 0){

		D(___196ad4h)++;

		if((int)D(___196ad4h) < (int)D(___196ab8h)){

			if(D(___1de7d0h+0x44) != -1){

				strcpy(buffer, "-- ");
				strcat(buffer, ___18d492h[B(___1a2010h+D(___196ad4h))]);
				strcat(buffer, " race completed. Next race ");
				strcat(buffer, ___18d492h[B(___1a2010h+D(___196ad4h)+1)]);
				strcat(buffer, ".");
			}
			else {

				strcpy(buffer, "-- Multiplayer connection lost!");
			}
		}
		else {
		
			D(___196a80h) = 1;
			strcat(strcat(strcpy(buffer, "-- "), s_6c[D(___1a1ef8h)].name), " completed the netgame.");
		}

		dRChatbox_push(buffer, 0);
		dRChatbox_push("", 0);

		D(___196aech) = 0;
		D(___196af0h) = 0;

		n = -1;
		while(++n < (int)D(___196adch)){

			D(esp+0xd8) = MP_MONEY/50;
			s_6c[B(esp+n+0xcc)].bonus = D(___1de7d0h+0x54*n+0xc)*D(esp+0xd8);

			if(n == D(___1a103ch)) D(___196af0h) = s_6c[B(esp+n+0xcc)].bonus;

			if(D(___1de7d0h+0x54*n+0x40) == 1){

				D(esp+0xdc) = 6*MP_MONEY/20;
				s_6c[B(esp+n+0xcc)].bonus += D(esp+0xdc);
				if(n == D(___1a103ch)) D(___196aech) = D(esp+0xdc);
				s_6c[B(esp+n+0xcc)].points += 6;
			}

			if(D(___1de7d0h+0x54*n+0x40) == 2){

				D(esp+0xe0) = 5*MP_MONEY/20;
				s_6c[B(esp+n+0xcc)].bonus = D(esp+0xe0);
				if(n == D(___1a103ch)) D(___196aech) = D(esp+0xe0);
				s_6c[B(esp+n+0xcc)].points += 4;
			}

			if(D(___1de7d0h+0x54*n+0x40) == 3){

				D(esp+0xe4) = 4*MP_MONEY/20;
				s_6c[B(esp+n+0xcc)].bonus += D(esp+0xe4);
				if(n == D(___1a103ch)) D(___196aech) = D(esp+0xe4);
				s_6c[B(esp+n+0xcc)].points += 2;
			}

			if(D(___1de7d0h+0x54*n+0x40) == 4){

				D(esp+0xe8) = 3*MP_MONEY/20;
				s_6c[B(esp+n+0xcc)].bonus += D(esp+0xe8);
				if(n == D(___1a103ch)) D(___196aech) = D(esp+0xe8);
			}

			s_6c[B(esp+n+0xcc)].money += s_6c[B(esp+n+0xcc)].bonus;
			s_6c[B(esp+n+0xcc)].income += s_6c[B(esp+n+0xcc)].bonus;

			if(D(___1de7d0h+0x54*n+0x40) == 1) s_6c[B(esp+n+0xcc)].wins++;
		}//w
	}//i
#endif // DR_MULTIPLAYER

	edx = 0;
	n = -1;
	while(++n < 0x14){

		if(((int)edx < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) edx = s_6c[n].points;
	}

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		if((int)edx < (int)s_6c[D(___1a1ef8h)].points){
		
			s_6c[D(___1a1ef8h)].damage = D(___1de7d0h+0x54+0x10);
			s_6c[D(___1a1ef8h)].races++;
		}
		else {

			n = -1;
			while(++n < NumCars){

				s_6c[B(esp+n+0xcc)].damage = D(___1de7d0h+0x54*n+0x10);
				s_6c[B(esp+n+0xcc)].races++;
			}
		}
#if defined(DR_MULTIPLAYER)
	}
	else {

		n = -1;
		while(++n < NumCars){

			s_6c[B(esp+n+0xcc)].damage = D(___1de7d0h+0x54*n+0x10);
			s_6c[B(esp+n+0xcc)].races++;
		}
	}
	
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
		___3deb8h();
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	___117d4h();	// Allocate VESA101 Screen
	___117f4h();

	edx = 0;
	n = -1;
	while(++n < 0x14){

		if(((int)edx < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) edx = s_6c[n].points;
	}

	bool_tmp = 0;
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) bool_tmp = 1;
#endif // DR_MULTIPLAYER

	if(((int)edx >= (int)s_6c[D(___1a1ef8h)].points)||((D(___196ae8h) != 1)||bool_tmp)){

		___11378h_cdecl(
			B(___1a0fb8h+3*s_6c[D(___1a1ef8h)].color),
			B(___1a0fb8h+3*s_6c[D(___1a1ef8h)].color+1),
			B(___1a0fb8h+3*s_6c[D(___1a1ef8h)].color+2));

		dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
		dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
		dRally_Sound_setSampleRate(0x5622);
		dRally_Sound_play();
		___606dfh();
		__VESA101_SETMODE();
		___605deh_cdecl(0x46, 0);
	}

	___12940h();

	n = -1;
	while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		edx = 0;
	
		n = -1;
		while(++n < 0x14){

			if(((int)edx < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) edx = s_6c[n].points;
		}

		if((int)edx < (int)s_6c[D(___1a1ef8h)].points){

			___31588h();

			while(1){
				
				___3079ch_cdecl(1);
				
				if((4 <= B(___1a1f64h+3))&&(4 <= B(___1a1f64h+4))&&(4 <= B(___1a1f64h+5))) break;
			}

			memset(esp+0x4c, 0, 4);

			n = 0;
			while(n < 4){

				D(___1de7d0h+0x54*n+0x40) = (rand_watcom106()%4)+1;

				if(B(esp+D(___1de7d0h+0x54*n+0x40)+0x4b) == 0){
					
					B(esp+D(___1de7d0h+0x54*n+0x40)+0x4b) = 1;

					if(++n == 4){
						
						if(D(___196ae8h) == 1){

							// after beating adversary
							___22808h();
						}
						else {

							___3892ch_cdecl(0);
							D(___185a20h) = 1;
						}
					}
				}
			}
		}
		else {

			___3892ch_cdecl(0);
		}
#if defined(DR_MULTIPLAYER)
	}
	else {

		___3986ch();

		if(D(___196a80h) != 0) ___1e4f8h();
	}
#endif // DR_MULTIPLAYER
}

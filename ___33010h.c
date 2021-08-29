#include "drally.h"
#include "drmemory.h"

#define COOXY(x,y) (0x280*(y)+(x))

	const char ___106cbh[19][4] = { 
		"TR1","TR2","TR3","TR4","TR5","TR6","TR7","TR8","TR9",
		"TR1","TR2","TR3","TR4","TR5","TR6","TR7","TR8","TR9",
		"TR0" };

	dword ___10718h[4] = { COOXY( 51, 177), COOXY(163, 216), COOXY( 51, 274), COOXY(163, 313) };
	dword ___10728h[4] = { COOXY( 24, 201), COOXY(136, 240), COOXY( 24, 298), COOXY(136, 337) };
	dword ___10738h[4] = { COOXY( 53, 129), COOXY(165, 168), COOXY( 53, 226), COOXY(165, 265) };

	extern byte ___196a74h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a0f8ch;
	extern void * ___1a0f94h;
	extern byte ___1a1ef8h[];
	extern void * ___1a0f9ch;
	extern byte ___1a2010h[];
	extern byte ___1a54d0h[];
	extern void * ___1a1114h;
	extern byte ___1a1134h[];
	extern byte ___1de7d0h[];
	extern byte ___1a1028h[];
	extern byte ___1a1f64h[];
	extern char ___19bd64h[16];
	extern byte ___1a1134h[];
	extern byte ___1a1028h[];
	extern byte ___1a0ef8h[];
	extern byte ___185c7ah[];
	extern void * ___1a10b8h;
	extern byte ___19bd60h[];
	extern byte ___185a54h[];
	extern void * ___1a0fb4h;
	extern byte ___1a01e0h[];
	extern void * ___19de70h[20];
	extern void * ___1a1100h__VESA101h_DefaultScreenBuffer;
	extern byte ___196a84h[];
	extern byte ___185a34h[];
	extern byte ___1a1168h[];
	extern byte ___196adch[];
	extern byte ___1a108ch[];
	extern byte ___1a1034h[];
	extern byte ___1a102ch[];
	extern byte ___1a109ch[];
	extern byte ___1a1094h[];
	extern byte ___1a1090h[];
	extern byte ___1a10a8h[];
	extern byte ___1a10a0h[];
	extern byte ___196ab0h[];
	extern byte ___1a0ff4h[];
	extern byte ___196aa4h[];
	extern byte ___1a1ef8h[];
	extern __DWORD__ ___196a94h_difficulty;
	extern byte ___185a14h_UseWeapons[];
	extern void * ___1a0fb8h;
	extern void * ___1a0fe0h;
	extern byte ___19f750h[];
	extern byte ___2438bch[];
	extern byte ___2438b8h[];
	extern byte ___1a01e0h[];
	extern byte ___2438c0h[];
	extern byte ___1a103ch[];
	extern byte CONNECTION_TYPE[];
	extern byte ___1a1ef8h[];
	extern byte ___185a18h[];
	extern byte ___196ae8h[];
	extern byte ___196aa0h[];
	extern byte ___196a9ch[];
	extern byte ___196a98h[];
	extern byte ___196aa8h[];
	extern byte ___1a1028h[];
	extern byte ___196aach[];
	extern byte ___243d44h[];
	extern byte ___196af0h[];
	extern byte ___196aech[];
	extern byte ___196ab8h[];
	extern byte ___1a116ch[];
	extern byte ___196ad4h[];
	extern byte ___196a80h[];
	extern byte ___1a1f4eh[];
	extern byte ___1a1ef8h[];
	extern byte ___1a2010h[];
	extern byte ___18d492h[];
	extern __DWORD__ ___24cc58h_msx_volume;
	extern byte ___185a20h[];

void * ___3f71ch__allocateMemory(dword size);
void old_bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);
void ___12e78h_cdecl(byte *, byte *, const char *, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
int rand_watcom106(void);
dword ___251e8h_cdecl(const char *);
void ___3a968h_cdecl(dword);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setMasterVolume(dword vol);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void __WAIT_5(void);
void ___60a84h(void);
dword ___60b60h(dword, dword, dword, dword);
void ___2ab50h(void);
dword ___611c0h(dword A1, dword A2);
void ___3881ch(void);
void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void ___60719h(void);
void race_main(dword, dword);
void ___60705h(void (*A)(void));
#if defined(DR_MULTIPLAYER)
void ___38878h_cdecl(void);
void ___10754h(void);
void ___3986ch(void);
void ___1e4f8h(void);
void ___23488h_cdecl(dword, dword, dword);
#endif // DR_MULTIPLAYER
void ___2ec68h_cdecl(void);
void ___11378h_cdecl(dword A1, dword A2, dword A3);
void dRally_Sound_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_play(void);
void ___606dfh(void);
void __VESA101_SETMODE(void);
void ___605deh_cdecl(dword, dword);
void ___12940h(void);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___31588h(void);
void ___3892ch_cdecl(dword);
void ___22808h(void);
void ___3deb8h(void);
void ___117d4h(void);
void ___117f4h(void);
void ___3079ch_cdecl(dword);

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
void ___33010h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xfc];
	int 	i, j, m, n;
	byte 	px;
	void * 	ebxp;
	void *	esip;
	void * 	ecxp;
	void * 	eaxp;


	D(esp+0xc8) = A1;
	memcpy(esp, ___106cbh, 4*19);
	memcpy(esp+0x88, ___10718h, 0x10);
	memcpy(esp+0xa8, ___10728h, 0x10);
	D(___196a74h) = 0;
	memcpy(esp+0xb8, ___10738h, 0x10);
	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101h_DefaultScreenBufferB, 0x4b000);

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

	if((int)D(esp+0xc8) < 4){

		j = -1;
		while(++j < 0x5b){

			i = j%2;
			while(i < 0x64){

				write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*j+i+0x28d03, 0xc4);
				i += 2;
			}
		}
	}

	if((int)D(esp+0xc8) < 3){

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
	if(D(___19bd60h) == 0){
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
			D(___1a1134h) = 4;
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
			D(___1a1134h) = 5;
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
			D(___1a1134h) = 6;
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
			D(___1a1134h) = 9;
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
			
			B(esp+0xcc) = B(___1a1ef8h);
			B(esp+0xcd) = B(___1a1ef8h);
		}
#if defined(DR_MULTIPLAYER)
	}
	else {

		B(esp+0xcc) = 0;
		B(esp+0xce) = 2;
		B(esp+0xcd) = 1;
		B(esp+0xcf) = 3;
		___1a0f9ch = ___3f71ch__allocateMemory(4);
		B(___1a0f9ch) = B(___1a1ef8h);
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
		D(___1a1134h) = 5;

		if(L(edx) <= 8){

			D(___1de7d0h+0x48) = 0;
		}
		else {

			D(___1de7d0h+0x48) = 1;
		}
	}
#endif // DR_MULTIPLAYER

	strcpy(esp+0x4c, "NUMBER OF LAPS: ");
	itoa_watcom106(D(___1a1134h), esp+0x74, 0xa);
	strcat(esp+0x4c, esp+0x74);
	___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, 0x3800d);
	strcpy(esp+0x4c, "PRIZE MONEY: ");

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

		if(D(___1a1028h) == 0) strcat(esp+0x4c, "$750");
		if(D(___1a1028h) == 1) strcat(esp+0x4c, "$3000");
		if(D(___1a1028h) == 2) strcat(esp+0x4c, "$12000");
		if(D(___1a1028h) == 3) strcat(esp+0x4c, "GLORY");

#if defined(DR_MULTIPLAYER)
	}
	else {

		strcat(esp+0x4c, "$");
		D(esp+0xd4) = 3*D(___185a54h)/10;
		itoa_watcom106(D(esp+0xd4), esp+0x74, 0xa);
		strcat(esp+0x4c, esp+0x74);
	}
#endif // DR_MULTIPLAYER

	eax = ___251e8h_cdecl(esp+0x4c);
	___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, 0x3816b-eax);

/* ROSTER FACES ******************************************************************************** */
	if(D(___1a1028h) != 3){

		D(esp+0xd0) = 0;

		if((int)D(esp+0xc8) > 0){

			D(esp+0xf4) = 0;

			while(1){

				itoa_watcom106(D(0x6c*B(esp+D(esp+0xd0)+0xcc)+___1a01e0h+0x48), esp+0x4c, 0xa);
				strcat(esp+0x4c, ".");
				eax = ___251e8h_cdecl(esp+0x4c);
				___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+D(esp+0xf4)+0x88)-eax);
				strcpy(esp+0x4c, ___1a01e0h+0x6c*B(esp+D(esp+0xd0)+0xcc));
				strupr_watcom106(esp+0x4c);
				___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+D(esp+0xf4)+0xa8));

				j = -1;
				while(++j < 0x40){

					i = -1;
					while(++i < 0x40){

						px = read_b(___19de70h[D(___1a01e0h+0x6c*B(esp+D(esp+0xd0)+0xcc)+0x40)]+0x40*j+i);
						write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+D(esp+0xf4)+0xb8)+0x280*j+i, px);
					}
				}

				D(esp+0xf4) += 4;
				D(esp+0xd0) += 1;

				if((int)D(esp+0xd0) >= (int)D(esp+0xc8)) break;
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

		itoa_watcom106(D(___1a01e0h+0x48+0x6c*B(esp+0xcc)), esp+0x4c, 0xa);
		strcat(esp+0x4c, ".");
		eax = ___251e8h_cdecl(esp+0x4c);
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+0x8c)-eax);
		strcpy(esp+0x4c, ___1a01e0h+0x6c*B(esp+0xcc));
		strupr_watcom106(esp+0x4c);
		___12e78h_cdecl(___1a10b8h, ___185c7ah, esp+0x4c, D(esp+0xac));

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x40){

				px = read_b(___19de70h[D(___1a01e0h+0x40+0x6c*B(esp+0xcc))]+0x40*j+i);
				write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0xbc)+0x280*j+i, px);
			}
		}
	}
/* ******************************************************************************** ROSTER FACES */

	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
	___3a968h_cdecl(0xffffffff);
	
#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){
		
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
	if(D(___19bd60h) != 0){
	
		if(D(___196a84h) != 0) D(___185a34h) = 1;

		edx = D(___196a84h);

		if(edx == 0){
			
			edx = B(___1a1168h);
			D(esp+0x98) = ___1a01e0h+0x6c*edx;
			edx = B(___1a1168h+1);
			D(esp+0x9c) = ___1a01e0h+0x6c*edx;
			edx = B(___1a1168h+2);
			D(esp+0xa0) = ___1a01e0h+0x6c*edx;
			edx = B(___1a1168h+3);
			D(esp+0xa4) = ___1a01e0h+0x6c*edx;
			esi = 0;
			D(esp+0xd0) = 0;
			___1a0f9ch = ___3f71ch__allocateMemory(4);
			B(___1a0f9ch) = B(___1a1ef8h);
			___60a84h();
			edi = 1;
			
			while(1){

				if(D(___196a84h) != 0) break;
				___38878h_cdecl();
				___2ab50h();
				___2ab50h();
				edx = esi;
				eax = esi;
				edx = (int)edx>>0x1f;
				edx = eax%0xa;

				if(edx == 1) D(esp+0xd0) = ___60b60h(edi, D(___196adch), 0x6c*D(___1a1ef8h)+___1a01e0h, 0x6c);

				edx = esi;
				eax = esi;
				edx = (int)edx>>0x1f;
				edx = eax%0x384;

				if(edx == 0x383) ___23488h_cdecl(___1a0f9ch, edi, 0x13);

				esi++;
			
				if(D(esp+0xd0) == 0xff) break;
			}

			edx = esp+0x98;
			ebx = D(esp+0xd0);
			eax = ___611c0h(0x6c, edx);
			if(ebx == 0xff) ___3881ch();
			___12cb8h__VESA101_PRESENTSCREEN();
			dRMemory_free(___1a0f9ch);
		}
	}
#endif // DR_MULTIPLAYER

	if(D(___196a84h) != 0){
		
		D(___185a34h) = 1;
		return;
	}

	ecx = D(___1a1ef8h);
	D(___1a108ch) = 0;
	D(___1a1034h) = 0;
	D(___1a102ch) = 0;
	D(___1a109ch) = 0;
	D(___1a1094h) = 0;
	D(___1a1090h) = 0;
	D(___1a10a8h) = 0;
	D(___1a10a0h) = 0;
	D(___196ab0h) = 0;
	D(___1a0ff4h) = 0;
	edx = 0;

	n = -1;
	while(++n < 0x14){

		edi = D(___1a01e0h+0x6c*n+0x44);
		if(((int)edx < (int)edi)&&(ecx != n)) edx = edi;
	}

	if((D(___19bd60h) != 0)||((int)D(___196aa4h) <= 0)){

		D(___1de7d0h+0x4c) = 0;
	}
	else {
	
		D(___1de7d0h+0x4c) = 1;
	}

	esi = 0;
	edi = D(esp+0xc8);
	D(esp+0xd0) = esi;

	if((int)edi > 0){

		ecxp = ___1de7d0h;
		ebx = 0;

		while(1){

			strcpy(ecxp, ___1a01e0h+0x6c*B(esp+D(esp+0xd0)+0xcc));
			strupr_watcom106(ecxp);
			edx = B(esp+D(esp+0xd0)+0xcc);
			D(ebx+___1de7d0h+0x10) = D(___1a01e0h+0x6c*edx+0xc);
			D(ebx+___1de7d0h+0x14) = D(___1a01e0h+0x6c*edx+0x10);
			D(ebx+___1de7d0h+0x18) = D(___1a01e0h+0x6c*edx+0x14);
			D(ebx+___1de7d0h+0x30) = D(___1a01e0h+0x6c*edx+0x1c);
			D(ebx+___1de7d0h+0x1c) = D(___1a01e0h+0x6c*edx+0x18);

			if(edx != D(___1a1ef8h)){

				D(ebx+___1de7d0h+0x44) = ___196a94h_difficulty;
			}
			else {
			
				D(ebx+___1de7d0h+0x44) = 3;
			}

			D(ebx+___1de7d0h+0x2c) = D(___185a14h_UseWeapons);
			edx = B(esp+D(esp+0xd0)+0xcc);
			D(ebx+___1de7d0h+0x20) = D(___1a01e0h+0x6c*edx+0x64);
			D(ebx+___1de7d0h+0x24) = D(___1a01e0h+0x6c*edx+0x60);
			D(ebx+___1de7d0h+0x28) = D(___1a01e0h+0x6c*edx+0x5c);		// LOAD BOUGHT MINES 

			if(edx != D(___1a1ef8h)){
#if defined(DR_MULTIPLAYER)			
				if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
					D(ebx+___1de7d0h+0x28) = 0;
					D(ebx+___1de7d0h+0x24) = 0;
					D(ebx+___1de7d0h+0x20) = 0;
					eax = rand_watcom106();
					edx = eax;
					edx = (int)edx>>0x1f;
					edx = eax%5;
					if((edx == 0)&&(D(___185a14h_UseWeapons) != 0)) D(ebx+___1de7d0h+0x20) = 1;
					eax = rand_watcom106();
					edx = eax;
					edx = (int)edx>>0x1f;
					edx = eax%5;
					if((edx == 0)&&(D(___185a14h_UseWeapons) != 0)) D(ebx+___1de7d0h+0x24) = 1;
					eax = rand_watcom106();
					edx = eax;
					edx = (int)edx>>0x1f;
					edx = eax%5;
					if((edx == 0)&&(D(___185a14h_UseWeapons) != 0)) D(ebx+___1de7d0h+0x28) = 8;
#if defined(DR_MULTIPLAYER)	
				}
#endif // DR_MULTIPLAYER
			}

			edx = D(esp+0xd0);
			edi = D(___1a1ef8h);
			eax = B(esp+edx+0xcc);
		
			if(eax == edi){

				edx = D(0x6c*B(esp+D(esp+0xd0)+0xcc)+___1a01e0h+0x2c);
				eaxp = ___1a0fb8h;
			}
			else {
#if defined(DR_MULTIPLAYER)
				if(D(___19bd60h) != 0){

					edx = D(0x6c*B(esp+D(esp+0xd0)+0xcc)+___1a01e0h+0x2c);
					eaxp = ___1a0fb8h;
				}
				else {
#endif // DR_MULTIPLAYER
					edx = D(0x6c*eax+___1a01e0h+0x2c);
					eaxp = ___1a0fe0h;
#if defined(DR_MULTIPLAYER)
				}
#endif // DR_MULTIPLAYER
			}

			eaxp = eaxp+edx*3;
			D(___1de7d0h+ebx+0x34) = B(eaxp);
			D(___1de7d0h+ebx+0x38) = B(eaxp+1);
			D(___1de7d0h+ebx+0x3c) = B(eaxp+2);

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) != 0){

				eax = D(___196adch);
				edi = D(esp+0xd0);
				eax--;

				if((int)eax < (int)edi){

					eax = ___1a0fe0h;
					edx = 0;
					L(edx) = B(eax+0x1e);
					D(ebx+___1de7d0h+0x34) = edx;
					edx = 0;
					L(edx) = B(eax+0x1f);
					D(ebx+___1de7d0h+0x38) = edx;
					L(eax) = B(eax+0x20);
					eax &= 0xff;
					D(ebx+___1de7d0h+0x3c) = eax;
				}
			}
#endif // DR_MULTIPLAYER

			eax = D(esp+0xd0);
			edx = D(esp+0xc8);
			ebx += 0x54;
			eax++;
			ecxp += 0x54;
			D(esp+0xd0) = eax;
			if((int)eax >= (int)edx) break;
		}
	}

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){

		eax = D(esp+0xc8);
		D(esp+0xd0) = eax;

		if((int)eax < 4){

			eax = 0x54*eax;

			while(1){

				D(___1de7d0h+eax+0x34) = B(___1a0fe0h+0x1e);
				D(___1de7d0h+eax+0x38) = B(___1a0fe0h+0x1f);
				D(___1de7d0h+eax+0x3c) = B(___1a0fe0h+0x20);
				D(esp+0xd0)++;
				eax += 0x54;
				if((int)eax >= 0x150) break;
			}
		}
	}
#endif // DR_MULTIPLAYER

	edx = 0;
	eax = D(esp+0xc8);
	D(esp+0xd0) = edx;

	if((int)eax > 0){

		edi = D(esp+0xc8);
		ecx = D(___1a1ef8h);
		eax = 0;

		while(1){

			if(((int)edx < (int)D(eax+___1a01e0h+0x44))&&(ecx != D(esp+0xd0))) edx = D(eax+___1a01e0h+0x44);
			eax += 0x6c;
			D(esp+0xd0)++;
		
			if((int)D(esp+0xd0) >= (int)edi) break;
		}
	}

	if((int)edx < (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44)){
#if defined(DR_MULTIPLAYR)
		if(D(___19bd60h) == 0){
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

	ecx = 0x6c*D(___1a1ef8h);
	esi = D(___1a1028h);
	D(___2438bch) = D(___19f750h+0x1b0*D(___1a01e0h+ecx+0x1c)+0x18*B(___1a1f64h+esi)+0xc);
	D(___2438b8h) = D(___19f750h+0x1b0*D(___1a01e0h+ecx+0x1c)+0x18*B(___1a1f64h+esi)+0x10);
	D(___2438c0h) = D(___19f750h+0x1b0*D(___1a01e0h+ecx+0x1c)+0x18*B(___1a1f64h+esi)+0x14);
	eax = 0;
	ebx = D(___19bd60h);
	D(___1de7d0h+0x50) = eax;

	if(ebx == 0){

		if((int)edx >= (int)D(ecx+___1a01e0h+0x44)){

			if(esi == 0) D(___1de7d0h+0x50) = 0x32;
			ebx = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x48);

			if(((int)ebx > 0)&&((int)ebx < 6)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 0x104;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 0x1f4;
			}

			ecx = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x48);

			if(((int)ecx > 5)&&((int)ecx < 0xb)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 0xc8;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 0x12c;
			}

			esi = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x48);

			if(((int)esi > 0xa)&&((int)esi < 0x10)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 0x78;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 0x96;
			}

			edi = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x48);

			if(((int)edi > 0xf)&&((int)edi < 0x15)){

				if(D(___1a1028h) == 1) D(___1de7d0h+0x50) = 0x3c;
				if(D(___1a1028h) == 2) D(___1de7d0h+0x50) = 0x50;
			}
		}
	}

#if defined(DR_MULTIPLAYER)	
	if(D(___19bd60h) != 0) D(___1de7d0h+0x50) = D(___185a54h)/0x32;

	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

		if((int)edx < (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44)) D(___1de7d0h+0x50) = 0x190;
#if defined(DR_MULTIPLAYER)	
	}
#endif // DR_MULTIPLAYER

	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();

#if defined(DR_MULTIPLAYER)	
	if(D(___19bd60h) != 0){
	
		D(___1a103ch) = D(___1a1ef8h);

		if(D(CONNECTION_TYPE) == 2) ___60719h();
	}
#endif // DR_MULTIPLAYER

	race_main(D(___1a103ch), D(esp+0xc8));

#if defined(DR_MULTIPLAYER)	
	if((D(___19bd60h) != 0)&&(D(CONNECTION_TYPE) == 2)) ___60705h(___10754h);
#endif // DR_MULTIPLAYER

	D(___185a18h) = D(___196ae8h) = D(___1de7d0h+0x40+0x54*D(___1a103ch));
	ecx = D(___1a1ef8h);
	edx = 0;
	D(esp+0xd0) = edx;
	eax = 0;

	while(1){

		if((int)edx < (int)D(eax+___1a01e0h+0x44)){
		
			if(ecx != D(esp+0xd0)) edx = D(eax+___1a01e0h+0x44);
		}

		esi = D(esp+0xd0);
		esi++;
		eax += 0x6c;
		D(esp+0xd0) = esi;
		if((int)esi >= 0x14) break;
	}

	ebx = D(___1a1ef8h);
	eax = 27*ebx;

	if(((int)edx >= (int)D(eax*4+___1a01e0h+0x44))||(D(___19bd60h) != 0)){

		eax = 0;
		edi = D(esp+0xc8);
		D(esp+0xd0) = eax;

		if((int)edi > 0){

			edx = 0;

			while(1){

				ebx = D(esp+0xd0);
				if((ebx != D(___1a103ch))&&(D(edx+___1de7d0h+0x10) == 0x64)) eax++;
				edi = D(esp+0xd0);
				ecx = D(esp+0xc8);
				edi++;
				edx += 0x54;
				D(esp+0xd0) = edi;
				if((int)edi >= (int)ecx) break;
			}
		}

		edx = D(esp+0xc8);
		edx--;

		if(eax == edx){

			ebx = D(___1a103ch);
			edx = ebx*4;
			edx += ebx;
			edx <<= 2;
			edx += ebx;
			if((int)D(edx*4+___1de7d0h+0x10) < 0x64) D(___196aa0h) = 1;
		}

		ebx = D(___1a103ch);
		edx = ebx*4;
		edx += ebx;
		edx <<= 2;
		edx += ebx;
		ebx = D(___19bd60h);
		edx <<= 2;

		if(ebx == 0){

			if((D(___196ae8h) != 4)&&((int)D(edx+___1de7d0h+0x10) < 3)){
			
				edi = D(___185a14h_UseWeapons);
				if(edi == 1) D(___196a9ch) = edi;
			}
		}
		else {

			if((int)D(edx+___1de7d0h+0x10) < 3){
				
				ecx = D(___185a14h_UseWeapons);
				if(ecx == 1){
					
					D(___196a9ch) = ecx;
				}
			}
		}

		edi = D(___196ae8h);

		if(edi != 1){

			edx = 0;
			D(___196a98h) = edx;
		}
		else {

			D(___196a98h) += edi;
		}

		if((D(___19bd60h) == 0)&&((int)D(___196aa4h) > 0)){

			edi = D(___1de7d0h+0x4c);

			if((edi != 1)||(edi != D(___196ae8h))){

				D(___196aa4h) = 0-D(___196aa4h);
			}
			else {

				ebx = D(___1a103ch);
				edx = ebx*4;
				edx += ebx;
				edx <<= 2;
				edx += ebx;

				if((int)D(edx*4+___1de7d0h+0x10) >= 0x64){

					D(___196aa4h) = 0-D(___196aa4h);
				}
			}
		}
			
		esi = D(___19bd60h);

		if((esi == 0)&&((int)D(___196aa8h) > 0)){

			edx = D(___1a1028h);
			ecx = D(___196aach);
			D(esp+0xd0) = esi;
			edx <<= 2;

			while(1){

				ebx = 0;
				L(ebx) = B(edx+___1a0ef8h);
				if(ebx == ecx) eax = D(esp+0xd0);
				esi = D(esp+0xd0);
				esi++;
				edx++;
				D(esp+0xd0) = esi;
				if((int)esi >= 4) break;
			}

			edx = eax;
			eax <<= 2;
			eax += edx;
			eax <<= 2;
			eax += edx;
			if(D(eax*4+___1de7d0h+0x10) != 0x64) D(___196aa8h) = 0-D(___196aa8h);
		}
	}

	edx = D(___1a1ef8h);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	eax -= edx;
	eax <<= 2;
	if(D(eax+___1a01e0h+0x34) != 0xffffffff) D(eax+___1a01e0h+0x38)++;
	edi = 0;
	eax = 0;
	edx = 0;
	D(___243d44h) = edi;

	while(1){

		D(eax+___1a01e0h+0x60) = edx;
		D(eax+___1a01e0h+0x64) = edx;
		D(eax+___1a01e0h+0x68) = edx;
		D(eax+___1a01e0h+0x5c) = edx;
		eax += 0x6c;
		if(eax == 0x870) break;
	}

	eax = 0x14;
	edx = 0;
	D(esp+0xd0) = eax;
	___2ec68h_cdecl();
	D(___196af0h) = edx;
	D(___196aech) = edx;
	D(esp+0xd0) = edx;

	while(1){

		edx = D(esp+0xd0);
		eax = B(esp+edx+0xcc);
		eax = 0x6c*eax;
		edi = edx+1;
		esi = 0;
		D(esp+0xd0) = edi;
		D(eax+___1a01e0h+0x54) = esi;
		if((int)edi >= 4) break;
	}

	D(esp+0xd0) = esi;
	eax = 0;
	ebx = 0;
	esi = D(___1a1ef8h);

	while(1){

		ecx = D(eax+___1a01e0h+0x44);
		if(((int)ebx < (int)ecx)&&(esi != D(esp+0xd0))) ebx = ecx;
		edi = D(esp+0xd0);
		edi++;
		eax += 0x6c;
		D(esp+0xd0) = edi;
		if((int)edi >= 0x14) break;
	}

	ecx = D(___19bd60h);

	if(ecx == 0){

		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;

		if(((int)ebx >= (int)D(eax+___1a01e0h+0x44))&&(D(___196ab0h) == 0)){

			D(esp+0xd0) = ecx;
			esi = eax;
			D(esp+0xec) = eax;
			D(esp+0xf0) = eax;
			ecx = eax;
			eax = 0;

			while(1){

				if((D(___196ae8h) != 4)&&(D(___1a1028h) == 0)){

					edx = 0x32*D(eax+___1de7d0h+0xc);
					edi = D(esp+0xd0);
					D(esp+0xd4) = edx;
					edx = 0;
					L(edx) = B(esp+edi+0xcc);
					edx = 0x6c*edx;
					edi = D(esp+0xd4);
					D(edx+___1a01e0h+0x54) = edi;
				}

				if((D(___196ae8h) != 4)&&(D(___1a1028h) == 0)){

					edx = D(esp+0xd0);

					if(edx == D(___1a103ch)){

						edx = D(eax+___1de7d0h+0xc);
						edx = 0x32*edx;
						D(___196af0h) = edx;
					}
				}

				edx = D(esp+0xf0);
				edi = D(edx+___1a01e0h+0x48);

				if(((int)edi > 0)&&((int)edi < 6)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = 0x104*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						edx = 0x1f4*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = D(esp+0xd0);

						if(edx == D(___1a103ch)){

							edx = D(eax+___1de7d0h+0xc);
							edx = 0x104*edx;
							D(___196af0h) = edx;
						}
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						edx = D(esp+0xd0);
						
						if(edx == D(___1a103ch)){
						
							edx = D(eax+___1de7d0h+0xc);
							edx = 0x1f4*edx;
							D(___196af0h) = edx;
						}
					}
				}

				edx = D(esp+0xec);
				edi = D(edx+___1a01e0h+0x48);

				if(((int)edi > 5)&&((int)edi < 0xb)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = 0xc8*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						edx = 0x12c*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = D(esp+0xd0);
						
						if(edx == D(___1a103ch)){
						
							edx = D(eax+___1de7d0h+0xc);
							edx = 0xc8*edx;
							D(___196af0h) = edx;
						}
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						edx = D(esp+0xd0);
						
						if(edx == D(___1a103ch)){
						
							edx = D(eax+___1de7d0h+0xc);
							edx = 0x12c*edx;
							D(___196af0h) = edx;
						}
					}
				}

				edx = D(ecx+___1a01e0h+0x48);

				if(((int)edx > 0xa)&&((int)edx < 0x10)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = 0x78*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						edx = 0x96*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = D(esp+0xd0);
						
						if(edx == D(___1a103ch)){
						
							edx = D(eax+___1de7d0h+0xc);
							edx = 0x78*edx;
							D(___196af0h) = edx;
						}
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						edx = D(esp+0xd0);
						
						if(edx == D(___1a103ch)){
						
							edx = D(eax+___1de7d0h+0xc);
							edx = 0x96*edx;
							D(___196af0h) = edx;
						}
					}
				}

				edx = D(esi+___1a01e0h+0x48);

				if(((int)edx > 0xf)&&((int)edx < 0x15)){

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = 0x3c*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){

						edx = 0x50*D(eax+___1de7d0h+0xc);
						edi = D(esp+0xd0);
						D(esp+0xd4) = edx;
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						edi = D(esp+0xd4);
						D(edx+___1a01e0h+0x54) = edi;
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 1)){

						edx = D(esp+0xd0);
						
						if(edx == D(___1a103ch)){
						
							edx = D(eax+___1de7d0h+0xc);
							edx = 0x3c*edx;
							D(___196af0h) = edx;
						}
					}

					if((D(___196ae8h) != 4)&&(D(___1a1028h) == 2)){
						
						edx = D(esp+0xd0);
						
						if(edx == D(___1a103ch)){
						
							edx = D(eax+___1de7d0h+0xc);
							edx = 0x50*edx;
							D(___196af0h) = edx;
						}
					}
				}

				edx = D(___1a1028h);
				switch(edx){
				case 0:
					if((D(eax+___1de7d0h+0x40) == 1)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0x2ee;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0x2ee;
					}

					if((D(eax+___1de7d0h+0x40) == 2)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0x177;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0x177;
					}

					if((D(eax+___1de7d0h+0x40) == 3)&&(D(eax+___1de7d0h+0x10) != 0x64)){
						
						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0xbb;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0xbb;
					}
					break;
				case 1:
					if((D(eax+___1de7d0h+0x40) == 1)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0xbb8;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0xbb8;
					}

					if((D(eax+___1de7d0h+0x40) == 2)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0x5dc;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0x5dc;
					}

					if((D(eax+___1de7d0h+0x40) == 3)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0x177;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0x177;
					}
					break;
				case 2:
					if((D(eax+___1de7d0h+0x40) == 1)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0x2ee0;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0x2ee0;
					}

					if((D(eax+___1de7d0h+0x40) == 2)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0x1770;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0x1770;
					}

					if((D(eax+___1de7d0h+0x40) == 3)&&(D(eax+___1de7d0h+0x10) != 0x64)){

						edi = D(esp+0xd0);
						edx = 0;
						L(edx) = B(esp+edi+0xcc);
						edx = 0x6c*edx;
						D(edx+___1a01e0h+0x54) += 0x5dc;
						edx = D(esp+0xd0);
						if(edx == D(___1a103ch)) D(___196aech) = 0x5dc;
					}
					break;
				default:
					break;
				}

				edi = D(esp+0xd0);
				edx = 0;
				L(edx) = B(esp+edi+0xcc);
				edx = 0x6c*edx;
				edi = D(edx+___1a01e0h+0x54);
				D(edx+___1a01e0h+0x30) += edi;
				edi = D(edx+___1a01e0h+0x54);
				D(edx+___1a01e0h+0x58) += edi;
				if(D(eax+___1de7d0h+0x40) == 1) D(edx+___1a01e0h+0x4c)++;
				edx = D(esp+0xd0);
				edx++;
				eax += 0x54;
				D(esp+0xd0) = edx;
				if((int)edx >= 4) break;
			}
		}
	}

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;

		if((int)ebx < (int)D(eax*4+___1a01e0h+0x44)){

			edx = D(___1a103ch);
			eax = 4*edx;
			eax += edx;
			eax <<= 2;
			eax += edx;
			edx = D(eax*4+___1de7d0h+0xc);
			eax = 4*edx;
			eax -= edx;
			eax <<= 3;
			eax += edx;
			eax <<= 4;
			edx = D(___1a103ch);
			D(___196af0h) = eax;
			L(edx) = B(esp+edx+0xcc);
			edx &= 0xff;
			eax = 8*edx;
			eax -= edx;
			eax <<= 2;
			eax -= edx;
			edx = eax*4;
			eax = D(___196af0h);
			D(edx+___1a01e0h+0x54) = eax;
		}
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){

		ecx = D(___196ad4h);
		ecx++;
		esi = D(___196ab8h);
		D(___196ad4h) = ecx;
		ecx = ___1a116ch;
		eax = D(___196ad4h);
		ecx += 0x96;

		if((int)eax < (int)esi){

			edi = 0;
			edx = ___1a116ch;
			D(esp+0xd0) = edi;

			while(1){

				esi = ecx;
				edi = edx;
				ebx = D(esp+0xd0);
				strcpy(edi, esi);
				eax = D(esp+0xd0);
				edx += 0x96;
				ecx += 0x96;
				L(eax) = B(eax+___1a1f4eh+1);
				B(ebx+___1a1f4eh) = L(eax);
				ebx++;
				D(esp+0xd0) = ebx;
				if((int)ebx >= 0x15) break;
			}

			if(D(___1de7d0h+0x44) != 0xffffffff){

				eax = D("-- ");
				D(___1a116ch+0xc4e) = eax;
				eax = D(___196ad4h);
				edx = 0;
				L(edx) = B(eax+___1a2010h);
				edi = ___1a116ch+0xc4e;
				strcat(edi, ___18d492h[edx]);
				esi = " race completed. Next race ";
				strcat(edi, esi);
				eax = D(___196ad4h);
				edx = 0;
				L(edx) = B(eax+___1a2010h+1);
				strcat(edi, ___18d492h[edx]);
				esi = ".";
				strcat(edi, esi);
			}
			else {

				ecx = 8;
				edi = ___1a116ch+0xc4e;
				esi = "-- Multiplayer connection lost!";
				while(ecx--||++ecx){

					D(edi) = D(esi);
					edi += 4;
					esi += 4;
				}
			}

			ebx = ___1a116ch;
			eax = 0;
			B(___1a1f4eh+0x15) = 0;
			D(esp+0xd0) = eax;
			edx = ebx+0x96;

			while(1){

				esi = edx;
				edi = ebx;
				ecx = D(esp+0xd0);
				strcpy(edi, esi);
				eax = D(esp+0xd0);
				ebx += 0x96;
				edx += 0x96;
				L(eax) = B(eax+___1a1f4eh+1);
				B(ecx+___1a1f4eh) = L(eax);
				ecx++;
				D(esp+0xd0) = ecx;
				if((int)ecx >= 0x15) break;
			}

			L(eax) = 0;
			B(___1a116ch+0xc4e) = L(eax);
			B(___1a1f4eh+0x15) = 0;
		}
		else {
		
			D(esp+0xd0) = 0;
			D(___196a80h) = 1;
			edx = ___1a116ch;

			while(1){

				strcpy(edx, ecx);
				B(D(esp+0xd0)+___1a1f4eh) = B(D(esp+0xd0)+___1a1f4eh+1);
				D(esp+0xd0)++;
				edx += 0x96;
				ecx += 0x96;
				if((int)D(esp+0xd0) >= 0x15) break;
			}

			strcpy(___1a116ch+0xc4e, "-- ");
			strcat(___1a116ch+0xc4e, ___1a01e0h+0x6c*D(___1a1ef8h));
			strcat(___1a116ch+0xc4e, " completed the netgame.");
			B(___1a1f4eh+0x15) = 0;
			edx = ___1a116ch;
			ebx = ___1a116ch+0x96;

			D(esp+0xd0) = 0;
			while(1){

				strcpy(edx, ebx);
				B(D(esp+0xd0)+___1a1f4eh) = B(D(esp+0xd0)+___1a1f4eh+1);
				edx += 0x96;
				ebx += 0x96;
				D(esp+0xd0)++;
				if((int)D(esp+0xd0) >= 0x15) break;
			}

			B(___1a116ch+0xc4e) = 0;
			B(___1a1f4eh+0x15) = 0;
		}

		edi = 0;
		ebx = D(___196adch);
		D(___196aech) = edi;
		D(esp+0xd0) = edi;
		D(___196af0h) = edi;

		if((int)ebx > 0){

			edx = 0;
			esi = 1;
			edi = 4;

			while(1){

				D(esp+0xd8) = D(___185a54h)/0x32;
				eax = D(edx+___1de7d0h+0xc);
				eax = eax*D(esp+0xd8);
				ecx = D(esp+0xd0);
				ebx = 0;
				L(ebx) = B(esp+ecx+0xcc);
				ebx=  0x6c*ebx;
				D(ebx+___1a01e0h+0x54) = eax;
				ebx = ecx;

				if(ebx == D(___1a103ch)) D(___196af0h) = eax;

				if(esi == D(edx+___1de7d0h+0x40)){

					eax = D(esp+0xd0);
					ebx = B(esp+eax+0xcc);
					ebx=  0x6c*ebx;
					D(esp+0xdc) = 3*D(___185a54h)/10;
					eax = D(esp+0xdc);
					ecx = D(ebx+___1a01e0h+0x54);
					ecx += eax;
					eax = D(esp+0xd0);
					D(ebx+___1a01e0h+0x54) = ecx;
					
					if(eax == D(___1a103ch)){
					
						eax = D(esp+0xdc);
						D(___196aech) = eax;
					}

					ebx = D(esp+0xd0);
					eax = B(esp+ebx+0xcc);
					eax = 0x6c*eax;
					D(eax+___1a01e0h+0x44) += 6;
				}

				if(D(edx+___1de7d0h+0x40) == 2){

					eax = D(esp+0xd0);
					ebx = B(esp+eax+0xcc);
					ebx=  0x6c*ebx;
					D(esp+0xe0) = D(___185a54h)/4;
					eax = D(esp+0xe0);
					ecx = D(ebx+___1a01e0h+0x54);
					ecx += eax;
					eax = D(esp+0xd0);
					D(ebx+___1a01e0h+0x54) = ecx;
					
					if(eax == D(___1a103ch)){
					
						eax = D(esp+0xe0);
						D(___196aech) = eax;
					}

					ebx = D(esp+0xd0);
					eax = B(esp+ebx+0xcc);
					eax = 0x6c*eax;
					D(eax+___1a01e0h+0x44) += edi;
				}

				if(D(edx+___1de7d0h+0x40) == 3){

					eax = D(esp+0xd0);
					ebx = B(esp+eax+0xcc);
					ebx = 0x6c*ebx;
					D(esp+0xe4) = D(___185a54h)/5;
					eax = D(esp+0xe4);
					ecx = D(ebx+___1a01e0h+0x54);
					ecx += eax;
					eax = D(esp+0xd0);
					D(ebx+___1a01e0h+0x54) = ecx;

					if(eax == D(___1a103ch)){

						eax = D(esp+0xe4);
						D(___196aech) = eax;
					}

					ebx = D(esp+0xd0);
					eax = B(esp+ebx+0xcc);
					eax = 0x6c*eax;
					D(eax+___1a01e0h+0x44) += 2;
				}

				if(edi == D(edx+___1de7d0h+0x40)){

					eax = D(esp+0xd0);
					ebx = B(esp+eax+0xcc);
					ebx=  0x6c*ebx;
					D(esp+0xe8) = 3*D(___185a54h)/20;
					eax = D(esp+0xe8);
					ecx = D(ebx+___1a01e0h+0x54);
					ecx += eax;
					eax = D(esp+0xd0);
					D(ebx+___1a01e0h+0x54) = ecx;
					
					if(eax == D(___1a103ch)){
					
						eax = D(esp+0xe8);
						D(___196aech) = eax;
					}
				}

				ebx = D(esp+0xd0);
				eax = 0;
				L(eax) = B(esp+ebx+0xcc);
				eax = 0x6c*eax;
				ebx = D(eax+___1a01e0h+0x54);
				D(eax+___1a01e0h+0x30) += ebx;
				ebx = D(eax+___1a01e0h+0x54);
				ecx = D(eax+___1a01e0h+0x58);
				ecx += ebx;
				ebx = D(edx+___1de7d0h+0x40);
				D(eax+___1a01e0h+0x58) = ecx;
				if(esi == ebx) D(eax+___1a01e0h+0x4c)++;
				eax = D(esp+0xd0);
				ebx = D(___196adch);
				eax++;
				edx += 0x54;
				D(esp+0xd0) = eax;
				if((int)eax >= (int)ebx) break;
			}
		}
	}
#endif // DR_MULTIPLAYER

	edi = D(___1a1ef8h);
	edx = 0;
	eax = 0;
	D(esp+0xd0) = edx;

	while(1){

		esi = D(eax+___1a01e0h+0x44);
		if(((int)edx < (int)esi)&&(edi != D(esp+0xd0))) edx = esi;
		ebx = D(esp+0xd0);
		ebx++;
		eax += 0x6c;
		D(esp+0xd0) = ebx;
		if((int)ebx >= 0x14) break;
	}

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
		ebx = D(___1a1ef8h);
		eax = 0x6c*ebx;

		if((int)edx < (int)D(eax+___1a01e0h+0x44)){
		
			ebx = D(eax+___1a01e0h+0x50);
			edx = D(___1de7d0h+0x54+0x10);
			ebx++;
			D(eax+___1a01e0h+0xc) = edx;
			D(eax+___1a01e0h+0x50) = ebx;
		}
		else {

			eax = 0;
			edx = D(esp+0xc8);
			D(esp+0xd0) = eax;

			if((int)edx > 0){

				edi = D(esp+0xc8);
				edx = 0;

				while(1){

					ebx = D(esp+0xd0);
					eax = B(esp+ebx+0xcc);
					eax = 0x6c*eax;
					esi = D(esp+0xd0);
					esi++;
					ebx = D(edx+___1de7d0h+0x10);
					edx += 0x54;
					ecx = D(eax+___1a01e0h+0x50);
					D(eax+___1a01e0h+0xc) = ebx;
					ecx++;
					D(esp+0xd0) = esi;
					D(eax+___1a01e0h+0x50) = ecx;
					if((int)esi >= (int)edi) break;
				}
			}
		}
#if defined(DR_MULTIPLAYER)
	}
	else {

		D(esp+0xd0) = 0;

		if((int)D(esp+0xc8) > 0){

			edi = D(esp+0xc8);
			edx = 0;

			while(1){

				ebx = D(esp+0xd0);
				eax = B(esp+ebx+0xcc);
				eax = 0x6c*eax;
				ebx = D(edx+___1de7d0h+0x10);
				edx += 0x54;
				D(eax+___1a01e0h+0xc) = ebx;
				D(esp+0xd0)++;
				D(eax+___1a01e0h+0x50)++;
				if((int)D(esp+0xd0) >= (int)edi) break;
			}
		}
	}
		
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
		___3deb8h();
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	___117d4h();
	___117f4h();
	esi = D(___1a1ef8h);
	edx = 0;
	eax = 0;
	D(esp+0xd0) = edx;

	while(1){

		ecx = D(eax+___1a01e0h+0x44);
		if(((int)edx < (int)ecx)&&(esi != D(esp+0xd0))) edx = ecx;
		edi = D(esp+0xd0);
		edi++;
		eax += 0x6c;
		D(esp+0xd0) = edi;
		if((int)edi >= 0x14) break;
	}

	ebx = D(___1a1ef8h);
	eax = 8*ebx;
	eax -= ebx;
	eax <<= 2;
	eax -= ebx;

	if(((int)edx >= (int)D(eax*4+___1a01e0h+0x44))||((D(___196ae8h) != 1)||(D(___19bd60h) != 0))){

		edx = ___1a0fb8h+3*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c);
		___11378h_cdecl(B(edx), B(edx+1), B(edx+2));
		dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
		dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
		dRally_Sound_setSampleRate(0x5622);
		dRally_Sound_play();
		___606dfh();
		__VESA101_SETMODE();
		___605deh_cdecl(0x46, 0);
	}

	___12940h();

	D(esp+0xd0) = 0;
	while(1){

		__DISPLAY_SET_PALETTE_COLOR(0, 0, 0, B(esp+0xd0));
		D(esp+0xd0)++;
	
		if((int)D(esp+0xd0) >= 0x100) break;
	}

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

		D(esp+0xd0) = 0;
		eax = 0;
		edx = 0;
		ecx = D(___1a1ef8h);
	
		while(1){

			if(((int)edx < (int)D(eax+___1a01e0h+0x44))&&(ecx != D(esp+0xd0))) edx = D(eax+___1a01e0h+0x44);
			eax += 0x6c;
			D(esp+0xd0)++;
		
			if((int)D(esp+0xd0) >= 0x14) break;
		}

		if((int)edx < (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44)){

			___31588h();

			while(1){
				
				___3079ch_cdecl(1);
				
				if((4 <= B(___1a1f64h+3))&&(4 <= B(___1a1f64h+4))&&(4 <= B(___1a1f64h+5))) break;
			}

			memset(esp+0x4c, 0, 4);

			ebx = 0;
			while(1){

				eax = rand_watcom106();
				edx = eax;
				edx = (int)edx>>0x1f;
				edx = eax%4;
				edx++;
				eax = edx;
				D(ebx+___1de7d0h+0x40) = edx;

				if(B(esp+edx+0x4b) == 0){
					
					ebx += 0x54;
					B(esp+eax+0x4b) = 1;

					if(ebx == 0x150){
						
						if(D(___196ae8h) == 1){

							// after beating adversary
							___22808h();
						}
						else {

							___3892ch_cdecl(0);
							D(___185a20h) = 1;
						}

						break;
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

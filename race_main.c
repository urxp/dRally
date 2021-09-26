#include "drally.h"
#include "drally_keyboard.h"
#include "drally_race.h"
#include "drmemory.h"
#include "sfx.h"

#if defined(DR_MULTIPLAYER)
	extern byte ___19bd60h[];
#endif // DR_MULTIPLAYER

	extern byte ___243ce8h[];
	extern byte ___243cf4h[];
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern void * ___243d58h;
	extern byte ___243d04h[];
	extern void * ___243d60h;
	extern byte ___243d30h[];
	extern byte ___243d10h[];
	extern void * ___243d78h;
	extern byte ___243cf8h[];
	extern void * ___243d54h;
	extern void * ___243d5ch;
	extern void * ___243d80h;
	extern void * ___243d74h;
	extern void * ___243d50h;
	extern void * ___243d6ch;
	extern void * ___243d48h;
	extern void * ___243d4ch;
	extern void * ___243d70h;
	extern void * ___243d84h;
	extern void * ___243d3ch;
	extern void * ___243298h[6];
	extern void * ___243d8ch;
	extern void * ___243d7ch;
	extern void * ___243d34h;
	extern void * ___243d88h;
	extern void * ___243d38h;
	extern void * ___243d40h;
	extern void * ___243288h[2];
	extern void * ___243290h[2];
	extern void * ___243d68h;
	extern void * ___243d64h;
	extern byte ___243d08h[];
	extern byte ___243d0ch[];
	extern byte ___1de580h[];
	extern byte ___24387ch[];
	extern byte ___243880h[];
	extern byte ___243318h[];
	extern byte ___243cd8h[];
	extern byte ___243878h[];
	extern void_cb ___2432c8h;
	extern char ___19bd64h[16];
	extern __DWORD__ ___24cc58h_msx_volume;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___196dach[];
	extern byte ___243ca4h[];
	extern byte ___243ca0h[];
	extern byte ___243cdch[];
	extern byte ___243cb8h[];
	extern byte ___243cd4h[];
	extern byte ___243874h[];
	extern byte ___243898h[];
	extern byte ___243cd0h[];
	extern byte ___199f54h[];
	extern byte ___243ce0h[];
	extern byte ___243ca8h[];
	extern byte ___1e6ed0h[];
	extern byte ___196df0h[];
	extern byte ___243334h[];
	extern byte ___243c60h[];
	extern byte ___2438cch[];
	extern byte ___243894h[];
	extern byte ___2438d4h[];
	extern byte ___196ddch[];
	extern byte ___196de0h[];
	extern byte ___196df8h[];
	extern byte ___2438c8h[];
	extern byte kmap[];
	extern byte ___243d00h[];
	extern byte ___196d9ch[];
	extern byte ___196dc8h[];
	extern byte ___196dcch[];
	extern byte ___196d88h[];
	extern byte ___196d98h[];
	extern byte ___196dd4h[];
	extern byte ___243d14h[];
	extern byte VGA13_ACTIVESCREEN[];
	extern byte ___196d8ch[];
	extern byte ___1de7d0h[];
	extern byte ___196dd8h[];
	extern byte ___243d44h[];
	extern void * ___243314h;
	extern void * ___243310h;

#if defined(DR_MULTIPLAYER)
void race___44304h(void);
void race___44a78h(void);
void race___47ed8h(dword);
#endif // DR_MULTIPLAYER

void race___400ech(void);
void race___46a10h(void);
void race___45d3ch(void);
void race___560d8h(void);
void race___454ach(void);
void race___46814h(void);
void __VGA13_PRESENTSCREEN__(void);
dword __GET_FRAME_COUNTER(void);
void race___4207ch(void);
void race___40f48h(void);
void race___40db4h(void);
void race___42218h(void);
void race___56594h(void);
void race___51eb4h(void);
void race___50ba4h(void);
void race___53464h(void);
void race___53310h(void);
void race___51204h(void);
void race___50a48h(void);
void race___4f170h(void);
void race___51ce0h(void);
void race___4f300h(void);
void race___50ef4h(void);
void race___52d7ch(void);
void race___4f030h(void);
void race___4ee9ch(void);
void race___46738h__VGA13_PRESENTCLEARSCREEN(void);
void race___478c8h(dword);
void race___47808h(dword, dword, const char *);
void race___477d4h(void);
void race___48458h(void);
void race___49390h(void);
void race___4c21ch(void);
void race___56170h(void);
void race___55ae0h(void);
void race___54668h(void);
int rand_watcom106(void);
void race___4ff50h(void);
void race___526ach(void);
void race___514d8h(void);
void race___4dcach(void);
void race___4c434h(void);
void race___4b62ch(void);
void race___5209ch(void);
void race___563ach(void);
void race___405bch(void);
void race___496b0h(void);
void race___4af3ch(void);
void race___45a24h(void);
void * ___3f71ch__allocateMemory(dword);
void race___3f970h(void);
void race___49a34h(void);
void race___40164h(void);
void ___60705h(void_cb);
void race___49bd4h(void);
void race___492f4h(void);
void dRally_Sound_stop(void);
void dRally_Sound_release(void);
void ___606dfh(void);
void ___605deh_cdecl(dword, dword);
void dRally_Sound_load(dword msx_t, const char * msx_f, dword sfx_t, const char * sfx_f, dword num_ch);
void dRally_Sound_setMasterVolume(dword vol);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_setEffectsVolume(dword vol);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_play(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
byte dRally_Sound_setPosition(dword pos_n);
void race___52ac4h(void);
void dRally_Sound_freeEffectChannel(byte ch_num);
void dRally_Sound_adjustEffect(byte channel, dword vol, dword freq, dword balance);
dword dRally_Sound_getPosition(void);
void ___60719h(void);
void ___61418h(dword);
void srand_watcom106(dword);
void race___4539ch(void);
void race___42824h(void);
void race___4a25ch(void);
void race___4a6b4h(void);
void race___4083ch(void);
void race___4adach(void);
void race___4580ch(void);
void __VGA13_SETMODE(void);

static const char * MSG_GAME_PAUSED[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "     G A M E   P A U S E D !    ",
	[4] = "                                ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "    PRESS ENTER TO CONTINUE     "
};

static const char * MSG_RACE_OVER[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "      R A C E    O V E R !      ",
	[4] = "                                ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "    PRESS ENTER TO CONTINUE     "
};

static const char * MSG_ABOUT_TO_ABORT[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = " S O M E O N E   I S   A B O U T",
	[3] = "   T O   A B O R T   R A C E !  ",
	[4] = "                                ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "  WAITING FOR SIGNAL FROM HOST  ",
	[8] = "                                "
};

static const char * MSG_ABORT_RACE[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "      A B O R T   R A C E !     ",
	[4] = "                                ",
	[5] = "             Y / N              ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "                                "
};

static const char * MSG_ABORT_DEMO[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "      A B O R T   D E M O !     ",
	[4] = "                                ",
	[5] = "             Y / N              ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "                                "
};

static const char * MSG_CONNECTION_LOST[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "     M U L T I P L A Y E R      ",
	[3] = "      C O N N E C T I O N       ",
	[4] = "           L O S T !            ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "      PRESS ENTER TO ABORT      "
};

static const char * MSG_WELCOME[9] = {
	[0] = "     WELCOME TO DEATH RALLY!    ",
	[1] = "                                ",
	[2] = " PRESS                          ",
	[3] = "    F1-INFO SCREEN              ",
	[4] = "     P-PAUSE                    ",
	[5] = "   TAB-TOGGLE STATUS BAR        ",
	[6] = "   ESC-ABORT RACE               ",
	[7] = "                                ",
	[8] = "    PRESS ENTER TO CONTINUE     "
};

static void printmsg(const char * msg[]){

	int 	n;

	n = -1;
	while(++n < 9) race___47808h(0, n, msg[n]);
}

static void helper00(int i){

	int 	n;

	n = -1;
	while(++n < D(___243cf4h)) D(___1e6ed0h+0x35e*n+i) = 0;
}

static void helper01(void (*cb)(int)){

	int 	n;

	n = -1;
	while(++n < (int)D(___243cf4h)) cb(n);
}

static void race___4b62ch_helper(int n){

	D(___243c60h) = n;

	if(D(___243ce0h) != 0){

		race___4b62ch();
	}
	else {
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			if(D(___243ce8h) != n) race___4b62ch();
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}
}

static void race___4c434h_helper(int n){ D(___243c60h) = n; race___4c434h(); }
static void race___514d8h_helper(int n){ D(___243c60h) = n; race___514d8h(); }
static void race___52ac4h_helper(int n){ D(___243c60h) = n; race___52ac4h(); }
static void race___526ach_helper(int n){ D(___243c60h) = n; race___526ach(); }
static void race___4ff50h_helper(int n){ D(___243c60h) = n; race___4ff50h(); }


static void race_alloc(void){

	___243d58h = ___3f71ch__allocateMemory(D(___243d28h)*D(___243d2ch));
	___243d60h = ___3f71ch__allocateMemory(D(___243d28h)*D(___243d2ch));
	___243d78h = ___3f71ch__allocateMemory(D(___243d30h)*D(___243d04h));
	___243d54h = ___3f71ch__allocateMemory(D(___243cf8h)*D(___243d10h));
	___243d5ch = ___3f71ch__allocateMemory(0x5f370);
	___243d80h = ___3f71ch__allocateMemory(0x19400)+0x200;
	___243d74h = ___3f71ch__allocateMemory(0x96000);
	___243d50h = ___3f71ch__allocateMemory(0x4b000);
	___243d6ch = ___3f71ch__allocateMemory(0x3840);
	___243d34h = ___3f71ch__allocateMemory(0x30);
	___243d48h = ___3f71ch__allocateMemory(0x240);
	___243d4ch = ___3f71ch__allocateMemory(0x3c90);
	___243d70h = ___3f71ch__allocateMemory(0x3c90);
	___243d84h = ___3f71ch__allocateMemory(0x800);
	___243d3ch = ___3f71ch__allocateMemory(0x268);
	___243298h[0] = ___3f71ch__allocateMemory(0xc00);
	___243298h[1] = ___3f71ch__allocateMemory(0xc00);
	___243298h[2] = ___3f71ch__allocateMemory(0xc00);
	___243298h[3] = ___3f71ch__allocateMemory(0xc00);
	___243298h[4] = ___3f71ch__allocateMemory(0xc00);
	___243298h[5] = ___3f71ch__allocateMemory(0xc00);
	___243d8ch = ___3f71ch__allocateMemory(0x140);
	___243d7ch = ___3f71ch__allocateMemory(0x600);
	___243d88h = ___3f71ch__allocateMemory(0x480);
	___243d38h = ___3f71ch__allocateMemory(0x800);
	___243d40h = ___3f71ch__allocateMemory(0x2400);
	___243288h[0] = ___3f71ch__allocateMemory(0x800);
	___243288h[1] = ___3f71ch__allocateMemory(0x800);
	___243290h[0] = ___3f71ch__allocateMemory(0x1800);
	___243290h[1] = ___3f71ch__allocateMemory(0x1800);
	___243d68h = ___3f71ch__allocateMemory(0x800);
	___243d64h = ___3f71ch__allocateMemory(0xc0);
}

static void race_free(void){

	dRMemory_free(___243d58h);
	dRMemory_free(___243d60h);
	dRMemory_free(___243d78h);
	dRMemory_free(___243d54h);
	dRMemory_free(___243d5ch);
	dRMemory_free(___243d80h-0x200);
	dRMemory_free(___243d74h);
	dRMemory_free(___243d50h);
	dRMemory_free(___243d34h);
	dRMemory_free(___243d6ch);
	dRMemory_free(___243d48h);
	dRMemory_free(___243d4ch);
	dRMemory_free(___243d70h);
	dRMemory_free(___243d84h);
	dRMemory_free(___243d3ch);
	dRMemory_free(___243298h[0]);
	dRMemory_free(___243298h[1]);
	dRMemory_free(___243298h[2]);
	dRMemory_free(___243298h[3]);
	dRMemory_free(___243298h[4]);
	dRMemory_free(___243298h[5]);
	dRMemory_free(___243d8ch);
	dRMemory_free(___243d7ch);
	dRMemory_free(___243d88h);
	dRMemory_free(___243d38h);
	dRMemory_free(___243d40h);
	dRMemory_free(___243288h[0]);
	dRMemory_free(___243288h[1]);
	dRMemory_free(___243290h[0]);
	dRMemory_free(___243290h[1]);
	dRMemory_free(___243d68h);
	dRMemory_free(___243d64h);
	dRMemory_free(___243314h);
	dRMemory_free(___243310h);
}

// ___56774h
void race_main(dword A1, dword A2){

	dword 	eax, ebx, ecx, edx;
	byte 	esp[0x1c];
	int 	i, j, n;


	D(___243ce8h) = A1;
	D(___243cf4h) = A2;
	race___3f970h();
	race___49a34h();

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){
			
		D(___243d08h) = 0;
		D(___243d0ch) = 0;

		n = -1;
		while(++n < (int)D(___243cf4h)){

			D(___243d0ch) += D(___1de580h+0x94*n+0x38);
			D(___243d0ch) += D(___1de580h+0x94*n+0x3c);
			D(___243d0ch) += D(___1de580h+0x94*n+0x40);
			D(___243d08h) += 1;
		}

		srand_watcom106(D(___243d0ch));
		D(___24387ch) = 0;
		D(___243880h) = 1;
		D(___243318h) = 0;
		D(___243cd8h) = 0;
		D(___243878h) = 0;
	}
#endif // DR_MULTIPLAYER

	___60705h(&race___40164h);
	race___49bd4h();
	race_alloc();
	race___4539ch();
	___2432c8h = &race___492f4h;
	race___42824h();
	race___4a25ch();
	race___405bch();
	race___4a6b4h();
	race___4083ch();
	race___4adach();
	race___4580ch();
	dRally_Sound_stop();
	dRally_Sound_release();
	___606dfh();
	__VGA13_SETMODE();

#if defined(DR_MULTIPLAYER)
	___605deh_cdecl(0x46, !D(___19bd60h));
#else
	___605deh_cdecl(0x46, 1);
#endif // DR_MULTIPLAYER

	dRally_Sound_load(1, strcat(strcpy(esp, ___19bd64h), "-MUS.CMF"), 2, "GEN-EFE.CMF", 0xe);
	dRally_Sound_setMasterVolume(0);
	dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
	dRally_Sound_setEffectsVolume(___24cc54h_sfx_volume);
	dRally_Sound_setSampleRate(0x5622);
	dRally_Sound_play();
	dRally_Sound_setMasterVolume(0);
	if(!dRally_Race_getSettings(RACE_MSX)) dRally_Sound_setMusicVolume(0);
	if(!dRally_Race_getSettings(RACE_SFX)) dRally_Sound_setEffectsVolume(0);
	race___45a24h();
	if(D(___196dach) != 0) race___4af3ch();
	race___496b0h();
	race___405bch();
	race___49a34h();
	dRally_Sound_pushEffect(1, B(___1de580h+0x94*D(___243ce8h))+0x19, 0, 0x10000, 0x28000, 0x8000);
	D(___243ca4h) = 0;
	D(___243ca0h) = 0;
	D(___243cdch) = 0;
	D(___243cb8h) = 0;
	D(___243cd4h) = 0;
	D(___243874h) = 0;
	D(___243898h) = D(___243874h);
	D(___243cd0h) = 0;
	if(D(___199f54h) != 0) D(___243ce0h) = 1;

	while(1){

		D(___243ca8h) = 0;
		D(___243874h) = D(___243898h);
		D(___243898h) = 0;
		D(___1e6ed0h+0x35e*D(___243ce8h)+0xa4) = D(___1e6ed0h+0x35e*D(___243ce8h)+0xa0);

		if((int)D(___196df0h) > 0){

			D(___196df0h) -= D(___243334h);

			if((int)D(___196df0h) <= 0){

				dRally_Sound_pushEffect(2, SFX_LAP_RECORD, 0, 0x10000, 0x50000, 0x8000);
				D(___196df0h) = 0;
			}
		}

#if defined(DR_MULTIPLAYER)
		if((D(___19bd60h) != 0)&&(D(___24387ch) != 0)) race___44a78h();
#endif // DR_MULTIPLAYER

		D(___243d08h) = 0;

		if((int)D(___243874h) > 0){

			while(1){

				D(___1e6ed0h+0x35e*D(___243ce8h)+0xa4)--;
				if((int)D(___1e6ed0h+0x35e*D(___243ce8h)+0xa4) < 0) D(___1e6ed0h+0x35e*D(___243ce8h)+0xa4) = 0xf;
				D(___1e6ed0h+0x35e*D(___243ce8h)+4*(D(___243874h)-D(___243d08h))+0x1c) = D(___1e6ed0h+0x35e*D(___243ce8h)+4*D(___1e6ed0h+0x35e*D(___243ce8h)+0xa4)+0x60);
				D(___243d08h)++;
				if((int)D(___243d08h) >= (int)D(___243874h)) break;
			}
		}

		race___563ach();
		race___5209ch();
	
		if((int)D(___243874h) > 0){

			while(1){

				D(___243ca4h)++;

				if((int)D(___243ca4h) > 0xbe){

					helper01(&race___4b62ch_helper);
					helper00(0x14);
					helper01(&race___4c434h_helper);
					helper00(0x18);
					helper00(0x1c);
					race___4dcach();
					helper01(&race___514d8h_helper);

#if defined(DR_MULTIPLAYER)
					if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
						helper01(&race___52ac4h_helper);
#if defined(DR_MULTIPLAYER)
					}
#endif // DR_MULTIPLAYER

					helper01(&race___526ach_helper);
					helper01(&race___4ff50h_helper);
				}

				D(___243c60h) = 0;

				if((int)D(___243cf4h) > 0){

					edx = 0x35e*D(___243cf4h);
					eax = 0;
					while(1){

						if((int)0 < (int)D(___1e6ed0h+eax+0x192)) D(___1e6ed0h+eax+0x192)--;
						if((int)0 < (int)D(___1e6ed0h+eax+0x196)) D(___1e6ed0h+eax+0x196)--;
						if((int)0 < (int)D(___1e6ed0h+eax+0x17a)) D(___1e6ed0h+eax+0x17a)--;

						if(1 == D(___1e6ed0h+eax+0x14)) D(___1e6ed0h+eax+0x192) += 2;

						if(1 == D(___1e6ed0h+eax+0x18)){

							F32(___1e6ed0h+eax+0xb4) = (float)(double)F32(___1e6ed0h+eax+0x14e);
							D(___1e6ed0h+eax+0x196) += 2;
						}

						if(1 == D(___1e6ed0h+eax+0x1c)){

							F32(___1e6ed0h+eax+0xb8) = (float)(double)F32(___1e6ed0h+eax+0x152);
							D(___1e6ed0h+eax+0x196) += 2;
						}

						eax += 0x35e;
						D(___243c60h)++;
						if((int)eax >= (int)edx) break;
					}
				}

				eax = 0;
				D(___243c60h) = 0;

				if((int)D(___243cf4h) > 0){

					edx = 0x35e*D(___243cf4h);

					while(1){

						F32(___1e6ed0h+eax+0x152) = (float)(double)F32(___1e6ed0h+eax+0xb8);
						F32(___1e6ed0h+eax+0x156) = (float)(double)F32(___1e6ed0h+eax+0xac);
						F32(___1e6ed0h+eax+0x14e) = (float)(double)F32(___1e6ed0h+eax+0xb4);

						D(___243c60h)++;
						eax += 0x35e;
						if((int)eax >= (int)edx) break;
					}
				}

				D(___243c60h) = 0;

				if((int)D(___243cf4h) > 0){

					edx = 0;
					eax = 0;
					ecx = 0x94*D(___243cf4h);

					while(1){

						if((D(___1e6ed0h+eax+0x192) == 2)||(D(___1e6ed0h+eax+0x196) == 2)){

							if(0 == D(___1e6ed0h+eax+0x10a)){

								D(esp+0x18) = 0x400-D(___1de580h+edx+0x1c);
								D(___2438cch) = (int)((double)D(esp+0x18)*((double)F32(___1e6ed0h+eax+0xfc)*(double)F32(___1e6ed0h+eax+0xfc)+(double)F32(___1e6ed0h+eax+0x100)*(double)F32(___1e6ed0h+eax+0x100)));
								if((int)D(___2438cch) > 0x2710) D(___2438cch) = 0x2710;
								D(___1de580h+edx+0x18) -= D(___2438cch);
								if((int)0 > (int)D(___1de580h+edx+0x18)) D(___1de580h+edx+0x18) = 0;
							}
						}

						edx += 0x94;
						eax += 0x35e;
						D(___243c60h)++;
						if((int)edx >= (int)ecx) break;
					}
				}

				if(D(___1e6ed0h+0x35e*D(___243ce8h)+0x14)||D(___1e6ed0h+0x35e*D(___243ce8h)+0x18)||D(___1e6ed0h+0x35e*D(___243ce8h)+0x1c)){

					D(___2438cch) = (int)(25000.0*sqrt((double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xfc)*(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xfc)+(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0x100)*(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0x100)));

					if((int)D(___2438cch) > 0x10000) D(___2438cch) = 0x10000;

					if((D(___1e6ed0h+0x35e*D(___243ce8h)+0x18) != 0)||(D(___1e6ed0h+0x35e*D(___243ce8h)+0x1c) != 0)){

						switch((int)D(___243894h)%3){
						case 0:
							dRally_Sound_pushEffect(5, SFX_CAR_HIT_1, 0, D(___2438cch), 0x21000, 0x8000);
							break;
						case 1:
							dRally_Sound_pushEffect(5, SFX_METAL, 0, D(___2438cch), 0x23000, 0x8000);
							break;
						case 2:
							dRally_Sound_pushEffect(5, SFX_CAR_HIT_3, 0, D(___2438cch), 0x23000, 0x8000);
							break;
						default:
							break;
						}
					}

					D(___243d08h) = rand_watcom106()%0x6000;

					switch(D(___1e6ed0h+0x35e*D(___243ce8h)+0x18e)){
					case 0:
						switch((int)D(___243894h)%3){
						case 0:
							dRally_Sound_pushEffect(5, SFX_METAL_HIT, 0, D(___2438cch), D(___243d08h)+0x22000, 0x8000);
							break;
						case 1:
							dRally_Sound_pushEffect(5, SFX_CAR_HIT_2, 0, D(___2438cch), D(___243d08h)+0x22000, 0x8000);
							break;
						case 2:
							dRally_Sound_pushEffect(5, SFX_CAR_HIT_3, 0, D(___2438cch), D(___243d08h)+0x22000, 0x8000);
							break;
						default:
							break;
						}
						break;
					case 1:
						dRally_Sound_pushEffect(5, SFX_CAR_HIT_1, 0, D(___2438cch), D(___243d08h)+0x22000, 0x8000);
						break;
					case 2:
						dRally_Sound_pushEffect(5, SFX_CAR_HIT_2, 0, D(___2438cch), D(___243d08h)+0x22000, 0x8000);
						break;
					case 3:
						dRally_Sound_pushEffect(5, SFX_CAR_HIT_3, 0, D(___2438cch), D(___243d08h)+0x22000, 0x8000);
						break;
					default:
						break;
					}
				}

				if((int)D(___2438d4h) > 0){

					if(D(___196ddch) == 0){

						if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) > 0){

							if(D(___1e6ed0h+0x35e*D(___243ce8h)+0x10a) == 0){
							
								if(D(___196de0h) == 2){

									dRally_Sound_pushEffect(6, SFX_BRAKES, 0, D(___2438d4h), 0x28000, 0x8000);
									D(___196ddch) = 1;
								}
							}
						}
					}
				}

				if(D(___2438d4h) == 0){

					if(1 == D(___196ddch)){
					
						dRally_Sound_freeEffectChannel(6);
						D(___196ddch) = 0;
					}
				}

				D(___2438d4h) = 0;

				if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) <= 0){

					dRally_Sound_freeEffectChannel(1);
					dRally_Sound_freeEffectChannel(6);
				}
				else {

					if(D(___1e6ed0h+0x35e*D(___243ce8h)+0x10a) != 0){

						dRally_Sound_freeEffectChannel(1);
						dRally_Sound_freeEffectChannel(6);
					}
				}

				F32(esp+0x10) = (float)((double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb0)/(double)F32(___1de580h+0x94*D(___243ce8h)+4));

				if(0.0 <= (double)F32(esp+0x10)){

					D(esp+0x14) = D(esp+0x10);
				}
				else {

					F32(esp+0x14) = (float)(-1.0*(double)F32(esp+0x10));
				}

				D(___196df8h) = (int)((double)(5*D(___1e6ed0h+0x35e*D(___243ce8h)+0x19e))*(double)F32(esp+0x14)+(double)(D(___1e6ed0h+0x35e*D(___243ce8h)+0x19a)+0x28000));
				dRally_Sound_adjustEffect(1, 0x10000, D(___196df8h), 0x8000);
				race___54668h();
				race___55ae0h();

#if defined(DR_MULTIPLAYER)
				if((D(___19bd60h) == 0)||(D(___243318h) == 0)){
#endif // DR_MULTIPLAYER
					race___56170h();
#if defined(DR_MULTIPLAYER)
				}

				if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER			
					if(D(___1e6ed0h+0x35e*D(___243ce8h)+0x10a) != 0){

						D(___2438c8h)++;
					}
					else {

						if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) <= 0) D(___2438c8h)++;
					}
#if defined(DR_MULTIPLAYER)
				}
#endif // DR_MULTIPLAYER		
		
				D(___243c60h) = 0;
				D(___243d0ch) = 0;

				if((int)D(___243cf4h) > 0){

					ecx = 0x94*D(___243cf4h);
					edx = 0;
					ebx = 0;

					while(1){

						if((int)D(___1e6ed0h+edx+0xb0) <= 0x3f000000){

							if((D(___1e6ed0h+edx+0x10a) != 0)||((int)D(___1de580h+ebx+0x18) <= 0)) D(___243d0ch)++;
						}

						ebx += 0x94;
						edx += 0x35e;
						D(___243c60h)++;
						if((int)ebx >= (int)ecx) break;
					}
				}

				eax = D(___243cf4h)-1;
				if((int)eax <= (int)D(___243d0ch)) D(___2438c8h)++;
				D(___243ca8h)++;
				D(___243874h)--;
				if((int)D(___243874h) <= 0) break;
			}
		}
	
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER		
			if(D(___1de580h) != 6) race___4c21ch();
#if defined(DR_MULTIPLAYER)
		}

		if((D(___19bd60h) != 0)&&(D(___24387ch) != 0)) race___44304h();

#endif // DR_MULTIPLAYER
		if(kmap[DR_SCAN_F12] != 0) race___49390h();
		if(kmap[DR_SCAN_F1] != 0){

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
				D(___243d08h) = 0;
				while(1){

					D(___243d08h)++;
					dRally_Sound_freeEffectChannel(D(___243d08h)&0xff);
					if((int)D(___243d08h) >= 0xe) break;
				}

				ebx = dRally_Sound_getPosition()&0xff00;
				if(!strcmp(___19bd64h, "TR0")) dRally_Sound_setPosition(0x1e00);
				if(!strcmp(___19bd64h, "TR1")) dRally_Sound_setPosition(0x3700);
				if(!strcmp(___19bd64h, "TR2")) dRally_Sound_setPosition(0x2d00);
				if(!strcmp(___19bd64h, "TR3")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR4")) dRally_Sound_setPosition(0x2d00);
				if(!strcmp(___19bd64h, "TR5")) dRally_Sound_setPosition(0x3700);
				if(!strcmp(___19bd64h, "TR6")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR7")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR8")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR9")) dRally_Sound_setPosition(0x3200);
				dRally_Sound_setMasterVolume(0x8000);
				race___48458h();
				dRally_Sound_setPosition(ebx);
				dRally_Sound_setMasterVolume(0x10000);
				dRally_Sound_pushEffect(1, B(___1de580h+0x94*D(___243ce8h))+0x19, 0, 0x10000, 0x28000, 0x8000);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}

		if(!D(___243d00h)&&kmap[DR_SCAN_TAB]){
			
			D(___243d00h) = 1;
			dRally_Race_toggleSettings(RACE_NOTWIDE);
		}

		if(kmap[DR_SCAN_TAB] == 0) D(___243d00h) = 0;

		if((int)D(___1de580h+0x18+0x94*D(___243ce8h)) <= 0) dRally_Race_setSettings(RACE_NOTWIDE);

		if(kmap[DR_SCAN_F2] != 0){	// MSX

			dRally_Sound_setMusicVolume(dRally_Race_getSettings(RACE_MSX) ? 0 : ___24cc58h_msx_volume);
			dRally_Race_toggleSettings(RACE_MSX);
			kmap[DR_SCAN_F2] = 0;
		}

		if(kmap[DR_SCAN_F3] != 0){	// SFX

			dRally_Sound_setEffectsVolume(dRally_Race_getSettings(RACE_SFX) ? 0 : ___24cc54h_sfx_volume);
			dRally_Race_toggleSettings(RACE_SFX);
			kmap[DR_SCAN_F3] = 0;
		}

		if(kmap[DR_SCAN_F4] != 0){	// TEXTURES

			dRally_Race_toggleSettings(RACE_TEXTURES);
			kmap[DR_SCAN_F4] = 0;
		}

		if(kmap[DR_SCAN_F5] != 0){	// SHADOWS

			dRally_Race_toggleSettings(RACE_SHADOWS);
			kmap[DR_SCAN_F5] = 0;
		}

		if(kmap[DR_SCAN_P] != 0){
#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
				D(___243d08h) = 0;
				while(1){

					D(___243d08h)++;
					dRally_Sound_freeEffectChannel(D(___243d08h)&0xff);
					if((int)D(___243d08h) >= 0xe) break;
				}

				ecx = dRally_Sound_getPosition()&0xff00;
				if(!strcmp(___19bd64h, "TR0")) dRally_Sound_setPosition(0x1e00);
				if(!strcmp(___19bd64h, "TR1")) dRally_Sound_setPosition(0x3700);
				if(!strcmp(___19bd64h, "TR2")) dRally_Sound_setPosition(0x2d00);
				if(!strcmp(___19bd64h, "TR3")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR4")) dRally_Sound_setPosition(0x2d00);
				if(!strcmp(___19bd64h, "TR5")) dRally_Sound_setPosition(0x3700);
				if(!strcmp(___19bd64h, "TR6")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR7")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR8")) dRally_Sound_setPosition(0x3200);
				if(!strcmp(___19bd64h, "TR9")) dRally_Sound_setPosition(0x3200);
				dRally_Sound_setMasterVolume(0x8000);
				race___477d4h();
				printmsg(MSG_GAME_PAUSED);
				race___478c8h(0);
				if(D(___196d9ch) == 1) race___46738h__VGA13_PRESENTCLEARSCREEN();
				dRally_Sound_setPosition(ecx);
				dRally_Sound_setMasterVolume(0x10000);
				dRally_Sound_pushEffect(1, B(___1de580h+0x94*D(___243ce8h))+0x19, 0, 0x10000, 0x28000, 0x8000);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}

		race___4ee9ch();
		race___4f030h();
		D(___243d0ch) = 0;

		D(___243d08h) = 0;
		while(1){

			ecx = (int)D(___196d88h)>>2;

			memcpy(___243d80h+D(___243d08h)+D(___196d98h)+0x60, ___243d58h+D(___196dc8h)+D(___243d0ch)+D(___196dcch)*D(___243d28h), 4*(ecx+1));
			D(___243d0ch) += D(___243d28h);

			D(___243d08h) += 0x200;
			if((int)D(___243d08h) >= 0x19000) break;
		}

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			race___52d7ch();
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		D(___243c60h) = -1;
		while(++D(___243c60h) < D(___243cf4h)) race___50ef4h();
		race___4f300h();
		race___51ce0h();
		if(dRally_Race_getSettings(RACE_SHADOWS)) race___4f170h();
		D(___243c60h) = -1;
		while(++D(___243c60h) < D(___243cf4h)) race___50a48h();
		D(___243c60h) = -1;
		while(++D(___243c60h) < D(___243cf4h)) race___51204h();
		race___53310h();
		race___53464h();
		D(___243c60h) = -1;
		while(++D(___243c60h) < D(___243cf4h)) race___50ba4h();
		race___51eb4h();
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			race___56594h();
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		if((int)D(___243ca4h) < 0x122) race___42218h();
		(D(___196d88h) != 0x140) ? race___40f48h() : race___40db4h();

		D(___243c60h) = -1;
		while(++D(___243c60h) < D(___243cf4h)){

			if((B(___1e6ed0h+0x109+0x35e*D(___243c60h)) == 1)&&(D(___196dd4h) != 0)) race___4207ch();
		}

		if((int)D(___2438c8h) > 0x12c){
#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) != 0) D(___24387ch) = 0;
#endif // DR_MULTIPLAYER
			D(___243d08h) = -1;
			while(++D(___243d08h) < 0xe) dRally_Sound_freeEffectChannel(D(___243d08h)+1);
			dRally_Sound_pushEffect(2, SFX_RACE_OVER, 0, 0x10000, 0x50000, 0x8000);
			race___477d4h();
			printmsg(MSG_RACE_OVER);
			race___478c8h(!!D(___199f54h));
			D(___243d14h) = 1;
		}

		D(___243d08h) = __GET_FRAME_COUNTER();
		while(D(___243d08h) == __GET_FRAME_COUNTER());

		if((int)D(___1e6ed0h+0x35e*D(___243ce8h)+0x34e) > 0){	// drug countdown

			if(D(___196d9ch) != 0) race___46814h();
			if(D(___196d9ch) == 0) race___454ach();
		}
		else {

			if(D(___196d9ch) == 0){

				D(___243d08h) = 0;
				D(___243d0ch) = 0;

				while(1){

					memcpy(VGA13_ACTIVESCREEN+D(___243d08h), ___243d80h+D(___243d0ch)+0x60, 0x140);
					D(___243d08h) += 0x140;
					D(___243d0ch) += 0x200;
					if((int)D(___243d08h) >= 0xfa00) break;
				}

				__VGA13_PRESENTSCREEN__();
			}

			if(D(___196d9ch) == 1) race___46814h();
			D(___1e6ed0h+0x35e*D(___243ce8h)+0x34e) = 0;
		}

		D(___243c60h) = 0;
		eax = 0;
		while(1){

			if((int)D(___1e6ed0h+eax+0x34e) > 0) D(___1e6ed0h+eax+0x34e) -= D(___243334h);

			eax += 0x35e;
			if(eax == 0xd78) break;
		}

		D(___243c60h) = 4;

		if(dRally_Race_getSettings(RACE_NOTWIDE)){

			if(((int)D(___196d88h) > 0x100)&&!D(___196d9ch)) D(___196d88h) -= 4*D(___243334h);
			if((int)D(___196d88h) < 0x100) D(___196d88h) = 0x100;
		}
		else {

			if(((int)D(___196d88h) < 0x140)&&!D(___196d9ch)) D(___196d88h) += 2*D(___243334h);
			if((int)D(___196d88h) > 0x140) D(___196d88h) = 0x140;
		}

		D(___196d8ch) = (int)D(___196d88h)>>1;
		D(___196d98h) = 0x140-D(___196d88h);

#if defined(DR_MULTIPLAYER)
		if(	(!D(___19bd60h)&&kmap[DR_SCAN_ESCAPE])
		||	(D(___19bd60h)&&kmap[DR_SCAN_ESCAPE]&&((int)D(___243ca4h) > 0xc8))
		||	(D(___19bd60h)&&D(___243cd8h)&&((int)D(___243ca4h) > 0xc8))
		){
#else
		if(kmap[DR_SCAN_ESCAPE]){
#endif // DR_MULTPLAYER

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) != 0){

				D(___24387ch) = 0;
				if(D(___243cd8h) == 0) ___61418h(0xfd);
			}
#endif // DR_MULTIPLAYER

			D(___243d14h) = -1;
			race___477d4h();
			D(___243d08h) = 0;

			while(1){

				D(___243d08h)++;
				dRally_Sound_freeEffectChannel(B(___243d08h));
				if((int)D(___243d08h) >= 0xe) break;
			}

#if defined(DR_MULTIPLAYER)
			if((D(___19bd60h) != 0)&&(D(___243cd8h) != 0)){

				printmsg(MSG_ABOUT_TO_ABORT);
				race___47ed8h(1);
			}
			else {
#endif // DR_MULTIPLAYER
				printmsg((D(___199f54h) == 0)?MSG_ABORT_RACE:MSG_ABORT_DEMO);
#if defined(DR_MULTIPLAYER)
			}

			if((D(___19bd60h) != 0)&&(D(___243cd8h) == 0)) race___47ed8h(0);
			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
				race___478c8h(0);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER

			if(D(___243d14h) != 1){

				D(___243d14h) = 0;
				dRally_Sound_pushEffect(1, B(___1de580h+0x94*D(___243ce8h))+0x19, 0, 0x10000, 0x28000, 0x8000);
				if(D(___196d9ch) == 1) race___46738h__VGA13_PRESENTCLEARSCREEN();
			}
			else {
#if defined(DR_MULTIPLAYER)
				if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER		
					race___560d8h();
					D(___199f54h) = 0;
#if defined(DR_MULTIPLAYER)
				}
#endif // DR_MULTIPLAYER
			}

#if defined(DR_MULTIPLAYER)
			if((D(___19bd60h) != 0)&&(D(___243d14h) == 0)){
				
				D(___24387ch) = 1;
				D(___243cd8h) = 0;
			}
#endif // DR_MULTIPLAYER
		}









#if defined(DR_MULTIPLAYER)
		if((D(___19bd60h) != 0)&&(D(___243318h) == 1)){

			D(___24387ch) = 0;
			___61418h(0xfc);
			D(___243d14h) = -1;
			race___477d4h();
			printmsg(MSG_CONNECTION_LOST);
			race___47ed8h(0);
			D(___243d14h) = 1;
			D(___1de7d0h+0x44) = -1;
		}
#endif // DR_MULTIPLAYER

		D(___196dd8h)++;
		if(D(___196dd8h) == 1){

			race___45d3ch();

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

				if(D(___243d44h) != 0){

					race___477d4h();
					printmsg(MSG_WELCOME);
					race___478c8h(!!D(___199f54h));
				}
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}

		if(D(___243d14h) != 0) break;
	}

	race___46a10h();
	race___46738h__VGA13_PRESENTCLEARSCREEN();

	D(___243c60h) = 0;
	while((int)D(___243c60h) < (int)D(___243cf4h)){

		D(___1de580h+0x94*D(___243c60h)+0x54) = B(___1e6ed0h+0x35e*D(___243c60h)+0x109);
		D(___243c60h)++;
	}

	___60719h();
	dRally_Sound_stop();
	dRally_Sound_release();
	race___400ech();
	race_free();
	kmap[DR_SCAN_ESCAPE] = 0;
}

#include "drally.h"
#include "drally_keyboard.h"
#include "drally_race.h"
#include "drenums.h"
#include "drmath.h"
#include "sfx.h"
#include "drally_structs_free.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

	extern __DWORD__ MY_CAR_IDX;
	extern int NUM_OF_CARS;
	extern int TRX_WIDTH;
	extern __POINTER__ TRX_IMA;
	extern __POINTER__ BACKBUFFER;
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___243d0ch[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___24387ch[];
	extern __BYTE__ ___243880h[];
	extern __BYTE__ ___243318h[];
	extern __BYTE__ ___243cd8h[];
	extern __BYTE__ ___243878h[];
	extern void_cb ___2432c8h;
	extern char ___19bd64h[16];
	extern __DWORD__ ___24cc58h_msx_volume;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___196dach[];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___243cdch[];
	extern __BYTE__ ___243cb8h[];
	extern __BYTE__ ___243cd4h[];
	extern __BYTE__ SUPERGLOBAL___243cd0h[];
	extern __BYTE__ ___243ce0h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___196df0h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___2438cch[];
	extern __BYTE__ ___2438d4h[];
	extern __BYTE__ ___196ddch[];
	extern __BYTE__ ___196de0h[];
	extern __BYTE__ ___196df8h[];
	extern __BYTE__ ___2438c8h[];
	extern __BYTE__ kmap[];
	extern __BYTE__ ___243d00h[];
	extern int TRX_VIEWPORT_TL_X;
	extern int TRX_VIEWPORT_TL_Y;
	extern int CURRENT_VIEWPORT_W;
	extern int CURRENT_VIEWPORT_X;
	extern __BYTE__ ___196dd4h[];
	extern __BYTE__ ___243d14h[];
	extern __BYTE__ * VGA13_ACTIVESCREEN;
	extern int CURRENT_VIEWPORT_CENTER_X;
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___196dd8h[];
	extern __DWORD__ ___243d44h;

#if defined(DR_MULTIPLAYER)
void race___44304h(void);
void race___44a78h(void);
void race___47ed8h(__DWORD__);
#endif // DR_MULTIPLAYER

void race___400ech(void);
void race___46a10h(void);
void race___45d3ch(void);
void race___560d8h(void);
void race___454ach(void);
void __VGA13_PRESENTSCREEN__(void);
__DWORD__ __GET_FRAME_COUNTER(void);
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
void race___478c8h(__DWORD__);
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
void race___4b62ch(int);
void race___5209ch(void);
void race___563ach(void);
void race___405bch(void);
void race___496b0h(void);
void race___4af3ch(void);
void race___45a24h(void);
void race___3f970h(void);
void race___49a34h(void);
void race___40164h(void);
void ___60705h(void_cb);
void race___49bd4h(void);
void race___492f4h(void);
void dRally_Sound_stop(void);
void dRally_Sound_release(void);
void ___606dfh(void);
void ___605deh_cdecl(__DWORD__, __DWORD__);
void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void dRally_Sound_setMusicVolume(__DWORD__ vol);
void dRally_Sound_setEffectsVolume(__DWORD__ vol);
void dRally_Sound_setSampleRate(__DWORD__ freq);
void dRally_Sound_play(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void race___52ac4h(void);
void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
void dRally_Sound_adjustEffect(__BYTE__ channel, __DWORD__ vol, __DWORD__ freq, __DWORD__ balance);
__DWORD__ dRally_Sound_getPosition(void);
void ___60719h(void);
void ___61418h(__DWORD__);
void srand_watcom106(__DWORD__);
void race___4539ch(void);
void race___42824h(void);
void race___4a25ch(void);
void race___4a6b4h(void);
void race___4083ch(void);
void race___4adach(void);
void race___4580ch(void);
void __VGA13_SETMODE(void);

static void helper01(void (*cb)(int)){

	int 	n;

	n = -1;
	while(++n < NUM_OF_CARS) cb(n);
}

static __WORD__ helper22(const char * cp){

	if(!strcmp(cp, "TR0")) return 0x1e00;
	if(!strcmp(cp, "TR1")) return 0x3700;
	if(!strcmp(cp, "TR2")) return 0x2d00;
	if(!strcmp(cp, "TR3")) return 0x3200;
	if(!strcmp(cp, "TR4")) return 0x2d00;
	if(!strcmp(cp, "TR5")) return 0x3700;
	if(!strcmp(cp, "TR6")) return 0x3200;
	if(!strcmp(cp, "TR7")) return 0x3200;
	if(!strcmp(cp, "TR8")) return 0x3200;
	if(!strcmp(cp, "TR9")) return 0x3200;

	return 0;
}

static void helper_freeEffectChannels(void){
	
	int 	n;

	n = -1;
	while(++n < 0xe) dRally_Sound_freeEffectChannel(n+1);
}

static __WORD__ helper33(void){

	__DWORD__ 	ecx, ecxx;

	helper_freeEffectChannels();
	ecx = dRally_Sound_getPosition()&0xff00;
	if((ecxx = helper22(___19bd64h)) != 0) dRally_Sound_setPosition(ecxx);
	dRally_Sound_setMasterVolume(0x8000);

	return ecx;
}

static void race___4b62ch_helper(int n){

	//D(___243c60h) = n;

	if(D(___243ce0h) != 0){

		race___4b62ch(n);
	}
	else {
#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			if(MY_CAR_IDX != n) race___4b62ch(n);
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

// ___56774h
void race_main(int MyIndex, int NumCars){		// my_position_index, number_of_racers

	__DWORD__ 	eax, ebx, ecx, edx;
	__BYTE__ 	esp[0x1c];
	int 	i, j, n, bool_tmp, k, m, c;
	struct_35e_t *	s_35e;
	struct_94_t * 	s_94;
	struct_54_t *	s_54;



	s_54 = (struct_54_t *)___1de7d0h;
	s_94 = (struct_94_t *)___1de580h;
	s_35e = (struct_35e_t *)___1e6ed0h;
	MY_CAR_IDX = MyIndex;
	NUM_OF_CARS = NumCars;
	race___3f970h();
	race___49a34h();

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){
			
		D(___243d08h) = 0;
		D(___243d0ch) = 0;

		n = -1;
		while(++n < NUM_OF_CARS){

			D(___243d0ch) += s_94[n].__38;
			D(___243d0ch) += s_94[n].__3c;
			D(___243d0ch) += s_94[n].__40;
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

	bool_tmp = 1;
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) bool_tmp = 0;
#endif // DR_MULTIPLAYER

	___605deh_cdecl(0x46, bool_tmp);
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
	dRally_Sound_pushEffect(1, (s_94[MY_CAR_IDX].__0&0xff)+25, 0, 0x10000, 0x28000, 0x8000);
	resetCounter(1);
	D(___243ca0h) = 0;
	D(___243cdch) = 0;
	D(___243cb8h) = 0;
	D(___243cd4h) = 0;
	resetCounter(5);
	resetCounter(2);
	D(SUPERGLOBAL___243cd0h) = 0;

	while(1){

		resetCounter(4);
		setCounter(5, getCounter(2));
		resetCounter(2);
		s_35e[MY_CAR_IDX].__a4 = s_35e[MY_CAR_IDX].ActionFlags_i;

		if((int)D(___196df0h) > 0){

			D(___196df0h) -= D(___243334h);

			if((int)D(___196df0h) <= 0){

				dRally_Sound_pushEffect(2, SFX_LAP_RECORD, 0, 0x10000, 0x50000, 0x8000);
				D(___196df0h) = 0;
			}
		}

#if defined(DR_MULTIPLAYER)
		if((___19bd60h != 0)&&(D(___24387ch) != 0)) race___44a78h();
#endif // DR_MULTIPLAYER

		D(___243d08h) = 0;

		if((int)getCounter(5) > 0){

			while(1){

				s_35e[MY_CAR_IDX].__a4--;
				if((int)s_35e[MY_CAR_IDX].__a4 < 0) s_35e[MY_CAR_IDX].__a4 = 0xf;
				D(___243d08h)++;
				s_35e[MY_CAR_IDX].Ctrls[getCounter(5)-D(___243d08h)] = s_35e[MY_CAR_IDX].ActionFlags[s_35e[MY_CAR_IDX].__a4];
				if((int)D(___243d08h) >= (int)getCounter(5)) break;
			}
		}

		race___563ach();	// HORNS
		race___5209ch();
	
		if((int)getCounter(5) > 0){

			while(1){

				incCounter(1);

				if((int)getCounter(1) > 0xbe){

					helper01(&race___4b62ch_helper);
					k = -1; while(++k < NUM_OF_CARS) s_35e[k].__14 = 0;
					helper01(&race___4c434h_helper);
					k = -1; while(++k < NUM_OF_CARS) s_35e[k].__18 = 0;
					k = -1; while(++k < NUM_OF_CARS) s_35e[k].__1c = 0;
					race___4dcach();
					helper01(&race___514d8h_helper);

#if defined(DR_MULTIPLAYER)
					if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
						helper01(&race___52ac4h_helper);
#if defined(DR_MULTIPLAYER)
					}
#endif // DR_MULTIPLAYER

					helper01(&race___526ach_helper);
					helper01(&race___4ff50h_helper);
				}

				k = -1;
				while(++k < NUM_OF_CARS){

					if((int)0 < (int)s_35e[k].__192) s_35e[k].__192--;
					if((int)0 < (int)s_35e[k].__196) s_35e[k].__196--;
					if((int)0 < (int)s_35e[k].__17a) s_35e[k].__17a--;

					if(s_35e[k].__14 == 1) s_35e[k].__192 += 2;

					if(s_35e[k].__18 == 1){

						s_35e[k].XLocation = s_35e[k].__14e;
						s_35e[k].__196 += 2;
					}

					if(s_35e[k].__1c == 1){

						s_35e[k].YLocation = s_35e[k].__152;
						s_35e[k].__196 += 2;
					}

					s_35e[k].__152 = s_35e[k].YLocation;
					s_35e[k].__156 = s_35e[k].Direction;
					s_35e[k].__14e = s_35e[k].XLocation;

					if((s_35e[k].__192 == 2)||(s_35e[k].__196 == 2)){

						if(s_35e[k].Finished == 0){

							D(esp+0x18) = 0x400-s_94[k].__1c;
							D(___2438cch) = (int)((double)D(esp+0x18)*(double)(s_35e[k].__fc*s_35e[k].__fc+s_35e[k].__100*s_35e[k].__100));
							if((int)D(___2438cch) > 0x2710) D(___2438cch) = 0x2710;
							s_94[k].__18 -= D(___2438cch);
							if((int)0 > (int)s_94[k].__18) s_94[k].__18 = 0;
						}
					}
				}

				if(s_35e[MY_CAR_IDX].__14||s_35e[MY_CAR_IDX].__18||s_35e[MY_CAR_IDX].__1c){

					D(___2438cch) = (int)(25000.0*sqrt((double)(s_35e[MY_CAR_IDX].__fc*s_35e[MY_CAR_IDX].__fc+s_35e[MY_CAR_IDX].__100*s_35e[MY_CAR_IDX].__100)));

					if((int)D(___2438cch) > 0x10000) D(___2438cch) = 0x10000;

					if((s_35e[MY_CAR_IDX].__18 != 0)||(s_35e[MY_CAR_IDX].__1c != 0)){

						switch((int)getCounter(3)%3){
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

					switch(s_35e[MY_CAR_IDX].__18e){
					case 0:
						switch((int)getCounter(3)%3){
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

				if(((int)D(___2438d4h) > 0)&&(D(___196ddch) == 0)){

					if(((int)s_94[MY_CAR_IDX].__18 > 0)&&(s_35e[MY_CAR_IDX].Finished == 0)){
						
						if(D(___196de0h) == 2){

							dRally_Sound_pushEffect(6, SFX_BRAKES, 0, D(___2438d4h), 0x28000, 0x8000);
							D(___196ddch) = 1;
						}
					}
				}

				if((D(___2438d4h) == 0)&&(D(___196ddch) == 1)){
					
					dRally_Sound_freeEffectChannel(6);
					D(___196ddch) = 0;
				}

				D(___2438d4h) = 0;

				if(((int)s_94[MY_CAR_IDX].__18 <= 0)||(s_35e[MY_CAR_IDX].Finished != 0)){

					dRally_Sound_freeEffectChannel(1);
					dRally_Sound_freeEffectChannel(6);
				}

				F32(esp+0x14) = (float)dRMath_abs((double)s_35e[MY_CAR_IDX].__b0/(double)s_94[MY_CAR_IDX].__4);
				D(___196df8h) = (int)((double)(5*s_35e[MY_CAR_IDX].__19e)*(double)F32(esp+0x14)+(double)(s_35e[MY_CAR_IDX].__19a+0x28000));
				dRally_Sound_adjustEffect(1, 0x10000, D(___196df8h), 0x8000);
				race___54668h();	// POSITION, LAP COUNTER
				race___55ae0h();	// POSITION, LAP COUNTER

#if defined(DR_MULTIPLAYER)
				if((___19bd60h == 0)||(D(___243318h) == 0)){
#endif // DR_MULTIPLAYER
					race___56170h();
#if defined(DR_MULTIPLAYER)
				}

				if(___19bd60h == 0){
#endif // DR_MULTIPLAYER			
					if((s_35e[MY_CAR_IDX].Finished != 0)||((int)s_94[MY_CAR_IDX].__18 <= 0)) D(___2438c8h)++;
#if defined(DR_MULTIPLAYER)
				}
#endif // DR_MULTIPLAYER		
		
				D(___243c60h) = 0;
				D(___243d0ch) = 0;

				if(NUM_OF_CARS > 0){

					while(1){

						if(s_35e[D(___243c60h)].__b0 <= 0.5f){

							if((s_35e[D(___243c60h)].Finished != 0)||((int)s_94[D(___243c60h)].__18 <= 0)) D(___243d0ch)++;
						}

						D(___243c60h)++;
						if((int)D(___243c60h) >= NUM_OF_CARS) break;
					}
				}

				eax = NUM_OF_CARS-1;
				if((int)eax <= (int)D(___243d0ch)) D(___2438c8h)++;
				incCounter(4);
				decCounter(5);
				if((int)getCounter(5) <= 0) break;
			} // w
		}
	
#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER		
			if(s_94[0].__0 != 6) race___4c21ch();
#if defined(DR_MULTIPLAYER)
		}

		if((___19bd60h != 0)&&(D(___24387ch) != 0)) race___44304h();

#endif // DR_MULTIPLAYER
		if(kmap[DR_SCAN_F12] != 0) race___49390h();
		if(kmap[DR_SCAN_F1] != 0){

#if defined(DR_MULTIPLAYER)
			if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
				ecx = helper33();
				race___48458h();
				dRally_Sound_setPosition(ecx);
				dRally_Sound_setMasterVolume(0x10000);
				dRally_Sound_pushEffect(1, (s_94[MY_CAR_IDX].__0&0xff)+25, 0, 0x10000, 0x28000, 0x8000);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}

		if(!D(___243d00h)&&kmap[DR_SCAN_TAB]){
			
			D(___243d00h) = 1;
			dRally_Race_toggleSettings(RACE_NOTWIDE);
		}

		if(kmap[DR_SCAN_TAB] == 0) D(___243d00h) = 0;

		if((int)s_94[MY_CAR_IDX].__18 <= 0) dRally_Race_setSettings(RACE_NOTWIDE);

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

		if(kmap[DR_SCAN_P] != 0){	// GAME PAUSED
#if defined(DR_MULTIPLAYER)
			if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
				ecx = helper33();
				race_msg(E_GAME_PAUSED);
				race___478c8h(0);
				dRally_Sound_setPosition(ecx);
				dRally_Sound_setMasterVolume(0x10000);
				dRally_Sound_pushEffect(1, (s_94[MY_CAR_IDX].__0&0xff)+25, 0, 0x10000, 0x28000, 0x8000);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}

		race___4ee9ch();
		race___4f030h();

		ecx = CURRENT_VIEWPORT_W+4;
		ecx -= ecx&3;
		m = -1;
		while(++m < 0xc8){	// COPY TRACK BACKGROUND


			memcpy(BACKBUFFER+0x200*m+CURRENT_VIEWPORT_X+0x60, TRX_IMA+TRX_WIDTH*(TRX_VIEWPORT_TL_Y+m)+TRX_VIEWPORT_TL_X, ecx);
		}

#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			race___52d7ch();
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		D(___243c60h) = -1;
		while(++D(___243c60h) < NUM_OF_CARS) race___50ef4h();
		race___4f300h();	// RENDER CARS
		race___51ce0h();
		if(dRally_Race_getSettings(RACE_SHADOWS)) race___4f170h();
		D(___243c60h) = -1;
		while(++D(___243c60h) < NUM_OF_CARS) race___50a48h();
		D(___243c60h) = -1;
		while(++D(___243c60h) < NUM_OF_CARS) race___51204h();
		race___53310h();	// SORT OBJECTS
		race___53464h();	// OBJECTS
		D(___243c60h) = -1;
		while(++D(___243c60h) < NUM_OF_CARS) race___50ba4h();
		race___51eb4h();
#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			race___56594h();	// INRACE CHEATS
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		if((int)getCounter(1) < 0x122) race___42218h();
		(CURRENT_VIEWPORT_W != 0x140) ? race___40f48h() : race___40db4h();

		D(___243c60h) = -1;
		while(++D(___243c60h) < NUM_OF_CARS){

			if((s_35e[D(___243c60h)].Position == 1)&&(D(___196dd4h) != 0)) race___4207ch();
		}

		if((int)D(___2438c8h) > 0x12c){
#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0) D(___24387ch) = 0;
#endif // DR_MULTIPLAYER
			helper_freeEffectChannels();
			dRally_Sound_pushEffect(2, SFX_RACE_OVER, 0, 0x10000, 0x50000, 0x8000);
			race_msg(E_RACE_OVER);
			race___478c8h(0);
			D(___243d14h) = 1;
		}

		D(___243d08h) = __GET_FRAME_COUNTER();
		while(D(___243d08h) == __GET_FRAME_COUNTER());

		if((int)s_35e[MY_CAR_IDX].Drug > 0){

			race___454ach();
		}
		else {

			c = -1;
			while(++c < 0xc8) memcpy(VGA13_ACTIVESCREEN+0x140*c, BACKBUFFER+0x200*c+0x60, 0x140);

			__VGA13_PRESENTSCREEN__();
			s_35e[MY_CAR_IDX].Drug = 0;
		}

		D(___243c60h) = 0;
		eax = -1;
		while(++eax < 4){

			if((int)s_35e[eax].Drug > 0) s_35e[eax].Drug -= D(___243334h);
		}

		D(___243c60h) = 4;

		if(dRally_Race_getSettings(RACE_NOTWIDE)){

			if(CURRENT_VIEWPORT_W > 0x100) CURRENT_VIEWPORT_W -= 4*D(___243334h);
			if(CURRENT_VIEWPORT_W < 0x100) CURRENT_VIEWPORT_W = 0x100;
		}
		else {

			if(CURRENT_VIEWPORT_W < 0x140) CURRENT_VIEWPORT_W += 2*D(___243334h);
			if(CURRENT_VIEWPORT_W > 0x140) CURRENT_VIEWPORT_W = 0x140;
		}

		CURRENT_VIEWPORT_CENTER_X = CURRENT_VIEWPORT_W/2;
		CURRENT_VIEWPORT_X = 0x140-CURRENT_VIEWPORT_W;

#if defined(DR_MULTIPLAYER)
		if(	(!___19bd60h&&kmap[DR_SCAN_ESCAPE])
		||	(___19bd60h&&kmap[DR_SCAN_ESCAPE]&&((int)getCounter(1) > 0xc8))
		||	(___19bd60h&&D(___243cd8h)&&((int)getCounter(1) > 0xc8))
		){
#else
		if(kmap[DR_SCAN_ESCAPE]){
#endif // DR_MULTPLAYER

#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0){

				D(___24387ch) = 0;
				if(D(___243cd8h) == 0) ___61418h(0xfd);
			}
#endif // DR_MULTIPLAYER

			D(___243d14h) = -1;
			helper_freeEffectChannels();

#if defined(DR_MULTIPLAYER)
			if((___19bd60h != 0)&&(D(___243cd8h) != 0)){

				race_msg(E_ABOUT_TO_ABORT);
				race___47ed8h(1);
			}
			else {
#endif // DR_MULTIPLAYER
				race_msg(E_ABORT_RACE);
#if defined(DR_MULTIPLAYER)
			}

			if((___19bd60h != 0)&&(D(___243cd8h) == 0)) race___47ed8h(0);
			if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
				race___478c8h(0);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER

			if(D(___243d14h) != 1){

				D(___243d14h) = 0;
				dRally_Sound_pushEffect(1, (s_94[MY_CAR_IDX].__0&0xff)+25, 0, 0x10000, 0x28000, 0x8000);
			}
			else {
#if defined(DR_MULTIPLAYER)
				if(___19bd60h == 0){
#endif // DR_MULTIPLAYER		
					race___560d8h();
#if defined(DR_MULTIPLAYER)
				}
#endif // DR_MULTIPLAYER
			}

#if defined(DR_MULTIPLAYER)
			if((___19bd60h != 0)&&(D(___243d14h) == 0)){
				
				D(___24387ch) = 1;
				D(___243cd8h) = 0;
			}
#endif // DR_MULTIPLAYER
		}









#if defined(DR_MULTIPLAYER)
		if((___19bd60h != 0)&&(D(___243318h) == 1)){

			D(___24387ch) = 0;
			___61418h(0xfc);
			D(___243d14h) = -1;
			race_msg(E_CONNECTION_LOST);
			race___47ed8h(0);
			D(___243d14h) = 1;
			s_54[0].__44 = -1;
		}
#endif // DR_MULTIPLAYER

		D(___196dd8h)++;
		if(D(___196dd8h) == 1){

			race___45d3ch();	// ENTERING RACE SCREEN ANIMATION

#if defined(DR_MULTIPLAYER)
			if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

				if(___243d44h != 0){

					race_msg(E_WELCOME);
					race___478c8h(0);
				}
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}

		if(D(___243d14h) != 0) break;
	} // w

	race___46a10h();	// LEAVING RACE SCREEN ANIMATION
	race___46738h__VGA13_PRESENTCLEARSCREEN();

	n = -1;
	while(++n < NUM_OF_CARS) s_94[n].__54 = s_35e[n].Position;

	___60719h();
	dRally_Sound_stop();
	dRally_Sound_release();
	race___400ech();
	race_free();
	kmap[DR_SCAN_ESCAPE] = 0;
}

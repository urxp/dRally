#include "drally.h"
#include "drally_keyboard.h"
#include "drally_race.h"

	extern byte ___243ce8h[];
	extern byte ___243cf4h[];
	extern byte ___19bd60h[];
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern byte ___243d58h[];
	extern byte ___243d04h[];
	extern byte ___243d60h[];
	extern byte ___243d30h[];
	extern byte ___243d10h[];
	extern byte ___243d78h[];
	extern byte ___243cf8h[];
	extern byte ___243d54h[];
	extern byte ___243d5ch[];
	extern byte ___243d80h[];
	extern byte ___243d74h[];
	extern byte ___243d50h[];
	extern byte ___243d6ch[];
	extern byte ___243d48h[];
	extern byte ___243d4ch[];
	extern byte ___243d70h[];
	extern byte ___243d84h[];
	extern byte ___243d3ch[];
	extern byte ___243298h[];
	extern byte ___243d8ch[];
	extern byte ___243d7ch[];
	extern byte ___243d34h[];
	extern byte ___243d88h[];
	extern byte ___243d38h[];
	extern byte ___243d40h[];
	extern byte ___243288h[];
	extern byte ___243290h[];
	extern byte ___243d68h[];
	extern byte ___243d64h[];
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
	extern byte ___24cc58h[];
	extern byte ___24cc54h[];
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
	extern byte ___243314h[];
	extern byte ___243310h[];

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
void race___47808h(dword, dword, dword);
void race___477d4h(void);
void race___48458h(void);
void race___49390h(void);
#if defined(DR_MULTIPLAYER)
void race___44304h(void);
void race___44a78h(void);
void race___47ed8h(dword);
#endif // DR_MULTIPLAYER
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
void dRally_Memory_free(void *);
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
void dRally_Sound_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);
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


// ___56774h
void race_main(dword A1, dword A2){

	long long 	ll_tmp;
	dword 	tmp_freq;
	double 	tmp_xch;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x1c];


	D(___243ce8h) = A1;
	D(___243cf4h) = A2;
	race___3f970h();
	race___49a34h();

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){
			
		ebx = 0;
		esi = D(___243cf4h);
		D(___243d08h) = ebx;
		D(___243d0ch) = ebx;

		if((int)esi > 0){

			ebx = 0x94*esi;
			eax = 0;

			while(1){

				edi = D(___243d0ch);
				ebp = D(___243d08h);
				edx = D(eax+___1de580h+0x38);
				eax += 0x94;
				edi += edx;
				ebp++;
				D(___243d0ch) = edi;
				D(___243d08h) = ebp;
			
				if((int)eax >= (int)ebx) break;
			}
		}

		eax = 0;
		edx = D(___243cf4h);
		D(___243d08h) = eax;

		if((int)edx > 0){

			ebx = 0x94*edx;

			while(1){

				ecx = D(___243d0ch);
				esi = D(___243d08h);
				edx = D(eax+___1de580h+0x3c);
				eax += 0x94;
				ecx += edx;
				esi++;
				D(___243d0ch) = ecx;
				D(___243d08h) = esi;
			
				if((int)eax >= (int)ebx) break;
			}
		}

		edi = 0;
		ebp = D(___243cf4h);
		D(___243d08h) = edi;

		if((int)ebp > 0){

			ebx = 8*ebp;
			ebx += ebp;
			ebx <<= 2;
			ebx += ebp;
			eax = 0;
			ebx <<= 2;

			while(1){

				ecx = D(___243d0ch);
				esi = D(___243d08h);
				edx = D(eax+___1de580h+0x40);
				eax += 0x94;
				ecx += edx;
				esi++;
				D(___243d0ch) = ecx;
				D(___243d08h) = esi;
				if((int)eax >= (int)ebx) break;
			}
		}

		eax = D(___243d0ch);
		edi = 0;
		srand_watcom106(eax);
		D(___24387ch) = edi;
		D(___243880h) = 1;
		D(___243318h) = edi;
		D(___243cd8h) = edi;
		D(___243878h) = edi;
	}
#endif // DR_MULTIPLAYER

	___60705h(&race___40164h);
	race___49bd4h();
	D(___243d58h) = ___3f71ch__allocateMemory(D(___243d28h)*D(___243d2ch));
	D(___243d60h) = ___3f71ch__allocateMemory(D(___243d28h)*D(___243d2ch));
	D(___243d78h) = ___3f71ch__allocateMemory(D(___243d30h)*D(___243d04h));
	D(___243d54h) = ___3f71ch__allocateMemory(D(___243cf8h)*D(___243d10h));
	D(___243d5ch) = ___3f71ch__allocateMemory(0x5f370);
	D(___243d80h) = ___3f71ch__allocateMemory(0x19400)+0x200;
	D(___243d74h) = ___3f71ch__allocateMemory(0x96000);
	D(___243d50h) = ___3f71ch__allocateMemory(0x4b000);
	D(___243d6ch) = ___3f71ch__allocateMemory(0x3840);
	D(___243d34h) = ___3f71ch__allocateMemory(0x30);
	D(___243d48h) = ___3f71ch__allocateMemory(0x240);
	D(___243d4ch) = ___3f71ch__allocateMemory(0x3c90);
	D(___243d70h) = ___3f71ch__allocateMemory(0x3c90);
	D(___243d84h) = ___3f71ch__allocateMemory(0x800);
	D(___243d3ch) = ___3f71ch__allocateMemory(0x268);
	D(___243298h) = ___3f71ch__allocateMemory(0xc00);
	D(___243298h+4) = ___3f71ch__allocateMemory(0xc00);
	D(___243298h+8) = ___3f71ch__allocateMemory(0xc00);
	D(___243298h+0xc) = ___3f71ch__allocateMemory(0xc00);
	D(___243298h+0x10) = ___3f71ch__allocateMemory(0xc00);
	D(___243298h+0x14) = ___3f71ch__allocateMemory(0xc00);
	D(___243d8ch) = ___3f71ch__allocateMemory(0x140);
	D(___243d7ch) = ___3f71ch__allocateMemory(0x600);
	D(___243d88h) = ___3f71ch__allocateMemory(0x480);
	D(___243d38h) = ___3f71ch__allocateMemory(0x800);
	D(___243d40h) = ___3f71ch__allocateMemory(0x2400);
	D(___243288h) = ___3f71ch__allocateMemory(0x800);
	D(___243288h+4) = ___3f71ch__allocateMemory(0x800);
	D(___243290h) = ___3f71ch__allocateMemory(0x1800);
	D(___243290h+4) = ___3f71ch__allocateMemory(0x1800);
	D(___243d68h) = ___3f71ch__allocateMemory(0x800);
	D(___243d64h) = ___3f71ch__allocateMemory(0xc0);
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
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
		___605deh_cdecl(0x46, 1);
#if defined(DR_MULTIPLAYER)
	}
	else {

		___605deh_cdecl(0x46, 0);
	}
#endif // DR_MULTIPLAYER

	dRally_Sound_load(1, strcat(strcpy(esp, ___19bd64h), "-MUS.CMF"), 2, "GEN-EFE.CMF", 0xe);
	dRally_Sound_setMasterVolume(0);
	dRally_Sound_setMusicVolume(D(___24cc58h));
	dRally_Sound_setEffectsVolume(D(___24cc54h));
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
	edx = D(___243ce8h);
	eax = edx*8;
	eax += edx;
	eax <<= 2;
	eax += edx;
	ecx = 0x10000;
	ebx = 0;
	L(eax) = B(4*eax+___1de580h);
	edx = 0;
	L(eax) += 0x19;
	L(edx) = L(eax);
	eax = 1;
	ebp = 0;
	dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
	D(___243ca4h) = ebp;
	D(___243ca0h) = ebp;
	D(___243cdch) = ebp;
	D(___243cb8h) = ebp;
	D(___243cd4h) = ebp;
	D(___243874h) = ebp;
	eax = D(___243874h);
	D(___243898h) = eax;
	D(___243cd0h) = ebp;
	if(D(___199f54h) != 0) D(___243ce0h) = 1;
	ebp = 2;

	while(1){

		edx = 0;
		D(___243ca8h) = edx;
		eax = D(___243898h);
		D(___243874h) = eax;
		D(___243898h) = edx;
		eax = 0x35e*D(___243ce8h);
		edx = D(eax+___1e6ed0h+0xa0);
		esi = D(___196df0h);
		D(eax+___1e6ed0h+0xa4) = edx;

		if((int)esi > 0){

			eax = D(___243334h);
			edi = esi;
			edi -= eax;
			D(___196df0h) = edi;

			if((int)edi <= 0){

				ecx = 0x10000;
				edx = 4;
				eax = ebp;
				ebx = 0;
				dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
				edx = 0;
				D(___196df0h) = edx;
			}
		}

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			if(D(___24387ch) != 0){
			
				race___44a78h();
			}
		}
#endif // DR_MULTIPLAYER
		esi = 0;
		D(___243d08h) = esi;

		if((int)D(___243874h) > 0){

			edx = D(___243ce8h);
			esi = 0xf;
			eax = 0x35e*edx;

			while(1){

				ebx = D(eax+___1e6ed0h+0xa4);
				ebx--;
				D(eax+___1e6ed0h+0xa4) = ebx;
				if((int)ebx < 0) D(eax+___1e6ed0h+0xa4) = esi;
				edx = D(eax+___1e6ed0h+0xa4);
				edx <<= 2;
				ecx = eax+edx;
				edx = D(___243874h);
				edi = D(___243d08h);
				edx -= edi;
				edx <<= 2;
				ebx = eax+edx;
				edx = D(ecx+___1e6ed0h+0x60);
				D(ebx+___1e6ed0h+0x1c) = edx;
				edx = edi+1;
				D(___243d08h) = edx;
				if((int)edx >= (int)D(___243874h)) break;
			}
		}

		race___563ach();
		race___5209ch();
	
		if((int)D(___243874h) > 0){

			esi = 1;

			while(1){

				edi = D(___243ca4h);
				edi++;
				D(___243ca4h) = edi;

				if((int)edi > 0xbe){

					edx = 0;
					ebx = D(___243cf4h);
					D(___243c60h) = edx;

					if((int)ebx > 0){

						while(1){

							ecx = D(___243ce0h);

							if(edx != ecx){

								race___4b62ch();
							}
							else {
							
								edi = D(___243ce8h);
								if((edi != D(___243c60h))&&(ecx == D(___19bd60h))) race___4b62ch();
							}

							ebx = D(___243c60h);
							ebx++;
							ecx = D(___243cf4h);
							D(___243c60h) = ebx;
							if((int)ebx >= (int)ecx) break;
						}
					}

					edi = 0;
					eax = D(___243cf4h);
					D(___243c60h) = edi;

					if((int)eax > 0){
						
						ebx = D(___243cf4h);
						eax = 0;
						edx = 0x35e*ebx;

						while(1){

							edi = D(___243c60h);
							ecx = 0;
							edi++;
							D(eax+___1e6ed0h+0x14) = ecx;
							eax += 0x35e;
							D(___243c60h) = edi;
							if((int)eax >= (int)edx) break;
						}
					}

					eax = 0;
					edx = D(___243cf4h);
					D(___243c60h) = eax;

					if((int)edx > 0){

						while(1){

							race___4c434h();
							ebx = D(___243c60h);
							ebx++;
							ecx = D(___243cf4h);
							D(___243c60h) = ebx;
							if((int)ebx >= (int)ecx) break;
						}
					}

					edi = 0;
					eax = D(___243cf4h);
					D(___243c60h) = edi;

					if((int)eax > 0){

						ebx = D(___243cf4h);
						eax = 0;
						edx = 0x35e*ebx;

						while(1){

							edi = D(___243c60h);
							ecx = 0;
							edi++;
							D(eax+___1e6ed0h+0x18) = ecx;
							eax += 0x35e;
							D(___243c60h) = edi;
							if((int)eax >= (int)edx) break;
						}
					}

					eax = 0;
					edx = D(___243cf4h);
					D(___243c60h) = eax;

					if((int)edx > 0){

						edx = 0x35e*edx;

						while(1){

							edi = D(___243c60h);
							ecx = 0;
							edi++;
							D(eax+___1e6ed0h+0x1c) = ecx;
							eax += 0x35e;
							D(___243c60h) = edi;
							if((int)eax >= (int)edx) break;
						}
					}

					race___4dcach();
					eax = 0;
					edx = D(___243cf4h);
					D(___243c60h) = eax;

					if((int)edx > 0){

						while(1){

							race___514d8h();
							ebx = D(___243c60h);
							ebx++;
							ecx = D(___243cf4h);
							D(___243c60h) = ebx;
							if((int)ebx >= (int)ecx) break;
						}
					}

					edi = D(___19bd60h);

					if(edi == 0){

						edx = D(___243cf4h);
						D(___243c60h) = edi;

						if((int)edx > 0){

							while(1){

								race___52ac4h();
								ebx = D(___243c60h);
								ebx++;
								ecx = D(___243cf4h);
								D(___243c60h) = ebx;
								if((int)ebx >= (int)ecx) break;
							}
						}
					}

					edi = 0;
					eax = D(___243cf4h);
					D(___243c60h) = edi;

					if((int)eax > 0){

						while(1){

							race___526ach();
							edx = D(___243c60h);
							edx++;
							ebx = D(___243cf4h);
							D(___243c60h) = edx;
							if((int)edx >= (int)ebx) break;
						}
					}

					ecx = 0;
					edi = D(___243cf4h);
					D(___243c60h) = ecx;

					if((int)edi > 0){

						while(1){

							race___4ff50h();
							eax = D(___243c60h);
							eax++;
							edx = D(___243cf4h);
							D(___243c60h) = eax;
							if((int)eax >= (int)edx) break;
						}
					}
				}

				ebx = 0;
				ecx = D(___243cf4h);
				D(___243c60h) = ebx;

				if((int)ecx > 0){

					edx = 0x35e*ecx;
					eax = 0;
					ebx = ebp;
					ecx = 0;

					while(1){

						edi = D(eax+___1e6ed0h+0x192);

						if((int)ecx < (int)edi){
						
							edi--;
							D(eax+___1e6ed0h+0x192) = edi;
						}

						edi = D(eax+___1e6ed0h+0x196);

						if((int)ecx < (int)edi){
						
							edi--;
							D(eax+___1e6ed0h+0x196) = edi;
						}

						edi = D(eax+___1e6ed0h+0x17a);

						if((int)ecx < (int)edi){

							edi--;
							D(eax+___1e6ed0h+0x17a) = edi;
						}

						if(esi == D(eax+___1e6ed0h+0x14)) D(eax+___1e6ed0h+0x192) += ebx;

						if(esi == D(eax+___1e6ed0h+0x18)){

							edi = D(eax+___1e6ed0h+0x196);
							FPUSH(F32(eax+___1e6ed0h+0x14e));
							edi += ebx;
							F32(eax+___1e6ed0h+0xb4) = (float)FPOP();
							D(eax+___1e6ed0h+0x196) = edi;
						}

						if(esi == D(eax+___1e6ed0h+0x1c)){

							edi = D(eax+___1e6ed0h+0x196);
							FPUSH(F32(eax+___1e6ed0h+0x152));
							edi += ebx;
							F32(eax+___1e6ed0h+0xb8) = (float)FPOP();
							D(eax+___1e6ed0h+0x196) = edi;
						}

						edi = D(___243c60h);
						edi++;
						eax += 0x35e;
						D(___243c60h) = edi;
						if((int)eax >= (int)edx) break;
					}
				}

				eax = 0;
				edx = D(___243cf4h);
				D(___243c60h) = eax;

				if((int)edx > 0){

					edx = 0x35e*edx;

					while(1){

						FPUSH(F32(eax+___1e6ed0h+0xb4));
						FPUSH(F32(eax+___1e6ed0h+0xb8));
						FPUSH(F32(eax+___1e6ed0h+0xac));
						ecx = D(___243c60h);
						tmp_xch = ST(0);
						ST(0) = ST(1);
						ST(1) = tmp_xch;
						F32(eax+___1e6ed0h+0x152) = (float)FPOP();
						F32(eax+___1e6ed0h+0x156) = (float)FPOP();
						F32(eax+___1e6ed0h+0x14e) = (float)FPOP();
						eax += 0x35e;
						ecx++;
						D(___243c60h) = ecx;
						if((int)eax >= (int)edx) break;
					}
				}

				edi = 0;
				eax = D(___243cf4h);
				D(___243c60h) = edi;

				if((int)eax > 0){

					ebx = D(___243cf4h);
					edx = 0;
					eax = 0;
					ecx = 0x94*ebx;

					while(1){

						if((ebp == D(eax+___1e6ed0h+0x192))||(ebp == D(eax+___1e6ed0h+0x196))){

							if(edi == D(eax+___1e6ed0h+0x10a)){

								FPUSH(F32(eax+___1e6ed0h+0xfc));
								ST(0) = ST(0)*ST(0);
								ebx = 0x400;
								FPUSH(F32(eax+___1e6ed0h+0x100));
								ST(0) = ST(0)*ST(0);
								ebx -= D(edx+___1de580h+0x1c);
								ST(1) = ST(1)+ST(0);
								FPOP();
								D(esp+0x18) = ebx;
								FPUSH(D(esp+0x18));
								ST(1) = ST(1)*ST(0);
								FPOP();
								D(___2438cch) = (int)FPOP();
								if((int)D(___2438cch) > 0x2710) D(___2438cch) = 0x2710;
								ebx = D(___2438cch);
								D(edx+___1de580h+0x18) -= ebx;
								if((int)edi > (int)D(edx+___1de580h+0x18)) D(edx+___1de580h+0x18) = edi;
							}
						}

						ebx = D(___243c60h);
						edx += 0x94;
						ebx++;
						eax += 0x35e;
						D(___243c60h) = ebx;
						if((int)edx >= (int)ecx) break;
					}
				}

				eax = 0x35e*D(___243ce8h);
				if(D(eax+___1e6ed0h+0x14)||D(eax+___1e6ed0h+0x18)||D(eax+___1e6ed0h+0x1c)){

					eax = 0x35e*D(___243ce8h);
					FPUSH(F32(eax+___1e6ed0h+0xfc));
					ST(0) = ST(0)*ST(0);
					FPUSH(F32(eax+___1e6ed0h+0x100));
					ST(0) = ST(0)*ST(0);
					ST(1) = ST(1)+ST(0);
					FPOP(); 
					ST(0) = sqrt(ST(0));
					ST(0) = ST(0)*25000.0; 
					D(___2438cch) = (int)FPOP();
					if((int)D(___2438cch) > 0x10000) D(___2438cch) = 0x10000;
					eax = 0x35e*D(___243ce8h);

					if((D(eax+___1e6ed0h+0x18) != 0)||(D(eax+___1e6ed0h+0x1c) != 0)){

						eax = D(___243894h);
						edx = D(___243894h);
						ll_tmp = (int)eax;
						ebx = 3;
						eax = ll_tmp/(int)ebx;
						edx = ll_tmp%(int)ebx;
						eax = edx;

						switch(edx){
						case 0:
							edx = 0xb;
							eax = 5;
							tmp_freq = 0x21000;
							ecx = D(___2438cch);
							ebx = 0;
							dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
							break;
						case 1:
							edx = 0xd;
							eax = 5;
							tmp_freq = 0x23000;
							ecx = D(___2438cch);
							ebx = 0;
							dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
							break;
						case 2:
							edx = 0x10;
							eax = 5;
							tmp_freq = 0x23000;
							ecx = D(___2438cch);
							ebx = 0;
							dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
							break;
						default:
							break;
						}
					}

					eax = rand_watcom106();
					edx = eax;
					ll_tmp = (int)eax;
					ebx = 0x6000;
					eax = ll_tmp/(int)ebx;
					edx = ll_tmp%(int)ebx;
					eax = 0x35e*D(___243ce8h);
					eax = D(eax+___1e6ed0h+0x18e);
					D(___243d08h) = edx;

					if(eax <= 3){

						switch(eax){
						case 0:
							eax = D(___243894h);
							edx = D(___243894h);
							ll_tmp = (int)eax;
							ebx = 3;
							eax = ll_tmp/(int)ebx;
							edx = ll_tmp%(int)ebx;
							eax = edx;
							edx = D(___243d08h);
							edx += 0x22000;

							switch(eax){
							case 0:
								eax = 5;
								ecx = D(___2438cch);
								tmp_freq = edx;
								ebx = 0;
								edx = 0xa;
								dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
								break;
							case 1:
								eax = 5;
								ecx = D(___2438cch);
								tmp_freq = edx;
								ebx = 0;
								edx = 0xf;
								dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
								break;
							case 2:
								eax = 5;
								ecx = D(___2438cch);
								tmp_freq = edx;
								ebx = 0;
								edx = 0x10;
								dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
								break;
							default:
								break;
							}
							break;
						case 1:
							ecx = D(___2438cch);
							eax = edx+0x22000;
							ebx = 0;
							tmp_freq = eax;
							edx = 0xb;
							eax = 5;
							dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
							break;
						case 2:
							ecx = D(___2438cch);
							eax = edx+0x22000;
							ebx = 0;
							tmp_freq = eax;
							edx = 0xf;
							eax = 5;
							dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
							break;
						case 3:
							ecx = D(___2438cch);
							eax = edx+0x22000;
							ebx = 0;
							tmp_freq = eax;
							edx = 0x10;
							eax = 5;
							dRally_Sound_pushEffect(eax, edx, ebx, ecx, tmp_freq, 0x8000);
							break;
						default:
							break;
						}
					}
				}

				if((int)D(___2438d4h) > 0){

					if(D(___196ddch) == 0){

						ebx = D(___243ce8h);
						eax = 0x94*ebx;
						
						if((int)D(eax+___1de580h+0x18) > 0){

							eax = 0x35e*ebx;

							if(D(eax+___1e6ed0h+0x10a) == 0){
							
								if(ebp == D(___196de0h)){

									edx = 0x25;
									eax = 6;
									ecx = D(___2438d4h);
									ebx = 0;
									dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
									D(___196ddch) = esi;
								}
							}
						}
					}
				}

				ecx = D(___2438d4h);
				if(ecx == 0){

					if(esi == D(___196ddch)){
					
						eax = 6;
						dRally_Sound_freeEffectChannel(eax);
						D(___196ddch) = ecx;
					}
				}

				ebx = D(___243ce8h);
				eax = 0x94*ebx;
				edx = 0;
				ecx = D(eax+___1de580h+0x18);
				D(___2438d4h) = edx;

				if((int)ecx <= 0){

					dRally_Sound_freeEffectChannel(esi);
					eax = 6;
					dRally_Sound_freeEffectChannel(eax);
				}
				else {

					eax = 0x35e*ebx;

					if(D(eax+___1e6ed0h+0x10a) != 0){

						dRally_Sound_freeEffectChannel(esi);
						eax = 6;
						dRally_Sound_freeEffectChannel(eax);
					}
				}

				ebx = D(___243ce8h);
				eax = 0x35e*ebx;
				edx = 0x94*ebx;
				FPUSH(F32(eax+___1e6ed0h+0xb0));
				ST(0) = ST(0)/(double)F32(edx+___1de580h+4);
				FPUSH(0.0);
				tmp_xch = ST(0); ST(0) = ST(1); ST(1) = tmp_xch;
				F32(esp+0x10) = (float)FPOP();

				if(FPOP() <= (double)F32(esp+0x10)){

					eax = D(esp+0x10);
					D(esp+0x14) = eax;
				}
				else {

					FPUSH(F32(esp+0x10));
					ST(0) = -1.0*ST(0);
					F32(esp+0x14) = (float)FPOP();
				}

				edx = 0x35e*D(___243ce8h);
				eax = D(edx+___1e6ed0h+0x19e);
				eax = 5*eax;
				D(esp+0x18) = eax;
				FPUSH(D(esp+0x18));
				eax = D(edx+___1e6ed0h+0x19a);
				ST(0) = ST(0)*(double)F32(esp+0x14);
				eax += 0x28000;
				ecx = 0x8000;
				D(esp+0x18) = eax;
				edx = 0x10000;
				FPUSH(D(esp+0x18));
				ST(1) = ST(1)+ST(0); FPOP();
				eax = esi;
				D(___196df8h) = (int)FPOP();
				ebx = D(___196df8h);
				dRally_Sound_adjustEffect(eax, edx, ebx, ecx);
				race___54668h();
				race___55ae0h();
				eax = D(___19bd60h);

				if((eax == 0)||(D(___243318h) == 0)) race___56170h();

#if defined(DR_MULTIPLAYER)
				if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER			
					edi = D(___243ce8h);
					eax = 0x35e*edi;

					if(D(eax+___1e6ed0h+0x10a) != 0){

						D(___2438c8h)++;
					}
					else {

						eax = 0x94*edi;
						if((int)D(eax+___1de580h+0x18) <= 0){

							D(___2438c8h)++;
						}
					}
#if defined(DR_MULTIPLAYER)
				}
#endif // DR_MULTIPLAYER		
		
				eax = 0;
				ebx = D(___243cf4h);
				D(___243c60h) = eax;
				D(___243d0ch) = eax;

				if((int)ebx > 0){

					ecx = 0x94*D(___243cf4h);
					edx = 0;
					ebx = 0;
					edi = 0;

					while(1){

						if((int)D(edx+___1e6ed0h+0xb0) <= 0x3f000000){

							if((edi != D(edx+___1e6ed0h+0x10a))||((int)edi >= (int)D(ebx+___1de580h+0x18))){

								D(___243d0ch)++;
							}
						}

						eax = D(___243c60h);
						ebx += 0x94;
						eax++;
						edx += 0x35e;
						D(___243c60h) = eax;
						if((int)ebx >= (int)ecx) break;
					}
				}

				eax = D(___243cf4h);
				edx = D(___243d0ch);
				eax--;
				if((int)eax <= (int)edx) D(___2438c8h)++;
				D(___243ca8h)++;
				D(___243874h)--;
				if((int)D(___243874h) <= 0) break;
			}
		}
	
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER		
			if(D(___1de580h) != 6){
		
				race___4c21ch();
			}
#if defined(DR_MULTIPLAYER)
		}

		if(D(___19bd60h) != 0){
		
			if(D(___24387ch) != 0){
		
				race___44304h();
			}
		}
#endif // DR_MULTIPLAYER
		if(kmap[DR_SCAN_F12] != 0) race___49390h();
		if(kmap[DR_SCAN_F1] != 0){

			edi = D(___19bd60h);
			if(edi == 0){

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
				ebx = 0;
				ecx = 0x10000;
				edx = B(___1de580h+0x94*D(___243ce8h))+0x19;
				eax = 1;
				dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
			}
		}

		if(!D(___243d00h)&&kmap[DR_SCAN_TAB]){
			
			D(___243d00h) = 1;
			dRally_Race_toggleSettings(RACE_NOTWIDE);
		}

		if(kmap[DR_SCAN_TAB] == 0) D(___243d00h) = 0;

		if((int)D(___1de580h+0x18+0x94*D(___243ce8h)) <= 0) dRally_Race_setSettings(RACE_NOTWIDE);

		if(kmap[DR_SCAN_F2] != 0){	// MSX

			dRally_Sound_setMusicVolume(dRally_Race_getSettings(RACE_MSX) ? 0 : D(___24cc58h));
			dRally_Race_toggleSettings(RACE_MSX);
			kmap[DR_SCAN_F2] = 0;
		}

		if(kmap[DR_SCAN_F3] != 0){	// SFX

			dRally_Sound_setEffectsVolume(dRally_Race_getSettings(RACE_SFX) ? 0 : D(___24cc54h));
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
				race___47808h(0, 0, "                                ");
				race___47808h(0, 1, "                                ");
				race___47808h(0, ebp, "                                ");
				race___47808h(0, 3, "     G A M E   P A U S E D !    ");
				race___47808h(0, 4, "                                ");
				race___47808h(0, 5, "                                ");
				race___47808h(0, 6, "                                ");
				race___47808h(0, 7, "                                ");
				race___47808h(0, 8, "    PRESS ENTER TO CONTINUE     ");
				race___478c8h(0);
				if(D(___196d9ch) == 1) race___46738h__VGA13_PRESENTCLEARSCREEN();
				dRally_Sound_setPosition(ecx);
				dRally_Sound_setMasterVolume(0x10000);
				edx = B(___1de580h+0x94*D(___243ce8h))+0x19;
				dRally_Sound_pushEffect(1, L(edx), 0, 0x10000, 0x28000, 0x8000);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}

		race___4ee9ch();
		ecx = 0;
		race___4f030h();
		D(___243d0ch) = ecx;
		D(___243d08h) = ecx;

		while(1){

			eax = D(___243d58h);
			edx = D(___196dc8h);
			edi = D(___243d28h);
			edx += eax;
			eax = D(___196dcch);
			eax = eax*edi;
			ecx = D(___196d88h);
			esi = D(___243d0ch);
			eax += edx;
			edx = D(___196d98h);
			esi += eax;
			eax = D(___243d80h);
			ecx = (int)ecx>>2;
			eax += edx;
			edi = D(___243d08h);
			eax += 0x60;
			ecx++;
			edi += eax;
			while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
			ebx = D(___243d08h);
			eax = D(___243d28h);
			ecx = D(___243d0ch);
			ebx += 0x200;
			ecx += eax;
			D(___243d08h) = ebx;
			D(___243d0ch) = ecx;
			if((int)ebx >= 0x19000) break;
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
			if(D(___19bd60h) != 0){
				
				edi = 0;
				D(___24387ch) = edi;
			}
#endif // DR_MULTIPLAYER
			D(___243d08h) = -1;
			while(++D(___243d08h) < 0xe) dRally_Sound_freeEffectChannel(D(___243d08h)+1);
			ecx = 0x10000;
			edx = 5;
			ebx = 0;
			dRally_Sound_pushEffect(ebp, edx, ebx, ecx, 0x50000, 0x8000);
			race___477d4h();
			race___47808h(0, 0, "                                ");
			race___47808h(0, 1, "                                ");
			race___47808h(0, ebp, "                                ");
			race___47808h(0, 3, "      R A C E    O V E R !      ");
			race___47808h(0, 4, "                                ");
			race___47808h(0, 5, "                                ");
			race___47808h(0, 6, "                                ");
			race___47808h(0, 7, "                                ");
			race___47808h(0, 8, "    PRESS ENTER TO CONTINUE     ");
			race___478c8h(!!D(___199f54h));
			D(___243d14h) = 1;
		}

		D(___243d08h) = __GET_FRAME_COUNTER();
		while(D(___243d08h) == __GET_FRAME_COUNTER());
		eax = 0x35e*D(___243ce8h);

		if((int)D(eax+___1e6ed0h+0x34e) > 0){

			if(D(___196d9ch) != 0) race___46814h();
			if(D(___196d9ch) == 0) race___454ach();
		}
		else {

			edi = D(___196d9ch);

			if(edi == 0){

				D(___243d08h) = edi;
				D(___243d0ch) = edi;
				edx = 0x50;

				while(1){

					eax = D(___243d80h);
					esi = D(___243d0ch);
					edi = D(___243d08h);
					ecx = edx;
					eax += 0x60;
					edi = edi+VGA13_ACTIVESCREEN;
					esi += eax;
					while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
					ebx = D(___243d08h);
					ecx = D(___243d0ch);
					ebx += 0x140;
					ecx += 0x200;
					D(___243d08h) = ebx;
					D(___243d0ch) = ecx;
					if((int)ebx >= 0xfa00) break;
				}

				__VGA13_PRESENTSCREEN__();
			}

			if(D(___196d9ch) == 1) race___46814h();
			eax = 0x35e*D(___243ce8h);
			ebx = 0;
			D(eax+___1e6ed0h+0x34e) = ebx;
		}

		edx = D(___243334h);
		ecx = 0;
		eax = 0;
		D(___243c60h) = ecx;

		while(1){

			esi = D(eax+___1e6ed0h+0x34e);

			if((int)esi > 0){

				edi = esi;
				edi -= edx;
				D(eax+___1e6ed0h+0x34e) = edi;
			}

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
		edx = 0x140-D(___196d88h);
		eax = D(___19bd60h);
		D(___196d98h) = edx;

		if((!eax&&kmap[DR_SCAN_ESCAPE])||(!(!D(___19bd60h)||(!kmap[DR_SCAN_ESCAPE]&&!D(___243cd8h)))&&!((int)D(___243ca4h) <= 0xc8))){

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) != 0){
			
				edi = 0;
				D(___24387ch) = edi;
			}

			if(D(___19bd60h) != 0){
			
				if(D(___243cd8h) == 0){
				
					eax = 0xfd;
					___61418h(eax);
				}
			}
#endif // DR_MULTIPLAYER

			ebx = 0xffffffff;
			ecx = 0;
			D(___243d14h) = ebx;
			race___477d4h();
			D(___243d08h) = ecx;

			while(1){

				L(eax) = B(___243d08h);
				L(eax)++;
				eax &= 0xff;
				dRally_Sound_freeEffectChannel(eax);
				esi = D(___243d08h);
				esi++;
				D(___243d08h) = esi;
				if((int)esi >= 0xe) break;
			}

#if defined(DR_MULTIPLAYER)
			if((D(___19bd60h) != 0)&&(D(___243cd8h) != 0)){

				race___47808h(0, 0, "                                ");
				race___47808h(0, 1, "                                ");
				race___47808h(0, ebp, " S O M E O N E   I S   A B O U T");
				race___47808h(0, 3, "   T O   A B O R T   R A C E !  ");
				race___47808h(0, 4, "                                ");
				race___47808h(0, 5, "                                ");
				race___47808h(0, 6, "                                ");
				race___47808h(0, 7, "  WAITING FOR SIGNAL FROM HOST  ");
				race___47808h(0, 8, "                                ");
				eax = 1;
				race___47ed8h(eax);
			}
			else {
#endif // DR_MULTIPLAYER
				race___47808h(0, 0, "                                ");
				race___47808h(0, 1, "                                ");
				race___47808h(0, ebp, "                                ");
				if(D(___199f54h) == 0){

					race___47808h(0, 3, "      A B O R T   R A C E !     ");
				}
				else {
				
					race___47808h(0, 3, "      A B O R T   D E M O !     ");
				}
				race___47808h(0, 4, "                                ");
				race___47808h(0, 5, "             Y / N              ");
				race___47808h(0, 6, "                                ");
				race___47808h(0, 7, "                                ");
				race___47808h(0, 8, "                                ");
#if defined(DR_MULTIPLAYER)
			}

			if(D(___19bd60h) != 0){

				if(D(___243cd8h) == 0){
				
					eax = 0;
					race___47ed8h(eax);
				}
			}

			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
				eax = 0;
				race___478c8h(eax);
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER

			if(D(___243d14h) != 1){

				eax = 0x94*D(___243ce8h);
				ecx = 0x10000;
				edx = 0;
				D(___243d14h) = edx;
				L(eax) = B(eax+___1de580h);
				ebx = 0;
				L(edx) = L(eax);
				eax = 1;
				L(edx) += 0x19;
				dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
				if(D(___196d9ch) == 1) race___46738h__VGA13_PRESENTCLEARSCREEN();
			}
			else {

				esi = D(___19bd60h);

				if(esi == 0){
				
					race___560d8h();
					D(___199f54h) = 0;
				}
			}

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) != 0){
				
				edx = D(___243d14h);
			
				if(edx == 0){
				
					D(___24387ch) = 1;
					D(___243cd8h) = edx;
				}
			}
#endif // DR_MULTIPLAYER
		}

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			edi = D(___243318h);

			if(edi == 1){

				D(___24387ch) = 0;
				___61418h(0xfc);
				D(___243d14h) = 0xffffffff;
				race___477d4h();
				race___47808h(0, 0, "                                ");
				race___47808h(0, edi, "                                ");
				race___47808h(0, ebp, "     M U L T I P L A Y E R      ");
				race___47808h(0, 3, "      C O N N E C T I O N       ");
				race___47808h(0, 4, "           L O S T !            ");
				race___47808h(0, 5, "                                ");
				race___47808h(0, 6, "                                ");
				race___47808h(0, 7, "                                ");
				race___47808h(0, 8, "      PRESS ENTER TO ABORT      ");
				eax = 0;
				ecx = 0xffffffff;
				race___47ed8h(eax);
				D(___243d14h) = edi;
				D(___1de7d0h+0x44) = ecx;
			}
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
					race___47808h(0, 0, "     WELCOME TO DEATH RALLY!    ");
					race___47808h(0, 1, "                                ");
					race___47808h(0, ebp, " PRESS                          ");
					race___47808h(0, 3, "    F1-INFO SCREEN              ");
					race___47808h(0, 4, "     P-PAUSE                    ");
					race___47808h(0, 5, "   TAB-TOGGLE STATUS BAR        ");
					race___47808h(0, 6, "   ESC-ABORT RACE               ");
					race___47808h(0, 7, "                                ");
					race___47808h(0, 8, "    PRESS ENTER TO CONTINUE     ");
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

		D(0x94*D(___243c60h)+___1de580h+0x54) = B(0x35e*D(___243c60h)+___1e6ed0h+0x109);
		D(___243c60h)++;
	}

	___60719h();
	dRally_Sound_stop();
	dRally_Sound_release();
	race___400ech();
	dRally_Memory_free(D(___243d58h));
	dRally_Memory_free(D(___243d60h));
	dRally_Memory_free(D(___243d78h));
	dRally_Memory_free(D(___243d54h));
	dRally_Memory_free(D(___243d5ch));
	dRally_Memory_free(D(___243d80h)-0x200);
	dRally_Memory_free(D(___243d74h));
	dRally_Memory_free(D(___243d50h));
	dRally_Memory_free(D(___243d34h));
	dRally_Memory_free(D(___243d6ch));
	dRally_Memory_free(D(___243d48h));
	dRally_Memory_free(D(___243d4ch));
	dRally_Memory_free(D(___243d70h));
	dRally_Memory_free(D(___243d84h));
	dRally_Memory_free(D(___243d3ch));
	dRally_Memory_free(D(___243298h));
	dRally_Memory_free(D(___243298h+4));
	dRally_Memory_free(D(___243298h+8));
	dRally_Memory_free(D(___243298h+0xc));
	dRally_Memory_free(D(___243298h+0x10));
	dRally_Memory_free(D(___243298h+0x14));
	dRally_Memory_free(D(___243d8ch));
	dRally_Memory_free(D(___243d7ch));
	dRally_Memory_free(D(___243d88h));
	dRally_Memory_free(D(___243d38h));
	dRally_Memory_free(D(___243d40h));
	dRally_Memory_free(D(___243288h));
	dRally_Memory_free(D(___243288h+4));
	dRally_Memory_free(D(___243290h));
	dRally_Memory_free(D(___243290h+4));
	dRally_Memory_free(D(___243d68h));
	dRally_Memory_free(D(___243d64h));
	dRally_Memory_free(D(___243314h));
	dRally_Memory_free(D(___243310h));
	kmap[DR_SCAN_ESCAPE] = 0;
}

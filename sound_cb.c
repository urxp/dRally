#include "drally.h"

#define __BOUNDS(v, l, h) 	((v)<(l)?(l):(v)>(h)?(h):(v))
#define COO32UV(u,v) 	(0x20*(v)+(u))
#define COO256UV(u,v) 	(0x100*(v)+(u))

#pragma pack(1)
typedef struct sample_s {
	word 	left;
	word 	right;
} sample_t;

typedef struct sampledata_s{
	void *	start_p;
	void * 	end_p;
	void *	loopstart_p;
	void * 	loopend_p;
	byte 	flags;
} sampledata_t;

typedef struct sound_mod_s {
	int 	type;
	int 	channels;
	int 	samples;
	void * 	data;
	dword 	size;
} sound_mod_t;

typedef struct sound_s {
	int 			channels;
	sound_mod_t		msx;
	sound_mod_t 	sfx;
} sound_t;

	extern sound_t Sound;
	extern byte ___68e94h[];
	extern byte ___68d78h[];
	extern word SOUND_SAMPLERATE;
	extern word ___688d0h[32];
	extern dword ___68910h[32];
	extern dword ___68a10h[32];
	extern dword ___68bb0h[32];
	extern dword ___68990h[32];
	extern int SampleRateMultiplier;
	extern void (*AUDIO_DATA_CB)(void);

#define SAMPLE 		(SampleLib_getSample(0))
sampledata_t * SampleLib_getSample(int smpl_id);


word ___68c40h;
dword ___68d90h;
dword ___68d8ch;
byte ___68d80h;
byte ___68d7ch;
dword ___68d74h;
extern dword ___68d70h;
byte * ___68d48h;
dword * ___68d40h;
#define RIGHT_BFR ___68d34h
int * ___68d34h;
#define LEFT_BFR ___68d38h
int * ___68d38h;
byte * 	___68b30h[32];
void * 	___68d94h[32];
dword 	___68e14h[32];
byte 	___68e94h[32];
dword ___68a90h[32] = {0};
qword	___68d84h;


const byte ___68eb4h[16] = { 0xff, 0xf3, 0xe6, 0xd8, 0xc9, 0xb9, 0xa8, 0x96, 0x96, 0x84, 0x71, 0x5d, 0x48, 0x32, 0x1b, 0 };


void ___691deh_cdecl(dword samples, sample_t * dst_stream){

	dword 	eax, edx, ebx, ecx, edi, esi, ebp;
	qword 	ll_tmp, ll_tmp_sig;
	dword 	balance_id, n;
	dword 	samples_done, samples_togo, channel_n;
	qword 	q_tmp;
	sampledata_t *	unk;
	byte *	___68d94h_chn;

	samples_togo = samples;
	samples_done = 0;

	while(samples_togo != 0){

		if((___68d70h>>0x10) == 0){

			AUDIO_DATA_CB();
			ll_tmp = SOUND_SAMPLERATE*___68c40h;
			___68d70h += 0x4000*ll_tmp/0xc35;
		}

		if((___68d70h>>0x10) > samples_togo){
			
			___68d74h = samples_togo;
			___68d70h -= samples_togo<<0x10;
		}
		else {

			___68d74h = ___68d70h>>0x10;
			___68d70h &= 0xffff;
		}

		channel_n = -1;
		while(++channel_n < Sound.channels){

			ebx = ___688d0h[channel_n];

			if(ebx){

				___68e94h[channel_n] = 0;
				if(X(ebx) != 0xffff){

					unk = &SAMPLE[ebx-1];
					___68b30h[channel_n] = unk;
					___68d94h[channel_n] = unk->start_p+___68910h[channel_n];

					if(___68d94h[channel_n] >= unk->end_p){

						switch(unk->flags&3){
						case 0:
							___68d94h[channel_n] = 0;
							___68b30h[channel_n] = 0;
							break;
						case 1:
							if(___68d94h[channel_n] > unk->loopstart_p){

								eax = (void *)___68d94h[channel_n]-unk->loopstart_p;
								ebp = unk->end_p-unk->loopstart_p;
								eax = (eax%ebp)+unk->loopstart_p;
							}
							break;
						default:
							if(___68d94h[channel_n] > unk->loopstart_p){

								eax = (void *)___68d94h[channel_n]-unk->loopstart_p;
								ebp = unk->end_p-unk->loopstart_p;
								ebp <<= 1;
								edx = eax%ebp;
								eax = eax/ebp;
								ebp >>= 1;

								if(eax > ebp){

									___68e94h[channel_n] = 1;
									eax = ebp-edx;
								}
								else {
								
									eax = edx;
								}

								___68d94h[channel_n] = unk->loopstart_p+eax;
							}
						}
					}
				}
				else {

					___68d94h[channel_n] = 0;
					___68b30h[channel_n] = 0;
				}

				___68e14h[channel_n] = 0;
				___688d0h[channel_n] = 0;
				___68910h[channel_n] = 0;
			}

			unk = ___68b30h[channel_n];

			if(unk){

				ll_tmp = (long long)(int)___68a10h[channel_n] * (long long)(int)___68bb0h[channel_n];
				eax = (ll_tmp>>0x19);

				if(eax--){
					
					___68d7ch = eax;
					ll_tmp = (long long)(int)___68990h[channel_n] * (long long)SampleRateMultiplier;
					___68d84h = ll_tmp&~0xffffULL;
					___68d8ch = ll_tmp>>0x10;

					switch(eax = (___68a90h[channel_n]>>0xc)&0xf){
					case 0x0:			// RIGHT ONLY
						balance_id = 0;
						break;
					case 0x7: case 0x8:	// BALANCED
						___68d7ch = (___68d7ch*0x96)>>0x8;
						balance_id = 1;
						break;
					case 0x1: case 0x2: case 0x3: case 0x4: case 0x5: case 0x6:
					case 0x9: case 0xa: case 0xb: case 0xc: case 0xd: case 0xe:
						___68d80h = (___68d7ch*___68eb4h[0x10-eax])>>0x8;
						___68d7ch = (___68d7ch*___68eb4h[eax])>>0x8;
						balance_id = 2;
						break;
					case 0xf:			// LEFT ONLY
						balance_id = 3;
						break;
					default:
						break;
					}

					edi = samples_done;
					ecx = ___68d74h;
					do {

						eax = (___68e94h[channel_n] == 0) ? (unk->end_p-___68d94h[channel_n]) : (___68d94h[channel_n]-unk->loopstart_p);

						if((int)eax < 0) eax = 0;

						if(___68d8ch == 0){

							___68d90h = ecx;
						}
						else {

							ll_tmp = eax;
							ll_tmp <<= 0x10;
							ll_tmp += ((___68e94h[channel_n] != 0) ? ___68e14h[channel_n] : -___68e14h[channel_n])&0xffff;
							___68d90h = 1+ll_tmp/___68d8ch;
							if(___68d90h > ecx) ___68d90h = ecx;
						}

						ecx -= ___68d90h;
						q_tmp = (___68e94h[channel_n] == 0) ? ___68d84h : -___68d84h;

						n = -1;
						while(++n < ___68d90h){

							___68d94h_chn = ___68d94h[channel_n];
							ebx = COO32UV(___68e14h[channel_n]>>0x1b, 0xff+___68d94h_chn[1]-___68d94h_chn[0]);

							switch(balance_id){
							case 0:
								RIGHT_BFR[edi+n] += ___68d40h[COO256UV((___68d94h_chn[0]+___68d48h[ebx])&0xff, ___68d7ch)];
								break;
							case 1: 
								LEFT_BFR[edi+n] += ___68d40h[COO256UV((___68d94h_chn[0]+___68d48h[ebx])&0xff, ___68d7ch)];
								RIGHT_BFR[edi+n] += ___68d40h[COO256UV((___68d94h_chn[0]+___68d48h[ebx])&0xff, ___68d7ch)];
								break;
							case 2:
								LEFT_BFR[edi+n] += ___68d40h[COO256UV((___68d94h_chn[0]+___68d48h[ebx])&0xff, ___68d80h)];
								RIGHT_BFR[edi+n] += ___68d40h[COO256UV((___68d94h_chn[0]+___68d48h[ebx])&0xff, ___68d7ch)];
								break;
							case 3:
								LEFT_BFR[edi+n] += ___68d40h[COO256UV((___68d94h_chn[0]+___68d48h[ebx])&0xff, ___68d7ch)];
								break;
							default:
								break;
							}
							___68d94h[channel_n] += (q_tmp+___68e14h[channel_n])>>0x20;
							___68e14h[channel_n] += q_tmp;
						}

						edi += ___68d90h;

						if(ecx != 0){
			
							switch(unk->flags&3){
							case 0:
								___68d94h[channel_n] = 0;
								___68e14h[channel_n] = 0;
								___68b30h[channel_n] = 0;
								ecx = 0;
								break;
							case 1:
								___68d94h[channel_n] += unk->loopstart_p-unk->loopend_p;
								break;
							case 2:
							case 3:
								eax = (___68e94h[channel_n] != 0) 
									? (unk->loopstart_p+(unk->loopstart_p-___68d94h[channel_n]))
									: (unk->loopend_p+(unk->loopend_p-___68d94h[channel_n]));

								___68d94h[channel_n] = eax+!(___68e14h[channel_n] = -1*___68e14h[channel_n]);
								___68e94h[channel_n] = !___68e94h[channel_n];
								break;
							default:
								break;
							}
						}

					} while(ecx != 0);
				}
			}
		}

		samples_done += ___68d74h;
		samples_togo -= ___68d74h;
	}
	
	n = -1;
	while(++n < samples){
		
		dst_stream[n].left = __BOUNDS(LEFT_BFR[n], -32768, 32767);
		dst_stream[n].right = __BOUNDS(RIGHT_BFR[n], -32768, 32767);
		LEFT_BFR[n] = RIGHT_BFR[n] = 0;
	}
}

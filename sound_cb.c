#include "drally.h"

#define __BOUNDS(v, l, h) 	((v)<(l)?(l):(v)>(h)?(h):(v))
#define COO32UV(u,v) 	(0x20*(v)+(u))

enum balance_e {
	BALANCE_RIGHT_ONLY,
	BALANCE_BALANCED,
	BALANCE_CUSTOM,
	BALANCE_LEFT_ONLY
};

enum pcm_data_e {
	NO_PCM_DATA,
	INIT_PCM_DATA,
	PROCESS_PCM_DATA
};

enum pingpong_e {
	PP_FORWARD,
	PP_BACKWARD
};

#pragma pack(1)
typedef struct sample_s16_stereo_s {
	__SIGNED_WORD__ 	left;
	__SIGNED_WORD__ 	right;
} sample_s16_stereo_t;

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
	extern byte ___68d78h[];
	extern word SOUND_SAMPLERATE;
	extern word ___688d0h_sample_id[32];
	extern dword ___68910h_offset[32];
	extern dword ___68a10h[32];
	extern dword ___68bb0h[32];
	extern dword ___68990h[32];
	extern int SampleRateMultiplier;
	extern void (*AUDIO_DATA_CB)(void);


sampledata_t * SampleLib_getSample(int smpl_id);

dword MULSHIFT(dword, dword);

double s3m_TickDuration_s;
extern double s3m_TickSamples;
dword ___68d90h;
dword ___68d8ch;
byte ___68d80h;
byte ___68d7ch;
__BYTE__ (*___68d48h)[0x20];
int (*___68d40h)[0x100];
int * ___68d34h_R_BFR;
int * ___68d38h_L_BFR;
byte * 	___68b30h[32];
void * 	___68d94h_sample_position[32];
int 	___68e14h[32];
byte 	___68e94h[32];
dword ___68a90h[32] = {0};


const byte ___68eb4h[16] = { 0xff /*0*/, 0xf3, 0xe6, 0xd8, 0xc9, 0xb9, 0xa8, 0x96, 0x96 /*8*/, 0x84, 0x71, 0x5d, 0x48, 0x32, 0x1b, 0 };

static int PCM_getStatus(int channel_n){

	if(___688d0h_sample_id[channel_n] == 0xffff)	return NO_PCM_DATA;
	if(___688d0h_sample_id[channel_n] == 0) 		return PROCESS_PCM_DATA;

	return INIT_PCM_DATA;
}

static void PCM_resetData(int channel_n){

	___68e94h[channel_n] = PP_FORWARD;
	___68d94h_sample_position[channel_n] = (void *)0;
	___68b30h[channel_n] = (void *)0;
	___68e14h[channel_n] = 0;
	___688d0h_sample_id[channel_n] = 0;
	___68910h_offset[channel_n] = 0;
}

static void PCM_initData(int channel_n){

	__UNSIGNED__ 	ueax, uedx, uebp, looplen;
	sampledata_t * 	unk;

	___68e94h[channel_n] = PP_FORWARD;
	unk = SampleLib_getSample(___688d0h_sample_id[channel_n]-1);
	___68b30h[channel_n] = unk;
	___68d94h_sample_position[channel_n] = unk->start_p+___68910h_offset[channel_n];

	if(___68d94h_sample_position[channel_n] >= unk->end_p){

		switch(unk->flags&3){
		case 0:		// LOOP_OFF
			___68d94h_sample_position[channel_n] = (void *)0;
			___68b30h[channel_n] = (void *)0;
			break;
		case 1:		// LOOP_ON
			if(___68d94h_sample_position[channel_n] > unk->loopstart_p){

				ueax = (void *)___68d94h_sample_position[channel_n]-unk->loopstart_p;
				uebp = unk->end_p-unk->loopstart_p;
				___68d94h_sample_position[channel_n] = unk->loopstart_p+(ueax%uebp);
			}
			break;
		default:	// PING-PONG
			if(___68d94h_sample_position[channel_n] > unk->loopstart_p){

				ueax = (void *)___68d94h_sample_position[channel_n]-unk->loopstart_p;
				looplen = unk->end_p-unk->loopstart_p;

				uedx = ueax%looplen;
				ueax = ueax/looplen;

				if(ueax&1){

					___68d94h_sample_position[channel_n] = unk->end_p-uedx;
					___68e94h[channel_n] = PP_BACKWARD;
				}
				else {
				
					___68d94h_sample_position[channel_n] = unk->loopstart_p+uedx;
					___68e94h[channel_n] = PP_FORWARD;
				}
			}
			break;
		}
	}

	___68e14h[channel_n] = 0;
	___688d0h_sample_id[channel_n] = 0;
	___68910h_offset[channel_n] = 0;
}

static void PCM_processData(int channel_n, int samples_done, int samples_todo){

	dword 			eax, ecx, edx, edi;
	sampledata_t *	unk;
	int 			balance_id, n;
	qword 			ll_tmp;
	byte * 			___68d94h_chn;
	byte 			b_tmp;
	void * 			eaxp;
	__UNSIGNED__ 	looplen;
	word 			w_eax;
	int 			pp_togo;


	unk = ___68b30h[channel_n];

	if(unk){

		eax = MULSHIFT(___68a10h[channel_n], ___68bb0h[channel_n]) >> 9;

		if(eax--){
			
			___68d7ch = eax;
			___68d8ch = MULSHIFT(___68990h[channel_n], SampleRateMultiplier);

			switch(eax = (___68a90h[channel_n]>>0xc)&0xf){
			case 0x0:			// RIGHT ONLY
				balance_id = BALANCE_RIGHT_ONLY;
				break;
			case 0x7: case 0x8:	// BALANCED
				___68d7ch = (___68d7ch*0x96)>>0x8;
				balance_id = BALANCE_BALANCED;
				break;
			case 0x1: case 0x2: case 0x3: case 0x4: case 0x5: case 0x6:
			case 0x9: case 0xa: case 0xb: case 0xc: case 0xd: case 0xe:
				___68d80h = (___68d7ch*___68eb4h[0x10-eax])>>0x8;
				___68d7ch = (___68d7ch*___68eb4h[eax])>>0x8;
				balance_id = BALANCE_CUSTOM;
				break;
			case 0xf:			// LEFT ONLY
				balance_id = BALANCE_LEFT_ONLY;
				break;
			default:
				break;
			}

			edi = samples_done;
			ecx = samples_todo;

			do {

				if(___68e94h[channel_n] == PP_FORWARD){

					pp_togo = unk->end_p-___68d94h_sample_position[channel_n];
				}
				else {	// PP_BACKWARD

					pp_togo = ___68d94h_sample_position[channel_n]-unk->loopstart_p;
				} 

				if(pp_togo < 0) pp_togo = 0;

				if(___68d8ch == 0){

					___68d90h = ecx;
				}
				else {

					ll_tmp = pp_togo;
					ll_tmp <<= 0x10;

					___68d90h = 1+ll_tmp/___68d8ch;
					if(___68d90h > ecx) ___68d90h = ecx;
				}

				n = -1;
				while(++n < ___68d90h){

					___68d94h_chn = ___68d94h_sample_position[channel_n];
					b_tmp = ___68d94h_chn[0]+___68d48h[0xff+___68d94h_chn[1]-___68d94h_chn[0]][___68e14h[channel_n]>>0xb];

					switch(balance_id){
					case BALANCE_RIGHT_ONLY:
						___68d34h_R_BFR[edi+n] += ___68d40h[___68d7ch][b_tmp];
						break;
					case BALANCE_BALANCED: 
						___68d38h_L_BFR[edi+n] += ___68d40h[___68d7ch][b_tmp];
						___68d34h_R_BFR[edi+n] += ___68d40h[___68d7ch][b_tmp];
						break;
					case BALANCE_CUSTOM:
						___68d38h_L_BFR[edi+n] += ___68d40h[___68d80h][b_tmp];
						___68d34h_R_BFR[edi+n] += ___68d40h[___68d7ch][b_tmp];
						break;
					case BALANCE_LEFT_ONLY:
						___68d38h_L_BFR[edi+n] += ___68d40h[___68d7ch][b_tmp];
						break;
					default:
						break;
					}

					if(___68e94h[channel_n] == PP_FORWARD){
					
						___68e14h[channel_n] += ___68d8ch;
					}
					else {	// PP_BACKWARD

						___68e14h[channel_n] -= ___68d8ch;
					}
					
					___68d94h_sample_position[channel_n] += ___68e14h[channel_n]>>0x10;
					___68e14h[channel_n] &= 0xffff;
				}

				edi += ___68d90h;
				ecx -= ___68d90h;

				if(ecx != 0){

					switch(unk->flags&3){
					case 0:		// LOOP_OFF
						___68d94h_sample_position[channel_n] = 0;
						___68e14h[channel_n] = 0;
						___68b30h[channel_n] = 0;
						ecx = 0;
						break;
					case 1:		// LOOP_ON
						looplen = unk->loopend_p-unk->loopstart_p;
						___68d94h_sample_position[channel_n] -= looplen;
						break;
					default:	// PING-PONG
						if(___68e94h[channel_n] == PP_FORWARD){

							___68d94h_sample_position[channel_n] = unk->loopend_p+(unk->loopend_p-___68d94h_sample_position[channel_n]);
							___68e94h[channel_n] = PP_BACKWARD;
						}
						else {	// PP_BACKWARD
							___68d94h_sample_position[channel_n] = unk->loopstart_p+(unk->loopstart_p-___68d94h_sample_position[channel_n]);
							___68e94h[channel_n] = PP_FORWARD;
						}

						___68d94h_sample_position[channel_n] += !___68e14h[channel_n]; 	// ???
						___68e14h[channel_n] *= -1;
						___68e14h[channel_n] &= 0xffff;
						break;
					}
				}

			} while(ecx != 0);
		}
	}
}

void audio_s16_stereo_cb(void * udata, unsigned char * stream, unsigned int size){

	int		n, channel_n, samples, samples_done, samples_todo;


	samples = size / sizeof(sample_s16_stereo_t);
	samples_done = 0;

	while(samples_done < samples){

		samples_todo = samples-samples_done;

		if((int)s3m_TickSamples == 0){

			AUDIO_DATA_CB();
			s3m_TickSamples += (double)SOUND_SAMPLERATE*s3m_TickDuration_s;
		}

		if((int)s3m_TickSamples < samples_todo) samples_todo = (int)s3m_TickSamples;
			
		s3m_TickSamples -= (double)samples_todo;

		channel_n = -1;
		while(++channel_n < Sound.channels){

			switch(PCM_getStatus(channel_n)){
			case NO_PCM_DATA:
				PCM_resetData(channel_n);
				break;
			case INIT_PCM_DATA:
				PCM_initData(channel_n);
				PCM_processData(channel_n, samples_done, samples_todo);
				break;
			case PROCESS_PCM_DATA:
				PCM_processData(channel_n, samples_done, samples_todo);
				break;
			default:
				break;
			}
		}

		samples_done += samples_todo;
	}

	n = -1;
	while(++n < samples){

		((sample_s16_stereo_t *)stream)[n].left = __BOUNDS(___68d38h_L_BFR[n], -32768, 32767);
		((sample_s16_stereo_t *)stream)[n].right = __BOUNDS(___68d34h_R_BFR[n], -32768, 32767);
		___68d38h_L_BFR[n] = ___68d34h_R_BFR[n] = 0;
	}
}

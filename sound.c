#include "drally.h"
#include "drmemory.h"

#define SAMPLES 			256
#define VOLUME_MAX 			100
#define SAMPLELIB_NEW		0
#define SAMPLELIB_RESAMPLE	1

typedef enum {
	NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

enum pingpong_e {
	PP_FORWARD,
	PP_BACKWARD
};

#pragma pack(1)
typedef struct sampledata_s {
	void *	start_p;
	void * 	end_p;
	void * 	loopstart_p;
	void * 	loopend_p;
	byte 	flags;
} sampledata_t;

typedef struct samplelib_s {
	int 			n_samples;
	int 			n_msx_samples;
	int 			n_sfx_samples;
	void * 			header_alloc;
	void *			data_alloc;
	void * 			write_p;
	sampledata_t * 	samples;
	int *			samples_volume;
	int * 			samples_frequency;
} samplelib_t;

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

typedef struct music_s {
    byte        ch_map[32];
    dword *     c2spd;
    void **     patterns;
    byte *      ch_settings;
    byte *	    orders;
    byte *      panning;
    byte *      volume;
    void *      s3m_p;
    word        n_patterns;
    byte        n_orders;
    byte        tempo;
    byte        global_volume;
    byte        speed;
} music_t;

extern byte * ___68b30h[32];
byte SOUND = 0;
byte SOUND_LOADED = 0;
byte SOUND_PLANES = 0;
dword MASTER_VOLUME = 0x10000;
dword MSX_VOLUME = 0x10000;
dword SFX_VOLUME = 0x10000;
int SampleRateMultiplier;
extern int * ___68d34h_R_BFR;
extern int * ___68d38h_L_BFR;
extern __BYTE__ (*___68d48h)[0x20];
extern int (*___68d40h)[0x100];
extern void * ___68d94h_sample_position[];
extern int ___68e14h[];
extern byte ___68e94h[];


void ___58b20h(int n, ...);
void ___65788h_updateVolume_cdecl(void);
void SampleLib_init(dword, dword, byte);
void ___716fch(sound_mod_t *);
void ___75840h(sound_mod_t *);
void ___67bbch(void);
void ptr_align_d(void **, dword);
void DO_NOTHING(void);
dword MULSHIFT(dword, dword);


double s3m_TickSamples;
dword SOUND_SAMPLES = SAMPLES;
void_cb AUDIO_DATA_CB = &DO_NOTHING;
samplelib_t SampleLib;
sound_t Sound;
music_t	Music;
word SOUND_SAMPLERATE = 0x5622;

word ___688d0h_sample_id[32] = {
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff
};

dword ___68bb0h[32] = {
	0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000,
	0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000,
	0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000,
	0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000, 0x10000
};

dword ___68910h_offset[32] = {0};
dword ___68990h[32] = {0};
dword ___68a10h[32] = {0};


void DO_NOTHING(void){

	// empty callback
};

extern SDL_AudioDeviceID audio_dev;
void SET_AUDIO_DATA_CB(void_cb cb){ 

	if(cb == &DO_NOTHING){

		AUDIO_DATA_CB = cb;
		if(audio_dev) SDL_PauseAudioDevice(audio_dev, 1);
	}
	else {

		AUDIO_DATA_CB = cb;
		if(audio_dev) SDL_PauseAudioDevice(audio_dev, 0);
	}

}

void ___685a4h_createPlanes_cdecl(void){

	int 	i, j, k, l, m, n, u, v, ___688c8h;
	

	if(SOUND&&!SOUND_PLANES){

		___688c8h = (24*VOLUME_MAX)/25;		//? 100;
		
		n = -1;
		while(++n < 0x20){

			___68d94h_sample_position[n] = 0;
			___68e14h[n] = 0;
			___68e94h[n] = PP_FORWARD;
		}

		s3m_TickSamples = 0.0;

		___68d34h_R_BFR = dRMemory_alloc(SOUND_SAMPLES*sizeof(int));
		memset(___68d34h_R_BFR, 0, SOUND_SAMPLES*sizeof(int));

		___68d38h_L_BFR = dRMemory_alloc(SOUND_SAMPLES*sizeof(int));
		memset(___68d38h_L_BFR, 0, SOUND_SAMPLES*sizeof(int));

		___68d40h = dRMemory_alloc(0x8000*sizeof(int));

		// 4*128*256 = 4*32768 (0x20000)
		// [-128...127]x[1...128]
		v = -1;
		while(++v < 0x80){

			u = -1;
			while(++u < 0x100){

				___68d40h[v][u] = ((u-0x80)*(v+1)*___688c8h) >> 6;
			}
		}

		___68d48h = dRMemory_alloc(0x3fe0*sizeof(__BYTE__));

		// 1*511*32 = 16352 (0x3fe0)
		v = -1;
		while(++v < 0x1ff){		// (0, 510)	... 511

			u = -1;
			while(++u < 0x20){	// (0, 31) ... 32
				
				___68d48h[v][u] = (u*(v-0xff)+0x10)>>5;
			}
		}
		// min ... -247
		// max ... 247

		SampleRateMultiplier = 0x56220000 / SOUND_SAMPLERATE;
		SOUND_PLANES = 1;
	}
}

void ___65788h_updateVolume_cdecl(void){

	dword 	n, msx_v, sfx_v;

	msx_v = MULSHIFT(MASTER_VOLUME, MSX_VOLUME);
	sfx_v = MULSHIFT(MASTER_VOLUME, SFX_VOLUME);

	n = -1;
	if(Sound.sfx.data){

		while(++n < Sound.msx.channels) ___68bb0h[n] = msx_v;
		--n; while(++n < 0x20) ___68bb0h[n] = sfx_v;
	}
	else {

		while(++n < 0x20) ___68bb0h[n] = msx_v;
	}
}

sampledata_t * SampleLib_getSample(int smpl_id){

	return &SampleLib.samples[smpl_id];
}

// ___677cch
void SampleLib_init(dword size, dword instruments, byte flags){

	dword 	n;


	SampleLib.data_alloc = dRMemory_alloc(6*instruments+size+2);
	memset(SampleLib.data_alloc, 0, 2);
	SampleLib.write_p = SampleLib.data_alloc+2;
	SampleLib.n_samples = 0;

	if(flags == SAMPLELIB_NEW){

		if(SampleLib.header_alloc){
			
			printf("SampleLib already created!\n");
			return;
		}

		SampleLib.header_alloc		= dRMemory_alloc(2*sizeof(int)*(instruments+1)+sizeof(sampledata_t)*instruments);
		SampleLib.samples_frequency	= SampleLib.header_alloc;
		SampleLib.samples_volume	= SampleLib.header_alloc+sizeof(int)*(instruments+1);
		SampleLib.samples			= SampleLib.header_alloc+2*sizeof(int)*(instruments+1);

		n = -1;
		while(++n < instruments){

			SampleLib.samples[n].start_p = SampleLib.data_alloc;
			SampleLib.samples[n].end_p = SampleLib.data_alloc;
			SampleLib.samples[n].loopstart_p = SampleLib.data_alloc;
			SampleLib.samples[n].loopend_p = SampleLib.data_alloc;
			SampleLib.samples[n].flags = 0;
		}
	}
}

// ___67994h
void SampleLib_addSample(void * isd_p, void * isd_end_p, void * isd_loop_p, void * isd_loopend_p, dword flags){

	dword 	n_cpy, smpl_id;

	smpl_id = SampleLib.n_samples;
	n_cpy = 1+!!(flags&4);
	memcpy(SampleLib.write_p, isd_p, isd_end_p-isd_p+n_cpy);

	SampleLib.samples[smpl_id].start_p = SampleLib.write_p;
	SampleLib.samples[smpl_id].end_p = SampleLib.write_p+(isd_end_p-isd_p);
	SampleLib.samples[smpl_id].loopstart_p = SampleLib.write_p+(isd_loop_p-isd_p);
	SampleLib.samples[smpl_id].loopend_p = SampleLib.write_p+(isd_loopend_p-isd_p);
	SampleLib.samples[smpl_id].flags = flags;
	SampleLib.write_p += isd_end_p-isd_p+n_cpy;


	switch(flags&3){
	case 0:
		memcpy(SampleLib.write_p, SampleLib.samples[smpl_id].end_p, n_cpy);
		break;
	case 1:
		memcpy(SampleLib.write_p, SampleLib.samples[smpl_id].loopstart_p, n_cpy);
		break;
	default:
		memcpy(SampleLib.write_p, SampleLib.samples[smpl_id].loopend_p-n_cpy, n_cpy);
		break;
	}

	SampleLib.write_p += n_cpy;
//	ptr_align_d(&SampleLib.write_p, 4);

	SampleLib.n_samples++;
}

void ___68c42h_cdecl(void){

	dword 	n;

	n = -1;
	while(++n < 0x20){

		___688d0h_sample_id[n] = 0xffff;
		___68910h_offset[n] = 0;
		___68990h[n] = 0;
		___68a10h[n] = 0;
		___68b30h[n] = 0;
	}
}

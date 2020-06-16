#include "drally.h"

#define SAMPLES 			512
#define VOLUME_MAX 			100
#define COO32UV(u,v) 		(0x20*(v)+(u))
#define COO256UV(u,v) 		(0x100*(v)+(u))
#define SAMPLELIB_NEW		0
#define SAMPLELIB_RESAMPLE		1

typedef enum {
	NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

#pragma pack(1)
typedef struct s3m_s {
	char 	mod_name[0x1c];	        // +0
	byte 	unk0[4];		        // +1ch
    word    orders_n;               // +20h
	word 	instruments_n;	        // +22h
    word    patterns_n;             // +24h
    word    flags;                  // +26h
	word 	tracker_version;        // +28h
    word    samples_type;           // +2ah
	byte 	signature[4];		    // +2ch
	byte 	g_volume;		        // +30h
	byte 	speed;			        // +31h
	byte 	tempo;			        // +32h
	byte 	un33;		            // +33h
    byte    un34;                   // +34h
    byte    default_pan;            // +35h
    byte    un36[0xa];              // +36h
    byte    channel_settings[0x20]; // +40h
	byte 	data[];		            // +60h
} s3m_t;

typedef struct xm_s {
	char 	id_text[0x11];		// +0
	char 	mod_name[0x14];		// +11h
	char 	__1ah;				// +25h
	byte 	unk1[0x14];			// +26h
	word 	version;			// +3ah
	dword 	header_size;		// +3ch
	word 	song_length;		// +40h
	byte 	unk2[2];			// +42h
	word 	channels;			// +44h
	word 	patterns;			// +46h
	word 	instruments;		// +48h
	byte 	unk3[];				// +4ah
} xm_t;

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

extern byte * ___68b30h[];
byte SOUND = 0;
byte SOUND_LOADED = 0;
byte SOUND_PLANES = 0;
dword MASTER_VOLUME = 0x10000;
dword MSX_VOLUME = 0x10000;
dword SFX_VOLUME = 0x10000;
int ___688c8h;
int SampleRateMultiplier;
extern int * ___68d34h;
extern int * ___68d38h;
extern byte * ___68d48h;
extern dword * ___68d40h;
extern void * ___68d94h[];
extern dword ___68e14h[];
extern byte ___68e94h[];


void * extract_musics_bpa(const char *, int);
dword entrysize_musics_bpa(const char *);
void ___58b20h(int n, ...);
void * dRally_Memory_alloc(dword, dword);
void ___65788h_updateVolume_cdecl(void);
void ___691deh_cdecl(dword, void *);
void ___67e48h_allocSounds_cdecl(TrackerType, const char *, TrackerType, const char *, int);
void dRally_Memory_free(void *);
void load_s3m(const char *, sound_mod_t *);
void load_xm(const char *, sound_mod_t *);
void SampleLib_init(dword, dword, byte);
void ___716fch(sound_mod_t *);
void ___75840h(sound_mod_t *);
void ___67bbch(void);
void * dRally_Memory_resize(void * mem, dword size);
void ptr_align_d(void **, dword);
void DO_NOTHING(void);
dword MULSHIFT(dword, dword);


dword ___68d70h;
dword SOUND_SAMPLES = SAMPLES;
void_cb AUDIO_DATA_CB = &DO_NOTHING;
samplelib_t SampleLib;
sound_t Sound;
music_t	Music;
word SOUND_SAMPLERATE = 0x5622;

word ___688d0h[32] = {
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

dword ___68910h[32] = {0};
dword ___68990h[32] = {0};
dword ___68a10h[32] = {0};
dword ___24e5c0h[32];


void DO_NOTHING(void){

	// empty callback
};

void ___6ef2ch_init(void);
extern SDL_AudioDeviceID audio_dev;
void SET_AUDIO_DATA_CB(void_cb cb){ 

	if(cb == &DO_NOTHING){

		AUDIO_DATA_CB = cb;
		if(audio_dev) SDL_PauseAudioDevice(audio_dev, 1);
	}
	else {

		AUDIO_DATA_CB = cb;
		___6ef2ch_init();
		if(audio_dev) SDL_PauseAudioDevice(audio_dev, 0);
	}

}

void audio_cb(void * udata, unsigned char * stream, unsigned int length){

	___691deh_cdecl(length >> 2, stream);
}

void ___685a4h_createPlanes_cdecl(void){

	int 	i, j, k, l, m, n, u, v;
	byte * 	bp;

	if(SOUND&&!SOUND_PLANES){

		___688c8h = (24*VOLUME_MAX)/25;		//? 100;
		
		n = -1;
		while(++n < 0x20){

			___68d94h[n] = 0;
			___68e14h[n] = 0;
			___68e94h[n] = 0;
		}

		___68d70h = 0;
		bp = dRally_Memory_alloc(0x20000+8*SOUND_SAMPLES, 1);
		___68d40h = bp;
		memset(bp, 0, 0x20000+8*SOUND_SAMPLES);
		___68d34h = bp+0x20000;
		___68d38h = bp+0x20000+4*SOUND_SAMPLES;

		// 4*128*256 = 4*32768 (0x20000)
		// [-128...127]x[1...128]
		v = -1;
		while(++v < 0x80){

			u = -1;
			while(++u < 0x100){

				___68d40h[COO256UV(u, v)] = ((u-0x80)*(v+1)*___688c8h) >> 6;
			}
		}
		// min ... -256*___688c8h
		// max ... 254*___688c8h

		bp = dRally_Memory_alloc(0x3fe0, 1);
		___68d48h = bp;

		// 1*511*32 = 16352 (0x3fe0)
		v = -1;
		while(++v < 0x1ff){		// (0, 510)	... 511

			u = -1;
			while(++u < 0x20){	// (0, 31) ... 32
				
				___68d48h[COO32UV(u, v)] = (u*(v-0xff)+0x10)>>5;
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

		while(++n < Sound.msx.channels) ___68bb0h[n] = MULSHIFT(msx_v, ___24e5c0h[n]);
		--n; while(++n < 0x20) ___68bb0h[n] = sfx_v;
	}
	else {

		while(++n < 0x20) ___68bb0h[n] = MULSHIFT(msx_v, ___24e5c0h[n]);
	}
}

void ___67e48h_allocSounds_cdecl(TrackerType msx_t, const char * msx_f, TrackerType sfx_t, const char * sfx_f, int max_sfx_ch){

	if(msx_f == (void *)0) msx_t = NO_TRACKER;
	if(sfx_f == (void *)0){
		
		sfx_t = NO_TRACKER;
		max_sfx_ch = 0;
	}
	else if(max_sfx_ch < 1) max_sfx_ch = 1;

	if((msx_f == (void *)0)&&(sfx_f == (void *)0)) return;

	Sound.msx.channels = 0;
	if((Sound.msx.type = msx_t) == SCREAM_TRACKER_3) load_s3m(msx_f, &Sound.msx);
	if((Sound.sfx.type = sfx_t) == FAST_TRACKER_2) load_xm(sfx_f, &Sound.sfx);

	SampleLib_init(Sound.msx.size+Sound.sfx.size, Sound.msx.samples+Sound.sfx.samples, SAMPLELIB_NEW);

	if(Sound.msx.type == SCREAM_TRACKER_3) ___716fch(&Sound.msx);
	SampleLib.n_msx_samples = SampleLib.n_samples;

	Sound.sfx.channels = max_sfx_ch;
	if(Sound.sfx.type == FAST_TRACKER_2) ___75840h(&Sound.sfx);
	SampleLib.n_sfx_samples = SampleLib.n_samples - SampleLib.n_msx_samples;

	Sound.channels = Sound.msx.channels+Sound.sfx.channels;
	dRally_Memory_resize(SampleLib.data_alloc, SampleLib.write_p - SampleLib.data_alloc);
	
	if(Sound.sfx.data) dRally_Memory_free(Sound.sfx.data);

	___67bbch();
	SOUND_LOADED = 1;
}

void load_s3m(const char * f_name, sound_mod_t * smod){

	dword 	n;
	s3m_t *	s3m;

	s3m = extract_musics_bpa(f_name, 1);

	if(strncmp(s3m->signature, "SCRM", 4)) ___58b20h(0x28, f_name);
	if(s3m->data[0] == 0xff) ___58b20h(0x29, f_name);
	Music.s3m_p = s3m;

	smod->size 		= entrysize_musics_bpa(f_name);
	smod->samples 	= s3m->instruments_n;
	smod->data 		= s3m;
	smod->channels 	= 0;

    n = -1;
    while(++n < 0x20){
		
		if(s3m->channel_settings[n] <= 0xf) smod->channels++;
	}
}

void load_xm(const char * f_name, sound_mod_t * smod){

	xm_t *	xm;

	xm = extract_musics_bpa(f_name, 1);

	if(strncmp(xm->id_text, "Extended Module: ", 0x11)) ___58b20h(0x28, f_name);
	if(xm->__1ah != 0x1a) ___58b20h(0x28, f_name);
	if(xm->version < 0x104) ___58b20h(0x28, f_name);

	smod->size = entrysize_musics_bpa(f_name);
	smod->samples = xm->instruments;
	smod->data = xm;
	smod->channels = xm->channels;
}


#define SAMPLE 		(SampleLib_getSample(0))
sampledata_t * SampleLib_getSample(int smpl_id){

	return &SampleLib.samples[smpl_id];
}

// ___677cch
void SampleLib_init(dword size, dword instruments, byte flags){

	dword 	n;


	SampleLib.data_alloc = dRally_Memory_alloc(6*instruments+size+2, 1);
	memset(SampleLib.data_alloc, 0, 2);
	SampleLib.write_p = SampleLib.data_alloc+2;
	SampleLib.n_samples = 0;

	if(flags == SAMPLELIB_NEW){

		if(SampleLib.header_alloc){
			
			printf("SampleLib already created!\n");
			return;
		}

		SampleLib.header_alloc		= dRally_Memory_alloc(2*sizeof(int)*(instruments+1)+sizeof(sampledata_t)*instruments, 1);
		SampleLib.samples_frequency	= SampleLib.header_alloc;
		SampleLib.samples_volume	= SampleLib.header_alloc+sizeof(int)*(instruments+1);
		SampleLib.samples			= SampleLib.header_alloc+2*sizeof(int)*(instruments+1);

		n = -1;
		while(++n < instruments){

			SAMPLE[n].start_p = SampleLib.data_alloc;
			SAMPLE[n].end_p = SampleLib.data_alloc;
			SAMPLE[n].loopstart_p = SampleLib.data_alloc;
			SAMPLE[n].loopend_p = SampleLib.data_alloc;
			SAMPLE[n].flags = 0;
		}
	}
}

// ___67994h
void SampleLib_addSample(void * isd_p, void * isd_end_p, void * isd_loop_p, void * isd_loopend_p, dword flags){

	dword 	n_cpy, smpl_id;

	smpl_id = SampleLib.n_samples;
	n_cpy = 1+!!(flags&4);
	memcpy(SampleLib.write_p, isd_p, isd_end_p-isd_p+n_cpy);
	SAMPLE[smpl_id].start_p = SampleLib.write_p;
	SAMPLE[smpl_id].end_p = SampleLib.write_p+(isd_end_p-isd_p);
	SAMPLE[smpl_id].loopstart_p = SampleLib.write_p+(isd_loop_p-isd_p);
	SAMPLE[smpl_id].loopend_p = SampleLib.write_p+(isd_loopend_p-isd_p);
	SAMPLE[smpl_id].flags = flags;
	SampleLib.write_p += isd_end_p-isd_p+n_cpy;


	switch(flags&3){
	case 0:
		memcpy(SampleLib.write_p, SAMPLE[smpl_id].end_p, n_cpy);
		break;
	case 1:
		memcpy(SampleLib.write_p, SAMPLE[smpl_id].loopstart_p, n_cpy);
		break;
	default:
		memcpy(SampleLib.write_p, SAMPLE[smpl_id].loopend_p-n_cpy, n_cpy);
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

		___688d0h[n] = 0xffff;
		___68910h[n] = 0;
		___68990h[n] = 0;
		___68a10h[n] = 0;
		___68b30h[n] = 0;
	}
}

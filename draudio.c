#include "draudio.h"
#include "drmemory.h"

#define SAMPLELIB_NEW		0


typedef enum {
	NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

#pragma pack(1)
typedef struct sound_mod_s {
	int 	type;
	int 	channels;
	int 	samples;
	void * 	data;
	__DWORD__ 	size;
} sound_mod_t;

typedef struct sound_s {
	int 			channels;
	sound_mod_t		msx;
	sound_mod_t 	sfx;
} sound_t;

typedef struct sampledata_s {
	void *	start_p;
	void * 	end_p;
	void * 	loopstart_p;
	void * 	loopend_p;
	__BYTE__ 	flags;
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

typedef struct music_s {
    __BYTE__        ch_map[32];
    __DWORD__ *     c2spd;
    void **     patterns;
    __BYTE__ *      ch_settings;
    __BYTE__ *	    orders;
    __BYTE__ *      panning;
    __BYTE__ *      volume;
    void *      s3m_p;
    __WORD__        n_patterns;
    __BYTE__        n_orders;
    __BYTE__        tempo;
    __BYTE__        global_volume;
    __BYTE__        speed;
} music_t;


struct dRAudio {
	dRAudio **	this;
};


dRAudio * dRAudioContext;




extern sound_t Sound;
extern music_t	Music;
extern samplelib_t SampleLib;
extern __BYTE__ SOUND_LOADED;

void ___67bbch(void);
void ___716fch(sound_mod_t *);
void ___75840h(sound_mod_t *);
void SampleLib_init(__DWORD__, __DWORD__, __BYTE__);

void dRAudio_open(dRAudio ** ctx){

	(*ctx)->this = ctx;
}

void dRAudio_close(dRAudio * ctx){

	*(ctx->this) = (void *)0;
}

void dRAudio_load(s3m_t * musics_s3m, __DWORD__ size_s3m, xm_t * effects_xm, __DWORD__ size_xm, int sfx_channels){

    int     n, msx_t, sfx_t;


    msx_t = SCREAM_TRACKER_3;
    sfx_t = FAST_TRACKER_2;

    if(musics_s3m == (void *)0) msx_t = NO_TRACKER;
	if(effects_xm == (void *)0){
		
		sfx_t = NO_TRACKER;
		sfx_channels = 0;
	}
	else if(sfx_channels < 1) sfx_channels = 1;

	if((musics_s3m == (void *)0)&&(effects_xm == (void *)0)) return;

	Sound.msx.channels = 0;
	if((Sound.msx.type = msx_t) == SCREAM_TRACKER_3){
        
        Music.s3m_p         = musics_s3m;
        Sound.msx.size      = size_s3m;
        Sound.msx.samples 	= musics_s3m->instrumentCount;
        Sound.msx.data 		= musics_s3m;
        Sound.msx.channels 	= 0;

        n = -1;
        while(++n < 0x20){
            
            if(musics_s3m->channelSettings[n] <= 0xf) Sound.msx.channels++;
        }
    }

	if((Sound.sfx.type = sfx_t) == FAST_TRACKER_2){
        
        Sound.sfx.size      = size_xm;
        Sound.sfx.samples   = effects_xm->instrumentCount;
        Sound.sfx.data      = effects_xm;
        Sound.sfx.channels  = effects_xm->channels;
    }

	SampleLib_init(Sound.msx.size+Sound.sfx.size, Sound.msx.samples+Sound.sfx.samples, SAMPLELIB_NEW);

	if(Sound.msx.type == SCREAM_TRACKER_3) ___716fch(&Sound.msx);
	SampleLib.n_msx_samples = SampleLib.n_samples;

	Sound.sfx.channels = sfx_channels;
	if(Sound.sfx.type == FAST_TRACKER_2) ___75840h(&Sound.sfx);
	SampleLib.n_sfx_samples = SampleLib.n_samples - SampleLib.n_msx_samples;

	Sound.channels = Sound.msx.channels+Sound.sfx.channels;
	dRMemory_resize(SampleLib.data_alloc, SampleLib.write_p - SampleLib.data_alloc);
	
	if(Sound.sfx.data) dRMemory_free(Sound.sfx.data);

	___67bbch();
	SOUND_LOADED = 1;
}

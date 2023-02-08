/*
Error! E2028: dRally_Sound_load is an undefined reference
Error! E2028: dRally_Sound_setSampleRate is an undefined reference
Error! E2028: dRally_Sound_play is an undefined reference
Error! E2028: dRally_Sound_pushEffect is an undefined reference
Error! E2028: dRally_Sound_freeEffectChannel is an undefined reference
Error! E2028: dRally_Sound_release is an undefined reference
Error! E2028: dRally_Sound_setMasterVolume is an undefined reference
Error! E2028: dRally_Sound_setPosition is an undefined reference
Error! E2028: dRally_Sound_setMusicVolume is an undefined reference
Error! E2028: dRally_Sound_setEffectsVolume is an undefined reference
Error! E2028: dRally_Sound_stop is an undefined reference
Error! E2028: dRally_Sound_getPosition is an undefined reference
Error! E2028: dRally_Sound_init is an undefined reference
Error! E2028: dRally_Sound_quit is an undefined reference
Error! E2028: dRally_Sound_adjustEffect is an undefined reference
*/
#include "drally.h"
#include "draudio.h"
#include "drmemory.h"
#include "drencryption.h"
#include "bpa.h"

#define __BOUNDS(v, l, h) 	((v)<(l)?(l):(v)>(h)?(h):(v))

typedef enum { NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2 } TrackerType;

#pragma pack(1)
typedef struct sampledata_s {
	__POINTER__	start_p;
	__POINTER__ 	end_p;
	__POINTER__ 	loopstart_p;
	__POINTER__ 	loopend_p;
	__BYTE__ 	flags;
} sampledata_t;

typedef struct samplelib_s {
	int 			n_samples;
	int 			n_msx_samples;
	int 			n_sfx_samples;
	__POINTER__ 			header_alloc;
	__POINTER__			data_alloc;
	__POINTER__ 			write_p;
	sampledata_t * 	samples;
	int *			samples_volume;
	int * 			samples_frequency;
} samplelib_t;

typedef struct sound_mod_s {
	int 	type;
	int 	channels;
	int 	samples;
	__POINTER__ 	data;
	__DWORD__ 	size;
} sound_mod_t;

typedef struct sound_s {
	int 			channels;
	sound_mod_t		msx;
	sound_mod_t 	sfx;
} sound_t;

typedef struct music_s {
    __BYTE__        ch_map[32];
    __DWORD__ *     c2spd;
    __POINTER__*     patterns;
    __BYTE__ *      ch_settings;
    __BYTE__ *	    orders;
    __BYTE__ *      panning;
    __BYTE__ *      volume;
    __POINTER__      s3m_p;
    __WORD__        n_patterns;
    __BYTE__        n_orders;
    __BYTE__        tempo;
    __BYTE__        global_volume;
    __BYTE__        speed;
} music_t;

extern music_t Music;
extern sound_t Sound;
extern samplelib_t SampleLib;

extern __DWORD__ SOUND_SAMPLES;
extern __BYTE__ SOUND_LOADED;
extern __BYTE__ SOUND_PLANES;
__BYTE__ SOUND_PLAYING = 0;
extern __BYTE__ SOUND;
extern __WORD__  SOUND_SAMPLERATE;
extern __DWORD__ MASTER_VOLUME;
extern __DWORD__ MSX_VOLUME;
extern __DWORD__ SFX_VOLUME;
extern __DWORD__ ___68910h_offset[32];
extern __WORD__  ___688d0h_sample_id[32];
extern __DWORD__ ___68990h[32];
extern __DWORD__ ___68a10h[32];
__WORD__ ___24e750h[32];
extern __DWORD__ ___68a90h[32];
extern __BYTE__ (*___68d48h)[0x20];
extern int (*___68d40h)[0x100];
extern double s3m_TickDuration_s;
extern __BYTE__ * ___19a464h;

extern int * ___68d34h_R_BFR;
extern int * ___68d38h_L_BFR;


void audio_s16_stereo_cb(__POINTER__, unsigned char *, unsigned int);
void SET_AUDIO_DATA_CB(void_cb);
void DO_NOTHING(void);
void ___65788h_updateVolume_cdecl(void);
void dRally_System_addExitCallback(void_cb);
void dRally_System_removeExitCallback(void_cb);
__DWORD__ ___71a44h_cdecl(void);
__BYTE__ ___71a88h_cdecl(__DWORD__);
__DWORD__ MULSHIFT(__DWORD__, __DWORD__);
void ___68c42h_cdecl(void);
void ___685a4h_createPlanes_cdecl(void);
void ___6ef2ch_init(void);
void ___6ef2ch(void);

SDL_AudioDeviceID audio_dev = 0;


void dRally_Sound_init(__BYTE__ sound){

	SDL_AudioSpec a;
	SDL_AudioSpec b;

	if((SOUND = !!sound)){

		if(!audio_dev){

			SDL_memset(&a, 0, sizeof(a));
			a.freq = SOUND_SAMPLERATE;
			a.format = AUDIO_S16SYS;
			a.channels = 2;
			a.samples = SOUND_SAMPLES;
			a.callback = (SDL_AudioCallback)&audio_s16_stereo_cb;
			a.userdata = NULL;

			if(SDL_InitSubSystem(SDL_INIT_AUDIO)){
				
				SDL_Log("Failed to init audio subsystem: %s", SDL_GetError());
			}

			printf("[dRally.SOUND] Opening audio device.\n");
			audio_dev = SDL_OpenAudioDevice(NULL, 0, &a, &b, 0);

			if(audio_dev == 0){
				
				SOUND = 0;
				SDL_Log("Failed to open audio: %s", SDL_GetError());
			}
			else {
				printf("[dRally.SOUND] Audio opened: %d hz, %d channels, %d samples\n", b.freq, b.channels, b.samples);
			}
		}
	}
}

void dRally_Sound_quit(void){

	if(audio_dev){

		printf("[dRally.SOUND] Closing audio device.\n");

		SDL_PauseAudioDevice(audio_dev, 1);
		SDL_CloseAudioDevice(audio_dev);
	}
}

// 00065710h
void dRally_Sound_setMasterVolume(__DWORD__ vol){

	if(SOUND&&SOUND_LOADED){
	
		MASTER_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

// 0006572ch
void dRally_Sound_setMusicVolume(__DWORD__ vol){

	if(SOUND&&SOUND_LOADED){
	
		MSX_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

// 00065770h
void dRally_Sound_setEffectsVolume(__DWORD__ vol){

	if(SOUND&&SOUND_LOADED){

		SFX_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

// 000649a8h
void dRally_Sound_stop(void){

	if(SOUND&&SOUND_LOADED&&SOUND_PLAYING){

		SET_AUDIO_DATA_CB(&DO_NOTHING);

		if(SOUND_PLANES){

			dRMemory_free((__POINTER__)___68d40h);
			dRMemory_free((__POINTER__)___68d34h_R_BFR);
			dRMemory_free((__POINTER__)___68d38h_L_BFR);
			dRMemory_free((__POINTER__)___68d48h);
			SOUND_PLANES = 0;
		}

		SOUND_PLAYING = 0;
	}

	dRally_System_removeExitCallback(dRally_Sound_stop);
}

// 00064a28h
void dRally_Sound_release(void){

	dRally_Sound_stop();

	if(SOUND_LOADED){

		if(Sound.msx.data){

			if(Sound.msx.type) dRMemory_free(___19a464h);

			dRMemory_free(Sound.msx.data);
			Sound.msx.data = 0;
		}

		if(Sound.sfx.data) Sound.sfx.data = 0;

		if(SampleLib.data_alloc){
		
			dRMemory_free(SampleLib.data_alloc);
			SampleLib.data_alloc = 0;
		}
		
		dRMemory_free(SampleLib.header_alloc);
		SampleLib.header_alloc = 0;
		SOUND_LOADED = 0;
	}

	dRally_System_removeExitCallback(dRally_Sound_release);
}

void ___58b20h(unsigned int err_n, ...);
void ___42944h(const char *err);
__BYTE__ * S3M_getHeaderOrderList(s3m_t * s3m);

void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch){

    int		n, size_s3m, size_xm;
	s3m_t *	musics_s3m;
	xm_t *	effects_xm;
	BPA * 	bpa;
	char 	err[0x50];

	printf("[dRally.SOUND] MSX: %s, SFX: %s\n", msx_f, sfx_f);

	dRally_Sound_release();

	bpa = bpa_open("MUSICS.BPA");

	bpa_search(bpa, msx_f);
	if((size_s3m = bpa_entry_size(bpa)) == 0){
        
        strcpy(err, "Problems with [");
        strcat(err, "MUSICS.BPA");
        strcat(err, "] ");
        strcat(err, msx_f);
        strcat(err, " file!");
		bpa_close(bpa);
        ___42944h(err);
    }
	else if((musics_s3m = (s3m_t *)dRMemory_alloc(size_s3m)) != (s3m_t *)0){
	
		bpa_read(bpa, (__POINTER__)musics_s3m);
		dREncryption_decodeCMF((__POINTER__)musics_s3m, size_s3m);
		musics_s3m->orderCount = SDL_SwapLE16(musics_s3m->orderCount);
		musics_s3m->instrumentCount = SDL_SwapLE16(musics_s3m->instrumentCount);
		musics_s3m->patternPtrCount = SDL_SwapLE16(musics_s3m->patternPtrCount);
		musics_s3m->flags = SDL_SwapLE16(musics_s3m->flags);
		musics_s3m->trackerVersion = SDL_SwapLE16(musics_s3m->trackerVersion);
		musics_s3m->sampleType = SDL_SwapLE16(musics_s3m->sampleType);
		musics_s3m->ptrSpecial = SDL_SwapLE16(musics_s3m->ptrSpecial);
		if(strncmp(musics_s3m->sig2, "SCRM", 4)) ___58b20h(0x28, msx_f);
    	if(S3M_getHeaderOrderList(musics_s3m)[0] == 0xff) ___58b20h(0x29, msx_f);
		__WORD__ *patterns = S3M_getHeaderPtrPatterns(musics_s3m);
		for (int i = 0; i < musics_s3m->patternPtrCount; i++) {
			patterns[i] = SDL_SwapLE16(patterns[i]);
			s3m_pattern_t* pattern = S3M_getPattern(musics_s3m, i);
			pattern->packed_len = SDL_SwapLE16(pattern->packed_len);
		}
		__WORD__* instruments = S3M_getHeaderPtrInstruments(musics_s3m);
		for (int i = 0; i < musics_s3m->instrumentCount; i++) {
			instruments[i] = SDL_SwapLE16(instruments[i]);
			s3m_pcm_t* pcm = &S3M_getInstrument(musics_s3m, i)->pcm;
			pcm->ptrDataL = SDL_SwapLE16(pcm->ptrDataL);
			pcm->length = SDL_SwapLE32(pcm->length);
			pcm->loopStart = SDL_SwapLE32(pcm->loopStart);
			pcm->loopEnd = SDL_SwapLE32(pcm->loopEnd);
			pcm->c2spd = SDL_SwapLE32(pcm->c2spd);
		}
	}

	bpa_search(bpa, sfx_f);
	if((size_xm = bpa_entry_size(bpa)) == 0){
        
        strcpy(err, "Problems with [");
        strcat(err, "MUSICS.BPA");
        strcat(err, "] ");
        strcat(err, sfx_f);
        strcat(err, " file!");
		bpa_close(bpa);
        ___42944h(err);
    }
	else if((effects_xm = (xm_t *)dRMemory_alloc(size_xm)) != (xm_t *)0){

		bpa_read(bpa, (__POINTER__)effects_xm);
		dREncryption_decodeCMF((__POINTER__)effects_xm, size_xm);
		effects_xm->version = SDL_SwapLE16(effects_xm->version);
		effects_xm->headerSize = SDL_SwapLE32(effects_xm->headerSize);
		effects_xm->songLength = SDL_SwapLE16(effects_xm->songLength);
		effects_xm->restartPosition = SDL_SwapLE16(effects_xm->restartPosition);
		effects_xm->channels = SDL_SwapLE16(effects_xm->channels);
		effects_xm->patterns = SDL_SwapLE16(effects_xm->patterns);
		effects_xm->instrumentCount = SDL_SwapLE16(effects_xm->instrumentCount);
		effects_xm->flags = SDL_SwapLE16(effects_xm->flags);
		effects_xm->defaultTempo = SDL_SwapLE16(effects_xm->defaultTempo);
		effects_xm->defaultBPM = SDL_SwapLE16(effects_xm->defaultBPM);
		if(strncmp(effects_xm->id, "Extended Module: ", 0x11)) ___58b20h(0x28, sfx_f);
		if(effects_xm->sig1 != 0x1a) ___58b20h(0x28, sfx_f);
		if(effects_xm->version < 0x104) ___58b20h(0x28, sfx_f);
		for (int i = 0; i < effects_xm->patterns; i++) {
			xm_pattern_t* pattern = XM_getPattern(effects_xm, i);
			pattern->header_size = SDL_SwapLE32(pattern->header_size);
			pattern->rows = SDL_SwapLE16(pattern->rows);
			pattern->packed_size = SDL_SwapLE16(pattern->packed_size);
		}
		for (int i = 0; i < effects_xm->instrumentCount; i++) {
			xm_instrument_t* inst = XM_getInstrument(effects_xm, i);
			inst->size = SDL_SwapLE32(inst->size);
			inst->n_samples = SDL_SwapLE16(inst->n_samples);
			inst->sample_header_size = SDL_SwapLE32(inst->sample_header_size);
			if (inst->n_samples > 0)
			{
				xm_sample_t* samp = XM_getInstrumentSamples(inst);
				samp->size = SDL_SwapLE32(samp->size);
				samp->loop_start = SDL_SwapLE32(samp->loop_start);
				samp->loop_length = SDL_SwapLE32(samp->loop_length);
				// TODO swap 16-bit samples?
			}
		}
	}

	bpa_close(bpa);

	dRAudio_load(musics_s3m, size_s3m, effects_xm, size_xm, num_ch);

	MASTER_VOLUME = MSX_VOLUME = SFX_VOLUME = 0x10000;
	___65788h_updateVolume_cdecl();
	dRally_System_addExitCallback(dRally_Sound_release);
}

// 000648d8h
void dRally_Sound_play(void){

	__DWORD__ 	i, n;

	if(SOUND&&SOUND_LOADED){
		
		___685a4h_createPlanes_cdecl();

		if(Sound.msx.data){

			if(Sound.msx.type&&!SOUND_PLAYING){

				Music.global_volume = ((s3m_t *)Sound.msx.data)->globalVolume;
				Music.tempo = ((s3m_t *)Sound.msx.data)->initialTempo;
				Music.speed = ((s3m_t *)Sound.msx.data)->initialSpeed;
				s3m_TickDuration_s = 2.5/Music.tempo;

				n = -1;
				i = -1;
				while(++i < 0x20){

					if(Music.ch_settings[i] > 0xf){

						Music.ch_map[i] = 0xff;
					}
					else {
						
						n++;
						___68a90h[n] = (Music.ch_settings[i] > 7) ? 0xc000 : 0x3000;
						if(Music.panning&&(Music.panning[i]&0x20)) ___68a90h[n] = (Music.panning[i]&0xf)<<0xc;
						Music.ch_map[i] = n;
					}
				}

				while(++n < 0x20) ___68a90h[n] = 0x8000;

				memset(___24e750h, 0xffffffff, 0x40);
				___6ef2ch_init();
				SET_AUDIO_DATA_CB(&___6ef2ch);
			}
		}
		else {

			___68c42h_cdecl();
			s3m_TickDuration_s = 0.06;

			n = -1;
			while(++n < 0x20) ___68a90h[n] = 0x8000;
		}

		SOUND_PLAYING = 1;
		dRally_System_addExitCallback(dRally_Sound_stop);
	}
}

// 000655b0h
void dRally_Sound_adjustEffect(__BYTE__ channel, __DWORD__ vol, __DWORD__ freq, __DWORD__ balance){

	if(SOUND&&SOUND_LOADED&&Sound.sfx.data&&channel){

		channel += Sound.msx.channels-1;

		if((channel < Sound.channels)&&(___24e750h[channel] != 0xffff)){

			___68990h[channel] = MULSHIFT(SampleLib.samples_frequency[___24e750h[channel]], freq);
			___68a10h[channel] = MULSHIFT(SampleLib.samples_volume[___24e750h[channel]], vol);
			___68a90h[channel] = balance;
		}
	}
}

// 000654d4h
void dRally_Sound_pushEffect(__BYTE__ sfx_channel, __BYTE__ n, __DWORD__ offset, __DWORD__ vol, __DWORD__ freq, __DWORD__ balance){

	__BYTE__ 	l_channel;

	if(SOUND&&SOUND_LOADED&&Sound.sfx.data&&sfx_channel){
		
		l_channel = sfx_channel+Sound.msx.channels-1;

		if((l_channel < Sound.channels)&&(n <= SampleLib.n_sfx_samples)){

			___68910h_offset[l_channel] = offset;
			___688d0h_sample_id[l_channel] = SampleLib.n_msx_samples+n;
			___24e750h[l_channel] = n;
			dRally_Sound_adjustEffect(sfx_channel, vol, freq, balance);
		}
	}
}

// 00065990h
void dRally_Sound_setSampleRate(__DWORD__ freq){

	SOUND_SAMPLERATE = __BOUNDS(freq, 0x1f40, 0xac44);
}

// 0006563ch
void dRally_Sound_freeEffectChannel(__BYTE__ ch_num){

	if(SOUND&&SOUND_LOADED&&Sound.sfx.data&&ch_num){

		ch_num += Sound.msx.channels-1;

		if(ch_num < Sound.channels) ___688d0h_sample_id[ch_num] = 0xffff;
	}

	___24e750h[ch_num] = 0xffff;
}

// 000658b0h
__DWORD__ dRally_Sound_getPosition(void){

	return (SOUND&&SOUND_LOADED&&Sound.msx.type) ? ___71a44h_cdecl() : 0xffffffff;
}

// 000658b8h
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n){

	return (SOUND&&SOUND_LOADED&&Sound.msx.type) ? ___71a88h_cdecl(pos_n) : 0;
}

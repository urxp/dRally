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

extern music_t Music;
extern sound_t Sound;
extern samplelib_t SampleLib;

extern dword SOUND_SAMPLES;
extern byte SOUND_LOADED;
extern byte SOUND_PLANES;
byte SOUND_PLAYING = 0;
extern byte SOUND;
extern word SOUND_SAMPLERATE;
extern dword MASTER_VOLUME;
extern dword MSX_VOLUME;
extern dword SFX_VOLUME;
extern dword ___68910h_offset[32];
extern word ___688d0h_sample_id[32];
extern dword ___68990h[32];
extern dword ___68a10h[32];
word ___24e750h[32];
extern dword ___68a90h[32];
extern __BYTE__ (*___68d48h)[0x20];
extern int (*___68d40h)[0x100];
extern double s3m_TickDuration_s;
extern byte * ___19a464h;

extern int * ___68d34h_R_BFR;
extern int * ___68d38h_L_BFR;


void audio_s16_stereo_cb(void *, unsigned char *, unsigned int);
void SET_AUDIO_DATA_CB(void_cb);
void DO_NOTHING(void);
void ___65788h_updateVolume_cdecl(void);
void dRally_System_addExitCallback(void_cb);
void dRally_System_removeExitCallback(dword);
dword ___71a44h_cdecl(void);
byte ___71a88h_cdecl(dword);
dword MULSHIFT(dword, dword);
void ___68c42h_cdecl(void);
void ___685a4h_createPlanes_cdecl(void);
void ___6ef2ch_init(void);
void ___6ef2ch(void);

SDL_AudioDeviceID audio_dev = 0;


void dRally_Sound_init(byte sound){

	SDL_AudioSpec a;
	SDL_AudioSpec b;

	if((SOUND = !!sound)){

		if(!audio_dev){

			SDL_memset(&a, 0, sizeof(a));
			a.freq = SOUND_SAMPLERATE;
			a.format = AUDIO_S16;
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
void dRally_Sound_setMasterVolume(dword vol){

	if(SOUND&&SOUND_LOADED){
	
		MASTER_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

// 0006572ch
void dRally_Sound_setMusicVolume(dword vol){

	if(SOUND&&SOUND_LOADED){
	
		MSX_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

// 00065770h
void dRally_Sound_setEffectsVolume(dword vol){

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

			dRMemory_free(___68d40h);
			dRMemory_free(___68d34h_R_BFR);
			dRMemory_free(___68d38h_L_BFR);
			dRMemory_free(___68d48h);
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
	else if((musics_s3m = dRMemory_alloc(size_s3m)) != (void *)0){
	
		bpa_read(bpa, musics_s3m);
		dREncryption_decodeCMF(musics_s3m, size_s3m);
		if(strncmp(musics_s3m->sig2, "SCRM", 4)) ___58b20h(0x28, msx_f);
    	if(S3M_getHeaderOrderList(musics_s3m)[0] == 0xff) ___58b20h(0x29, msx_f);
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
	else if((effects_xm = dRMemory_alloc(size_xm)) != (void *)0){

		bpa_read(bpa, effects_xm);
		dREncryption_decodeCMF(effects_xm, size_xm);
		if(strncmp(effects_xm->id, "Extended Module: ", 0x11)) ___58b20h(0x28, sfx_f);
		if(effects_xm->sig1 != 0x1a) ___58b20h(0x28, sfx_f);
		if(effects_xm->version < 0x104) ___58b20h(0x28, sfx_f);
	}

	bpa_close(bpa);

	dRAudio_load(musics_s3m, size_s3m, effects_xm, size_xm, num_ch);

	MASTER_VOLUME = MSX_VOLUME = SFX_VOLUME = 0x10000;
	___65788h_updateVolume_cdecl();
	dRally_System_addExitCallback(dRally_Sound_release);
}

// 000648d8h
void dRally_Sound_play(void){

	dword 	i, n;

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
void dRally_Sound_adjustEffect(byte channel, dword vol, dword freq, dword balance){

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
void dRally_Sound_pushEffect(byte sfx_channel, byte n, dword offset, dword vol, dword freq, dword balance){

	byte 	l_channel;

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
void dRally_Sound_setSampleRate(dword freq){

	SOUND_SAMPLERATE = __BOUNDS(freq, 0x1f40, 0xac44);
}

// 0006563ch
void dRally_Sound_freeEffectChannel(byte ch_num){

	if(SOUND&&SOUND_LOADED&&Sound.sfx.data&&ch_num){

		ch_num += Sound.msx.channels-1;

		if(ch_num < Sound.channels) ___688d0h_sample_id[ch_num] = 0xffff;
	}

	___24e750h[ch_num] = 0xffff;
}

// 000658b0h
dword dRally_Sound_getPosition(void){

	return (SOUND&&SOUND_LOADED&&Sound.msx.type) ? ___71a44h_cdecl() : 0xffffffff;
}

// 000658b8h
byte dRally_Sound_setPosition(dword pos_n){

	return (SOUND&&SOUND_LOADED&&Sound.msx.type) ? ___71a88h_cdecl(pos_n) : 0;
}

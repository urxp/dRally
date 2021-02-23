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

#define __BOUNDS(v, l, h) 	((v)<(l)?(l):(v)>(h)?(h):(v))

typedef enum { NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2 } TrackerType;

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
extern dword ___24e5c0h[32];
extern dword ___68910h[32];
extern word ___688d0h[32];
extern dword ___68990h[32];
extern dword ___68a10h[32];
word ___24e750h[32];
extern dword ___68a90h[32];
extern byte * ___68d48h;
extern dword * ___68d40h;
extern word ___68c40h;
extern byte * ___19a464h;


void audio_cb(void *, unsigned char *, int);
void SET_AUDIO_DATA_CB(void_cb);
void DO_NOTHING(void);
void ___65788h_updateVolume_cdecl(void);
void dRally_System_addExitCallback(dword);
void dRally_System_removeExitCallback(dword);
void ___67e48h_allocSounds_cdecl(TrackerType, const char *, TrackerType, const char *, int);
dword ___71a44h_cdecl(void);
byte ___71a88h_cdecl(dword);
dword MULSHIFT(dword, dword);
void ___68c42h_cdecl(void);
void ___685a4h_createPlanes_cdecl(void);
void ___6ef2ch(void);
void dRally_Memory_free(void *);

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
			a.callback = audio_cb;
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

			dRally_Memory_free(___68d40h);
			dRally_Memory_free(___68d48h);
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

			if(Sound.msx.type) dRally_Memory_free(___19a464h);

			dRally_Memory_free(Sound.msx.data);
			Sound.msx.data = 0;
		}

		if(Sound.sfx.data) Sound.sfx.data = 0;

		if(SampleLib.data_alloc){
		
			dRally_Memory_free(SampleLib.data_alloc);
			SampleLib.data_alloc = 0;
		}
		
		dRally_Memory_free(SampleLib.header_alloc);
		SampleLib.header_alloc = 0;
		SOUND_LOADED = 0;
	}

	dRally_System_removeExitCallback(dRally_Sound_release);
}

// 00064864h
void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch){

    int	n;

	printf("[dRally.SOUND] MSX: %s, SFX: %s\n", msx_f, sfx_f);

	dRally_Sound_release();
	___67e48h_allocSounds_cdecl(msx_t, msx_f, sfx_t, sfx_f, num_ch);
    n = -1; while(++n < 0x20) ___24e5c0h[n] = 0x10000;
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

				Music.global_volume = ((s3m_t *)Sound.msx.data)->g_volume;
				Music.tempo = ((s3m_t *)Sound.msx.data)->tempo;
				Music.speed = ((s3m_t *)Sound.msx.data)->speed;
				___68c40h = 0x7a12/Music.tempo;

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
				SET_AUDIO_DATA_CB(&___6ef2ch);
			}
		}
		else {

			___68c42h_cdecl();
			___68c40h = 0x2ee;

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

			___68910h[l_channel] = offset;
			___688d0h[l_channel] = SampleLib.n_msx_samples+n;
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

		if(ch_num < Sound.channels) ___688d0h[ch_num] = 0xffff;
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

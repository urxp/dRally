/*
Error! E2028: dRally_Audio_load is an undefined reference
Error! E2028: dRally_Audio_setSampleRate is an undefined reference
Error! E2028: dRally_Audio_play is an undefined reference
Error! E2028: dRally_Audio_playSoundEffect is an undefined reference
Error! E2028: ___6563ch_cdecl is an undefined reference
Error! E2028: ___64a28h_cdecl is an undefined reference
Error! E2028: dRally_Audio_setMasterVolume is an undefined reference
Error! E2028: dRally_Audio_setPosition is an undefined reference
Error! E2028: dRally_Audio_setMusicVolume is an undefined reference
Error! E2028: dRally_Audio_setEffectVolume is an undefined reference
Error! E2028: ___649a8h_cdecl is an undefined reference
Error! E2028: ___68284h_cdecl is an undefined reference
Error! E2028: ___658d0h_cdecl is an undefined reference
Error! E2028: ___655b0h is an undefined reference
*/
#include <stdio.h>
#include <SDL2/SDL.h>

#define SOUND_SAMPLES 	512

typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;


SDL_AudioDeviceID audio_dev = NULL;

void ___58b20h(int n, ...);

extern byte SOUND_TYPE;
extern byte ___19a27bh;
extern dword MASTER_VOLUME;
extern dword MSX_VOLUME;
extern dword SFX_VOLUME;
void ___65788h_updateVolume_cdecl(void);

void dRally_Audio_setMasterVolume(dword vol){

	if(SOUND_TYPE&&___19a27bh){
	
		MASTER_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

void dRally_Audio_setMusicVolume(dword vol){

	if(SOUND_TYPE&&___19a27bh){
	
		MSX_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

void dRally_Audio_setEffectVolume(dword vol){

	if(SOUND_TYPE&&___19a27bh){

		SFX_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}




void ___691deh_cdecl(dword, dword, dword);

void ___68d07h(void);

void audio_cb(void * udata, unsigned char * stream, unsigned int length){

	___691deh_cdecl(length >> 2, length >> 2, stream);
}

void ___77741h_cdecl(void){

}

extern byte StereoSound;

void ___7792dh_setStereo_cdecl(void){

}

extern byte SOUND_DMA;
extern byte SOUND_IRQ;
extern word SOUND_ADDR;
extern word SOUND_SAMPLERATE;
extern byte ___688c5h;
extern dword ___688c8h;

void ___7c6d4h_cdecl(dword, dword, dword, dword, dword, dword);

void ___771f4h_SB16_init_cdecl(void){

	if(SOUND_TYPE){

		___688c8h = (0x6000*___688c5h)/25600;
		//___688c8h = 96;

		___7c6d4h_cdecl(SOUND_SAMPLES, (StereoSound = 1), 1, 0, 0, 0xff);
	}
}

void ___77664h(void){

}

extern byte ___19a278h;
extern byte ___19a27ah;
void ___775f1h_cdecl(void);

void ___685a4h_cdecl(void){

	if(!___19a278h){

		if(SOUND_TYPE){
		
			___771f4h_SB16_init_cdecl();
			___775f1h_cdecl();
		}

		___19a278h = 1;
		___19a27ah = 0;
	}
}

extern dword MSX_struct_content_ptr;
extern dword MSX_struct_type;
extern dword ___68a90h[];
extern word ___68c40h;
extern byte ___19a280h;
extern byte ___19a281h;

void ___68c42h_cdecl(void);
void ___718ech_cdecl(void);

void ___6815ch_cdecl(void){

	dword 	n;

	if(___19a27bh){

		if(MSX_struct_content_ptr){
			if(MSX_struct_type) ___718ech_cdecl();
		}
		else {

			___68c42h_cdecl();
			___68c40h = 0x2ee;

			n = -1;
			while(++n < 0x20) ___68a90h[n] = 0x8000;

			___685a4h_cdecl();

			___19a280h = 1;
			___19a281h = 0;
		}
	}
}

extern dword SFX_struct_content_ptr;
extern dword ___24e5c0h[];
extern dword ___68bb0h[];
extern dword ___19a279h;

void ___65788h_updateVolume_cdecl(void){

	int 	n;
	dword 	eax;

	n = -1;
	
	if(SFX_struct_content_ptr == 0){

		while(++n < 0x20){

			eax = ((long long)MASTER_VOLUME*(long long)MSX_VOLUME) >> 16;
			___68bb0h[n] = ((long long)eax*(long long)___24e5c0h[n]) >> 16;
		}
	}
	else {

		while(n++ < (((int)___19a279h) >> 0x18)){

			eax = ((long long)MASTER_VOLUME*(long long)MSX_VOLUME) >> 16;
			___68bb0h[n] = ((long long)eax*(long long)___24e5c0h[n]) >> 16;
		}

		while(n < 0x20){

			___68bb0h[n++] = ((long long)MASTER_VOLUME*(long long)SFX_VOLUME) >> 16;
		}
	}
}

void ___STOREDWORD(dword * dst, dword d, dword n){

	while(n--) *dst++ = d;
}

void ___64a28h_cdecl(void);
void ___649a8h_cdecl(void);
void ___680c8h_cdecl(void);
void ___5fff2h_cdecl(dword);
void ___6000fh_cdecl(dword);
void ___67e48h_allocSounds_cdecl(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);

extern void * S3M_CALLBACK;
void SET_S3M_CB_cdecl(dword cb){
	
	S3M_CALLBACK = cb;
}  

void dRally_Audio_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch){

   	SDL_AudioSpec a;
	SDL_AudioSpec b;

	if(!audio_dev){
		//SDL_memset(&a, 0, sizeof(a));
		SDL_zero(a);
		a.freq = SOUND_SAMPLERATE;
		a.format = AUDIO_S16;
		a.channels = 2;
		a.samples = SOUND_SAMPLES;
		a.callback = audio_cb;
		a.userdata = NULL;

		SDL_InitSubSystem(SDL_INIT_AUDIO);

		printf("[dRally.SOUND] Opening audio device.\n");
		audio_dev = SDL_OpenAudioDevice(NULL, 0, &a, &b, 0);

		if(audio_dev == 0){
			
			SDL_Log("Failed to open audio: %s", SDL_GetError());
		}
		else {
			printf("[dRally.SOUND] Audio opened: %d hz, %d channels, %d samples\n", b.freq, b.channels, b.samples);
		}
	}
	else SDL_PauseAudioDevice(audio_dev, 1);

	printf("[dRally.SOUND] MSX: %s, SFX: %s\n", msx_f, sfx_f);

	___649a8h_cdecl();
	___680c8h_cdecl();
	___6000fh_cdecl(___64a28h_cdecl);
	___67e48h_allocSounds_cdecl(msx_t, msx_f, sfx_t, sfx_f, num_ch);
	___STOREDWORD(___24e5c0h, 0x10000, 0x20);
	MASTER_VOLUME = MSX_VOLUME = SFX_VOLUME = 0x10000;
	___65788h_updateVolume_cdecl();
	___5fff2h_cdecl(___64a28h_cdecl);
}

void RESTORE_SOUND_DEFAULTS(void){

}

extern byte ___199ff4h;
extern dword ___199ff8h;
extern dword ___24e640h;

void ___6879ch_cdecl(void);
void ___68d01h_cdecl(dword);
void dRally_Memory_free(dword);

void dRally_Audio_play(void){

	if(___199ff4h){

		___199ff4h = 0;
		___68d01h_cdecl(___68d07h);
		dRally_Memory_free(___199ff8h);
		___199ff8h = 0;
		dRally_Memory_free(___24e640h);
		___24e640h = 0;
	}
	
	___6879ch_cdecl();

	if(SOUND_TYPE&&___19a27bh){
		
		if(audio_dev) SDL_PauseAudioDevice(audio_dev, 0);

		___6815ch_cdecl();
		___5fff2h_cdecl(___649a8h_cdecl);
	}
}


extern dword ___68c3ch;
extern byte ___68b10h[];
extern word ___688d0h[];
extern dword ___68910h[];
extern dword ___68990h[];
extern dword ___68a10h[];
extern byte ___19a27ch;
extern word ___24e7a0h;
extern word ___19a27eh;
extern dword * ___24e79ch;
extern dword * ___24e798h;
extern word ___24e750h[];

void dRally_Audio_playSoundEffect(byte channel, byte n, dword unk, 
						dword a0, dword a1, dword a2){

	if(SOUND_TYPE == 0) return;
	if(___19a27bh == 0) return;
	if(SFX_struct_content_ptr == 0) return;
	if(!channel) return;
	channel += ___19a27ch;
	if(channel > ___68c3ch) return;
	if(n > (short)___24e7a0h) return;

	___68910h[channel] = unk;
	___688d0h[channel] = ___19a27eh+n;
	___68990h[channel] = ((long long)___24e79ch[n] * (long long)a1) >> 16;
	___68a10h[channel] = ((long long)___24e798h[n] * (long long)a0) >> 16;
	___24e750h[channel] = n;
	___68b10h[channel] = 0;
	___68a90h[channel] = a2;
}

void ___71a38h_cdecl(void);
extern dword ___24e794h;

void ___680c8h_cdecl(void){

	if(audio_dev) SDL_PauseAudioDevice(audio_dev, 1);

	if(___19a27bh){

		if(MSX_struct_content_ptr){

			if(MSX_struct_type){
			
				___71a38h_cdecl();
			}

			dRally_Memory_free(MSX_struct_content_ptr);
			MSX_struct_content_ptr = 0;
		}

		if(SFX_struct_content_ptr) SFX_struct_content_ptr = 0;

		if(___24e794h){
		
			dRally_Memory_free(___24e794h);
			___24e794h = 0;
		}
		
		dRally_Memory_free(___24e79ch);
		___19a27bh = 0;
	}
}


void dRally_Audio_setSampleRate(dword freq){

	if(freq < 0x1f40) freq = 0x1f40;
	if(freq > 0xac44) freq = 0xac44;

	SOUND_SAMPLERATE = freq;
}

byte ___71a88h(dword);

byte dRally_Audio_setPosition(dword pos_n){

	return MSX_struct_type ? ___71a88h(pos_n) : 0;
}

void ___6563ch_cdecl(dword ch_num){

	if(SOUND_TYPE&&___19a27bh){

		if(SFX_struct_content_ptr&&ch_num){

			ch_num += ___19a27ch;

			if(ch_num <= ___68c3ch) ___688d0h[ch_num] = 0xffff;
		}
	}

	ch_num &= 0xff;
	___24e750h[ch_num] = 0xffff;
	___68b10h[ch_num] = 1;
}

void ___653c8h_cdecl(void);
void ___68718h_cdecl(void);

void ___64a28h_cdecl(void){

	___653c8h_cdecl();

	if(SOUND_TYPE&&___19a27bh){

		if(___19a280h){

			SET_S3M_CB_cdecl(___68d07h);
			___68718h_cdecl();
			___19a280h = 0;
		}
	}

	___6000fh_cdecl(___649a8h_cdecl);
	___680c8h_cdecl();
	___6000fh_cdecl(___64a28h_cdecl);
}

void ___649a8h_cdecl(void){

	if(___199ff4h){

		___199ff4h = 0;
		___68d01h_cdecl(___68d07h);
		dRally_Memory_free(___199ff8h);
		___199ff8h = 0;
		dRally_Memory_free(___24e640h);
		___24e640h = 0;
	}

	if(SOUND_TYPE&&___19a27bh){

		if(___19a280h){

			SET_S3M_CB_cdecl(___68d07h);
			___68718h_cdecl();
			___19a280h = 0;
		}
	}

	___6000fh_cdecl(___649a8h_cdecl);
}

dword ___71a44h_cdecl(void);

dword ___68284h_cdecl(void){

	return MSX_struct_type ? ___71a44h_cdecl() : 0xffffffff;
}

void ___658d0h_cdecl(byte sound, word addr, byte irq_n, byte dma_ch){

	SOUND_ADDR = addr;
	SOUND_IRQ = irq_n;
	SOUND_DMA = dma_ch;
	SOUND_TYPE = !!sound;
}

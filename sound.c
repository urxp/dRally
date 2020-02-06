/*
Error! E2028: dRally_Audio_load is an undefined reference
Error! E2028: dRally_Audio_setSampleRate is an undefined reference
Error! E2028: dRally_Audio_play is an undefined reference
Error! E2028: dRally_Audio_pushSoundEffect is an undefined reference
Error! E2028: dRally_Audio____6563ch is an undefined reference
Error! E2028: dRally_Audio____64a28h is an undefined reference
Error! E2028: dRally_Audio_setMasterVolume is an undefined reference
Error! E2028: dRally_Audio_setPosition is an undefined reference
Error! E2028: dRally_Audio_setMusicVolume is an undefined reference
Error! E2028: dRally_Audio_setEffectVolume is an undefined reference
Error! E2028: dRally_Audio____649a8h is an undefined reference
Error! E2028: dRally_Audio____68284h is an undefined reference
Error! E2028: dRally_Audio____658d0h is an undefined reference
Error! E2028: dRally_Audio____655b0h is an undefined reference
*/
#include <stdio.h>
#include <SDL2/SDL.h>

#define SOUND_SAMPLES 	512

#pragma pack(1)

typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;

#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))

#define X(r)	(*(word *)&r)
#define H(r)	(*((byte *)&r + 1))
#define L(r)	(*(byte *)&r)

typedef enum {
	NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

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

void ___68d07h(void){};

void audio_cb(void * udata, unsigned char * stream, unsigned int length){

	___691deh_cdecl(length >> 2, NULL, stream);
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
extern byte ___19a27ch;

void ___7c6d4h_cdecl(dword, dword, dword, dword, byte, byte);

void ___771f4h_SB16_init_cdecl(void){

	if(SOUND_TYPE){

		___688c8h = (24*___688c5h)/25;
		//___688c8h = 96; //? 100;

		___7c6d4h_cdecl(SOUND_SAMPLES, (StereoSound = 1), 1, 0, 0, 0xff);
	}
}

void ___77664h(void){

}

extern byte ___19a278h;
extern byte ___19a27ah;

void ___685a4h_cdecl(void){

	if(!___19a278h){

		if(SOUND_TYPE){
		
			___771f4h_SB16_init_cdecl();
		}

		___19a278h = 1;
		___19a27ah = 0;
	}
}

extern dword MSX_struct_content_ptr;
extern dword MSX_struct_type;
extern dword SFX_struct_type;
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
extern int ___19a279h;

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

		while(n++ < (___19a279h >> 0x18)){

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

void dRally_Audio____64a28h(void);
void dRally_Audio____649a8h(void);
void ___680c8h_cdecl(void);
void dRally_System_addExitCallback(dword);
void dRally_System_removeExitCallback(dword);
void ___67e48h_allocSounds_cdecl(TrackerType msx_t, const char * msx_f, TrackerType sfx_t, const char * sfx_f, int num_ch);

extern void (*AUDIO_DATA_CB)(void);
void SET_AUDIO_DATA_CB(void (*cb)(void)){
	
	AUDIO_DATA_CB = cb;
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

	dRally_Audio____649a8h();
	___680c8h_cdecl();
	dRally_System_removeExitCallback(dRally_Audio____64a28h);
	___67e48h_allocSounds_cdecl(msx_t, msx_f, sfx_t, sfx_f, num_ch);
	___STOREDWORD(___24e5c0h, 0x10000, 0x20);
	MASTER_VOLUME = MSX_VOLUME = SFX_VOLUME = 0x10000;
	___65788h_updateVolume_cdecl();
	dRally_System_addExitCallback(dRally_Audio____64a28h);
}

void RESTORE_SOUND_DEFAULTS(void){

}

extern byte ___199ff4h;
extern dword ___199ff8h;
extern dword ___24e640h;

void ___6879ch_cdecl(void);
void dRally_Memory_free(dword);

void dRally_Audio_play(void){

	if(___199ff4h){

		___199ff4h = 0;
		dRally_Memory_free(___199ff8h);
		___199ff8h = 0;
		dRally_Memory_free(___24e640h);
		___24e640h = 0;
	}
	
	___6879ch_cdecl();

	if(SOUND_TYPE&&___19a27bh){
		
		if(audio_dev) SDL_PauseAudioDevice(audio_dev, 0);

		___6815ch_cdecl();
		dRally_System_addExitCallback(dRally_Audio____649a8h);
	}
}


extern dword ___68c3ch;
extern byte ___68b10h[];
extern word ___688d0h[];
extern dword ___68910h[];
extern dword ___68990h[];
extern dword ___68a10h[];
extern word ___24e7a0h;
extern word ___19a27eh;
extern int * ___24e79ch;
extern int * ___24e798h;
extern word ___24e750h[];

void dRally_Audio_pushSoundEffect(byte channel, byte n, dword unk, 
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

byte ___71a88h_cdecl(dword);

byte dRally_Audio_setPosition(dword pos_n){

	return MSX_struct_type ? ___71a88h_cdecl(pos_n) : 0;
}

void dRally_Audio____6563ch(byte ch_num){

	if(SOUND_TYPE&&___19a27bh&&SFX_struct_content_ptr&&ch_num){

		ch_num += ___19a27ch;

		if(ch_num <= ___68c3ch) ___688d0h[ch_num] = 0xffff;
	}

	___24e750h[ch_num] = 0xffff;
	___68b10h[ch_num] = 1;
}

void ___653c8h_cdecl(void);
void ___68718h_cdecl(void);

void dRally_Audio____64a28h(void){

	___653c8h_cdecl();

	if(SOUND_TYPE&&___19a27bh){

		if(___19a280h){

			SET_AUDIO_DATA_CB(___68d07h);
			___68718h_cdecl();
			___19a280h = 0;
		}
	}

	dRally_System_removeExitCallback(dRally_Audio____649a8h);
	___680c8h_cdecl();
	dRally_System_removeExitCallback(dRally_Audio____64a28h);
}

void dRally_Audio____649a8h(void){

	if(___199ff4h){

		___199ff4h = 0;
		dRally_Memory_free(___199ff8h);
		___199ff8h = 0;
		dRally_Memory_free(___24e640h);
		___24e640h = 0;
	}

	if(SOUND_TYPE&&___19a27bh){

		if(___19a280h){

			SET_AUDIO_DATA_CB(___68d07h);
			___68718h_cdecl();
			___19a280h = 0;
		}
	}

	dRally_System_removeExitCallback(dRally_Audio____649a8h);
}

dword ___71a44h_cdecl(void);

dword dRally_Audio____68284h(void){

	return MSX_struct_type ? ___71a44h_cdecl() : 0xffffffff;
}

void dRally_Audio____658d0h(byte sound, word addr, byte irq_n, byte dma_ch){

	SOUND_ADDR = addr;
	SOUND_IRQ = irq_n;
	SOUND_DMA = dma_ch;
	SOUND_TYPE = !!sound;
}

void * load_s3m(dword, const char *, dword *, dword *);
void * load_xm(dword, const char *, dword *, dword *);
void ___677cch_cdecl(dword, dword, dword);
dword ___716fch(dword, dword, dword);
dword ___75840h(dword, dword, dword);
void ___67bbch(dword, dword, dword, dword);
void * dRally_Memory_resize(void * mem, dword size);

extern int ___24e7a0h_int;
extern word ___24e7a2h;
extern byte ___24e7a4h;
extern byte ___19a27dh;
extern dword ___24e790h;
extern int ___24e79eh;
extern byte ___68d58h;

#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))

#define X(r)	(*(word *)&r)
#define H(r)	(*((byte *)&r + 1))
#define L(r)	(*(byte *)&r)

void ___67e48h_allocSounds_cdecl(TrackerType msx_t, const char * msx_f, TrackerType sfx_t, const char * sfx_f, int num_ch){

	dword 	msx_size, sfx_size, msx_instr_n, sfx_instr_n;


	if(msx_t == NO_TRACKER) msx_f = (void *)0;
	if(sfx_t == NO_TRACKER) sfx_f = (void *)0;
	if(msx_f == (void *)0) msx_t = NO_TRACKER;

	if(sfx_f == (void *)0){
		
		sfx_t = NO_TRACKER;
		num_ch = 0;
	}
	else if(num_ch < 1) num_ch = 1;

	if((msx_f == (void *)0)&&(sfx_f == (void *)0)) return;

	MSX_struct_type = msx_t;

	if(MSX_struct_type != NO_TRACKER){

		MSX_struct_content_ptr = load_s3m(1, msx_f, &msx_size, &msx_instr_n);
	}

	SFX_struct_type = sfx_t;

	switch(SFX_struct_type){
	case SCREAM_TRACKER_3:
		SFX_struct_content_ptr = load_s3m(0, sfx_f, &sfx_size, &sfx_instr_n);
		break;
	case FAST_TRACKER_2:
		SFX_struct_content_ptr = load_xm(0, sfx_f, &sfx_size, &sfx_instr_n);
		break;
	default:
		SFX_struct_type = NO_TRACKER;
	}

	___677cch_cdecl(msx_size+sfx_size, msx_instr_n+sfx_instr_n, 0);

	___19a27ch = 0xff;

	if(MSX_struct_type != NO_TRACKER){

		___19a27ch = ___716fch(1, MSX_struct_content_ptr, msx_size) - 1;
	}
	
	___19a27eh = ___24e7a4h;
	___24e7a2h = ___24e7a4h;
	___19a27dh = num_ch;

	switch(SFX_struct_type){
	case SCREAM_TRACKER_3:
		___716fch(0, SFX_struct_content_ptr, sfx_size);
		break;
	case FAST_TRACKER_2:
		___75840h(0, SFX_struct_content_ptr, sfx_size);
		break;
	default:
		break;
	}

	___68c3ch = (___19a279h >> 0x18) + ___19a27dh;

	dRally_Memory_resize(___24e794h, ___24e790h - ___24e794h);

	___24e7a0h = ___24e7a4h - ___24e7a2h;

	if(SFX_struct_content_ptr) dRally_Memory_free(SFX_struct_content_ptr);

	if(!(SOUND_TYPE&&___68d58h)){

		___67bbch(1, 0, 0, (___24e79eh >> 0x10)+(___24e7a0h_int >> 0x10));
	}
	
	___19a27bh = 1;
}

extern char ___185114h[];
extern dword ___24e868h;

void * load_musics_bpa(dword, dword);
dword entrysize_musics_bpa(dword);

typedef struct s3m_s {
	char 	mod_name[0x1c];	// +0
	byte 	unk0[6];		// +1ch
	word 	instruments;	// +22h
	byte 	unk1[8];		// +24h;
	byte 	scrm[4];		// +2ch
	byte 	unk3[0x30];		// +30h
	byte 	orders[];		// +60h
} s3m_t;

void * load_s3m(dword arg0, const char * f_name, dword * size, dword * instr_n){

	s3m_t *	s3m;

	s3m = load_musics_bpa(f_name, 1);

	if(strncmp(s3m->scrm, ___185114h, 4)) ___58b20h(0x28, f_name);
	
	//printf("[dRally.Audio] S3M module: %s\n", s3m->mod_name);

	if(arg0){
	
		if(s3m->orders[0] == 0xff) ___58b20h(0x29, f_name);
		___24e868h = s3m;
	}

	*size = entrysize_musics_bpa(f_name);
	*instr_n = s3m->instruments;

	return s3m;
}

extern char ___18511ch[];
extern dword ___24e9bch;

typedef struct xm_s {
	char 	id_text[0x11];		// +0
	char 	mod_name[0x14];		// +11h
	char 	__1ah;				// +25h
	byte 	unk1[0x14];			// +26h
	word 	version;			// +3ah
	dword 	header_size;		// +3ch
	word 	song_length;		// +40h
	byte 	unk2[4];			// +42h
	word 	patterns;			// +46h
	word 	instruments;		// +48h
	byte 	unk3[];				// +4ah;
} xm_t;

void * load_xm(dword ebp, const char * f_name, dword * size, dword * instr_n){

	dword 	eax, ebx, ecx, esi, edx;
	xm_t *	xm;


	xm = load_musics_bpa(f_name, 1);

	if(strncmp(xm->id_text, ___18511ch, 0x11)) ___58b20h(0x28, f_name);

	if(xm->__1ah != 0x1a) ___58b20h(0x28, f_name);
	if(xm->version < 0x104) ___58b20h(0x28, f_name);

	*size = entrysize_musics_bpa(f_name);

	if(ebp){

		if(xm->song_length == 0) ___58b20h(0x29, f_name);
		if(xm->patterns == 0) ___58b20h(0x29, f_name);

		xm->__1ah = 0;
		___24e9bch = xm->mod_name;
		*instr_n = 0;
		eax = (void *)&xm->header_size + xm->header_size;

		edx = 0;
		while((int)edx < xm->patterns){

			eax += D(eax)+W(eax+7);
			edx++;
		}

		esi = 0;
		while(1){

			if((int)esi >= xm->instruments) return xm;
			edx = W(eax+0x1b);
			ecx = D(eax+0x1d);
			*instr_n += edx;
			eax += D(eax);

			ebx = 0;
			while(1){

				edx--;
				if(edx == 0xffffffff){

					esi++;
					eax += ebx;
					break;
				}
				else {
				
					ebx += D(eax);
					eax += ecx;
				}
			}
		}
	}

	*instr_n = xm->instruments;

	return xm;
}

extern dword ___68d94h[];
extern dword ___68e14h[];
extern byte ___68e94h[];
extern dword ___68d70h;

void ___691b8h_cdecl(void){

	int 	n;

	n = -1;
	while(++n < 0x20){

		___68d94h[n] = 0;
		___68e14h[n] = 0;
		___68e94h[n] = 0;
	}

	___68d70h = 0;
}

extern dword * ___68d40h;

void ___6bd2eh_cdecl(void){

	int 	k, l, m, n;

	m = (n = -1) + 1;
	while(m++ < 0x80){

		l = m * ___688c8h;
		k = -1;
		while(++k < 0x100){

			___68d40h[++n] = ((k - 0x80) * l) >> 6;
		}
	}
}

extern dword ___68d30h;
extern dword ___68d34h;
extern dword ___68d38h;
extern dword ___68d3ch;
extern dword ___68d44h;
extern dword ___68d48h;
extern byte ___68d5ch;
extern byte ___68d5dh;
extern byte ___68d5eh;

void * dRally_Memory_alloc(dword, dword);

void ___7c6d4h_cdecl(dword eax, dword edx, dword ebx, dword ecx, byte stk1, byte stk2){

	int 	i, j, k, l, m, n;
	byte * 	bp;


	___691b8h_cdecl();

	___68d3ch = eax<<2;
	eax = dRally_Memory_alloc(0x23e00, 1);
	___68d40h = eax;

	memset(eax, 0, 0x23e00);

	___68d44h = eax+0x20000;
	___68d5eh = ecx;
	___68d38h = eax+0x22f00;
	___68d5ch = edx;
	___68d34h = eax+0x22000;
	___68d5dh = ebx;

	ebx = ___68d44h;
	while(1){

		eax = ___68d44h;
		eax += 0xf81;
		if(ebx == eax) break;
		B(ebx++) = stk1;
	}

	ecx = 0;
	if((stk1 == 0)&&(stk2 == 0xff)){

		while(++ecx < 0xfe) B(ebx++) = ecx;
	}
	else {

		while(++ecx < 0xfe) B(ebx++) = stk1+(stk2-stk1)*ecx/0xff;
	}

	while(1){

		eax = ___68d44h;
		eax += 0x2000;
		if(ebx == eax) break;
		B(ebx++) = stk2;
	}

	bp = dRally_Memory_alloc(0x3fe0, 1);

	n = -1;
	while(++n < 0x1ff){		// (0, 510)	... 511

		k = -1;
		while(++k < 0x20){	// (0, 31) ... 32
			
			bp[0x20*n+k] = (k*(n-0xff)+0x10)>>5;
		}
	}

	___68d48h = bp;
	___68d44h += 0x1000;

	___6bd2eh_cdecl();

	___68d30h = 0x56220000 / SOUND_SAMPLERATE;
}

void ___653c8h_cdecl(void){

	if(___199ff4h){

		___199ff4h = 0;
		dRally_Memory_free(___199ff8h);
		___199ff8h = 0;
		dRally_Memory_free(___24e640h);
		___24e640h = 0;
	}
}

void dRally_Audio____655b0h(byte channel, int a1, int a2, dword a3){

	if(SOUND_TYPE&&___19a27bh&&SFX_struct_content_ptr&&channel){

		channel += ___19a27ch;

		if((channel <= ___68c3ch)&&(___24e750h[channel] != 0xffff)){

			___68990h[channel] = ((long long)___24e79ch[___24e750h[channel]] * (long long)a2)>>0x10;
			___68a10h[channel] = ((long long)___24e798h[___24e750h[channel]] * (long long)a1)>>0x10;
			___68a90h[channel] = a3;
		}
	}
}

void ___68718h_cdecl(void){

	if(___19a278h){

		if(SOUND_TYPE){

			dRally_Memory_free(___68d40h);
			dRally_Memory_free(___68d48h);
		}
		
		___19a278h = 0;
	}
}

extern dword ___68c38h;

void ___677cch_cdecl(dword eax, dword edx, dword ebx){

	dword 	ecx, esi, edi, ebp;
	byte 	esp[8];

	edi = ___24e794h;
	esi = eax;
	ecx = edx;
	B(esp+4) = L(ebx);
	edx = eax;
	___24e794h = edi;
	eax = ecx*4;
	eax -= ecx;
	eax += eax;
	eax += edx;
	edx = 1;
	eax += 2;
	ebx = 2;
	eax = dRally_Memory_alloc(eax, edx);
	edx = 0;
	___24e794h = eax;
	memset(eax, edx, ebx);
	edi = ___24e794h;
	eax = edi+2;
	___24e790h = eax;
	H(eax) = 0;
	L(edx) = B(esp+4);
	___24e7a4h = H(eax);

	if(L(edx) == 0){

		ebx = ecx*8;
		eax = ecx*4;
		eax += ecx;
		eax <<= 2;
		edx = ecx+eax;	
		eax = ebx+8;
		eax += edx;
		edx = 1;
		esi = ecx*4;
		eax = dRally_Memory_alloc(eax, edx);
		edx = esi+4;
		___24e79ch = eax;
		eax += edx;
		___24e798h = eax;
		eax += edx;
		___68c38h = eax;

		if((int)ecx > 0){

			ebp = esi;
			D(esp) = esi;
			edx = 0;
			ebx = 0;

			while((int)edx < (int)ebp){

				ecx = D(esp);
				eax = ___68c38h;
				ecx += eax;
				ecx += ebx;
				edi = ___24e794h;
				D(edx+eax) = ecx;
				D(ecx) = edi;
				esi = D(edx+eax);
				D(esi+4) = edi;
				esi = D(edx+eax);
				D(esi+8) = edi;
				esi = D(edx+eax);
				D(esi+0xc) = edi;
				eax = D(edx+eax);
				edx += 4;
				ebx += 0x11;
				B(eax+0x10) = 0;
			}
		}
	}
}


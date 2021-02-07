#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	byte 	r;
	byte 	g;
	byte 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

	extern char ___1a0d60h[];
	extern byte VGA13_ACTIVESCREEN[];

	extern byte * DecodedFrame;
	extern byte * EncodedFrame;
	extern dword ___1a1f00h;
	extern byte * ___1a1f10h;
	extern byte * ___1a1f1ch;
	extern pal256_t ___1a0a60h;
	extern byte * ___1a1f18h;
	extern byte * ___1a1f14h;
	extern dword * ___1a1f24h;
	extern dword ___1a1f2ch;
	extern dword ___1a1f04h;
	extern dword LOC_RESET;
	extern dword LOC_END;
	extern dword ___1a1f30h;
	extern dword ___1a1f08h;
	extern byte ___1a2042h[];
	extern byte * ___1a1f28h;
	extern byte ___1a2149h;


void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);

void bpa_read(const char *, void *, const char *);
void bpk_decode4(dword, dword, void *, void *);
void bpk_decode2(void *, void *);

void ___606dfh(void);
void __VGA13_SETMODE(void);
void ___60466h(dword A, dword B);
void DISPLAY_CLEAR_PALETTE(void);
void __VGA13_PRESENTSCREEN__(void);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
byte ___5994ch(void);
dword __GET_FRAME_COUNTER(void);

void dRally_Sound_freeEffectChannel(byte ch_num);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_play(void);
void dRally_Sound_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);


static dword ___1859c8h = 0;
static dword ___1859cch = 0;
static dword read_p = 0;
static dword write_p = 0;
static dword ___185a0ch = 0;


static dword ___10784h(void){

	dword 	n, rslt;

	if(___1859cch == 0){

		if(___1859c8h == 0){

			___1859c8h = EncodedFrame[read_p++];
			___1a1f28h = ___1a2042h;

			n = -1;
			while(++n < ___1859c8h) ___1a2042h[n] = EncodedFrame[read_p++];
		}

		if(___1859c8h) ___1859c8h--;
		___1a2149h = *___1a1f28h++;
		___1859cch += 8;
	}

	rslt = ___1a2149h>>(8-___1859cch);

	while(___1859cch < ___1a1f2ch){

		if(___1859c8h == 0){

			___1859c8h = EncodedFrame[read_p++];
			___1a1f28h = ___1a2042h;

			n = -1;
			while(++n < ___1859c8h) ___1a2042h[n] = EncodedFrame[read_p++];
		}

		if(___1859c8h) ___1859c8h--;
		___1a2149h = *___1a1f28h++;
		___1859cch += 8;
		rslt |= ___1a2149h<<(___1859cch-8);
	}

	___1859cch -= ___1a1f2ch;
  
	return rslt&~(-1<<___1a1f2ch);
}

static void ___108e8h(void){

	dword 	r, n, df_bits, next, val, ecx, edi;

	read_p = write_p = val = ___1859c8h = ___1859cch = 0;

	n = -1;
	while(++n < 0x100){

		___1a0a60h[n].r = EncodedFrame[read_p++];
		___1a0a60h[n].g = EncodedFrame[read_p++];
		___1a0a60h[n].b = EncodedFrame[read_p++];
	}

	df_bits = EncodedFrame[read_p++];
	___1a1f18h = ___3f71ch__allocateMemory(0x1001);
	___1a1f14h = ___3f71ch__allocateMemory(0x1001);
	___1a1f24h = ___3f71ch__allocateMemory(0x4004);
	___1a1f2ch = df_bits+1;
	___1a1f04h = 2<<df_bits;
	___1a1f08h = (1<<df_bits)+2;
	LOC_RESET = 1<<df_bits;
	LOC_END = (1<<df_bits)+1;
	
	n = r = edi = 0;
	while((next = ___10784h()) != LOC_END){

		if(next == LOC_RESET){

			if(!r&&++r){

				___1a1f2ch = df_bits+1;
				___1a1f04h = 2<<df_bits;
				___1a1f08h = (1<<df_bits)+2;
			}
		}
		else {

			if(r&&!--r){

				DecodedFrame[write_p++] = edi = val = next%___1a1f08h;
			}
			else {

				ecx = next;

				if(ecx >= ___1a1f08h){
				
					ecx = edi;
					___1a1f18h[n++] = val;
				}

				while(ecx >= ((1<<df_bits)+2)){

					___1a1f18h[n++] = ___1a1f14h[ecx];
					ecx = ___1a1f24h[ecx];
				}

				___1a1f18h[n++] = ecx;

				if(___1a1f04h > ___1a1f08h){

					___1a1f14h[___1a1f08h] = val = ecx;
					___1a1f24h[___1a1f08h] = edi;
					edi = next;
					___1a1f08h++;
				}

				if((___1a1f04h <= ___1a1f08h)&&(___1a1f2ch < 0xc)){

					___1a1f2ch++;
					___1a1f04h *= 2;
				}

				while(n > 0) DecodedFrame[write_p++] = ___1a1f18h[--n];
			}
		}
	}

	dRally_Memory_free(___1a1f18h);
	dRally_Memory_free(___1a1f14h);
	dRally_Memory_free(___1a1f24h);
}

void ___10b80h_cdecl(
		const char * 	a_haf_file,
		int 			a_msx_fmt,		// 1 - S3M
		const char * 	a_msx_file,
		int		 		a_sfx_fmt,		// 2 - XM
		const char * 	a_sfx_file,
		int 			a_skip,
		int 			a_height){

	// in dr implementation video frame is cropped beginning from the top if a_height is less than 120

	dword 	ch_n, n, skipped;
	dword 	eax, ebx, ecx, edx, edi, esi;
	pal256_t 	pal;
	char 	buffer[0x100];
	FILE *	fd;

    dword   time;
    double  seconds;
	int 	total_length;


	strcat(strcpy(buffer, ___1a0d60h), a_haf_file);
	DecodedFrame = ___3f71ch__allocateMemory(0xfa00);	// 320x200
	EncodedFrame = ___3f71ch__allocateMemory(0xfa00);	// 320x200

	if(a_msx_fmt) dRally_Sound_load(a_msx_fmt, a_msx_file, a_sfx_fmt, a_sfx_file, 6);

	___606dfh();
	__VGA13_SETMODE();
	___60466h(0x46, 1);

	if(a_msx_fmt){
	
		dRally_Sound_setSampleRate(0x5622);
		dRally_Sound_play();
	}

	fd = strupr_fopen(buffer, "rb");
	___1a1f00h = 0;
	fread(&___1a1f00h, 2, 1, fd);
	___1a1f10h = ___3f71ch__allocateMemory(___1a1f00h);
	___1a1f1ch = ___3f71ch__allocateMemory(___1a1f00h);
	fread(___1a1f10h, ___1a1f00h, 1, fd);
	fread(___1a1f1ch, ___1a1f00h, 1, fd);


	// TOTAL LENGTH
	total_length = 0;
	n = -1;
	while(++n < ___1a1f00h) total_length += ___1a1f1ch[n];
	printf("[dRally.CINEM] HAF: %s\n", a_haf_file);
	printf("[dRally.CINEM] Frames: %d, Length: %d [%.2fs]\n", ___1a1f00h, total_length, (double)total_length/70.0/*71.4285714286*/);


	DISPLAY_CLEAR_PALETTE();
	bpa_read("MENU.BPA", EncodedFrame, "FRAMES.BPK");
	bpk_decode4(0x300, 0, &pal, EncodedFrame);
	bpk_decode4(0xfa00, 0x300, VGA13_ACTIVESCREEN, EncodedFrame);
	__VGA13_PRESENTSCREEN__();

	n = -1;
	while(++n < 0x10) __DISPLAY_SET_PALETTE_COLOR(pal[n].b, pal[n].g, pal[n].r, n);

	__VGA13_PRESENTSCREEN__();
    time = SDL_GetTicks();

	ch_n = 0;
	___185a0ch = -1;
	while((++___185a0ch < ___1a1f00h)&&!(skipped = (a_skip&&___5994ch()))){

		esi = __GET_FRAME_COUNTER();
		eax = 0;
		fread(&eax, 2, 1, fd);
		fread(EncodedFrame, eax, 1, fd);
		___108e8h();
		n = ___1a1f1ch[___185a0ch]+esi;

		if(__GET_FRAME_COUNTER() >= n) n = __GET_FRAME_COUNTER()+1;

		while(__GET_FRAME_COUNTER() < n);

		n = 0xf;
		while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(___1a0a60h[n].b, ___1a0a60h[n].g, ___1a0a60h[n].r, n);

		if(a_height > 0x78) a_height = 0x78;
		memcpy(VGA13_ACTIVESCREEN+((200-a_height)/2)*320, DecodedFrame+((0x78-a_height)/2)*320, a_height*320);
		__VGA13_PRESENTSCREEN__();

		if(___1a1f10h[___185a0ch]){

			dRally_Sound_pushEffect(++ch_n, ___1a1f10h[___185a0ch], 0, 0x10000, 0x10000, 0x8000);
			ch_n %= 6;
		}
	}

	if(!skipped){

		time = SDL_GetTicks()-time;
		seconds = (double)time/1000.0;
		printf("[dRally.CINEM] Real playing time: %.2fs\n", seconds);
	}

	fclose(fd);
	DISPLAY_CLEAR_PALETTE();
		
	n = 0;
	while(n < 6) dRally_Sound_freeEffectChannel(++n);

	dRally_Memory_free(DecodedFrame);
	dRally_Memory_free(EncodedFrame);
	dRally_Memory_free(___1a1f10h);
	dRally_Memory_free(___1a1f1ch);
}

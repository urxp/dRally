#include "drally.h"
#include "drmemory.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

	extern char ___1a0d60h[];
	extern __BYTE__ * VGA13_ACTIVESCREEN;

	static __BYTE__ ___1a2042h[0x101];
	static __BYTE__ ___1a2149h;
	static pal256_t ___1a0a60h;

	static __BYTE__ * DecodedFrame;
	static __BYTE__ * EncodedFrame;
	static __DWORD__ ___1a1f00h;
	static __BYTE__ * ___1a1f10h;
	static __BYTE__ * ___1a1f1ch;
	static __BYTE__ * ___1a1f18h;
	static __BYTE__ * ___1a1f14h;
	static __DWORD__ * ___1a1f24h;
	static __DWORD__ ___1a1f2ch;
	static __DWORD__ ___1a1f04h;
	static __DWORD__ LOC_RESET;
	static __DWORD__ LOC_END;
	static __DWORD__ ___1a1f08h;
	static __BYTE__ * ___1a1f28h;


__POINTER__ ___3f71ch__allocateMemory(__DWORD__);

void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode4(__DWORD__, __DWORD__, __POINTER__, __POINTER__);
void bpk_decode2(__POINTER__, __POINTER__);

void ___606dfh(void);
void __VGA13_SETMODE(void);
void ___60466h(int, int);
void DISPLAY_CLEAR_PALETTE(void);
void __VGA13_PRESENTSCREEN__(void);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
__BYTE__ ___5994ch(void);
__DWORD__ __GET_FRAME_COUNTER(void);

void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void dRally_Sound_setSampleRate(__DWORD__ freq);
void dRally_Sound_play(void);
void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch);


static __DWORD__ ___1859c8h = 0;
static __DWORD__ ___1859cch = 0;
static __DWORD__ read_p = 0;
static __DWORD__ write_p = 0;
static __DWORD__ ___185a0ch = 0;


static __DWORD__ ___10784h(void){

	__DWORD__ 	n, rslt;

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

	__DWORD__ 	r, n, df_bits, next, val, ecx, edi;

	read_p = write_p = val = ___1859c8h = ___1859cch = 0;

	n = -1;
	while(++n < 0x100){

		___1a0a60h[n].r = EncodedFrame[read_p++];
		___1a0a60h[n].g = EncodedFrame[read_p++];
		___1a0a60h[n].b = EncodedFrame[read_p++];
	}

	df_bits = EncodedFrame[read_p++];
	___1a1f18h = ___3f71ch__allocateMemory(0x1001*sizeof(__BYTE__));
	___1a1f14h = ___3f71ch__allocateMemory(0x1001*sizeof(__BYTE__));
	___1a1f24h = (__DWORD__ *)___3f71ch__allocateMemory(0x1001*sizeof(__DWORD__));
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

	dRMemory_free(___1a1f18h);
	dRMemory_free(___1a1f14h);
	dRMemory_free((__POINTER__)___1a1f24h);
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

	__DWORD__ 	ch_n, n, skipped;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi;
	pal256_t 	pal;
	char 	buffer[0x100];
	FILE *	fd;

    __DWORD__   time;
    double  seconds;
	int 	total_length;


	strcat(strcpy(buffer, ___1a0d60h), a_haf_file);
	DecodedFrame = ___3f71ch__allocateMemory(0xfa00);	// 320x200
	EncodedFrame = ___3f71ch__allocateMemory(0xfa00);	// 320x200

	if(a_msx_fmt) dRally_Sound_load(a_msx_fmt, a_msx_file, a_sfx_fmt, a_sfx_file, 6);

	___606dfh();
	__VGA13_SETMODE();
	___60466h(70, 1);

	if(a_msx_fmt){
	
		dRally_Sound_setSampleRate(0x5622);
		dRally_Sound_play();
	}

	fd = strupr_fopen(buffer, "rb");
	___1a1f00h = 0;
	fread(&___1a1f00h, 2, 1, fd);
	___1a1f00h = SDL_SwapLE32(___1a1f00h);
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
	old_bpa_read("MENU.BPA", EncodedFrame, "FRAMES.BPK");
	bpk_decode4(0x300, 0, (__POINTER__)&pal, EncodedFrame);
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
		eax = SDL_SwapLE32(eax);
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

	dRMemory_free(DecodedFrame);
	dRMemory_free(EncodedFrame);
	dRMemory_free(___1a1f10h);
	dRMemory_free(___1a1f1ch);
}

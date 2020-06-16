#include "drally.h"

#pragma pack(1)
typedef struct s3m_position_s {
    byte    Order;
    byte    Row;
} s3m_position_t;

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

typedef union what_u {
    struct {
        byte    channel:5;
        byte    note_inst:1;
        byte    volume:1;
        byte    cmd:1;
    };
    byte    val;
} what_t;

typedef struct unpacked_s {
	union {
		struct {
			byte 	note_note:4;
			byte 	note_octave:4;
		};
		byte note;
	};
	byte 	instrument;
	byte 	volume;
    union {
        word    cmd;
        struct {
	        byte 	cmd_cmd;
	        byte 	cmd_info;
        };
    };
} unpacked_t;

// notes
#define NOTE_C			0x0
#define NOTE_CSHARP		0x1
#define NOTE_D			0x2
#define NOTE_DSHARP		0x3
#define NOTE_E			0x4
#define NOTE_F			0x5
#define NOTE_FSHARP		0x6
#define NOTE_G			0x7
#define NOTE_GSHARP		0x8
#define NOTE_A			0x9
#define NOTE_ASHARP		0xa
#define NOTE_B			0xb

const word st3_periods[12] = { 1712, 1616, 1524, 1440, 1356, 1280, 1208, 1140, 1076, 1016, 960, 907 };

	unpacked_t 	Unpacked;
	extern music_t 	Music;
	extern sound_t		Sound;
	extern samplelib_t 	SampleLib;

	extern s3m_position_t S3M_Position;
	extern s3m_position_t S3M_NewPosition;
	extern int S3M_UpdatePosition;
byte ___19a53dh = 0;
byte ___19a53ch = 1;
byte ___19a53eh = 0;
byte ___19a540h = 1;
byte ___19a53fh = 0;
byte ___19a684h = 0;
byte ___19a685h = 0;
byte ___19a686h = 0;
	extern dword ___68990h[32];
	extern dword ___68a10h[32];
void * PACKED_PATTERN;
	extern int	tmp_chn;
#define PACKED_WHAT	pack_what.val
	extern what_t pack_what;


extern word ___688d0h[32];
extern dword ___68910h[32];

word ___19a542h[16] = {0};
word ___19a562h[16] = {0};
byte ___19a582h[16] = {0};
byte cmd_cmd_mem[16] = {0};
byte cmd_info_mem[16] = {0};
byte ___19a5b2h[16] = {0};
byte ___19a5c2h[16] = {0};
byte ___19a5d2h[16] = {0};
word ___19a5e2h = 0;
byte ___19a5e4h[16] = {0};
byte ___19a5f4h[16] = {0};
word ___19a604h[16] = {0};
word ___19a624h[16] = {0};
word ___19a644h[16] = {0};
byte ___19a664h[16] = {0};
byte ___19a674h[16] = {0};
word ___24e880h[16] = {0};


void ___68c42h_cdecl(void);

void switch_YY(byte);
void switch_ZZ(byte);


static dword static_CX(word A1, int Finetune){

	dword 		eax;
	qword 		ll_tmp;

//	dword 		period_oct;
//	dword 		note_st3period;
//	dword 		note_herz;

	eax = 0;
	if(A1 != 0){

//		period_oct 		= A1>>4;
//		note_st3period 	= 8363*16*period_oct/Finetune;
//		note_herz 		= 0xda7600/note_st3period;
//		eax 			= (1+8363*note_herz/1400)/2;
		//eax 			= 3*note_herz;	// ~

		eax = (0xda76000ULL*Finetune)/(A1*0x5780);
		eax = (eax>>1)+(eax&1);
	}

	return eax;
}

dword static_BX(word A1){

	return static_CX(A1, Music.c2spd[___19a542h[tmp_chn]]);
}

static void reset_something(byte n){

	___19a542h[n] = 0;
	___19a562h[n] = 0;
	___19a582h[n] = 0;
	cmd_cmd_mem[n] = 0;
	cmd_info_mem[n] = 0;
	___19a5b2h[n] = 0;
	___19a5c2h[n] = 0;
	___19a5d2h[n] = 0;
	___19a5e4h[n] = 0;
	___19a5f4h[n] = 0;
	___19a604h[n] = 0;
	___19a624h[n] = 0;
	___19a644h[n] = 0;
	___24e880h[n] = 0;
	___19a664h[n] = 0;
	___19a674h[n] = 0;
}

void ___6ef2ch_init(void){

	S3M_Position.Order = 0;
	___19a53dh = 0;
	___19a53ch = 1;
	S3M_Position.Row = 0;
	___19a53eh = 0;
	___19a540h = 1;
	___19a53fh = 0;
	___19a684h = 0;
	___19a685h = 0;
	___19a686h = 0;
	___19a5e2h = 0;

	tmp_chn = -1;
	while(++tmp_chn < 0x10) reset_something(tmp_chn);

	___68c42h_cdecl();
}

void ___6ef2ch(void){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;
	int 	hi_channel_id;
    long long   ll_tmp;

	if(S3M_UpdatePosition != 0){

		S3M_Position.Order = S3M_NewPosition.Order;
		___19a53fh = S3M_NewPosition.Row;
		if(___19a53fh > 0x3f) ___19a53fh = 0x3f;
		___19a53dh = 0;
		___19a53ch = 1;
		S3M_UpdatePosition = 0;
	}

	if(___19a53eh == 0){

		if(___19a53ch == 1){
			
			while(1){

				if(___19a53dh == 0){

					if((S3M_Position.Order >= Music.n_orders)||(Music.orders[S3M_Position.Order] == 0xff)){

						hi_channel_id = Sound.sfx.data ? Sound.msx.channels-1 : 0x10;
						tmp_chn = -1;
						while(++tmp_chn <= hi_channel_id){

							reset_something(tmp_chn);
							___688d0h[tmp_chn] = 0xffff;
							___68910h[tmp_chn] = 0;
							___68990h[tmp_chn] = 0;
							___68a10h[tmp_chn] = 0;
						}

						___19a685h = 0;
						___19a686h = 0;
						___19a5e2h = 0;
						___19a684h = 0;
					}
				}
				else {

					S3M_Position.Order--;
					___19a53dh = 0;
					break;
				}

				if(Music.orders[S3M_Position.Order] != 0xfe){

					if(Music.orders[S3M_Position.Order] == 0xff) S3M_Position.Order = 0; // ???
					break;
				}
				S3M_Position.Order++;
			}

			PACKED_PATTERN = Music.patterns[Music.orders[S3M_Position.Order]];
			S3M_Position.Order++;
			S3M_Position.Row = 0;

			while(___19a53fh--||++___19a53fh){

				while((PACKED_WHAT = B(PACKED_PATTERN++)) != 0){

					if(PACKED_WHAT&0x20) PACKED_PATTERN += 2;
					if(PACKED_WHAT&0x40) PACKED_PATTERN++;
					if(PACKED_WHAT&0x80) PACKED_PATTERN += 2;
				}

				S3M_Position.Row++;
			}

			___19a53ch = 0;
		}

		tmp_chn = -1;
		while(++tmp_chn < 0x10) cmd_cmd_mem[tmp_chn] = 0;

		while((PACKED_WHAT = B(PACKED_PATTERN++))){

			Unpacked.note = 0;
			Unpacked.instrument = 0;

			if((tmp_chn = Music.ch_map[PACKED_WHAT&0x1f]) == 0xff){

				if((PACKED_WHAT&0x20) != 0) PACKED_PATTERN += 2;
				if((PACKED_WHAT&0x40) != 0) PACKED_PATTERN++;
				if((PACKED_WHAT&0x80) != 0) PACKED_PATTERN += 2;
			}
			else {

				if((PACKED_WHAT&0x20) != 0){
					
					Unpacked.note = B(PACKED_PATTERN++);

					if(Unpacked.note == 0xfe) ___688d0h[tmp_chn] = 0xffff;

					Unpacked.instrument = B(PACKED_PATTERN++);

					if(Unpacked.instrument > SampleLib.n_msx_samples) Unpacked.instrument = 0;
				}

				if((PACKED_WHAT&0x40) != 0) Unpacked.volume = B(PACKED_PATTERN++);

				if((PACKED_WHAT&0x80) != 0){
					
					Unpacked.cmd_cmd = B(PACKED_PATTERN++);
					Unpacked.cmd_info = B(PACKED_PATTERN++);
					
					if(Unpacked.cmd_cmd == 7){

						if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];

						if(Unpacked.note == 0){

							if(___19a644h[tmp_chn] == 0){
								
								Unpacked.cmd = 0;
							}
						}
						else {

							if((Unpacked.instrument == 0)&&(___19a542h[tmp_chn] == 0)){

									Unpacked.cmd = 0;
									PACKED_WHAT &= 0xdf;	// 1101:1111b
							}
							else {

								___19a644h[tmp_chn] = (0x10*st3_periods[Unpacked.note_note])>>Unpacked.note_octave;
								Unpacked.note = 0;
								if(Unpacked.instrument == 0) PACKED_WHAT &= 0xdf;	// 1101:1111b
							}
						}
					}
					else if(Unpacked.cmd_cmd == 0x13){

						if((Unpacked.cmd_info>>4) == 0xd){

							___19a5e4h[tmp_chn] = Unpacked.cmd_info&0xf;
							if(___19a5e4h[tmp_chn] != 0) ___19a5e4h[tmp_chn] = 0xf;
							___19a604h[tmp_chn] = (PACKED_WHAT<<8)+Unpacked.volume;
							PACKED_WHAT &= 0x9f;	//	1001:1111b
							___19a624h[tmp_chn] = (Unpacked.note<<8)+Unpacked.instrument;
						}
						
					}
				}

				if((PACKED_WHAT&0x20) != 0){
					
					if(Unpacked.instrument != 0){

						___19a542h[tmp_chn] = Unpacked.instrument;
						___19a582h[tmp_chn] = Music.volume[Unpacked.instrument];
					}
					else {

						Unpacked.instrument = ___19a542h[tmp_chn];

						if(Unpacked.instrument <= SampleLib.n_msx_samples){

							if((Unpacked.note == 0xff)||(Unpacked.note == 0)){
								
								___19a582h[tmp_chn] = Music.volume[Unpacked.instrument];
							}
						}
						else {

							Unpacked.note = 0;
							Unpacked.instrument = 0;
							PACKED_WHAT &= 0xdf;	// 1101:1111b
						}
					}

					if((Unpacked.note != 0xff)&&(Unpacked.note != 0)){

						___19a562h[tmp_chn] = (0x10*st3_periods[Unpacked.note_note])>>Unpacked.note_octave;
						___688d0h[tmp_chn] = Unpacked.instrument;
					}
				}

				if((PACKED_WHAT&0x40) != 0) ___19a582h[tmp_chn] = Unpacked.volume;

				if((PACKED_WHAT&0x80) != 0){

					switch_YY(Unpacked.cmd_cmd-1);
					cmd_cmd_mem[tmp_chn] = Unpacked.cmd_cmd;
					cmd_info_mem[tmp_chn] = Unpacked.cmd_info;
				}

        		if(___19a5e2h != 0){
					___68990h[tmp_chn] = static_CX(___19a562h[tmp_chn], ___19a5e2h);
					___19a5e2h = 0;
				}
				else {
					___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
				}
				___68a10h[tmp_chn] = 0x10*Music.global_volume*___19a582h[tmp_chn];
			}
        }

		S3M_Position.Row++;
        if(S3M_Position.Row >= 0x40) ___19a53ch = 1;
		___19a53eh = Music.speed*___19a540h;
	}

	if(___19a53eh != 0){

		tmp_chn = -1;
		while(++tmp_chn < 0x10){

			if(cmd_cmd_mem[tmp_chn] != 0){

				Unpacked.cmd_cmd = cmd_cmd_mem[tmp_chn];
				Unpacked.cmd_info = cmd_info_mem[tmp_chn];
				switch_ZZ(Unpacked.cmd_cmd-4);
			}
		}

		___19a540h = 1;
		___19a53eh--;
	}
}

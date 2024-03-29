#include "drally.h"

#pragma pack(1)
typedef struct s3m_position_s {
    __BYTE__    Order;
    __BYTE__    Row;
} s3m_position_t;

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

typedef union what_u {
    struct {
        __BYTE__    channel:5;
        __BYTE__    note_inst:1;
        __BYTE__    volume:1;
        __BYTE__    cmd:1;
    };
    __BYTE__    val;
} what_t;

typedef struct unpacked_s {
	union {
		struct {
			__BYTE__ 	note_note:4;
			__BYTE__ 	note_octave:4;
		};
		__BYTE__ note;
	};
	__BYTE__ 	instrument;
	__BYTE__ 	volume;
    union {
        __WORD__    cmd;
        struct {
	        __BYTE__ 	cmd_cmd;
	        __BYTE__ 	cmd_info;
        };
    };
} unpacked_t;

    extern const __WORD__ st3_periods[12];
	extern unpacked_t 	Unpacked;
	extern music_t 	Music;
    extern s3m_position_t S3M_Position;
    extern __BYTE__ ___19a686h;
    extern __BYTE__ ___19a685h;
    extern __BYTE__ ___19a53fh;
    extern __BYTE__ ___19a684h;
    extern __BYTE__ ___19a53ch;
    extern __BYTE__ ___19a53dh;
    extern __BYTE__ ___19a540h;
	extern __BYTE__ ___19a53eh;



extern double s3m_TickDuration_s;
extern __DWORD__ ___68a90h[32];
extern __DWORD__ ___68a10h[32];
extern __DWORD__ ___68990h[32];
extern __DWORD__ ___68910h_offset[32];
extern __WORD__  ___688d0h_sample_id[32];
extern __WORD__  ___19a542h[16];
extern __WORD__  ___19a562h[16];
extern __BYTE__ ___19a582h[16];
extern __BYTE__ cmd_cmd_mem[16];
extern __BYTE__ cmd_info_mem[16];
extern __BYTE__ ___19a5b2h[16];
extern __BYTE__ ___19a5c2h[16];
extern __BYTE__ ___19a5d2h[16];
extern __WORD__  ___19a5e2h;
extern __BYTE__ ___19a5e4h[16];
extern __BYTE__ ___19a5f4h[16];
extern __WORD__  ___19a604h[16];
extern __WORD__  ___19a624h[16];
extern __WORD__  ___19a644h[16];
extern __BYTE__ ___19a664h[16];
extern __BYTE__ ___19a674h[16];
extern __WORD__  ___24e880h[16];

const __WORD__ ___19a49ch[16] = {
    0x1ed7, 0x1f05, 0x1f31, 0x1f6e, 0x1fab, 0x1fe9, 0x2028, 0x2058,
    0x20ab, 0x20dd, 0x210f, 0x2151, 0x2185, 0x21cb, 0x2213, 0x2235
};

const short ___19a4bch[64] = {
    0x00, 0x18, 0x31, 0x4a, 0x61, 0x78, 0x8d, 0xa1,
    0xb4, 0xc5, 0xd4, 0xe0, 0xeb, 0xf4, 0xfa, 0xfd,
    0xff, 0xfd, 0xfa, 0xf4, 0xeb, 0xe0, 0xd4, 0xc5,
    0xb4, 0xa1, 0x8d, 0x78, 0x61, 0x4a, 0x31, 0x18,
    0x0000, 0xffe8, 0xffcf, 0xffb6, 0xff9f, 0xff88, 0xff73, 0xff5f,
    0xff4c, 0xff3b, 0xff2c, 0xff20, 0xff15, 0xff0c, 0xff06, 0xff03,
    0xff01, 0xff03, 0xff06, 0xff0c, 0xff15, 0xff20, 0xff2c, 0xff3b,
    0xff4c, 0xff5f, 0xff73, 0xff88, 0xff9f, 0xffb6, 0xffcf, 0xffe8
};

int rand_watcom106(void);
__DWORD__ static_BX(__WORD__);

int     tmp_vol;
int     tmp_chn;
#define PACKED_WHAT	pack_what.val
what_t    pack_what;

static void misc_effects(__BYTE__ A1){

    switch(A1){
    case 2: /* S2x

        Set finetune.
    */
        ___19a5e2h = ___19a49ch[Unpacked.cmd_info&0xf];
        Unpacked.cmd = 0;
        break;
    case 3: /* S3x

        Set vibrato waveform.
    */
        ___19a5d2h[tmp_chn] = (___19a5d2h[tmp_chn]&0xfc)|(Unpacked.cmd_info&3);
        Unpacked.cmd = 0;
        break;
    case 4: /* S4x

        Set tremolo waveform.
    */
        ___19a5d2h[tmp_chn] = (___19a5d2h[tmp_chn]&0xf3)|(4*Unpacked.cmd_info&3);
        Unpacked.cmd = 0;
        break;
    case 8: /* S8x

        Set panning position. Scream Tracker 3 supports this only on the Gravis Ultrasound.
    */
        ___68a90h[tmp_chn] = (Unpacked.cmd_info&0xf)<<0xc;
        Unpacked.cmd = 0;
        break;
    case 0xb:   /* SBx

        Loop pattern.
        Unlike other trackers, the loopback info (i.e. the loopback point and counter) is global and not per channel.
    */
        if((Unpacked.cmd_info&0xf) == 0){
            if(___19a686h){
                if(!--___19a685h){
                    ___19a686h = 0;
                }
                else {
                    ___19a53fh = ___19a684h;
                    ___19a53ch = 1;
                    ___19a53dh = 1;
                }
            }
            else {
                ___19a684h = S3M_Position.Row;
            }
        }
        Unpacked.cmd = 0;
        break;
    case 0xc:   /* SCx

        Note cut after x ticks.
    */
        ___19a5e4h[tmp_chn] = Unpacked.cmd_info&0xf;
        break;
    case 0xd:   /* SDx
        
        Note delay for x ticks.
    */
        break;
    case 0xe:   /* SEx

        Pattern delay for x rows.
    */
        ___19a540h = (Unpacked.cmd_info&0xf)+1;
        break;
    default:
        Unpacked.cmd = 0;
        break;
    }
}

#define GETSIGN_W(v) (!!((v)&0x8000))

void switch_KK(__BYTE__ A1){
    

    tmp_vol = 4*(___19a5c2h[tmp_chn]&0xf);

    switch(A1){
    case 0:
        tmp_vol *= ___19a4bch[___19a5b2h[tmp_chn]];
        tmp_vol++;
        tmp_vol >>= 9;
        break;
    case 1:
        tmp_vol *= (int)(0x20-___19a5b2h[tmp_chn]);
        tmp_vol >>= 4;
        break;
    case 2:
		tmp_vol *= GETSIGN_W(___19a4bch[___19a5b2h[tmp_chn]]);
        break;
    case 3:
        tmp_vol *= rand_watcom106()-0x4000;
        tmp_vol >>= 0xe;
        break;
    default:
        break;
    }
}

void switch_QQ(__BYTE__ A1){

    tmp_vol = ___19a5c2h[tmp_chn]&0xf;

    switch(A1){
    case 0:
        tmp_vol *= ___19a4bch[___19a5b2h[tmp_chn]];
        tmp_vol >>= 8;
        break;
    case 1:
        tmp_vol *= (int)(0x20-___19a5b2h[tmp_chn]);
        tmp_vol >>= 6;
        break;
    case 2:
        tmp_vol *= GETSIGN_W(___19a4bch[___19a5b2h[tmp_chn]]);
        break;
    case 3:
        tmp_vol *= rand_watcom106()-0x4000;
        tmp_vol >>= 0xd;
        break;
    default:
        break;
    }
}

// Qxy Retrig (+volumeslide) note 
void switch_TT(__BYTE__ A1){

    switch(A1){
    case 0:
        if(___19a582h[tmp_chn] < 1){
            ___19a582h[tmp_chn] = 0;
        }
        else {
            ___19a582h[tmp_chn]--;
        }
        break;
    case 1:
        if(___19a582h[tmp_chn] < 2){
            ___19a582h[tmp_chn] = 0;
        }
        else {
            ___19a582h[tmp_chn] -= 2;
        }
        break;
    case 2:
        if(___19a582h[tmp_chn] < 4){
            ___19a582h[tmp_chn] = 0;
        }
        else {
            ___19a582h[tmp_chn] -= 4;
        }
        break;
    case 3:
        if(___19a582h[tmp_chn] < 8){
            ___19a582h[tmp_chn] = 0;
        }
        else {
            ___19a582h[tmp_chn] -= 8;
        }
        break;
    case 4:
        if(___19a582h[tmp_chn] < 0x10){
            ___19a582h[tmp_chn] = 0;
        }
        else {
            ___19a582h[tmp_chn] -= 0x10;
        }
        break;
    case 5:
        ___19a582h[tmp_chn] = 2*___19a582h[tmp_chn]/3;
        break;
    case 6:
        ___19a582h[tmp_chn] = ___19a582h[tmp_chn]/2;
        break;
    case 7: break;
    case 8:
        ___19a582h[tmp_chn]++;
        if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        break;
    case 9:
        ___19a582h[tmp_chn] += 2;
        if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        break;
    case 0xa:
        ___19a582h[tmp_chn] += 4;
        if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        break;
    case 0xb:
        ___19a582h[tmp_chn] += 8;
        if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        break;
    case 0xc:
        ___19a582h[tmp_chn] += 0x10;
        if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        break;
    case 0xd:
        ___19a582h[tmp_chn] = 3*___19a582h[tmp_chn]/2;
        if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        break;
    case 0xe:
        ___19a582h[tmp_chn] = 2*___19a582h[tmp_chn];
        if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        break;
    default:
        break;
    }
}

void switch_YY(__BYTE__ A1){

    /*
        Effects marked with a % use the latest nonzero effect parameter to show up.
        Effects with a * have their own memory.
    */

    switch(A1){
    case 0: /* Axx

        Set speed. If the parameter is 0, the effect is ignored.
    */
        Music.speed = Unpacked.cmd_info;
        s3m_TickDuration_s = 2.5/Music.tempo;
        Unpacked.cmd = 0;
        break;
    case 1: /* Bxx
        
        Order jump.
    */
        S3M_Position.Order = Unpacked.cmd_info;
        ___19a53ch = 1;
        Unpacked.cmd = 0;
        break;
    case 2: /* Cxy

        Jump to row x*10 + y. The value provided is in decimal.
        If the row number specified is 64 or higher, the effect is ignored.
    */
        ___19a53ch = 1;
        //if((Unpacked.cmd_info&0xf) > 9) Unpacked.cmd_info += 6;
        ___19a53fh = 10*(Unpacked.cmd_info>>4)+(Unpacked.cmd_info&0xf);
        if(___19a53fh > 0x3f) ___19a53fh = 0x3f;
        Unpacked.cmd = 0;
        break;
    case 3: /* Dxy (%)

        Volume slide.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        if((Unpacked.cmd_info&0xf) == 0xf){
            ___19a582h[tmp_chn] = ___19a582h[tmp_chn]+(Unpacked.cmd_info>>4);
            if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
        }
        if((Unpacked.cmd_info&0xf0) == 0xf0){
            ___19a582h[tmp_chn] = ___19a582h[tmp_chn]-(Unpacked.cmd_info&0xf);
            if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0;
        }
        break;
    case 4: /* Exx (%)

        Slide down.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        if(Unpacked.cmd_info >= 0xe0){
            if(___19a562h[tmp_chn] > (0x7dff-4*(Unpacked.cmd_info&0xf))){
                ___688d0h_sample_id[tmp_chn] = 0xffff;
            }
            else {
                if((Unpacked.cmd_info&0xf0) == 0xf0){
                    ___19a562h[tmp_chn] += 4*(Unpacked.cmd_info&0xf);
                    ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
                }
                if((Unpacked.cmd_info&0xf0) == 0xe0){
                    ___19a562h[tmp_chn] += (Unpacked.cmd_info&0xf);
                    ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
                }
            }
            Unpacked.cmd_cmd = 0;
        }
        break;
    case 5: /* Fxx (%)

        Slide up.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        if(Unpacked.cmd_info >= 0xe0){
            if(___19a562h[tmp_chn] < (4*(Unpacked.cmd_info&0xf)+0x200)){
                ___688d0h_sample_id[tmp_chn] = 0xffff;
            }
            else {
                if((Unpacked.cmd_info&0xf0) == 0xf0){
                    ___19a562h[tmp_chn] -= 4*(Unpacked.cmd_info&0xf);
                    ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
                }
                if((Unpacked.cmd_info&0xf0) == 0xe0){
                    ___19a562h[tmp_chn] -= Unpacked.cmd_info&0xf;
                    ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
                }
            }
            Unpacked.cmd_cmd = 0;
        }
        break;
    case 6: /* Gxx (*)

        Slide to note.
    */
        break;
    case 7: /* Hxy (*)

        Vibrato. This effect shares memory with Uxy.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        ___19a5c2h[tmp_chn] = Unpacked.cmd_info;
        break;
    case 8: /* Ixy (%)

        Tremor.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 9: /* Jxy (%)

        Arpeggio. TODO: this effect is weird.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        if((Unpacked.note == 0xff)||(Unpacked.note == 0)) Unpacked.note = ___19a5f4h[tmp_chn];
        ___19a5e4h[tmp_chn] = 0;
        ___19a5f4h[tmp_chn] = Unpacked.note;
        Unpacked.note = (Unpacked.cmd_info>>4)+Unpacked.note_note;
        if(Unpacked.note >= 0xc) Unpacked.note += 4;
        ___19a604h[tmp_chn] = 0x100*(Unpacked.note+(___19a5f4h[tmp_chn]&0xf0));
        Unpacked.note = (___19a5f4h[tmp_chn]&0xf)+(Unpacked.cmd_info&0xf);
        if(Unpacked.note >= 0xc) Unpacked.note += 4;
        Unpacked.note += ___19a5f4h[tmp_chn]&0xf0;
        ___19a604h[tmp_chn] += Unpacked.note;
        break;
    case 0xa:   /* Kxy (%)

        H00 + Dxy.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 0xb:   /* Lxy (%)

        G00 + Dxy.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 0xe:   /* Oxx (*)

        Set sample offset.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        ___68910h_offset[tmp_chn] = 0x100*Unpacked.cmd_info;
        ___688d0h_sample_id[tmp_chn] = ___19a542h[tmp_chn];
        Unpacked.cmd = 0;
        break;
    case 0x10:  /* Qxy (%)

        Retrigger note every y ticks with volume modifier x.
        If the retrig value 'y' is 0, the effect is ignored.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 0x11:  /* Rxy (%)

        Tremolo. x*4 is speed, y*4 is depth. This effect is screwy, but not as screwy as previously documented.
    */
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        ___19a5c2h[tmp_chn] = Unpacked.cmd_info;
        break;
    case 0x12:  /* Sxy (%)

        Miscellaneous effects.
    */
        misc_effects(Unpacked.cmd_info>>4);
        break;
    case 0x13:  /* Txx

        Set tempo. If the parameter is less than 33, the effect is ignored.
    */
        if(Unpacked.cmd_info != 0){
            Music.tempo = Unpacked.cmd_info;
            s3m_TickDuration_s = 2.5/Music.tempo;
        }
        Unpacked.cmd = 0;
        break;
    case 0x14:  /* Uxy (*)

        Fine vibrato. This effect shares memory with Hxy.
    */
        Unpacked.cmd = 0;
        break;
    case 0x15:  /* Vxx
        
        Set global volume.
    */
        Music.global_volume = Unpacked.cmd_info;
        Unpacked.cmd = 0;
        break;
    default:
        Unpacked.cmd = 0;
        break;
    }
}

void switch_ZZ(__BYTE__ A1){

    switch(A1){
    case 0:
        if((Unpacked.cmd_info&0xf) == 0){
            if(Music.speed != ___19a53eh){
                ___19a582h[tmp_chn] = (Unpacked.cmd_info>>4)+___19a582h[tmp_chn];
                if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
            }
        }
        if((Unpacked.cmd_info&0xf0) == 0){
            if(Music.speed != ___19a53eh){
                if(___19a582h[tmp_chn] < (Unpacked.cmd_info&0xf)){
                    ___19a582h[tmp_chn] = 0;
                }
                else {
                    ___19a582h[tmp_chn] -= Unpacked.cmd_info&0xf;
                }
            }
        }
        ___68a10h[tmp_chn] = 0x10*Music.global_volume*___19a582h[tmp_chn];
        break;
    case 1:
        if(Unpacked.cmd_info < 0xe0){
            if(___19a562h[tmp_chn] > (0x7dff-4*Unpacked.cmd_info)){
                ___688d0h_sample_id[tmp_chn] = 0xffff;
            }
            else {
                ___19a562h[tmp_chn] += 4*Unpacked.cmd_info;
                ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
            }
        }
        break;
    case 2:
        if(Unpacked.cmd_info < 0xe0){
            if(___19a562h[tmp_chn] < (4* Unpacked.cmd_info+0x200)){
                ___688d0h_sample_id[tmp_chn] = 0xffff;
            }
            else {
                ___19a562h[tmp_chn] -= 4* Unpacked.cmd_info;
                ___68990h[tmp_chn] = static_BX( ___19a562h[tmp_chn]);
            }
        }
        break;
    case 3:
        if(___19a644h[tmp_chn] != ___19a562h[tmp_chn]){
            ___24e880h[tmp_chn] = Unpacked.cmd_info;
            if(___19a644h[tmp_chn] <= ___19a562h[tmp_chn]){
                if(4*Unpacked.cmd_info > ___19a562h[tmp_chn]){
                    ___19a562h[tmp_chn] = 0;
                }
                else {
                    ___19a562h[tmp_chn] -= 4*Unpacked.cmd_info;
                }
                if(___19a562h[tmp_chn] < ___19a644h[tmp_chn]) ___19a562h[tmp_chn] = ___19a644h[tmp_chn];
            }
            else {
                ___19a562h[tmp_chn] += 4*Unpacked.cmd_info;
                if(___19a562h[tmp_chn] > ___19a644h[tmp_chn]) ___19a562h[tmp_chn] = ___19a644h[tmp_chn];
            }
            ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
        }
        break;
    case 4:
        switch_KK(___19a5d2h[tmp_chn]&3);
        if(___19a53eh != Music.speed){
            ___19a5b2h[tmp_chn] += (___19a5c2h[tmp_chn]>>4);
            if(___19a5b2h[tmp_chn] >= 0x40) ___19a5b2h[tmp_chn] -= 0x40;
        }
        ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]+tmp_vol);
        break;
    case 5:
        if(___19a664h[tmp_chn] >= ((Unpacked.cmd_info>>4)+1)){
            if(___19a674h[tmp_chn] < ((Unpacked.cmd_info>>4)+1)){
                ___68a10h[tmp_chn] = 0;
                ___19a674h[tmp_chn]++;
                if(___19a674h[tmp_chn] >= ((Unpacked.cmd_info>>4)+1)){
                    ___19a664h[tmp_chn] = 0;
                    ___19a674h[tmp_chn] = 0;
                }
            }
        }
        else {
            ___19a664h[tmp_chn]++;
            ___68a10h[tmp_chn] = 0x10*Music.global_volume*___19a582h[tmp_chn];
        }
        break;
    case 6:
        if(___19a5e4h[tmp_chn] == 0){
            Unpacked.note = ___19a5f4h[tmp_chn];
            ___19a5e4h[tmp_chn] = 1;
        }
        else if(___19a5e4h[tmp_chn] == 1){
            Unpacked.note = ___19a604h[tmp_chn]>>8;
            ___19a5e4h[tmp_chn] = 2;
        }
        else if(___19a5e4h[tmp_chn] == 2){
            Unpacked.note = ___19a604h[tmp_chn]&0xff;
            ___19a5e4h[tmp_chn] = 0;
        }
        ___68990h[tmp_chn] = static_BX((0x10*st3_periods[Unpacked.note_note])>>Unpacked.note_octave);
        break;
    case 7:
        switch_KK(___19a5d2h[tmp_chn]&3);
        if(Music.speed != ___19a53eh){
            ___19a5b2h[tmp_chn] += ___19a5c2h[tmp_chn]>>4;
            if(___19a5b2h[tmp_chn] >= 0x40) ___19a5b2h[tmp_chn] -= 0x40;
        }
        ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]+tmp_vol);
        if(Unpacked.cmd_info != 0){
            if((Unpacked.cmd_info&0xf) == 0){
                if(___19a53eh != Music.speed){
                    ___19a582h[tmp_chn] += (Unpacked.cmd_info>>4);
                    if(___19a53eh > 0x40) ___19a582h[tmp_chn] = 0x40;
                }
            }
            if((Unpacked.cmd_info&0xf0) == 0){
                if(Music.speed != ___19a53eh){
                    ___19a582h[tmp_chn] -= Unpacked.cmd_info&0xf;
                    if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0;
                }
            }
        }
        ___68a10h[tmp_chn] = 0x10*Music.global_volume*___19a582h[tmp_chn];
        break;
    case 8:
        if(___19a644h[tmp_chn] != ___19a562h[tmp_chn]){
            if(___19a644h[tmp_chn] <= ___19a562h[tmp_chn]){
                if((4*___24e880h[tmp_chn]) > ___19a562h[tmp_chn]){
                    ___19a562h[tmp_chn] = 0;
                }
                else {
                    ___19a562h[tmp_chn] -= 4*___24e880h[tmp_chn];
                }
                if(___19a562h[tmp_chn] < ___19a644h[tmp_chn]) ___19a562h[tmp_chn] = ___19a644h[tmp_chn];
            }
            else {
                ___19a562h[tmp_chn] += 4*___24e880h[tmp_chn];
                if(___19a562h[tmp_chn] > ___19a644h[tmp_chn]){
                    ___19a562h[tmp_chn] = ___19a644h[tmp_chn];
                }
            }
           ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
        }
        if(Unpacked.cmd_info != 0){
            if((Unpacked.cmd_info&0xf) == 0){
                if(___19a53eh != Music.speed){
                    ___19a582h[tmp_chn] += Unpacked.cmd_info>>4;
                    if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0x40;
                }
            }
            if((Unpacked.cmd_info&0xf0) == 0){
                if(Music.speed != ___19a53eh){
                    ___19a582h[tmp_chn] -= Unpacked.cmd_info&0xf;
                    if(___19a582h[tmp_chn] > 0x40) ___19a582h[tmp_chn] = 0;
                }
            }
        }
        ___68a10h[tmp_chn] = 0x10*Music.global_volume*___19a582h[tmp_chn];
        break;
    case 9:
    case 0xa:
    case 0xb:
    case 0xc: break;
    case 0xd:
        if(((Music.speed*___19a540h-___19a53eh)%(Unpacked.cmd_info&0xf)) == 0){
            if((Music.speed*___19a540h) != ___19a53eh){
                ___688d0h_sample_id[tmp_chn] = ___19a542h[tmp_chn];
                switch_TT((Unpacked.cmd_info>>4)-1);
                ___68a10h[tmp_chn] = 0x10* Music.global_volume*___19a582h[tmp_chn];
            }
        }
        break;
    case 0xe:
        switch_QQ((___19a5d2h[tmp_chn]&0xc)>>2);
        if(Music.speed != ___19a53eh){
            ___19a5b2h[tmp_chn] = (___19a5c2h[tmp_chn]>>4)+___19a5b2h[tmp_chn];
            ___19a5b2h[tmp_chn] = ((___19a5c2h[tmp_chn]>>4)+___19a5b2h[tmp_chn])&0x3f;
        }
        tmp_vol += ___19a582h[tmp_chn];
        if(tmp_vol < 0) tmp_vol = 0;
        if(tmp_vol > 0x40) tmp_vol = 0x40;
        ___68a10h[tmp_chn] = 0x10*Music.global_volume*tmp_vol;
        break;
    case 0xf:
        if((Unpacked.cmd_info>>4) == 0xc){
            if(___19a5e4h[tmp_chn] == 0){
                cmd_cmd_mem[tmp_chn] = 0;
                cmd_info_mem[tmp_chn] = 0;
                ___688d0h_sample_id[tmp_chn] = 0xffff;
            }
            else {
                ___19a5e4h[tmp_chn]--;
            }
        }
        else if((Unpacked.cmd_info>>4) == 0xd){
            if(___19a5e4h[tmp_chn] == 0){
                PACKED_WHAT = ___19a604h[tmp_chn]>>8;
                Unpacked.volume = ___19a604h[tmp_chn]&0xff;
                Unpacked.note = ___19a624h[tmp_chn]>>8;
                Unpacked.instrument = ___19a624h[tmp_chn]&0xff;
                if((PACKED_WHAT&0x20) != 0){
                    if(Unpacked.instrument){
                        ___19a542h[tmp_chn] = Unpacked.instrument;
                        ___19a582h[tmp_chn] = Music.volume[Unpacked.instrument];
                    }
                    else {
                        Unpacked.instrument = ___19a542h[tmp_chn];
                        if(Unpacked.instrument){
                            if(Unpacked.note == 0xff){
                                ___19a582h[tmp_chn] = Music.volume[Unpacked.instrument];
                            }
                            else {
                                if(Unpacked.note == 0){
                                    ___19a542h[tmp_chn] = Unpacked.instrument;
                                    ___19a582h[tmp_chn] = Music.volume[Unpacked.instrument];
                                }
                            }
                        }
                        else {
                            Unpacked.note = 0;
                        }
                    }
                    ___688d0h_sample_id[tmp_chn] = Unpacked.instrument;
                    if((Unpacked.note != 0xff)&&(Unpacked.note != 0)){

                        ___19a562h[tmp_chn] = (0x10*st3_periods[Unpacked.note_note])>>Unpacked.note_octave;
                    }
                }
                if((PACKED_WHAT&0x40) != 0) ___19a582h[tmp_chn] = Unpacked.volume;
                ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]);
                ___68a10h[tmp_chn] = 0x10*Music.global_volume*___19a582h[tmp_chn];
                cmd_cmd_mem[tmp_chn] = 0;
                cmd_info_mem[tmp_chn] = 0;
            }
            else {
                ___19a5e4h[tmp_chn]--;
            }
        }
        break;
    case 0x10: break;
    case 0x11:
        switch_KK(___19a5d2h[tmp_chn]&3);
        if(Music.speed != ___19a53eh){

            ___19a5b2h[tmp_chn] += ___19a5c2h[tmp_chn]>>4;
            if(___19a5b2h[tmp_chn] >= 0x40) ___19a5b2h[tmp_chn] -= 0x40;
            
        }
        ___68990h[tmp_chn] = static_BX(___19a562h[tmp_chn]+tmp_vol);
        break;
    default:
        break;
    }
}
#include "drally.h"

#pragma pack(1)
typedef struct s3m_position_s {
    byte    Order;
    byte    Row;
} s3m_position_t;

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

    extern const word st3_periods[12];
	extern unpacked_t 	Unpacked;
	extern music_t 	Music;
    extern s3m_position_t S3M_Position;
    extern byte ___19a686h;
    extern byte ___19a685h;
    extern byte ___19a53fh;
    extern byte ___19a684h;
    extern byte ___19a53ch;
    extern byte ___19a53dh;
    extern byte ___19a540h;
	extern byte ___19a53eh;



extern word ___68c40h;
extern dword ___68a90h[32];
extern dword ___68a10h[32];
extern dword ___68990h[32];
extern dword ___68910h[32];
extern word ___688d0h[32];
extern word ___19a542h[16];
extern word ___19a562h[16];
extern byte ___19a582h[16];
extern byte cmd_cmd_mem[16];
extern byte cmd_info_mem[16];
extern byte ___19a5b2h[16];
extern byte ___19a5c2h[16];
extern byte ___19a5d2h[16];
extern word ___19a5e2h;
extern byte ___19a5e4h[16];
extern byte ___19a5f4h[16];
extern word ___19a604h[16];
extern word ___19a624h[16];
extern word ___19a644h[16];
extern byte ___19a664h[16];
extern byte ___19a674h[16];
extern word ___24e880h[16];

const word ___19a49ch[16] = {
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
dword static_BX(word);

int     tmp_vol;
int     tmp_chn;
#define PACKED_WHAT	pack_what.val
what_t    pack_what;

void switch_GG(byte A1){

    switch(A1){
    case 2:
        ___19a5e2h = W(2*(Unpacked.cmd_info&0xf)+___19a49ch);
        Unpacked.cmd = 0;
        break;
    case 3:
        ___19a5d2h[tmp_chn] = (___19a5d2h[tmp_chn]&0xfc)|(Unpacked.cmd_info&3);
        Unpacked.cmd = 0;
        break;
    case 4:
        ___19a5d2h[tmp_chn] = (___19a5d2h[tmp_chn]&0xf3)|(4*Unpacked.cmd_info&3);
        Unpacked.cmd = 0;
        break;
    case 8:
        ___68a90h[tmp_chn] = (Unpacked.cmd_info&0xf)<<0xc;
        Unpacked.cmd = 0;
        break;
    case 0xb:
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
    case 0xc:
        ___19a5e4h[tmp_chn] = Unpacked.cmd_info&0xf;
        break;
    case 0xd:
        break;
    case 0xe:
        ___19a540h = (Unpacked.cmd_info&0xf)+1;
        break;
    default:
        Unpacked.cmd = 0;
        break;
    }
}

#define GETSIGN_W(v) (!!((v)&0x8000))

void switch_KK(byte A1){
    

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

void switch_QQ(byte A1){

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
void switch_TT(byte A1){

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

void switch_YY(byte A1){

    switch(A1){
    case 0:
        Music.speed = Unpacked.cmd_info;
        ___68c40h = 0x7a12/Music.tempo;
        Unpacked.cmd = 0;
        break;
    case 1:
        S3M_Position.Order = Unpacked.cmd_info;
        ___19a53ch = 1;
        Unpacked.cmd = 0;
        break;
    case 2:
        ___19a53ch = 1;
        //if((Unpacked.cmd_info&0xf) > 9) Unpacked.cmd_info += 6;
        ___19a53fh = (Unpacked.cmd_info&0xf)+0xa*(Unpacked.cmd_info>>4);
        if(___19a53fh > 0x3f) ___19a53fh = 0x3f;
        Unpacked.cmd = 0;
        break;
    case 3:
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
    case 4:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        if(Unpacked.cmd_info >= 0xe0){
            if(___19a562h[tmp_chn] > (0x7dff-4*(Unpacked.cmd_info&0xf))){
                ___688d0h[tmp_chn] = 0xffff;
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
    case 5:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        if(Unpacked.cmd_info >= 0xe0){
            if(___19a562h[tmp_chn] < (4*(Unpacked.cmd_info&0xf)+0x200)){
                ___688d0h[tmp_chn] = 0xffff;
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
    case 6:
        break;
    case 7:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        ___19a5c2h[tmp_chn] = Unpacked.cmd_info;
        break;
    case 8:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 9:
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
    case 0xa:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 0xb:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 0xe:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        ___68910h[tmp_chn] = 0x100*Unpacked.cmd_info;
        ___688d0h[tmp_chn] = ___19a542h[tmp_chn];
        Unpacked.cmd = 0;
        break;
    case 0x10:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        break;
    case 0x11:
        if(Unpacked.cmd_info == 0) Unpacked.cmd_info = cmd_info_mem[tmp_chn];
        ___19a5c2h[tmp_chn] = Unpacked.cmd_info;
        break;
    case 0x12:
        switch_GG(Unpacked.cmd_info>>4);
        break;
    case 0x13:
        if(Unpacked.cmd_info != 0){
            Music.tempo = Unpacked.cmd_info;
            ___68c40h = 0x7a12/Music.tempo;
        }
        Unpacked.cmd = 0;
        break;
    case 0x15:
        Music.global_volume = Unpacked.cmd_info;
        Unpacked.cmd = 0;
        break;
    default:
        Unpacked.cmd = 0;
        break;
    }
}

void switch_ZZ(byte A1){

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
                ___688d0h[tmp_chn] = 0xffff;
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
                ___688d0h[tmp_chn] = 0xffff;
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
                ___688d0h[tmp_chn] = ___19a542h[tmp_chn];
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
                ___688d0h[tmp_chn] = 0xffff;
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
                    ___688d0h[tmp_chn] = Unpacked.instrument;
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
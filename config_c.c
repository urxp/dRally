#include "drally.h"

#pragma pack(1)

enum e_difficulty {
    SPEED_MAKES_ME_DIZZY,
    I_LIVE_TO_RIDE,
    PETROL_IN_MY_VEINS
};

typedef byte name_t[12];

typedef struct dr_cfg {
    byte    soundtype;
    byte    soundirq;
    byte    sounddma;
    dword   soundaddr;
    byte    key;
    byte    config[0xb76];
} dr_cfg;

typedef struct hof_entry {
    name_t  name;
    dword   races;
    dword   difficulty;
} hof_entry;

typedef struct record_s {
    name_t  name;
    dword   min;
    dword   sec;
    dword   sec100;
} record_t;

typedef struct car_records_s {
    record_t    track[0x12];
} car_records_t;

void CONFIG_DEFAULT(void);
unsigned GET_FILE_SIZE(const char *);
void dRally_System_clean(void);
void * dRally_Memory_alloc(dword, dword);
void dRally_Sound_init(byte);
int rand_watcom106(void);

#define CONFIG_FILE_NAME ((const char *)___182744h)

extern byte ___182744h[];
extern byte ___18274ch[];
extern byte CONFIG_SOUND_TYPE[];
extern byte CONFIG_SOUND_IRQ[];
extern byte CONFIG_SOUND_DMA[];
extern byte CONFIG_SOUND_ADDR[];
extern byte ___24cc54h[];
extern byte ___24cc58h[];
extern byte ___1a1140h[];
extern byte ___1a115ch[];
extern byte ___1a1154h[];
extern byte ___1a114ch[];
extern byte ___1a1144h[];
extern byte ___1a113ch[];
extern byte ___1a1130h[];
extern byte ___1a1118h[];
extern byte ___1a111ch[];
extern byte ___1a1f3ch[];
extern byte ___185b38h[];
extern byte ___199fa4h[];
extern byte ___199fa8h[];
extern byte ___1a1e50h[];
extern byte ___1a1120h[];
extern byte ___1a1110h[];
extern byte ___1a1164h[];
extern byte ___1a1158h[];
extern byte ___1a1150h[];
extern byte ___1a1148h[];
extern byte ___1a0e28h[];
extern byte ___19f750h[];
extern byte ___196a90h[];
extern byte ___1a1ffch[];
extern byte ___1a201ah[];
extern byte ___19bd58h[];
extern byte ___196a94h[];
extern byte ___180130h[];
extern byte ___182794h[];
extern byte ___182798h[];
extern byte ___199f42h[];
extern byte ___199f41h[];
extern byte ___199f3eh[];
extern byte ___199f3fh[];
extern byte ___1827a0h[];
extern byte ___199f43h[];
extern byte ___199f44h[];
extern byte ___199f45h[];

static byte ROL_BYTE(byte b, int n){

    return (b<<n)|(b>>(8-n));
}

static byte ROR_BYTE(byte b, int n){

    return (b>>n)|(b<<(8-n));
}

void CONFIG_DECODE(void * ptr, unsigned size, char key){

	dword 	n;

	n = -1;
	while(++n < size){

		B(ptr+n) = key+ROL_BYTE(B(ptr+n), n%5);
		key += 0xf4;
	}
}

void CONFIG_ENCODE(void * ptr, unsigned size, char key){

    dword   n;

    n = -1;
    while(++n < size){

        B(ptr+n) = ROR_BYTE(B(ptr+n)-key, n%5);
        key += 0xf4;
    }
}

static const byte CONFIG_INIT[7] = { 0,0,0,0,0,0,0 };

void CONFIG_READ(void){

    FILE *	fd;
	dword 	file_size, bytes_read;
	void * 	config_dst;
    byte    key;

    file_size = GET_FILE_SIZE(CONFIG_FILE_NAME);

    if(file_size == 0){
    
        fd = strupr_fopen(CONFIG_FILE_NAME, "wb");
        file_size = fwrite(CONFIG_INIT, 1, sizeof(CONFIG_INIT), fd);
        fclose(fd);
    }

    fd = strupr_fopen(CONFIG_FILE_NAME, "rb");
    fread(CONFIG_SOUND_TYPE, 1, 1, fd);
    fread(CONFIG_SOUND_IRQ, 1, 1, fd);
    fread(CONFIG_SOUND_DMA, 1, 1, fd);
    fread(CONFIG_SOUND_ADDR, 4, 1, fd);

    if(file_size == sizeof(CONFIG_INIT)){

        fclose(fd);
        CONFIG_DEFAULT();
    }
    else {

        config_dst = dRally_Memory_alloc(0x1388, 0);
        key = fgetc(fd);
        bytes_read = fread(config_dst, 1, 0x1388, fd);
        fclose(fd);

		CONFIG_DECODE(config_dst, bytes_read, key);

        memcpy(___24cc58h, config_dst, 4);
        memcpy(___24cc54h, config_dst+4, 4);
        memcpy(___185b38h, config_dst+8, 4);
        memcpy(___196a94h, config_dst+0xc, 4);
        memcpy(___19bd58h, config_dst+0x10, 4);
        memcpy(___1a201ah, config_dst+0x14, 0x15);
        memcpy(___1a1ffch, config_dst+0x29, 0x15);
        memcpy(___196a90h, config_dst+0x3e, 4);
        memcpy(___1a1e50h, config_dst+0x42, 4);
        memcpy(___199fa4h, config_dst+0x46, 4);
        memcpy(___199fa8h, config_dst+0x4a, 4);
        memcpy(___19f750h, config_dst+0x4e, 0xa20);
        memcpy(___1a0e28h, config_dst+0xa6e, 0xc8);
        memcpy(___1a1158h, config_dst+0xb36, 4);
        memcpy(___1a1150h, config_dst+0xb3a, 4);
        memcpy(___1a1148h, config_dst+0xb3e, 4);
        memcpy(___1a114ch, config_dst+0xb42, 4);
        memcpy(___1a1140h, config_dst+0xb46, 4);
        memcpy(___1a115ch, config_dst+0xb4a, 4);
        memcpy(___1a1154h, config_dst+0xb4e, 4);
        memcpy(___1a1144h, config_dst+0xb52, 4);
        memcpy(___1a1164h, config_dst+0xb56, 4);
        memcpy(___1a113ch, config_dst+0xb5a, 4);
        memcpy(___1a1110h, config_dst+0xb5e, 4);
        memcpy(___1a1130h, config_dst+0xb62, 4);
        memcpy(___1a1120h, config_dst+0xb66, 4);
        memcpy(___1a1118h, config_dst+0xb6a, 4);
        memcpy(___1a111ch, config_dst+0xb6e, 4);
        memcpy(___1a1f3ch, config_dst+0xb72, 4);

        switch(D(___185b38h)){
        case 0:
            D(___199fa4h) = 0x3f8;
            D(___199fa8h) = 4;
            D(___1a1e50h) = 0;
            break;
        case 1:
            D(___199fa4h) = 0x2f8;
            D(___199fa8h) = 3;
            D(___1a1e50h) = 1;
            break;
        case 2:
            D(___199fa4h) = 0x3e8;
            D(___199fa8h) = 4;
            D(___1a1e50h) = 2;
            break;
        case 3:
            D(___199fa4h) = 0x2e8;
            D(___199fa8h) = 3;
            D(___1a1e50h) = 3;
            break;
        default:
            break;
        }
    }
    
    dRally_Sound_init(B(CONFIG_SOUND_TYPE)||!(B(CONFIG_SOUND_IRQ)&&B(CONFIG_SOUND_DMA)&&D(CONFIG_SOUND_ADDR))); 
}

void CONFIG_WRITE(void){

    FILE *  fd;
    void *  config_src;
    byte    key;

    key = rand_watcom106();
    config_src = dRally_Memory_alloc(0x1388, 0);
    memcpy(config_src, ___24cc58h, 4);
    memcpy(config_src+4, ___24cc54h, 4);
    memcpy(config_src+8, ___185b38h, 4);
    memcpy(config_src+0xc, ___196a94h, 4);
    memcpy(config_src+0x10, ___19bd58h, 4);
    memcpy(config_src+0x14, ___1a201ah, 0x15);
    memcpy(config_src+0x29, ___1a1ffch, 0x15);
    memcpy(config_src+0x3e, ___196a90h, 4);
    memcpy(config_src+0x42, ___1a1e50h, 4);
    memcpy(config_src+0x46, ___199fa4h, 4);
    memcpy(config_src+0x4a, ___199fa8h, 4);
    memcpy(config_src+0x4e, ___19f750h, 0xa20);
    memcpy(config_src+0xa6e, ___1a0e28h, 0xc8);
    memcpy(config_src+0xb36, ___1a1158h, 4);
    memcpy(config_src+0xb3a, ___1a1150h, 4);
    memcpy(config_src+0xb3e, ___1a1148h, 4);
    memcpy(config_src+0xb42, ___1a114ch, 4);
    memcpy(config_src+0xb46, ___1a1140h, 4);
    memcpy(config_src+0xb4a, ___1a115ch, 4);
    memcpy(config_src+0xb4e, ___1a1154h, 4);
    memcpy(config_src+0xb52, ___1a1144h, 4);
    memcpy(config_src+0xb56, ___1a1164h, 4);
    memcpy(config_src+0xb5a, ___1a113ch, 4);
    memcpy(config_src+0xb5e, ___1a1110h, 4);
    memcpy(config_src+0xb62, ___1a1130h, 4);
    memcpy(config_src+0xb66, ___1a1120h, 4);
    memcpy(config_src+0xb6a, ___1a1118h, 4);
    memcpy(config_src+0xb6e, ___1a111ch, 4);
    memcpy(config_src+0xb72, ___1a1f3ch, 4);

    CONFIG_ENCODE(config_src, 0xb76, key);

    fd = strupr_fopen(CONFIG_FILE_NAME, "rb");
    fread(CONFIG_SOUND_TYPE, 1, 1, fd);
    fread(CONFIG_SOUND_IRQ, 1, 1, fd);
    fread(CONFIG_SOUND_DMA, 1, 1, fd);
    fread(CONFIG_SOUND_ADDR, 4, 1, fd);
    fclose(fd);

    fd = strupr_fopen(CONFIG_FILE_NAME, "wb");
    fwrite(CONFIG_SOUND_TYPE, 1, 1, fd);
    fwrite(CONFIG_SOUND_IRQ, 1, 1, fd);
    fwrite(CONFIG_SOUND_DMA, 1, 1, fd);
    fwrite(CONFIG_SOUND_ADDR, 4, 1, fd);
    fputc(key, fd);
    fwrite(config_src, 0xb76, 1, fd);
    fclose(fd);
}

dword default_records[18][6][2] = {
/*
** TRACK         ** VAGABO  DERVIS  SENTIN  SHRIEK  WRAITH  DELIVE **
** **************** ******  ******  ******  ******  ******  ****** **
** SUBURBIA      */ 15,55,  14,49,  14,13,  13,89,  13,22,  11,36, /*
** DOWNTOWN      */ 18,16,  17, 8,  16,23,  15,52,  14,51,  13,36, /*
** UTOPIA        */ 27,89,  25,85,  24,58,  24, 2,  22,15,  20,38, /*
** ROCK ZONE     */ 12,83,  12,21,  11,95,  11,88,  11, 2,  10,42, /*
** SNAKE ALLEY   */ 26,79,  26,42,  37,55,  24,82,  21,80,  19,91, /*
** OASIS         */ 13,42,  12,81,  12, 1,  11,66,  10,96,   9,66, /*
** VELODROME     */ 15,90,  14,89,  14, 0,  13,12,  12, 5,  10,86, /*
** HOLOCAUST     */ 27,80,  26,96,  24,50,  22,78,  21,30,  19,58, /*
** BOGOTA        */ 17,57,  16,72,  15,62,  14,15,  13,85,  13, 1, /*
** WEST END      */ 15,42,  14,63,  14, 1,  13,76,  13,14,  11,48, /*
** NEWARK        */ 18, 0,  16,98,  16,11,  15,62,  14,52,  13,31, /*
** COMPLEX       */ 27,49,  25,63,  24,22,  23,76,  21,91,  20,25, /*
** HELL MOUNTAIN */ 12,68,  12,11,  11,98,  11,71,  11,14,  10,31, /*
** DESERT RUN    */ 26,82,  26,37,  25,61,  24,96,  21,91,  19,69, /*
** PALM SIDE     */ 13,36,  12,62,  12,24,  11,71,  11, 8,   9,81, /*
** EIDOLON       */ 16, 8,  14,67,  14,24,  13, 1,  11,85,  10,78, /*
** TOXIC DUMP    */ 27,98,  26,82,  24,62,  22,57,  21,33,  19,47, /*
** BORNEO        */ 17,42,  16,86,  15,45,  13,98,  13,79,  12,94  /*
** **************** ******  ******  ******  ******  ******  ****** **
*/
};

void CONFIG_DEFAULT(void){

    dword       eax, ebx, ecx, edx, esi, edi, ebp;
    dword       track, car, n;
    hof_entry *     hof_n;
    name_t *        hof_default_names;
    record_t *      record;

    D(___24cc54h) = 0xc000;
    D(___1a1e50h) = 0;
    D(___199fa4h) = 0x3f8;
    D(___199fa8h) = 4;
    D(___196a94h) = 1;
    D(___19bd58h) = 0;
    D(___196a90h) = 1;
    D(___1a1f3ch) = 0;
    B(___1a201ah) = B(___180130h);
    D(___24cc58h) = 0x8000;
    D(___1a1ffch) = D(___182794h);

    record = ___19f750h;
    car = -1;
    while(++car < 6){

        track = -1;
        while(++track < 0x12){

            memcpy(record->name, ___182798h, 7);
            record->min = 0;
            record->sec = default_records[track][car][0];
            record->sec100 = default_records[track][car][1];
            record++;
        }
    }

    D(___1a1110h) = B(___199f3eh);
    D(___1a1118h) = B(___199f44h);
    D(___1a111ch) = B(___199f45h);
    D(___1a1120h) = B(___199f43h);
    D(___1a1130h) = B(___199f3fh);
    D(___1a113ch) = B(___199f41h);
    D(___1a1140h) = 0x2a;
    D(___1a1144h) = 0x39;
    D(___1a1148h) = 0xcb;
    D(___1a114ch) = 0xcd;
    D(___1a1150h) = 0x2c;
    D(___1a1154h) = 0x38;
    D(___1a1158h) = 0x1e;
    D(___1a115ch) = 0x1d;
    D(___1a1164h) = B(___199f42h);

    
    hof_n = ___1a0e28h;
    hof_default_names = ___1827a0h;
    n = -1;
    while(++n < 10){

        memcpy(hof_n[n].name, hof_default_names[n], 0xb);
        hof_n[n].races = n*0x10+0x32;
        hof_n[n].difficulty = I_LIVE_TO_RIDE;
    }

    CONFIG_WRITE();
}

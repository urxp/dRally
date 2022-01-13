#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_free.h"
#include "drally_structs_fixed.h"
#include "drmemory.h"

#define STANDARD_COM1       0
#define STANDARD_COM2       1
#define STANDARD_COM3       2
#define STANDARD_COM4       3
#define CUSTOM_COM_PORT     4

enum e_difficulty {
    SPEED_MAKES_ME_DIZZY,
    I_LIVE_TO_RIDE,
    PETROL_IN_MY_VEINS
};

static void CONFIG_DEFAULT(void);
unsigned GET_FILE_SIZE(const char *);
void dRally_System_clean(void);
int rand_watcom106(void);

#define CONFIG_FILE_NAME "dr.cfg"

extern __BYTE__ CONFIG_SOUND_TYPE;
extern __BYTE__ CONFIG_SOUND_IRQ;
extern __BYTE__ CONFIG_SOUND_DMA;
extern __DWORD__ CONFIG_SOUND_ADDR;
extern __DWORD__ ___24cc54h_sfx_volume;
extern __DWORD__ ___24cc58h_msx_volume;
extern kb_control_t ___1a1140h;
extern __DWORD__ ___1a113ch_gp_brake;
extern __DWORD__ ___1a1130h_gp_steer_right;
extern __DWORD__ ___1a1118h_gp_machine_gun;
extern __DWORD__ ___1a111ch_gp_drop_mine;
extern __DWORD__ ___1a1f3ch_counter;
extern __BYTE__ ___185a5ch[];
extern __DWORD__ ___199fa4h_com_port_addr;
extern __DWORD__ ___199fa8h_com_port_irq;
extern __DWORD__ ___1a1e50h_com_port_standard;
extern __DWORD__ ___1a1120h_gp_turbo_boost;
extern __DWORD__ ___1a1110h_gp_steer_left;
extern __DWORD__ ___1a1164h_gp_accelerate;
extern hof_entry_t ___1a0e28h[10];
extern record_t ___19f750h[6][18];
extern __DWORD__ ___196a90h_modem_dialing;
extern char ___1a1ffch_modem_init_string[0x15];
extern char ___1a201ah_modem_dial_number[0x15];
extern __DWORD__ ___19bd58h_gamepad;
extern __DWORD__ ___196a94h_difficulty;
extern __BYTE__ ___199f42h[];
extern __BYTE__ ___199f41h[];
extern __BYTE__ ___199f3eh[];
extern __BYTE__ ___199f3fh[];
extern __BYTE__ ___199f43h[];
extern __BYTE__ ___199f44h[];
extern __BYTE__ ___199f45h[];

static __BYTE__ ROL_BYTE(__BYTE__ b, int n){

    return (b<<n)|(b>>(8-n));
}

static __BYTE__ ROR_BYTE(__BYTE__ b, int n){

    return (b>>n)|(b<<(8-n));
}

static void CONFIG_DECODE(config_t * p){

	__UNSIGNED__    n, size;
    __BYTE__        key;

    size = sizeof(p->raw);
    key = p->key;
	n = -1;
	while(++n < size){

		p->raw[n] = key+ROL_BYTE(p->raw[n], n%5);
		key += 0xf4;
	}
}

static void CONFIG_ENCODE(config_t * p){

    __UNSIGNED__    n, size;
    __BYTE__        key;

    size = sizeof(p->raw);
    key = p->key = rand_watcom106();
    n = -1;
    while(++n < size){

        p->raw[n] = ROR_BYTE(p->raw[n]-key, n%5);
        key += 0xf4;
    }
}

static const __BYTE__ CONFIG_INIT[7] = { 0,0,0,0,0,0,0 };

void CONFIG_READ(void){

    FILE *	    fd;
	__DWORD__ 	    file_size;
    __BYTE__        key;
    config_t *  cfg;

    file_size = GET_FILE_SIZE(CONFIG_FILE_NAME);

    if(file_size == 0){
    
        fd = strupr_fopen(CONFIG_FILE_NAME, "wb");
        file_size = fwrite(CONFIG_INIT, 1, sizeof(CONFIG_INIT), fd);
        fclose(fd);
    }

    fd = strupr_fopen(CONFIG_FILE_NAME, "rb");

    if(file_size == sizeof(CONFIG_INIT)){

        fread(&CONFIG_SOUND_TYPE, sizeof(__BYTE__), 1, fd);
        fread(&CONFIG_SOUND_IRQ, sizeof(__BYTE__), 1, fd);
        fread(&CONFIG_SOUND_DMA, sizeof(__BYTE__), 1, fd);
        fread(&CONFIG_SOUND_ADDR, sizeof(__DWORD__), 1, fd);
        fclose(fd);
        CONFIG_DEFAULT();
    }
    else {

        cfg = (config_t *)dRMemory_alloc(sizeof(config_t));
        fread(cfg, 1, sizeof(config_t), fd);
        fclose(fd);

        CONFIG_SOUND_TYPE = cfg->soundtype;
        CONFIG_SOUND_IRQ = cfg->soundirq;
        CONFIG_SOUND_DMA = cfg->sounddma;
        CONFIG_SOUND_ADDR = cfg->soundaddr;

		CONFIG_DECODE(cfg);

        ___24cc58h_msx_volume = cfg->msx_volume;
        ___24cc54h_sfx_volume = cfg->sfx_volume;
        D(___185a5ch+7*0x1c+0x18) = cfg->com_port_option;
        ___196a94h_difficulty = cfg->difficulty;
        ___19bd58h_gamepad = cfg->gamepad;
        memcpy(___1a201ah_modem_dial_number, cfg->modem_dial_number, sizeof(cfg->modem_dial_number));
        memcpy(___1a1ffch_modem_init_string, cfg->modem_init_string, sizeof(cfg->modem_init_string));
        ___196a90h_modem_dialing = cfg->modem_dialing;
        ___1a1e50h_com_port_standard = cfg->com_port_standard;
        ___199fa4h_com_port_addr = cfg->com_port_addr;
        ___199fa8h_com_port_irq = cfg->com_port_irq;
        memcpy(___19f750h, cfg->track_records, sizeof(cfg->track_records));
        memcpy(___1a0e28h, cfg->hall_of_fame, sizeof(cfg->hall_of_fame));
        ___1a1140h.accelerate = cfg->kb_accelerate;
        ___1a1140h.brake = cfg->kb_brake;
        ___1a1140h.steer_left = cfg->kb_steer_left;
        ___1a1140h.steer_right = cfg->kb_steer_right;
        ___1a1140h.turbo_boost = cfg->kb_turbo_boost;
        ___1a1140h.machine_gun = cfg->kb_machine_gun;
        ___1a1140h.drop_mine = cfg->kb_drop_mine;
        ___1a1140h.horn = cfg->kb_horn;
        ___1a1164h_gp_accelerate = cfg->gp_accelerate;
        ___1a113ch_gp_brake = cfg->gp_brake;
        ___1a1110h_gp_steer_left = cfg->gp_steer_left;
        ___1a1130h_gp_steer_right = cfg->gp_steer_right;
        ___1a1120h_gp_turbo_boost = cfg->gp_turbo_boost;
        ___1a1118h_gp_machine_gun = cfg->gp_machine_gun;
        ___1a111ch_gp_drop_mine = cfg->gp_drop_mine;
        ___1a1f3ch_counter = cfg->counter;

        switch(D(___185a5ch+7*0x1c+0x18)){
        case STANDARD_COM1:
            ___199fa4h_com_port_addr = 0x3f8;
            ___199fa8h_com_port_irq = 4;
            ___1a1e50h_com_port_standard = STANDARD_COM1;
            break;
        case STANDARD_COM2:
            ___199fa4h_com_port_addr = 0x2f8;
            ___199fa8h_com_port_irq = 3;
            ___1a1e50h_com_port_standard = STANDARD_COM2;
            break;
        case STANDARD_COM3:
            ___199fa4h_com_port_addr = 0x3e8;
            ___199fa8h_com_port_irq = 4;
            ___1a1e50h_com_port_standard = STANDARD_COM3;
            break;
        case STANDARD_COM4:
            ___199fa4h_com_port_addr = 0x2e8;
            ___199fa8h_com_port_irq = 3;
            ___1a1e50h_com_port_standard = STANDARD_COM4;
            break;
        default:
            break;
        }

        dRMemory_free((__POINTER__)cfg);
    }
}

void CONFIG_WRITE(void){

    FILE *      fd;
    config_t *  cfg;

    cfg = (config_t *)dRMemory_alloc(sizeof(config_t));

    fd = strupr_fopen(CONFIG_FILE_NAME, "rb");
    fread(&cfg->soundtype, sizeof(__BYTE__), 1, fd);
    fread(&cfg->soundirq, sizeof(__BYTE__), 1, fd);
    fread(&cfg->sounddma, sizeof(__BYTE__), 1, fd);
    fread(&cfg->soundaddr, sizeof(__DWORD__), 1, fd);
    fclose(fd);

    cfg->msx_volume = ___24cc58h_msx_volume;
    cfg->sfx_volume = ___24cc54h_sfx_volume;
    cfg->com_port_option = D(___185a5ch+7*0x1c+0x18);
    cfg->difficulty = ___196a94h_difficulty;
    cfg->gamepad = ___19bd58h_gamepad;
    memcpy(cfg->modem_dial_number, ___1a201ah_modem_dial_number, sizeof(cfg->modem_dial_number));
    memcpy(cfg->modem_init_string, ___1a1ffch_modem_init_string, sizeof(cfg->modem_init_string));
    cfg->modem_dialing = ___196a90h_modem_dialing;
    cfg->com_port_standard = ___1a1e50h_com_port_standard;
    cfg->com_port_addr = ___199fa4h_com_port_addr;
    cfg->com_port_irq = ___199fa8h_com_port_irq;
    memcpy(cfg->track_records, ___19f750h, sizeof(cfg->track_records));
    memcpy(cfg->hall_of_fame, ___1a0e28h, sizeof(cfg->hall_of_fame));
    cfg->kb_accelerate = ___1a1140h.accelerate;
    cfg->kb_brake = ___1a1140h.brake;
    cfg->kb_steer_left = ___1a1140h.steer_left;
    cfg->kb_steer_right = ___1a1140h.steer_right;
    cfg->kb_turbo_boost = ___1a1140h.turbo_boost;
    cfg->kb_machine_gun = ___1a1140h.machine_gun;
    cfg->kb_drop_mine = ___1a1140h.drop_mine;
    cfg->kb_horn = ___1a1140h.horn;
    cfg->gp_accelerate = ___1a1164h_gp_accelerate;
    cfg->gp_brake = ___1a113ch_gp_brake;
    cfg->gp_steer_left = ___1a1110h_gp_steer_left;
    cfg->gp_steer_right = ___1a1130h_gp_steer_right;
    cfg->gp_turbo_boost = ___1a1120h_gp_turbo_boost;
    cfg->gp_machine_gun = ___1a1118h_gp_machine_gun;
    cfg->gp_drop_mine = ___1a111ch_gp_drop_mine;
    cfg->counter = ___1a1f3ch_counter;

    CONFIG_ENCODE(cfg);

    fd = strupr_fopen(CONFIG_FILE_NAME, "wb");
    fwrite(cfg, sizeof(config_t), 1, fd);
    fclose(fd);

    dRMemory_free((__POINTER__)cfg);
}

static const __BYTE__ default_records[18][6][2] = {
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

static const char hof_default_names[10][12] = {

    "SAM SPEED ", "JANE HONDA", "DUKE NUKEM", "NASTY NICK", "MOTOR MARY",
    "MAD MAC   ", "MATT MILER", "CLINT WEST", "LEE VICE  ", "DARK RYDER"
};

static void CONFIG_DEFAULT(void){

    __DWORD__       eax, ebx, ecx, edx, esi, edi, ebp;
    __DWORD__       track, car, n;

    ___24cc54h_sfx_volume = 0xc000;
    ___24cc58h_msx_volume = 0x8000;
    ___1a1e50h_com_port_standard = STANDARD_COM1;
    ___199fa4h_com_port_addr = 0x3f8;
    ___199fa8h_com_port_irq = 4;
    ___196a94h_difficulty = I_LIVE_TO_RIDE;
    ___19bd58h_gamepad = 0;
    ___196a90h_modem_dialing = 1;
    ___1a1f3ch_counter = 0;
    strcpy(___1a201ah_modem_dial_number, "");
    strcpy(___1a1ffch_modem_init_string, "atz");

    car = -1;
    while(++car < 6){

        track = -1;
        while(++track < 0x12){

            strcpy(___19f750h[car][track].name, "Remedy");
            ___19f750h[car][track].min = 0;
            ___19f750h[car][track].sec = default_records[track][car][0];
            ___19f750h[car][track].sec100 = default_records[track][car][1];
        }
    }

    ___1a1110h_gp_steer_left = B(___199f3eh);
    ___1a1130h_gp_steer_right = B(___199f3fh);
    ___1a113ch_gp_brake = B(___199f41h);
    ___1a1164h_gp_accelerate = B(___199f42h);
    ___1a1120h_gp_turbo_boost = B(___199f43h);
    ___1a1118h_gp_machine_gun = B(___199f44h);
    ___1a111ch_gp_drop_mine = B(___199f45h);
    ___1a1140h.turbo_boost = DR_SCAN_LSHIFT;
    ___1a1140h.horn = DR_SCAN_SPACE;
    ___1a1140h.steer_left = DR_SCAN_LEFT;
    ___1a1140h.steer_right = DR_SCAN_RIGHT;
    ___1a1140h.brake = DR_SCAN_Z;
    ___1a1140h.drop_mine = DR_SCAN_LALT;
    ___1a1140h.accelerate = DR_SCAN_A;
    ___1a1140h.machine_gun = DR_SCAN_LCTRL;

    n = -1;
    while(++n < 10){

        strcpy(___1a0e28h[n].name, hof_default_names[n]);
        ___1a0e28h[n].races = n*0x10+0x32;
        ___1a0e28h[n].difficulty = I_LIVE_TO_RIDE;
    }

    CONFIG_WRITE();
}

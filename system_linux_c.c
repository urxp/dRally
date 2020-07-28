#include "drally.h"

#pragma pack(1)

struct dostime_t {
    unsigned char   hour;       /* 0-23 */
    unsigned char   minute;     /* 0-59 */
    unsigned char   second;     /* 0-59 */
    unsigned char   hsecond;    /* 1/100 second; 0-99 */
};

void dRally_Memory_init(void);
void dRally_Memory_clean(void);

#define NUM_ATEXIT_CALLBACKS   0x40

void_cb exit_cb_array[NUM_ATEXIT_CALLBACKS] = {0};

void dRally_System_doExitCallbacks(void){

    unsigned int   n;
    
    n = NUM_ATEXIT_CALLBACKS;
    while(n--){

        if(exit_cb_array[n]){

            printf("[dRally.System] Calling cleaning function @%08X\n", exit_cb_array[n]);
            exit_cb_array[n]();
            exit_cb_array[n] = (void *)0;
        }
    }
}

void ___5ffbdh(void){

    int     m, n;

    m = n = -1;

    while(++m != NUM_ATEXIT_CALLBACKS){

        if(exit_cb_array[m]) exit_cb_array[++n] = exit_cb_array[m];
    }

    while(++n != NUM_ATEXIT_CALLBACKS) exit_cb_array[n] = (void *)0;
}

void dRally_System_addExitCallback(void_cb fp){

    unsigned int    n;

    n = 0;
    while(1){

        if(exit_cb_array[n] == (void *)0){

            exit_cb_array[n] = fp;
            //___5ffbdh();   
            return;
        }
        else if(exit_cb_array[n] == fp){

            //___5ffbdh();   
            return;
        }

        n++;
    }
}

void dRally_System_removeExitCallback(void_cb fp){

    unsigned int    n;

    n = 0;
    while(1){

        if(exit_cb_array[n] == (void *)0){

            //___5ffbdh(); 
            return;
        }
        else if(exit_cb_array[n] == fp){

            exit_cb_array[n] = (void *)0;
            ___5ffbdh(); 
            return;
        }
        
        n++;
    }
}


struct tm TimeInit;

void _dos_gettime(struct dostime_t * __time){

	Uint32 now;

	now = SDL_GetTicks();
	__time->hsecond = (now%1000)/10;
	now /= 1000;
	now += 3600*TimeInit.tm_hour+60*TimeInit.tm_min+TimeInit.tm_sec;
    __time->second = now%60;
	now /= 60;
    __time->minute = now%60;
	now /= 60;
    __time->hour = now%24;
}

unsigned int __GET_TIMER_TICKS(void){

	time_t 		tmt;
	struct tm 	ltm;

	time(&tmt);
	localtime_r(&tmt, &ltm);

	return 1640625ULL*(3600*ltm.tm_hour+60*ltm.tm_min+ltm.tm_sec)/90112;
}

void dRally_System_init(void){

    time_t 		tmt;

	if(SDL_Init(SDL_INIT_VIDEO)){
		
		SDL_Log("Failed to init video subsystem: %s", SDL_GetError());
	}

    time(&tmt);
    localtime_r(&tmt, &TimeInit);

    dRally_Memory_init();
}


void dRally_System_clean(void){

    dRally_System_doExitCallbacks();
    dRally_Memory_clean();
	SDL_Quit();
}

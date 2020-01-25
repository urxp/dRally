#include <stdio.h>

typedef void (*void_cb)(void);

void dRally_Memory_init(void);
void dRally_Memory_clean(void);

#define NUM_ATEXIT_CALLBACKS   0x40

void_cb exit_cb_array[NUM_ATEXIT_CALLBACKS] = {{0}};

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




void dRally_System_init(void){

    dRally_Memory_init();
}


void dRally_System_clean(void){

    dRally_System_doExitCallbacks();
    dRally_Memory_clean();
}

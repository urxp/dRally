#include "drally.h"
#include "sfx.h"
#include "drally_structs_free.h"

	extern int NUM_OF_CARS;
	extern __BYTE__ ___1e6ed0h[];
	extern __POINTER__ TRX_VAI;
	extern int TRX_WIDTH_QTR;
	extern __BYTE__ ___243cech[];
	extern __BYTE__ ___196dd4h[];
	extern __BYTE__ ___1de580h[];
	extern int MY_CAR_IDX;
	extern int NUM_OF_LAPS;
	extern __BYTE__ ___196df0h[];
	extern int LAP_PREVIOUS_MIN;
	extern int LAP_PREVIOUS_SEC;
	extern int LAP_BEST_MIN;
	extern int LAP_PREVIOUS_100;
	extern int LAP_BEST_SEC;
	extern int LAP_BEST_100;
	extern int LAP_RECORD_MIN;
	extern int LAP_RECORD_SEC;
	extern int LAP_RECORD_100;
	extern char ___19bd64h[16];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___243cb8h[];
	extern __BYTE__ ___243cdch[];
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___196ab0h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);

// POSITION, LAP COUNTER
void race___55ae0h(void){

    int             i, j, n, LapPrevious, LapBest, LapRecord;
	double 	        d_tmp;
	__DWORD__ 	    eax, ebx, ecx, edx, ebp;
	__BYTE__ 	    esp[0xc];
    struct_54_t *   s_54;
    struct_94_t *   s_94;
    struct_35e_t *  s_35e;


    s_54 = (struct_54_t *)___1de7d0h;
    s_94 = (struct_94_t *)___1de580h;
    s_35e = (struct_35e_t *)___1e6ed0h;

    n = -1;
    while(++n < NUM_OF_CARS){

        ecx = B(TRX_VAI+TRX_WIDTH_QTR*((int)s_35e[n].Y1__112>>0x2)+((int)s_35e[n].X1__10e>>0x2));
        ebx = s_35e[n].__0+1;

        if(ecx == ebx){

            s_35e[n].__0++;
        }
        else {

            edx = B(TRX_VAI+TRX_WIDTH_QTR*((int)s_35e[n].Y2__122>>0x2)+((int)s_35e[n].X2__11e>>0x2));
            if(edx == ebx) s_35e[n].__0++;
        }

        D(esp+0x4) = B(TRX_VAI+TRX_WIDTH_QTR*((int)s_35e[n].YLocation>>0x2)+((int)s_35e[n].XLocation>>0x2));

        if(D(esp+0x4) == D(___243cech)){
            
            if((int)D(___243cech) > (int)s_35e[n].__0) s_35e[n].__0 = 0;
        }
    }

    j = -1;
    while(++j < NUM_OF_CARS){

        i = -1;
        while(++i < NUM_OF_CARS){

            if(s_35e[i].Finished == 0){

                if(i != j){

                    if((int)s_35e[j].__0 > (int)s_35e[i].__0){

                        if(s_35e[j].Lap >= s_35e[i].Lap){

                            if(s_35e[j].Position > s_35e[i].Position){

                                B(esp+0x4) = s_35e[j].Position;
                                s_35e[j].Position = s_35e[i].Position;
                                s_35e[i].Position = B(esp+4);
                            }
                        }
                    }
                }
            }
        }
    }

    n = -1;
    while(++n < NUM_OF_CARS){

        if(s_35e[n].__0 == D(___243cech)){

            if(D(___196dd4h) != 0){
            
                s_35e[n].Finished = 1;
                s_94[n].__4 = 0.0f;
            }
            else {
                    
                s_35e[n].Lap++;

                if(n == MY_CAR_IDX){
            
                    if(s_35e[n].Lap == NUM_OF_LAPS){
                    
                        dRally_Sound_pushEffect(2, SFX_FINAL_LAP, 0, 0x10000, 0x50000, 0x8000);
                        D(___196df0h) = 210;
                    }

                    LapPrevious = 6000*LAP_PREVIOUS_MIN+100*LAP_PREVIOUS_SEC+LAP_PREVIOUS_100;
                    LapBest = 6000*LAP_BEST_MIN+100*LAP_BEST_SEC+LAP_BEST_100;
                    LapRecord = 6000*LAP_RECORD_MIN+100*LAP_RECORD_SEC+LAP_RECORD_100;

                    if((LapPrevious < LapBest)||(LapBest == 0)){
            
                        LAP_BEST_MIN = LAP_PREVIOUS_MIN;
                        LAP_BEST_SEC = LAP_PREVIOUS_SEC;
                        LAP_BEST_100 = LAP_PREVIOUS_100;
                    }

                    if((LapPrevious < LapRecord)||(LapRecord == 0)){

                        if((___19bd64h[2] != 0x30)&&(D(___196df0h) == 0)) dRally_Sound_pushEffect(2, SFX_LAP_RECORD, 0, 0x10000, 0x50000, 0x8000);

                        LAP_RECORD_MIN = LAP_PREVIOUS_MIN;
                        LAP_RECORD_SEC = LAP_PREVIOUS_SEC;
                        LAP_RECORD_100 = LAP_PREVIOUS_100;
                    }
                    else {

                        D(___196df0h) = 0;
                    }

                    D(___243cb8h) = D(___243ca0h);
                    D(___243cdch) = 210;
                    LAP_PREVIOUS_100 = 0;
                    LAP_PREVIOUS_SEC = 0;
                    LAP_PREVIOUS_MIN = 0;
                    D(___243ca0h) = 0;
                }
            }

            s_35e[n].__0 = 0;
            if(s_35e[n].Lap > NUM_OF_LAPS){

                s_35e[n].Finished = 1;
                s_35e[n].Lap = NUM_OF_LAPS;

                if(n == MY_CAR_IDX){
                
                    s_35e[n].Drug = 0;
                    D(___243cdch) = 9999;
                }

                s_94[n].__4 = 0.0f;
                D(___196dd4h) = 1;

                if(!strcmp(s_54[n].__0, "DUKE NUKEM")&&(s_35e[n].Position == 1)) dRally_Sound_pushEffect(2, SFX_HAIL_TO_THE_KING, 0, 0x10000, 0x50000, 0x8000);
            }
        }
    }

#if defined(DR_MULTIPLAYER)
    if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

        if(s_94[0].__0 != 6){

            ebp = 0;
            n = -1;
            while(++n < NUM_OF_CARS){

                edx = s_35e[n].__0+D(___243cech)*s_35e[n].Lap;
                if(((int)edx > (int)ebp)&&(n != MY_CAR_IDX)) ebp = edx;
            }

            eax = s_35e[MY_CAR_IDX].__0+D(___243cech)*(s_35e[MY_CAR_IDX].Lap+1);

            if(((int)ebp > (int)eax)&&(D(___196ab0h) == 0)){

                D(___196ab0h) = 1;
                dRally_Sound_pushEffect(2, SFX_YOUVE_BEEN_LAPPED, 0, 0x10000, 0x50000, 0x8000);
            }

            if(((int)ebp < (int)eax)&&(D(___196ab0h) == 1)) D(___196ab0h) = 0;
        }
#if defined(DR_MULTIPLAYER)
    }
#endif // DR_MULTIPLAYER
}

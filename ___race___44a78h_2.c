#include "drally.h"
#include "drally_structs_free.h"
#include "netpage.h"

	extern __BYTE__ ___243880h[];
	extern int NUM_OF_CARS;
	extern int CONNECTION_TYPE;
	extern __BYTE__ ___24331ch[];
	extern int MY_CAR_IDX;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___196e60h[];
	extern __BYTE__ ___243d0ch[];
	extern __BYTE__ ___196e64h[];
	extern __BYTE__ ___243cd8h[];
	extern __BYTE__ ___243318h[];
	extern __POINTER__ ___24cee0h[4];
	extern __BYTE__ ___1a51c0h[];

__DWORD__ __GET_FRAME_COUNTER(void);
void ___446ach(void);
void ___44a4ch(int A1);
void ___44730h_helper(int);
void ___61518h(void);

static int helper22(NetPage * npg, int offset){

    __DWORD__   ecx, ebp;

    ebp = 2+__GET_FRAME_COUNTER();

    ecx = 0;
    while(1){

        if((npg_peekb(npg, offset) == 0xff)||(ecx != 0)) break;

        ___61518h();

        if(__GET_FRAME_COUNTER() > ebp){
            
            ecx = 1;
            npg_override(npg, 0);
        }//i
    }//w

    return ecx;
}


void race___44a78h(void){

    int             i, n;
	__DWORD__	    eax, ebx, ecx, edx, esi, ebp;
    NetPage *       npg;
    struct_35e_t *  s_35e;


    s_35e = (struct_35e_t *)___1e6ed0h;
	D(___243880h) = 0;

    n = -1;
    while(++n < NUM_OF_CARS){

        D(___24331ch) = n;
        
        if((CONNECTION_TYPE == 1)||(CONNECTION_TYPE == 3)||(CONNECTION_TYPE == 4)) D(___24331ch) = 0;

        npg = (NetPage *)___24cee0h[D(___24331ch)];

        if(n != MY_CAR_IDX){

            i = -1;
            while(++i < 0x10) s_35e[n].Ctrls[i] = 0;

            D(___243d08h) = 0;
            D(___196e60h) = 0;
            D(___243d0ch) = 0x10;
            D(___196e64h) = 0;
            
            if(getCounter(5) > 0){

                while(1){

                    if(((int)D(___243d08h) >= 0x10)||(D(___243cd8h) != 0)||((int)D(___243d0ch) <= 0)||(D(___243318h) != 0)) break;
                    D(___243d0ch)--;
                    ___61518h();

                    if(npg->read_p == npg->write_p){

                        ___44a4ch(4);
                    }
                    else {

                        D(___1a51c0h+4*n) = getCounter(3);

                        if(npg->data[npg->read_p&0xfff] <= 0x7f){

                            s_35e[n].Ctrls[D(___243d08h)] = npg->data[npg->read_p&0xfff];
                            npg_override(npg, 0);
                            D(___196e64h) = D(___243d08h);
                            D(___243d08h)++;
                        }
                        else {

                            if(npg->data[npg->read_p&0xfff] == 0xfe){

                                if(helper22(npg, 0x12) != 1) ___446ach();
                            }

                            if((npg->data[npg->read_p&0xfff] == 0xd3)||(npg->data[npg->read_p&0xfff] == 0xc5)){

                                if(helper22(npg, 7) != 1) npg->read_p += 8;
                            }

                            if(npg->data[npg->read_p&0xfff] == 0xfd){
                                
                                D(___243cd8h) = 1;
                                npg_override(npg, 0);
                            }

                            if(npg->data[npg->read_p&0xfff] == 0xfc){
                                
                                D(___243318h) = 1;
                                npg_override(npg, 0);
                            }
                        }//i
                    }//i

                    if((int)D(___243d08h) >= getCounter(5)) break;
                }//w
            }//i

            while(1){

                if(npg_done(npg)) break;

                if(npg->data[npg->read_p&0xfff] <= 0x7f){
            
                    if((npg->data[npg->read_p&0xfff]&0x10) != 0) s_35e[n].Ctrls[D(___196e64h)] |= 0x10;
                    if((npg->data[npg->read_p&0xfff]&0x20) != 0) s_35e[n].Ctrls[D(___196e64h)] |= 0x20;
                    if((npg->data[npg->read_p&0xfff]&0x40) != 0) s_35e[n].Ctrls[D(___196e64h)] |= 0x40;

                    npg_override(npg, 0);
                }
                else {

                    if(npg->data[npg->read_p&0xfff] == 0xfe){

                        if(helper22(npg, 0x12) != 1) ___446ach();
                    }
                    else {

                        if((npg->data[npg->read_p&0xfff] == 0xd3)||(npg->data[npg->read_p&0xfff] == 0xc5)){

                            if(helper22(npg, 7) != 1) npg->read_p += 8;
                        }
                        else {

                            if(npg->data[npg->read_p&0xfff] == 0xfd){

                                D(___243cd8h) = 1;
                               
                            }
                            else {

                                if(npg->data[npg->read_p&0xfff] == 0xfc) D(___243318h) = 1;
                            }

                            npg_override(npg, 0);
                        }
                    }//i
                }//i
            }//W

            ___44730h_helper(n);
            npg->read_p = npg->write_p;
        }//i
    }//w

    n = -1;
    while(++n < NUM_OF_CARS){

        if((n != MY_CAR_IDX)&&((int)(D(___1a51c0h+4*n)+700) < getCounter(3))) D(___243318h) = 1;
    }

	D(___243880h) = 1;
}

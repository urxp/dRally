#include "drally.h"
#include "sfx.h"

	extern byte ___243cf4h[];
	extern byte ___1e6ed0h[];
	extern void * ___243d78h;
	extern byte ___243d30h[];
	extern byte ___243cech[];
	extern byte ___243c60h[];
	extern byte ___196dd4h[];
	extern byte ___1de580h[];
	extern byte ___243ce8h[];
	extern byte ___1a1134h[];
	extern byte ___196df0h[];
	extern byte ___1a1094h[];
	extern byte ___1a109ch[];
	extern byte ___1a1034h[];
	extern byte ___1a102ch[];
	extern byte ___1a108ch[];
	extern byte ___1a0ff4h[];
	extern byte ___2438bch[];
	extern byte ___2438b8h[];
	extern byte ___2438c0h[];
	extern char ___19bd64h[16];
	extern byte ___243ca0h[];
	extern byte ___243cb8h[];
	extern byte ___243cdch[];
	extern byte ___1de7d0h[];
	extern byte ___196ab0h[];
#if defined(DR_MULTIPLAYER)
	extern byte ___19bd60h[];
#endif // DR_MULTIPLAYER

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

// POSITION, LAP COUNTER
void race___55ae0h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, ebx0, ecx0, edx0;
	byte 	esp[0xc];


    edi = D(___243cf4h);
    esi ^= esi;

	if((int)edi > 0){

		edx = 0x35e*edi;
		eax ^= eax;
		D(esp) = edx;

        while(1){

            FPUSH(F32(eax+___1e6ed0h+0x10e));
            FPUSH(F32(eax+___1e6ed0h+0x112));
            d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
            ST(0) = (int)ST(0);
            D(esp+0x8) = (int)FPOP();
            ebx = D(esp+0x8);
            ST(0) = (int)ST(0);
            ebx0 = (int)ebx>>0x2;
            D(esp+0x8) = (int)FPOP();
            ebx = D(esp+0x8);
            ebp = D(___243d30h);
            ebx = (int)ebx>>0x2;
            ebx = ebx*ebp;
            L(ecx) = B(___243d78h+ebx0+ebx);
            ebx = D(eax+___1e6ed0h);
            ecx &= 0xff;
            ebx++;

            if(ecx == ebx){
    
                D(eax+___1e6ed0h)++;
            }
            else {

                FPUSH(F32(eax+___1e6ed0h+0x122));
                FPUSH(F32(eax+___1e6ed0h+0x11e));
                ST(0) = (int)ST(0);
                D(esp+0x8) = (int)FPOP();
                ecx = D(esp+0x8);
                ST(0) = (int)ST(0);
                ecx0 = (int)ecx>>0x2;
                D(esp+0x8) = (int)FPOP();
                edx = D(esp+0x8);
                edx = (int)edx>>0x2;
                edx = edx*ebp;
                L(edx) = B(___243d78h+ecx0+edx);
                edx &= 0xff;
                if(edx == ebx) D(eax+___1e6ed0h)++;
            }

            FPUSH(F32(eax+___1e6ed0h+0xb4));
            FPUSH(F32(eax+___1e6ed0h+0xb8));
            d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
            ST(0) = (int)ST(0);
            D(esp+0x8) = (int)FPOP();
            edx = D(esp+0x8);
            ST(0) = (int)ST(0);
            edx0 = (int)edx>>0x2;
            D(esp+0x8) = (int)FPOP();
            edx = D(esp+0x8);
            ecx = D(___243d30h);
            edx = (int)edx>>0x2;
            edx = edx*ecx;
            L(edx) = B(___243d78h+edx0+edx);
            edx &= 0xff;
            ebp = D(___243cech);
            D(esp+0x4) = edx;

            if(edx == ebp){
                
                if((int)ebp > (int)D(eax+___1e6ed0h)) D(eax+___1e6ed0h) = 0;
            }

            edx = D(esp);
            eax += 0x35e;
            esi++;
            if((int)eax >= (int)edx) break;
        }
    }

    esi ^= esi;

    if((int)edi > 0){

        ebp ^= ebp;

        while(1){

            ecx ^= ecx;

            if((int)edi > 0){

                edx = ebp;
                eax ^= eax;

                while(1){

                    if(D(eax+___1e6ed0h+0x10a) == 0){

                        if(ecx != esi){

                            ebx = D(edx+___1e6ed0h);

                            if((int)ebx > (int)D(eax+___1e6ed0h)){

                                L(ebx) = B(edx+___1e6ed0h+0x108);

                                if(L(ebx) >= B(eax+___1e6ed0h+0x108)){

                                    L(ebx) = B(edx+___1e6ed0h+0x109);

                                    if(L(ebx) > B(eax+___1e6ed0h+0x109)){

                                        ebx = B(edx+___1e6ed0h+0x109);
                                        D(esp+0x4) = ebx;
                                        B(edx+___1e6ed0h+0x109) = B(eax+___1e6ed0h+0x109);
                                        B(eax+___1e6ed0h+0x109) = B(esp+4);
                                    }
                                }
                            }
                        }
                    }

                    ecx++;
                    eax += 0x35e;
                    if((int)ecx >= (int)edi) break;
                }
            }

            esi++;
            ebp += 0x35e;
            if((int)esi >= (int)edi) break;
        }
    }

	esi ^= esi;
	
    if((int)edi > 0){

        while(1){

            eax = 0x35e*esi;
            ebp = D(___243cech);
            D(___243cf4h) = edi;
            edx = D(eax+___1e6ed0h);
            D(___243c60h) = esi;

            if(edx == ebp){

                if(D(___196dd4h) != 0){
                
                    D(eax+___1e6ed0h+0x10a) = 1;
                    eax = 0x94*esi;
                    ecx ^= ecx;
                    D(eax+___1de580h+4) = ecx;
                }

                if(D(___196dd4h) == 0){
                        
                    eax = 0x35e*esi;
                    L(edx) = B(eax+___1e6ed0h+0x108);
                    L(edx)++;
                    ebx = D(___243ce8h);
                    B(eax+___1e6ed0h+0x108) = L(edx);

                    if(esi == ebx){

                        L(eax) = L(edx);
                        ecx = D(___1a1134h);
                        eax &= 0xff;
                        D(___243c60h) = ebx;
                        D(___243cf4h) = edi;
                
                        if(eax == ecx){
                        
                            dRally_Sound_pushEffect(2, SFX_FINAL_LAP, 0, 0x10000, 0x50000, 0x8000);
                            D(___196df0h) = 0xd2;
                        }

                        edx = 0x1770*D(___1a1094h);
                        eax = 0x64*D(___1a109ch);
                        ecx = D(___1a1034h);
                        eax += edx;
                        edx = 0x1770*ecx;
                        ebx = D(___1a102ch);
                        ebp = D(___1a108ch);
                        ebx += eax;
                        eax = 0x64*ebp;
                        eax += edx;
                        edx = D(___1a0ff4h);
                        edi = D(___243cf4h);
                        eax += edx;
                        esi = D(___243c60h);

                        if((int)ebx < (int)eax){
                
                            D(___1a1034h) = D(___1a1094h);
                            D(___1a108ch) = D(___1a109ch);
                            D(___1a0ff4h) = D(___1a102ch);
                        }
                        else {

                            if(ecx == 0){
                    
                                if(ebp == 0){

                                    if(edx == 0){

                                        D(___1a1034h) = D(___1a1094h);
                                        D(___1a108ch) = D(___1a109ch);
                                        D(___1a0ff4h) = D(___1a102ch);
                                    }
                                }
                            }
                        }

                        eax = 0x1770*D(___1a1094h);
                        edx = 0x64*D(___1a109ch);
                        ecx = D(___2438bch);
                        eax += edx;
                        edx = 0x1770*ecx;
                        ebx = D(___1a102ch);
                        ebp = D(___2438b8h);
                        ebx += eax;
                        eax = 0x64*ebp;
                        eax += edx;
                        edx = D(___2438c0h);
                        eax += edx;

                        if((int)ebx < (int)eax){

                            H(edx) = ___19bd64h[2];
                            D(___243c60h) = esi;
                            D(___243cf4h) = edi;
                            
                            if((H(edx) != 0x30)&&(D(___196df0h) == 0)) dRally_Sound_pushEffect(0x2, SFX_LAP_RECORD, 0, 0x10000, 0x50000, 0x8000);

                            D(___2438bch) = D(___1a1094h);
                            D(___2438b8h) = D(___1a109ch);
                            D(___2438c0h) = D(___1a102ch);
                            esi = D(___243c60h);
                            edi = D(___243cf4h);
                        }
                        else {

                            if(ecx){

                                D(___196df0h) = 0;
                            }
                            else {

                                if(ebp){

                                    D(___196df0h) = 0;
                                }
                                else {

                                    if(edx == 0){

                                        H(edx) = ___19bd64h[2];
                                        D(___243c60h) = esi;
                                        D(___243cf4h) = edi;
                                        
                                        if((H(edx) != 0x30)&&(D(___196df0h) == 0)) dRally_Sound_pushEffect(2, SFX_LAP_RECORD, 0, 0x10000, 0x50000, 0x8000);

                                        D(___2438bch) = D(___1a1094h);
                                        D(___2438b8h) = D(___1a109ch);
                                        D(___2438c0h) = D(___1a102ch);
                                        esi = D(___243c60h);
                                        edi = D(___243cf4h);
                                    }
                                    else {

                                        D(___196df0h) = 0;
                                    }
                                }
                            }
                        }

                        ebx = 0xd2;
                        eax = D(___243ca0h);
                        ecx = 0;
                        D(___243cb8h) = eax;
                        D(___243cdch) = ebx;
                        D(___1a102ch) = ecx;
                        D(___1a109ch) = ecx;
                        D(___1a1094h) = ecx;
                        D(___243ca0h) = ecx;
                    }
                }

                eax = 0x35e*esi;
                ecx = D(___1a1134h);
                D(___243cf4h) = edi;
                ebx ^= ebx;
                edx ^= edx;
                D(___243c60h) = esi;
                L(edx) = B(eax+___1e6ed0h+0x108);
                D(eax+___1e6ed0h) = ebx;

		        if((int)edx > (int)ecx){

                    esi = 0x1;
                    L(edx) = B(___1a1134h);
                    ebp = D(___243ce8h);
                    D(eax+___1e6ed0h+0x10a) = esi;
                    esi = D(___243c60h);
                    B(eax+___1e6ed0h+0x108) = L(edx);

                    if(esi == ebp){
                    
                        edx = 0x270f;
                        D(eax+___1e6ed0h+0x34e) = ebx;
                        D(___243cdch) = edx;
                    }

                    eax = 0x94*esi;
                    ecx ^= ecx;
                    D(eax+___1de580h+4) = ecx;
                    eax = 0x54*esi;
                    ebp = 0x1;
                    D(___196dd4h) = ebp;
                    D(___243c60h) = esi;
                    eax = strcmp(___1de7d0h+eax, "DUKE NUKEM");
                    esi = D(___243c60h);

                    if(eax == 0){

                        eax = 0x35e*esi;
                        
                        if(B(eax+___1e6ed0h+0x109) == 1) dRally_Sound_pushEffect(2, SFX_HAIL_TO_THE_KING, 0, 0x10000, 0x50000, 0x8000);
                    }
                }
            }

            esi = D(___243c60h);
            edi = D(___243cf4h);
            esi++;
            if((int)esi >= (int)edi) break;
        }
    }

    esi ^= esi;
    ebp ^= ebp;

    if((int)edi > 0){

        ebx = D(___243cech);
        eax ^= eax;

        while(1){

            edx ^= edx;
            L(edx) = B(eax+___1e6ed0h+0x108);
            edx = edx*ebx;
            edx += D(eax+___1e6ed0h);
            if(((int)edx > (int)ebp)&&(esi != D(___243ce8h))) ebp = edx;
            esi++;
            eax += 0x35e;
            if((int)esi >= (int)edi) break;
        }
    }

    eax = 0x35e*D(___243ce8h);
    edx ^= edx;
    L(edx) = B(eax+___1e6ed0h+0x108);
    ebx = D(___243cech);
    edx++;
    edx = edx*ebx;
    eax = D(eax+___1e6ed0h);
    D(___243c60h) = esi;
    eax += edx;
    D(___243cf4h) = edi;

    if((int)ebp > (int)eax){

        if(D(___196ab0h) == 0){

            if(D(___1de580h) != 6){
#if defined(DR_MULTIPLAYER)
                if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
                    D(___196ab0h) = 1;
                    dRally_Sound_pushEffect(2, SFX_YOUVE_BEEN_LAPPED, 0, 0x10000, 0x50000, 0x8000);
#if defined(DR_MULTIPLAYER)
                }
#endif // DR_MULTIPLAYER
            }
        }
    }

    eax = 0x35e*D(___243ce8h);
    edx ^= edx;
    L(edx) = B(eax+___1e6ed0h+0x108);
    ebx = D(___243cech);
    edx++;
    edx = edx*ebx;
    eax = D(eax+___1e6ed0h);
    edi = D(___243cf4h);
    eax += edx;

    esi = D(___243c60h);
    if((int)ebp < (int)eax){

        if(D(___196ab0h) == 1){

            if(D(___1de580h) != 6){
#if defined(DR_MULTIPLAYER)
                if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
                    D(___196ab0h) = 0;
#if defined(DR_MULTIPLAYER)
                }
#endif // DR_MULTIPLAYER
            }
        }
    }

    D(___243cf4h) = edi;
    D(___243c60h) = esi;
}

#include "x86.h"

#pragma pack(1)

typedef struct pal3 {
    byte    __0;
    byte    __1;
    byte    __2;
} pal3;

typedef struct b96 {
    byte    arr[0x96];
} b96;

typedef struct Driver {
    char    Name[0xc];      // +0
    dword   Damage;         // +ch
    dword   Engine;         // +10h
    dword   Tire;           // +14h
    dword   Armor;          // +18h
    dword   Car;            // +1ch
    dword   __20;
    dword   __24;
    dword   __28;
    dword   Color;
    dword   Money;          // +30h
    dword   __34;
    dword   __38;
    dword   CarPrice;       // +3ch
    dword   Face;           // +40h
    dword   Points;         // +44h
    dword   Standings;      // +48h
    dword   __4c;
    dword   __50;
    dword   __54;
    dword   __58;
    dword   __5c;
    dword   __60;
    dword   __64;
    dword   __68;
} Driver;

typedef enum eNetworkConnectionType {
    NONE, SERIAL_CONNECTION, IPX_NETWORK, DIALUP_MODEM, ANSWER_MODEM
} eNetworkConnectionType;

    extern byte ___59e68h[];
    extern int ___196a88h;
    extern int ___196ad8h;
    extern pal3 * p_pal_bgcop;
    extern dword NetworkConnectionEstablished;
    extern byte ___1a1f4fh[];
    extern byte ___1a1f4eh[];
    extern byte ___1a1dbah[];
    extern dword ___185a1ch;
    extern byte RowBox0Colors_R5[];
    extern byte ___196a74h[];
    extern b96 RowBoxBuffers[];
    extern void * ___1a0f9ch;
    extern dword MyID;
    extern Driver Roster[];
    extern eNetworkConnectionType NetworkConnectionType;
    extern byte ___199fc8h[];

    // "-- "
    extern const char ___180864h[];

    // " is currently on Death Rally."
    extern const char ___182174h[];

    // " is waiting for you to join the next race."
    extern const char ___182194h[];

    // "-- Modem connection lost!"
    extern const char ___1821c0h[];

    // 0.015625 (1/64)
    extern double d_1o64;       

    void ___1e62ch(dword);
   	void ___3a454h(void);
    void waitSync__dr(void);
    void ___2a394h(void);
    void ___3f77ch(void *);
    void ___1e4f8h(void);
    void ___6168ch(void);
    void ___23488h(void *, dword, dword);
    void ___233c0h(void);
    void ___12dc4h(void);
    dword procChatData(void *, dword);

	#pragma aux writeColor__video parm routine []
    void writeColor__video(dword, dword, dword, dword);
    
	void ___12d6ch(void);
    void footer__dr(void);
    void * allocMemSafe(dword);

    char * strcpy__clib3r(char * dest, const char * src);

#if defined(__WATCOMC__)
    static inline int idiv_rem(dword, dword, int);
    #pragma aux idiv_rem =          \
        "idiv   ebx"                \
        parm [eax] [edx] [ebx]      \
        value [edx]
#else
    static inline int idiv_rem(dword lo, dword hi, int d){

        return ((long long)lo + ((long long)hi << 0x20)) % d;
    }
#endif
	

    static inline void chatNewLine(void){

        dword n = 0;

        while(n < 0x15){

            strcpy__clib3r((void *)&RowBoxBuffers[n], (void *)&RowBoxBuffers[n+1]);
            ___1a1f4eh[n] = ___1a1f4fh[n];
            n++;
        }      
    }
       
    static inline void updateChat(dword LineColor){

        B(RowBox0Colors_R5) = LineColor;

        if(D(___196a74h) == 1){

            if(___185a1ch){
                
                ___233c0h(); ___12dc4h();
            }
            else {
                
                footer__dr(); ___12d6ch();
            }
        }
    }


// ~2ab74h
void updateMenuBackgroundAndTextArea(){

	char    * tmp_p, buffer[0x400];
    double  __0, __1, __2;
    dword   n;

	if(B(___59e68h)) ___3a454h();

    ___196a88h++;
    waitSync__dr();
    ___2a394h();

    if(idiv_rem(___196a88h, (___196a88h < 0) ? -1 : 0, 0x46) == 1){

        if(--___196ad8h < 0) ___196ad8h = 0x1ff;

        __0 = (double)p_pal_bgcop[___196ad8h].__0 * d_1o64;
        __1 = (double)p_pal_bgcop[___196ad8h].__1 * d_1o64;
        __2 = (double)p_pal_bgcop[___196ad8h].__2 * d_1o64;

        n = 0;

        while(n < 0x20){

            writeColor__video(
                (int)(__2 * (double)n) & 0xff,
                (int)(__1 * (double)n) & 0xff,
                (int)(__0 * (double)n) & 0xff,
                (n + 0xc0) & 0xff
            );
  
            n++;
        }
    }

    if(NetworkConnectionEstablished){

        ___6168ch();

        if(procChatData(buffer, 1)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(1);    
        }

        if(procChatData(buffer, 6)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(0);
        }

        if(procChatData(buffer, 7)){

            tmp_p = ___1a0f9ch = allocMemSafe(0x64);
            strcpy__clib3r(tmp_p, ___180864h);
            while(*tmp_p++);
            strcpy__clib3r(--tmp_p, Roster[MyID].Name);
            while(*tmp_p++);
            strcpy__clib3r(--tmp_p, ___182174h);
            ___23488h(___1a0f9ch, 0x64, 8);
            ___3f77ch(___1a0f9ch);
        }

        if(procChatData(buffer, 0x14)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(0);
            
            ___1e4f8h();
            MyID = 0x13;
        }

        if(procChatData(buffer, 9)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(0);

            ___1e62ch(1);
        }

        if(procChatData(&n, 0x13)){

            chatNewLine();

            tmp_p = ___1a1dbah;
            strcpy__clib3r(tmp_p, ___180864h);
            while(*tmp_p++);
            strcpy__clib3r(--tmp_p, Roster[n&0xff].Name);
            while(*tmp_p++);
            strcpy__clib3r(--tmp_p, ___182194h);
            
            updateChat(0);
        }

        if((NetworkConnectionType == DIALUP_MODEM)
        ||(NetworkConnectionType == ANSWER_MODEM)){

            if((B(___199fc8h)&0x80) == 0){

                chatNewLine();
                strcpy__clib3r(___1a1dbah, ___1821c0h);
                updateChat(0);

                ___1e62ch(0);
            }
        }
    }
}

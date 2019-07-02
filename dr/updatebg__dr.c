#include "x86.h"

#pragma pack(1)

typedef struct pal3 {
    byte    __0;
    byte    __1;
    byte    __2;
} pal3;

typedef byte b96[0x96];
typedef byte b6c[0x6c];

typedef enum eNetworkConnectionType {
    NONE, SERIAL_CONNECTION, IPX_NETWORK, DIALUP_MODEM, ANSWER_MODEM
} eNetworkConnectionType;

    extern byte ___59e68h[];
    extern int ___196a88h;
    extern int ___196ad8h;
    extern pal3 * bgcop_pal_p;
    extern dword NetworkConnectionEstablished;
    extern byte ___1a1f4fh[];
    extern byte ___1a1f4eh[];
    extern byte ___1a1dbah[];
    extern dword ___185a1ch;
    extern byte RowBox0Colors_R5[];
    extern byte ___196a74h[];
    extern b96 RowBoxBuffers[];
    extern void * ___1a0f9ch;
    extern dword ___1a1ef8h;
    extern b6c ___1a01e0h[];
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
    void ___58c60h(void);
    void ___2a394h(void);
    void ___3f77ch(void *);
    void ___1e4f8h(void);
    void ___6168ch(void);
    void ___23488h(void *, dword, dword);
    void ___233c0h(void);
    void ___12dc4h(void);
    dword ___23594h(void *, dword);

	#pragma aux ___5e0f9h parm routine []
    void ___5e0f9h(dword, dword, dword, dword);
    
	void ___12d6ch(void);
    void footer__dr(void);
    void * allocMemSafe(dword);

    char * strcpy__clib3r(char * dest, const char * src);

#if defined(__WATCOMC__)
    static inline int idiv_rem(int, int, int);
    #pragma aux idiv_rem =          \
        "idiv   ebx"                \
        parm [eax] [edx] [ebx]      \
        value [edx]
#else
    static inline int idiv_rem(int lo, int hi, int d){

        return ((long long)lo + ((long long)hi << 0x20)) % d;
    }
#endif
	

    static inline void chatNewLine(void){

        dword n = 0;

        while(n < 0x15){

            strcpy__clib3r(RowBoxBuffers[n], RowBoxBuffers[n+1]);
            ___1a1f4eh[n] = ___1a1f4fh[n];
            n++;
        }      
    }
       
    static inline void updateChat(dword LineColor){

        B(RowBox0Colors_R5) = LineColor;

        if(D(___196a74h) == 1){

            ___185a1ch?(___233c0h(),___12dc4h()):(footer__dr(),___12d6ch());
        }
    }


// ~2ab74h
void updateMenuBackgroundAndTextArea(){

	char    * tmp_p, buffer[0x400];
    double  __0, __1, __2;
    dword   n;

	if(B(___59e68h)) ___3a454h();

    ___196a88h++;
    ___58c60h();
    ___2a394h();

    if(idiv_rem(___196a88h, (___196a88h < 0) ? -1 : 0, 0x46) == 1){

        if(--___196ad8h < 0) ___196ad8h = 0x1ff;

        __0 = (double)bgcop_pal_p[___196ad8h].__0 * d_1o64;
        __1 = (double)bgcop_pal_p[___196ad8h].__1 * d_1o64;
        __2 = (double)bgcop_pal_p[___196ad8h].__2 * d_1o64;

        n = 0;

        while(n < 0x20){

            ___5e0f9h(
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

        if(___23594h(buffer, 1)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(1);    
        }

        if(___23594h(buffer, 6)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(0);
        }

        if(___23594h(buffer, 7)){

            tmp_p = ___1a0f9ch = allocMemSafe(0x64);
            strcpy__clib3r(tmp_p, ___180864h);
            while(*tmp_p++);
            strcpy__clib3r(--tmp_p, ___1a01e0h[___1a1ef8h]);
            while(*tmp_p++);
            strcpy__clib3r(--tmp_p, ___182174h);
            ___23488h(___1a0f9ch, 0x64, 8);
            ___3f77ch(___1a0f9ch);
        }

        if(___23594h(buffer, 0x14)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(0);
            
            ___1e4f8h();
            ___1a1ef8h = 0x13;
        }

        if(___23594h(buffer, 9)){

            chatNewLine();
            strcpy__clib3r(___1a1dbah, buffer);
            updateChat(0);

            ___1e62ch(1);
        }

        if(___23594h(&n, 0x13)){

            chatNewLine();

            tmp_p = ___1a1dbah;
            strcpy__clib3r(tmp_p, ___180864h);
            while(*tmp_p++);
            strcpy__clib3r(--tmp_p, ___1a01e0h[n]);
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

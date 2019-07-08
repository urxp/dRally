#include "x86.h"

#pragma pack(1)

typedef struct pal3dword {
    dword   __0;
    dword   __1;
    dword   __2;
} pal3dword;

    extern pal3dword Pal8to24_1[];

    void waitSync__dr(void);
    #pragma aux writeColor__video parm routine []
	void writeColor__video(dword, dword, dword, dword);


// 3d1f0h
void fadeinScreen(void){

	dword 	m, n;
	byte	__esp[0xc];
	byte * 	esp = __esp + 0xc;


	m = -1;
    while(++m < 0x19){
        
        waitSync__dr();

        n = -1;
        while(++n < 0x100){

            PUSH(((Pal8to24_1[n].__0 * m + 0x2000) >> 0xe) & 0xff);
            PUSH(((Pal8to24_1[n].__1 * m + 0x2000) >> 0xe) & 0xff);
            PUSH(((Pal8to24_1[n].__2 * m + 0x2000) >> 0xe) & 0xff);

            writeColor__video(D(esp), D(esp+4), D(esp+8), n);

            esp += 0xc;
        }
    }
}

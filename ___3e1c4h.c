#include "drally.h"

	extern byte ___1a0d60h[];

void dRally_System_clean(void);
dword GET_FILE_SIZE(const char *);

#pragma pack(push,1)
typedef struct file_s {
    const char  name[0xd];
    dword       size;
} file_t;

#pragma pack(pop)

static file_t assets[14] = {

    { "ENGINE.BPA",  0x5e879 },
    { "IBFILES.BPA", 0x14fe5 },
    { "MENU.BPA",    0x305aa5 },
    { "MUSICS.BPA",  0x57615f },
    { "TR0.BPA",     0x52597 },
    { "TR1.BPA",     0x4e772 },
    { "TR2.BPA",     0x47ddd },
    { "TR3.BPA",     0x546fb },
    { "TR4.BPA",     0x3f972 },
    { "TR5.BPA",     0x69778 },
    { "TR6.BPA",     0x57bc8 },
    { "TR7.BPA",     0x65e97 },
    { "TR8.BPA",     0x3dd12 },
    { "TR9.BPA",     0x68623 }
};

static file_t cinems[3] = {

    { "SANIM.HAF",   0x1485040 },
    { "ENDANI.HAF",  0x39ed6b },
    { "ENDANI0.HAF", 0x6dc2fc }
};

void ___3e1c4h(void){

    dword   n, fsize;
    char    fpath[0x100];

    n = -1;
    while(++n < 0xe){

        if(!(fsize = GET_FILE_SIZE(assets[n].name))){
                
            printf("\nDEATH RALLY ERROR: File %s is not found!\n", assets[n].name);
            printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");
            dRally_System_clean();
            exit(0x70);
        }

        if(fsize != assets[n].size){
                
            printf("\nDEATH RALLY ERROR: File %s is not in original form!\n", assets[n].name);
            printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");
            dRally_System_clean();
            exit(0x70);
        }
    }

    n = -1;
    while(++n < 3){

        strcpy(fpath, ___1a0d60h);
        strcat(fpath, cinems[n].name);

        if((fsize = GET_FILE_SIZE(fpath))&&(fsize != cinems[n].size)){

            printf("\nDEATH RALLY ERROR: File %s is not in original form!\n", cinems[n].name);
            printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");

            dRally_System_clean();
            exit(0x70);
        }
    }
}

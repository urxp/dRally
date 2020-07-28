#include "drally.h"

	extern byte ___1a0d60h[];

void dRally_System_clean(void);

void ___3e3cch(void){

    FILE *  fd;

    if(!(fd = strupr_fopen("CDROM.INI", "rb"))){

        printf("Error reading CDROM.INI file!\n");
        dRally_System_clean();
        exit(0x70);
    }

    fscanf(fd, "%s", ___1a0d60h);
    fclose(fd);

    if(___1a0d60h[strlen(___1a0d60h)-1] != '/') strcat(___1a0d60h, "/");
}

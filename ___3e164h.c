#include "drally.h"

void ___5a101h(void);
void dRally_System_clean(void);
dword DPMI_GET_FREE_MEMORY_INFORMATION(void);

void ___3e164h(void){

    if(DPMI_GET_FREE_MEMORY_INFORMATION() < 0x57b0cc){

        printf("\n");
        printf("You don't have enough free XMS/EMS memory to run Death Rally. The DOS MEM\n");
        printf("command should report 6,500K (or 6.7 megs) free extended or expanded memory.\n");
        printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");
        ___5a101h();
        dRally_System_clean();
        exit(0x70);
    }
}

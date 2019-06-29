#include "x86.h"

    // "\n"
    extern const char ___182940h[];

    // "You don't have enough free XMS/EMS memory to run Death Rally. The DOS MEM\n"
    extern const char ___182944h[];

    // "command should report 6,500K (or 6.7 megs) free extended or expanded memory.\n"
    extern const char ___182990h[];

    // "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___1829e0h[];

    dword getAvailableMemory(void);
    void freeAllocInfoTable(void);
    void restore__keyboard(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);


void chkmemory__dr(void){

    if(getAvailableMemory() < 0x57b0cc){

        printf__clib3r(___182940h);
        printf__clib3r(___182944h);
        printf__clib3r(___182990h);
        printf__clib3r(___1829e0h);

        restore__keyboard();
        freeAllocInfoTable();

        exit__clib3r(0x70);
    }
}

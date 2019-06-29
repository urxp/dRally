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

    dword   eax;

//		push    8
//		call    __CHK
//		call    __CEXT_F(getAvailableMemory)
    eax = getAvailableMemory();
//		cmp     eax, dword 57b0cch
//		jge     ___3e1c2h
    if((int)eax >= 0x57b0cc) goto ___3e1c2h;
//		push    __CEXT_V(___182940h)
//		call    __CEXT_F(printf__clib3r)
    printf__clib3r(___182940h);
//		add     esp, byte 4
//		push    __CEXT_V(___182944h)
//		call    __CEXT_F(printf__clib3r)
    printf__clib3r(___182944h);
//		add     esp, byte 4
//		push    __CEXT_V(___182990h)
//		call    __CEXT_F(printf__clib3r)
    printf__clib3r(___182990h);
//		add     esp, byte 4
//		push    __CEXT_V(___1829e0h)
//		call    __CEXT_F(printf__clib3r)
    printf__clib3r(___1829e0h);
//		add     esp, byte 4
//		call    __CEXT_F(restore__keyboard)
    restore__keyboard();
//		call    __CEXT_F(freeAllocInfoTable)
    freeAllocInfoTable();
//		mov     eax, 70h
    eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
    exit__clib3r(eax);
___3e1c2h:
//		retn   
    return;
}

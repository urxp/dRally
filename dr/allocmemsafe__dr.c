#include "x86.h"

	// "DEATH RALLY ErroR: Cannot allocate memory!\n"
    extern const char ___182df4h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182e20h[];

    extern dword NetworkConnectionEstablished;
    
    void * allocMemoryLock(dword, dword);
    void freeAllocInfoTable(void);
    void setmode3h__video(void);
    void ___623d4h(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);


// 3f71ch
void * allocMemSafe(dword size){

	void *  p;

	if(!(p = allocMemoryLock(size, 0))){

        freeAllocInfoTable();
        setmode3h__video();

        printf__clib3r(___182df4h);
        printf__clib3r(___182e20h);

        if(NetworkConnectionEstablished) ___623d4h();

        exit__clib3r(0x70);
    }

	return p;
}

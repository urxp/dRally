#include "x86.h"

    extern byte Sound_CardType;
    extern byte IsSoundEnabled;
    extern byte ___199ff4h;
    extern void * ___199ff8h;
    extern void * ___24e640h;

    void ___68d07h(void);
    void ___68d01h(void (*)(void));
    void freeMemory(void * mem);
    void ___6879ch(void);
    void ___6815ch(void);
	void ___649a8h(void);
    void ___5fff2h(void (*)(void));


// 648d8h
void ___648d8h(void){

	if(___199ff4h){
	
        ___199ff4h = 0;
        ___68d01h(___68d07h);
        freeMemory(___199ff8h);
        ___199ff8h = 0;
        freeMemory(___24e640h);
        ___24e640h = 0;
    }

	___6879ch();

	if(Sound_CardType&&IsSoundEnabled){

        ___6815ch();
        ___5fff2h(___649a8h);
    }
}

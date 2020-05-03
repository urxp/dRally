#include "drally.h"

	extern dword ___19bd60h;
	extern dword CONNECTION_TYPE;
	extern dword ___199f9ch;

void ___63b20h(dword, dword);

void ___10754h(void){

	if((___19bd60h != 0)&&(CONNECTION_TYPE == 2)) ___63b20h(1, ___199f9ch);   
}

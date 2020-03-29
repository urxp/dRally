#include "drally.h"

typedef char console[0x16][0x96];

    extern console ___1a116ch;
    extern byte ___1a1f4eh[];

void dRally_Console_clear(void){

    int     n;

    n = -1;
	while(++n < 0x16){

		strcpy(___1a116ch[n], "");
		___1a1f4eh[n] = 0;
	}
}

void dRally_Console_newLine(const char * line, int col){

    int     n;

    n = -1;
	while(++n < 0x15){

		strcpy(___1a116ch[n], ___1a116ch[n+1]);
		___1a1f4eh[n] = ___1a1f4eh[n+1];
	}

	strcpy(___1a116ch[n], line);
	___1a1f4eh[n] = col;
}
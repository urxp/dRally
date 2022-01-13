#include "drally.h"

typedef char chatbox_t[0x16][0x96];

    extern chatbox_t ___1a116ch;
    extern __BYTE__ ___1a1f4eh[];

void dRChatbox_clear(void){

    int     n;

    n = -1;
	while(++n < 0x16){

		strcpy(___1a116ch[n], "");
		___1a1f4eh[n] = 0;
	}
}

void dRChatbox_push(const char * line, int col){

	int     n;

    n = -1;
	while(++n < 0x15){

		strcpy(___1a116ch[n], ___1a116ch[n+1]);
		___1a1f4eh[n] = ___1a1f4eh[n+1];
	}

	strcpy(___1a116ch[0x15], line);
	___1a1f4eh[0x15] = col;
}

int dRChatbox_getFont(int line){

	return ___1a1f4eh[line];
}

char * dRChatbox_getLine(int line){

	return ___1a116ch[line];
}

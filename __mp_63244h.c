#include "drally.h"
#include "netpage.h"

	extern NetPage * ___24e4ach;
	extern char ___24e328h[];

	void ___6168ch(void);
	char * strupr_watcom106(char * s);

void ___63228h(void){

	strcpy(___24e328h, "");
}

__DWORD__ ___63244h(char * A1){

	char buff[2];

	buff[1] = 0;
	___6168ch();

	while(!npg_done(___24e4ach)){

		buff[0] = npg_readb(___24e4ach);
		strcat(___24e328h, buff);
	}

	return (strstr(strupr_watcom106(___24e328h), strupr_watcom106(A1)) != 0) ? 1 : 0;
}

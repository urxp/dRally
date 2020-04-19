#include "drally.h"

#pragma pack(1)
#define pg(v)	((v)&0xfff)

typedef struct NetPage {
	union {
	word 	pos;
	word 	write_p;
	};
	union {
	word	__2;
	word 	read_p;
	};
	byte 	data[0x1000];
} NetPage;

	extern NetPage * ___24e4ach;
	extern char ___24e328h[];

	void ___6168ch(void);
	char * STRUPR_D(char * s);

static void npg_writeb(NetPage * npg, byte b){

	npg->data[pg(npg->write_p++)] = b;
}

static void npg_readb(NetPage * npg, void * b){

	B(b) = npg->data[pg(npg->read_p++)];
}

void ___63228h(void){

	strcpy(___24e328h, "");
}

dword ___63244h(char * A1){

	char buff[2];

	buff[1] = 0;
	___6168ch();

	while(___24e4ach->write_p != ___24e4ach->read_p){

		npg_readb(___24e4ach, buff);
		strcat(___24e328h, buff);
	}

	return (strstr(STRUPR_D(___24e328h), STRUPR_D(A1)) != 0) ? 1 : 0;
}

#ifndef __NETPAGE_H
#define __NETPAGE_H

#include "types.h"

#pragma pack(push,1)
typedef struct NetPage {
	__WORD__ 	write_p;
	__WORD__    read_p;
	__BYTE__ 	data[0x1000];
} NetPage;

__BYTE__ npg_readb(NetPage * npg);
__BYTE__ npg_peekb(NetPage * npg, int offset);
void npg_writeb(NetPage * npg, __BYTE__ b);
void npg_override(NetPage * npg, __BYTE__ b);
void npg_skipb(NetPage * npg, int n);
void npg_zero(NetPage * npg);
int npg_stopb(NetPage * npg, __BYTE__ b);
int npg_done(NetPage * npg);

#pragma pack(pop)
#endif // __NETPAGE_H

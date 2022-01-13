#include <string.h>
#include "netpage.h"

#define pg(v)	((v)&0xfff)

void npg_writeb(NetPage * npg, __BYTE__ b){ npg->data[pg(npg->write_p++)] = b; }
__BYTE__ npg_readb(NetPage * npg){ return npg->data[pg(npg->read_p++)]; }
__BYTE__ npg_peekb(NetPage * npg, int offset){ return npg->data[pg(npg->read_p+offset)]; }
void npg_skipb(NetPage * npg, int n){ npg->read_p += n; }
void npg_zero(NetPage * npg){ memset(npg, 0, sizeof(NetPage)); }
int npg_done(NetPage * npg){ return (npg->write_p == npg->read_p); }
int npg_stopb(NetPage * npg, __BYTE__ b){ return (npg_peekb(npg, 0) == b)||!(++npg->read_p); }
void npg_override(NetPage * npg, __BYTE__ b){ npg->data[pg(npg->read_p++)] = b; }

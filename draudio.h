#ifndef __DRAUDIO_H
#define __DRAUDIO_H

#include "mod_s3m.h"
#include "mod_xm.h"

typedef struct dRAudio dRAudio;

void dRAudio_open(dRAudio ** ctx);
void dRAudio_close(dRAudio * ctx);

void dRAudio_load(s3m_t * musics_s3m, __DWORD__ size_s3m, xm_t * effects_xm, __DWORD__ size_xm, int sfx_channels);


#endif // __DRAUDIO_H

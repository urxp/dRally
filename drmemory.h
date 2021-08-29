#ifndef __DRMEMORY_H
#define __DRMEMORY_H

#include <stdio.h>
#include "types.h"

void * dRMemory_alloc(size_t size);
void * dRMemory_resize(void * mem, size_t size);
void dRMemory_free(void * mem);

#endif // __DRMEMORY_H

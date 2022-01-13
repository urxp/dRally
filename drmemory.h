#ifndef __DRMEMORY_H
#define __DRMEMORY_H

#include "types.h"

__POINTER__ dRMemory_alloc(size_t size);
__POINTER__ dRMemory_resize(__POINTER__ mem, size_t size);
void dRMemory_free(__POINTER__ mem);

#endif // __DRMEMORY_H

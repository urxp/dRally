#ifndef __BPA_H
#define __BPA_H

#include "drally.h"

#define BPA_OK          0
#define BPA_MALFORMED   1
#define BPA_FAILED      2

typedef struct BPA BPA;

BPA * bpa_open(const char * bpa_fname);
void bpa_close(BPA * bpa);
void bpa_search(BPA * bpa, const char * bpa_entry);
void bpa_read(BPA * bpa, __POINTER__ dst);
size_t bpa_entry_size(BPA * bpa);
const char * bpa_entry_name(BPA * bpa);

#endif // __BPA_H

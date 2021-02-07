#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern font_props_t ___185c7ah;
	
dword ___25230h(const char * A1){

	int 	n, offset;

	offset = 0;
	n = -1;
	while(A1[++n]) offset += ___185c7ah.props[A1[n]-0x20];

	return (int)(0x60-offset)/2;
}

#ifndef __PXL_H
#define __PXL_H

#include "drally.h"

typedef int pxl_Flags;

typedef struct pxl_Coords_s {
	int 	x;
	int 	y;
} pxl_Coords;

typedef struct pxl_Rectangle_s {
	int 	width;
	int 	height;
} pxl_Rectangle;

typedef struct pxl_2D_s {
	__POINTER__ 			data;
	pxl_Rectangle 	dimension;
	pxl_Coords 		position;
	pxl_Rectangle 	view;
	int 			chroma;
} pxl_2D;

#define PXL_ENTIRE		(1>>1)
#define PXL_CHROMA 		(1<<0)
#define PXL_RECTANGLE 	(1<<1)

void pxlCopy(pxl_2D * dst, pxl_2D * src, pxl_Flags flags);
pxl_2D * pxlSetPosition(pxl_2D * dst, int x, int y);
pxl_2D * pxlSetRectangle(pxl_2D * dst, int width, int height);
void pxlSet(pxl_2D * dst, __POINTER__ data, int width, int height);
void pxlSetChroma(pxl_2D * dst, int c);

#endif // __PXL_H

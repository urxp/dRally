#include "pxl.h"

void pxlCopy(pxl_2D * dst, pxl_2D * src, pxl_Flags flags){

	int 	i, j;
	__BYTE__ 	px;

	switch(flags){
	case PXL_ENTIRE:
		j = -1;
		while(++j < src->dimension.height){

			i = -1;
			while(++i < src->dimension.width){
				
				B(dst->data+dst->dimension.width*(dst->position.y+j)+dst->position.x+i) = B(src->data+src->dimension.width*(src->position.y+j)+src->position.x+i);
			}
		}
		break;
	case PXL_ENTIRE|PXL_CHROMA:
		j = -1;
		while(++j < src->dimension.height){

			i = -1;
			while(++i < src->dimension.width){

				px = B(src->data+src->dimension.width*(src->position.y+j)+src->position.x+i);
				if(px != src->chroma) B(dst->data+dst->dimension.width*(dst->position.y+j)+dst->position.x+i) = px;
			}
		}
		break;
	case PXL_RECTANGLE:
		j = -1;
		while(++j < src->view.height){

			i = -1;
			while(++i < src->view.width){
				
				B(dst->data+dst->dimension.width*(dst->position.y+j)+dst->position.x+i) = B(src->data+src->dimension.width*(src->position.y+j)+src->position.x+i);
			}
		}
		break;
	case PXL_RECTANGLE|PXL_CHROMA:
		j = -1;
		while(++j < src->view.height){

			i = -1;
			while(++i < src->view.width){
				
				px = B(src->data+src->dimension.width*(src->position.y+j)+src->position.x+i);
				if(px != src->chroma) B(dst->data+dst->dimension.width*(dst->position.y+j)+dst->position.x+i) = px;
			}
		}
		break;
	default:
		break;
	}
}

pxl_2D * pxlSetPosition(pxl_2D * dst, int x, int y){

	dst->position.x = x;
	dst->position.y = y;

	return dst;
}

pxl_2D * pxlSetRectangle(pxl_2D * dst, int width, int height){

	dst->view.width = width;
	dst->view.height = height;

	return dst;
}

void pxlSet(pxl_2D * dst, __POINTER__ data, int width, int height){

	dst->data = data;
	dst->dimension.width = width;
	dst->dimension.height = height;
	pxlSetPosition(dst, 0, 0);
	pxlSetRectangle(dst, width, height);
}

void pxlSetChroma(pxl_2D * dst, int c){

	dst->chroma = c&0xff;
}

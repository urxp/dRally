#include "drally.h"
#include "drally_fonts.h"

#define COOXY(x,y) (0x280*(y)+(x))

	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;


void ___12e78h_cdecl(__BYTE__ * A1, const font_props_t * A2, const char * A3, __DWORD__ dst_off){

	__DWORD__ 	n, src_n, x, y;
	__BYTE__ * 	src;
	__BYTE__ *	dst;

	dst = ___1a112ch__VESA101_ACTIVESCREEN_PTR+dst_off;
	n = -1;
	while(A3[++n]){

		if(A3[n] != (char)0xfa){

			src_n = A3[n]-0x20;
			src = A1+A2->w*A2->h*src_n;

			y = -1;
			while(++y < A2->h){

				x = -1;
				while(++x < A2->w){

					if(src[x] != 0) dst[COOXY(x, y)] = src[x];
				}
				src += A2->w;
			}

			dst += A2->props[src_n];
		}
		else {
		
			dst++;
		}
	}
}


void ___12e78h_v2(__POINTER__ font, const font_props_t * font_props, const char * str, int x, int y){

	___12e78h_cdecl(font, font_props, str, 0x280*y+x);
}

	extern const font_props_t ___185ba9h;
	extern const font_props_t ___185c0bh;
	extern const font_props_t ___185c7ah;
	extern __POINTER__ ___1a10cch;
	extern __POINTER__ ___1a10d0h;
	extern __POINTER__ ___1a10e0h;
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a10b8h;
	extern __POINTER__ ___1a10fch;
	extern __POINTER__ ___1a110ch;

void ___12e78h_v3(int code, const char * str, int x, int y){

	switch(code){
	case ___1a10d0h___185ba9h:
		___12e78h_v2(___1a10d0h, &___185ba9h, str, x, y);
		break;
	case ___1a10e0h___185ba9h:
		___12e78h_v2(___1a10e0h, &___185ba9h, str, x, y);
		break;
	case ___1a10cch___185ba9h:
		___12e78h_v2(___1a10cch, &___185ba9h, str, x, y);
		break;
	case ___1a1108h___185c0bh:
		___12e78h_v2(___1a1108h, &___185c0bh, str, x, y);
		break;
	case ___1a10b8h___185c7ah:
		___12e78h_v2(___1a10b8h, &___185c7ah, str, x, y);
		break;
	case ___1a10fch___185c0bh:
		___12e78h_v2(___1a10fch, &___185c0bh, str, x, y);
		break;
	case ___1a110ch___185c0bh:
		___12e78h_v2(___1a110ch, &___185c0bh, str, x, y);
		break;
	default:
		printf("[dRally.Fonts] Unknown font id 0x%04X\n", code);
		break;
	}
}

void VESA101_PRINT(int code, const char * str, int x, int y){

	___12e78h_v3(code, str, x, y);
}

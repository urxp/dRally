#include "drally.h"
#include "drally_fonts.h"

	extern font_props_t ___185c6dh;
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ * ___1a10b0h;

static int c_index(int c){ return ((c &= 0xff) == '$') ? 0 : c-0x2f; }
static __BYTE__ c_width(int c){ return ___185c6dh.props[c_index(c)]; }

void ___12f60h_cdecl(const char * A1, __DWORD__ A2){

	int 	i, j, w, h, n, dst_off, src_off;


	dst_off = A2;
	w = ___185c6dh.w;
	h = ___185c6dh.h;

	n = -1;
	while(A1[++n]){

		src_off = c_index(A1[n])*w*h;

		j = -1;
		while(++j < h){

			i = -1;
			while(++i < w) ___1a112ch__VESA101_ACTIVESCREEN_PTR[dst_off+0x280*j+i] = ___1a10b0h[src_off+w*j+i];
		}

		dst_off += c_width(A1[n]);
	}
}

int ___25180h_cdecl(const char * s){

	return (0x60-getTextWidth(FONTPROPS04, s))/2;
}

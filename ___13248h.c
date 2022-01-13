#include "drally.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10d8h;
	extern __POINTER__ ___1a10f0h;


typedef struct view_s {
	__POINTER__ 	data;
	int 	w;
	int 	h;
} view_t;

static void createView(__POINTER__ p, int w, int h, view_t * v){

	v->data = p;
	v->w = w;
	v->h = h;
}

static void cmncpy(view_t * sv, int x, int y, __POINTER__ src){

	int 		i, j;
	int 		w, h;
	__BYTE__ 	px;

	if((h = sv->h-y) > 0x14) h = 0x14;
	if((w = sv->w-x) > 0x20) w = 0x20;

	j = -1;
	while(++j < h){

		i = -1;
		while(++i < w){

			if((px = read_b(src+0x20*j+i)) != 0) write_b(sv->data+sv->w*(y+j)+(x+i), px);
		}
	}
}


// frame borders
void ___13248h_cdecl(__DWORD__ x, __DWORD__ y, __DWORD__ dx, __DWORD__ dy, __DWORD__ active){

	int 	i, n;
	__BYTE__ 	col;
	__POINTER__ 	D0;
	view_t 	screen_view;


	createView(___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x280, 0x1e0, &screen_view);

	n = dy-8;
	i = -1;
	while(++i < n) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+2+i)+x+2, 0xc4, dx-6);

	if(active){

		col = 7;
		D0 = ___1a10f0h;
	}
	else {

		col = 4;
		D0 = ___1a10d8h;
	}

	cmncpy(&screen_view, x,         y,         D0);			// TOPLEFT
	cmncpy(&screen_view, x+dx-0x20, y,         D0+0x280);	// TOPRIGHT
	cmncpy(&screen_view, x,         y+dy-0x14, D0+0x500);	// BOTTOMLEFT
	cmncpy(&screen_view, x+dx-0x20, y+dy-0x14, D0+0x780);	// BOTTOMRIGHT

	// HORIZONTAL LINES
	n = dx-0x40;
	i = -1;
	while(++i < n){

		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+1)+x+i+0x20, col);
		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+dy-7)+x+i+0x20, col);
	}

	// VERTICAL LINES
	n = dy-0x28;
	i = -1;
	while(++i < n){
		
		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+0x14+i)+x+1, col);
		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+0x14+i)+x+dx-5, col);
	}
}

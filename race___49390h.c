#include "drally.h"

#pragma pack(1)
typedef struct rgb666_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb666_t;

typedef struct rgb888_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb888_t;

typedef struct pcx_header_s {

	__BYTE__ 	fixed_id;		// +00	The fixed header field valued at a hexadecimal 0x0A (= 10 in decimal).
	__BYTE__ 	version; 		// +01	The version number referring to the Paintbrush software release, which might be:
								//		0	PC Paintbrush version 2.5 using a fixed EGA palette
								//		2	PC Paintbrush version 2.8 using a modifiable EGA palette
								//		3	PC Paintbrush version 2.8 using no palette
								//		4	PC Paintbrush for Windows
								//		5	PC Paintbrush version 3.0, including 24-bit images
	__BYTE__ 	encoding;		// +02	The method used for encoding the image data. Can be:
								//		0	No encoding (rarely used)
								//		1	Run-length encoding (RLE)
	__BYTE__ 	depth;			// +03	The number of bits constituting one pixel in a plane. Possible values are:
								//		1	The image has two colors (monochrome)
								//		2	The image has four colors
								//		4	The image has 16 colors
								//		8	The image has 256 colors
	__WORD__	x_min;			// +04	The minimum x co-ordinate of the image position.
	__WORD__	y_min;			// +06	The minimum y co-ordinate of the image position.
	__WORD__	x_max;			// +08	The maximum x co-ordinate of the image position.
	__WORD__	y_max;			// +0a	The maximum y co-ordinate of the image position.
	__WORD__	h_dpi;			// +0c	The horizontal image resolution in DPI.
	__WORD__	v_dpi;			// +0e	The vertical image resolution in DPI.
	__BYTE__ 	ega_pal[0x30];	// +10 	The EGA palette for 16-color images.
	__BYTE__	rsrvd0; 		// +40	The first reserved field, usually set to zero.
	__BYTE__	planes;			// +41	The number of color planes constituting the pixel data. Mostly chosen to be 1, 3, or 4.
	__WORD__	scanline;		// +42	The number of bytes of one color plane representing a single scan line.
	__WORD__ 	col_mode;		// +44	The mode in which to construe the palette:
								//		1	The palette contains monochrome or color information
								//		2	The palette contains grayscale information
	__WORD__	screen_h;		// +46	The horizontal resolution of the source system's screen.
	__WORD__	screen_v;		// +48	The vertical resolution of the source system's screen.
	__BYTE__ 	rsrvd1[0x36];	// +4A	The second reserved field, intended for future extensions, and usually set to zero bytes.
} pcx_header_t;

	extern FILE * ___1a0ef4h;
	extern __BYTE__ * VGA13_ACTIVESCREEN;

void __DISPLAY_GET_PALETTE_COLOR(unsigned char * dst, unsigned char n);
__DWORD__ ___3a214h_cdecl(__POINTER__, __DWORD__);
__DWORD__ GET_FILE_SIZE(const char *);
void pcx_newHeader(pcx_header_t * pcx_h);

void PCX_GET_PALETTE_COLOR(rgb888_t * dst, unsigned char n){

	rgb666_t col;

    __DISPLAY_GET_PALETTE_COLOR((__POINTER__)&col, n);

    dst->r = (col.r>>4)|(col.r<<2);
    dst->g = (col.g>>4)|(col.g<<2);
    dst->b = (col.b>>4)|(col.b<<2);
}


// take race screenshot
void race___49390h(void){

	int 		n;
	rgb888_t 	col;
	char		fname[] = "HS-PIC00.PCX";
	pcx_header_t	pcx_h;

	pcx_newHeader(&pcx_h);
	pcx_h.version = 5;
	pcx_h.encoding = 1;
	pcx_h.depth = 8;
	pcx_h.x_max = 0x13f;
	pcx_h.y_max = 0xc7;
	pcx_h.planes = 1;
	pcx_h.scanline = 0x140;
	pcx_h.col_mode = 1;
	pcx_h.x_max = SDL_SwapLE16(pcx_h.x_max);
	pcx_h.y_max = SDL_SwapLE16(pcx_h.y_max);
	pcx_h.scanline = SDL_SwapLE16(pcx_h.scanline);
	pcx_h.col_mode = SDL_SwapLE16(pcx_h.col_mode);

	n = 0;
	while((++n < 0x64)&&GET_FILE_SIZE(fname)){

		fname[6] = '0'+(n/0xa);
		fname[7] = '0'+(n%0xa);
	}

	___1a0ef4h = fopen(fname, "wb");
	fwrite(&pcx_h, 1, sizeof(pcx_h), ___1a0ef4h);

	n = -1;
	while(++n < 0xc8) ___3a214h_cdecl(VGA13_ACTIVESCREEN+0x140*n, 0x140);

	fputc(0xc, ___1a0ef4h);

	n = -1;
	while(++n < 0x100){

		PCX_GET_PALETTE_COLOR(&col, n);
		fwrite(&col, sizeof(col), 1, ___1a0ef4h);
	}

	fclose(___1a0ef4h);
}

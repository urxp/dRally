#include "drally.h"
#include "drally_display.h"

#if defined(__3DS__)
#include "platform_3ds/dr3_blit.h"
#include "platform_3ds/dr3_log.h"
#endif

#if defined(__3DS__) && defined(DR3_USE_GFX)
#include "platform_3ds/dr3_fb.h"
#endif


#pragma pack(1)
typedef struct textbit {
	unsigned char 	ascii;
	unsigned char 	fg:4;
	unsigned char 	bg:3;
} textbit;

unsigned int INT8_FRAME_COUNTER = 0;
extern unsigned int ___60458h;
extern textbit * B800;
extern unsigned char * VGA13_ACTIVESCREEN;
extern unsigned char VGA13_ACTIVESCREEN_2[];
extern unsigned char VESA101_ACTIVESCREEN[];

unsigned int Ticks = 0;
unsigned int VRetraceTicks = 0;

void IO_Loop(void);
void __VGA13_PRESENTSCREEN__(void);
void __VESA101_PRESENTSCREEN__(void);
void __PRESENTSCREEN__(void);
__BYTE__ dRally_Keyboard_popLastKey();

static struct GX {
	int 			ActiveMode;
	int 			WindowMode;
	struct {
		SDL_Surface * Surface;
	} VGA13;
	struct {
		SDL_Surface * Surface;
	} VESA101;
	SDL_Surface * 	Surface;
	SDL_Window * 	Window;
	SDL_Renderer * 	Renderer;
	SDL_Texture * 	Texture;
} GX = {0};

#if defined(__3DS__)
/*
 * The 3DS build does not use an SDL renderer at all: SDL2 only ships the software renderer there,
 * and the window surface *is* the GSP framebuffer. So we convert the engine's 8-bit screen with a
 * palette look-up table directly into the window surface (platform_3ds/dr3_blit.c) - one pass,
 * no texture allocation per frame.
 */
static dr3_palette_t dr3_pal;
static dr3_lut32_t   dr3_lut;
static int           dr3_lut_dirty = 1;   /* set whenever the palette changes */
static unsigned int  dr3_present_count = 0;
static unsigned int  dr3_present_last_log = 0;

#ifdef DR3_3DS_CENTER
#define DR3_3DS_SCALE_MODE DR3_SCALE_CENTER   /* pixel-perfect 1:1 with black borders */
#else
#define DR3_3DS_SCALE_MODE DR3_SCALE_STRETCH  /* 320x200/320x240 fills the whole 400x240 screen */
#endif
#endif


extern __DWORD__ ___60441h;
extern __DWORD__ ___6045ch;
extern __BYTE__ ___60446h;
extern void (*___6044ch)(void);
void __VRETRACE_WAIT_IF_INACTIVE(void);

static void IRQ0_TimerISR(void){

	if((___6045ch != 0)&&(___60441h == 0)) __VRETRACE_WAIT_IF_INACTIVE();
	INT8_FRAME_COUNTER++;
	if(___60446h == 1) ___6044ch();
}

int skip;
unsigned int __GET_FRAME_COUNTER(void){

	unsigned int NewTicks;
	unsigned int FrameMs = 1000/___60458h;// - 1;


	NewTicks = SDL_GetTicks()-Ticks;	
	
	if(NewTicks < (FrameMs-3)) SDL_Delay(1);
	else if(NewTicks >= FrameMs){

		Ticks = SDL_GetTicks();

		skip = NewTicks/FrameMs - 1;

		INT8_FRAME_COUNTER += skip;
		IRQ0_TimerISR();

		//if(!skip) __PRESENTSCREEN__();
	}

	IO_Loop();
	
	return INT8_FRAME_COUNTER;
}

void __VRETRACE_WAIT_FOR_START(void){
	
	unsigned int FrameMs = 1000/___60458h;// - 1;

	VRetraceTicks = SDL_GetTicks();
	VRetraceTicks %= FrameMs;
	
	//if(VRetraceTicks) SDL_Delay(FrameMs - VRetraceTicks);
	//SDL_Delay(1);
	SDL_Delay(FrameMs - VRetraceTicks);
}

void __VRETRACE_WAIT_IF_INACTIVE(void){

	unsigned int FrameMs = 1000/___60458h;//1000/70;

	IO_Loop();

	VRetraceTicks = SDL_GetTicks();
	VRetraceTicks %= FrameMs;
	if(VRetraceTicks > (FrameMs - 3)){
		
		SDL_Delay(FrameMs - VRetraceTicks);
	}
}

void __TIMER_SET_TIMER(void){

	//Ticks = SDL_GetTicks();
}

void __WAIT_5(void){

	unsigned int tmp = 5;

	tmp *= ___60458h;
	tmp += __GET_FRAME_COUNTER();

	while((__GET_FRAME_COUNTER() < tmp) && !dRally_Keyboard_popLastKey());
}




void __VESA101_SETMODE();
void __DISPLAY_SET_PALETTE_COLOR(int b, int g, int r, int n);


void __PRESENTSCREEN__(void){

#if defined(__3DS__)

	SDL_Surface *	win;
#if defined(DR3_USE_GFX)
	static int		dr3_direct = -1;		/* 1 = write the framebuffer directly, 0 = SDL path */
	static int		dr3_masks_ready = 0;
	static uint32_t	dr3_rmask, dr3_gmask, dr3_bmask, dr3_amask;
#endif

	if(!GX.ActiveMode) return;

#if defined(DR3_USE_GFX)
	if(dr3_direct < 0){

		dr3_direct = (dr3_fb_init() == 0) ? 1 : 0;
		dr3_log("[dr3] present path: %s", dr3_direct ? "direct gfx framebuffer" : "SDL window surface");
	}

	if(dr3_direct){

		if(!dr3_masks_ready){

			/* take the channel masks from SDL's surface once - same values the SDL path used */
			win = SDL_GetWindowSurface(GX.Window);
			if(win){
				dr3_rmask = win->format->Rmask;
				dr3_gmask = win->format->Gmask;
				dr3_bmask = win->format->Bmask;
				dr3_amask = win->format->Amask;
				dr3_masks_ready = 1;
			}
		}

		if(!dr3_masks_ready) return;

		if(dr3_lut_dirty){
			dr3_lut32_build_masks(&dr3_lut, &dr3_pal, dr3_rmask, dr3_gmask, dr3_bmask, dr3_amask);
			dr3_lut_dirty = 0;
		}

		/* downscaling (640x480 VESA menus) needs the horizontal average, upscaling is nearest */
		dr3_fb_present((const uint8_t *)GX.Surface->pixels, GX.Surface->w, GX.Surface->h,
			GX.Surface->pitch, &dr3_pal, &dr3_lut,
			(GX.Surface->w > DR3_SCREEN_W || GX.Surface->h > DR3_SCREEN_H) ? 1 : 0);

		++dr3_present_count;
		if(SDL_GetTicks() - dr3_present_last_log >= 1000){
			dr3_log("[dr3] %u presents/s (direct) SDLms=%u frame_counter=%u",
				dr3_present_count, SDL_GetTicks(), INT8_FRAME_COUNTER);
			dr3_present_count = 0;
			dr3_present_last_log = SDL_GetTicks();
		}
		return;
	}
#endif

	win = SDL_GetWindowSurface(GX.Window);		/* == the GSP framebuffer on the 3DS */
	if(!win){
		dr3_log("[dr3] present: SDL_GetWindowSurface failed: %s", SDL_GetError());
		return;
	}

	if(dr3_lut_dirty){

		/* take the channel masks from the real target surface - no assumptions about the format */
		dr3_lut32_build_masks(&dr3_lut, &dr3_pal,
			win->format->Rmask, win->format->Gmask, win->format->Bmask, win->format->Amask);
		dr3_lut_dirty = 0;
	}

	if(dr3_present_count == 0 && dr3_present_last_log == 0){
		dr3_log("[dr3] present: src %dx%d pitch %d -> dst %dx%d pitch %d  masks %08X/%08X/%08X/%08X  lut0=%08X",
			GX.Surface->w, GX.Surface->h, GX.Surface->pitch,
			win->w, win->h, win->pitch,
			win->format->Rmask, win->format->Gmask, win->format->Bmask, win->format->Amask,
			dr3_lut.px[0]);
	}

	int present_ok;

	if(GX.Surface->w > win->w || GX.Surface->h > win->h){

		/* downscaling (the 640x480 VESA menus): box filter, otherwise the game's dither patterns
		   alias into vertical stripes */
		present_ok = dr3_blit8_filter((const uint8_t *)GX.Surface->pixels, GX.Surface->w, GX.Surface->h,
			GX.Surface->pitch, &dr3_pal, &dr3_lut,
			(uint32_t *)win->pixels, win->w, win->h, win->pitch / 4);
	}
	else {

		present_ok = dr3_blit8_lut32((const uint8_t *)GX.Surface->pixels, GX.Surface->w, GX.Surface->h,
			GX.Surface->pitch, &dr3_lut,
			(uint32_t *)win->pixels, win->w, win->h, win->pitch / 4,
			DR3_3DS_SCALE_MODE, dr3_lut.px[0]);
	}

	if(present_ok != 0){

		dr3_log("[dr3] present FAILED (%dx%d -> %dx%d)", GX.Surface->w, GX.Surface->h, win->w, win->h);
		return;
	}

	SDL_UpdateWindowSurface(GX.Window);

	++dr3_present_count;
	if(SDL_GetTicks() - dr3_present_last_log >= 1000){
		dr3_log("[dr3] %u presents/s  SDLms=%u  frame_counter=%u", dr3_present_count, SDL_GetTicks(), INT8_FRAME_COUNTER);
		dr3_present_count = 0;
		dr3_present_last_log = SDL_GetTicks();
	}

#else

	if(GX.ActiveMode){

		GX.Texture = SDL_CreateTextureFromSurface(GX.Renderer, GX.Surface);
		SDL_RenderCopy(GX.Renderer, GX.Texture, NULL, NULL);
		SDL_RenderPresent(GX.Renderer);
		SDL_DestroyTexture(GX.Texture);
		GX.Texture = NULL;
	}

#endif
}

void __VGA13_PRESENTSCREEN__(void){

    __PRESENTSCREEN__();
}

void __VESA101_PRESENTSCREEN__(void){

	__PRESENTSCREEN__();
}

void __DISPLAY_SET_PALETTE_COLOR(int b, int g, int r, int n){

    SDL_Color col;

    col.r = (r<<2)|(r>>4);
    col.g = (g<<2)|(g>>4);
    col.b = (b<<2)|(b>>4);

#if defined(__3DS__)
	/* our own copy: the LUT is rebuilt from it whenever the framebuffer is presented */
	dr3_palette_set(&dr3_pal, n, col.r, col.g, col.b);
	dr3_lut_dirty = 1;
#endif

	if(GX.ActiveMode) SDL_SetPaletteColors(GX.Surface->format->palette, &col, n, 1);
}

void DISPLAY_CLEAR_PALETTE(void){

	int 	n;

	n = -1;
	while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);
}

void dRally_Display_init(int mode){

	SDL_ShowCursor(SDL_DISABLE);
	SDL_DisableScreenSaver();

	if(!GX.VGA13.Surface){

		switch(mode){
		case W_SHRINK:
			GX.WindowMode = W_SHRINK;
			GX.VGA13.Surface = SDL_CreateRGBSurfaceWithFormatFrom(VGA13_ACTIVESCREEN_2+20*320, 320, 200, 8, 320, SDL_PIXELFORMAT_INDEX8);
			break;
		case W_LETTERBOX:
			GX.WindowMode = W_LETTERBOX;
			GX.VGA13.Surface = SDL_CreateRGBSurfaceWithFormatFrom(VGA13_ACTIVESCREEN_2, 320, 240, 8, 320, SDL_PIXELFORMAT_INDEX8);
			break;
		default:
			printf("[dRally.DISPLAY] Invalid Window Mode [#%d]. Defaults to W_SHRINK [#%d]\n", mode, W_SHRINK);
			GX.WindowMode = W_SHRINK;
			GX.VGA13.Surface = SDL_CreateRGBSurfaceWithFormatFrom(VGA13_ACTIVESCREEN_2+20*320, 320, 200, 8, 320, SDL_PIXELFORMAT_INDEX8);
			break;		
		}	
	}

	if(!GX.VESA101.Surface) GX.VESA101.Surface = SDL_CreateRGBSurfaceWithFormatFrom(VESA101_ACTIVESCREEN, 640, 480, 8, 640, SDL_PIXELFORMAT_INDEX8);

	if(!GX.Window){

		GX.Window = SDL_CreateWindow(
			"dRally / Open Source Engine / Death Rally [1996]",	// window title
			SDL_WINDOWPOS_CENTERED,      						// initial x position
			SDL_WINDOWPOS_CENTERED,       						// initial y position
#if defined(__3DS__)
			DR3_SCREEN_W,										// 3DS top screen: fixed 400x240
			DR3_SCREEN_H,
#else
			W_WIDTH,                  							// width, in pixels
			W_HEIGHT,											// height, in pixels
#endif
			SDL_WINDOW_HIDDEN									// flags - see below
		);
	}

#if defined(__3DS__)
	/* no renderer: __PRESENTSCREEN__ writes straight into the window surface (the framebuffer) */
	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "0");
	dr3_log("[dr3] display init: mode=%d window=%p vga13=%p vesa101=%p", mode,
		(void *)GX.Window, (void *)GX.VGA13.Surface, (void *)GX.VESA101.Surface);
	if(!GX.Window)          dr3_log("[dr3] WINDOW CREATION FAILED: %s", SDL_GetError());
	if(!GX.VGA13.Surface)   dr3_log("[dr3] VGA13 SURFACE CREATION FAILED: %s", SDL_GetError());
#else
	if(!GX.Renderer){

		SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "2");
		GX.Renderer = SDL_CreateRenderer(GX.Window, -1, SDL_RENDERER_ACCELERATED);
		//GX.Renderer = SDL_CreateRenderer(GX.Window, -1, SDL_RENDERER_SOFTWARE);
	}
#endif
}

void dRally_Display_clean(void){

	if(GX.VGA13.Surface) SDL_FreeSurface(GX.VGA13.Surface);
	if(GX.VESA101.Surface) SDL_FreeSurface(GX.VESA101.Surface);
	if(GX.Texture) SDL_DestroyTexture(GX.Texture);
	if(GX.Renderer) SDL_DestroyRenderer(GX.Renderer);
	if(GX.Window) SDL_DestroyWindow(GX.Window);
}

void __VGA3_SETMODE(void){

	GX.ActiveMode = VGA3;
}

void __VGA13_SETMODE(void){

	if(GX.ActiveMode != VGA13){

		switch(GX.WindowMode){
		case W_LETTERBOX:
			memset(VGA13_ACTIVESCREEN_2, 0, 320*240);
			SDL_RenderSetLogicalSize(GX.Renderer, 320, 240);
			break;
		case W_SHRINK:
		default:
#if !defined(__3DS__)
			SDL_SetWindowSize(GX.Window, W_WIDTH, 5*W_HEIGHT/6);
#endif
			break;
		}

		VGA13_ACTIVESCREEN = VGA13_ACTIVESCREEN_2+20*320;
		GX.Surface = GX.VGA13.Surface;
		//SDL_SetRenderDrawColor(GX.Renderer, 0, 0, 0, 255);
		//SDL_RenderClear(GX.Renderer);
		//SDL_RenderPresent(GX.Renderer);
		if(SDL_GetWindowFlags(GX.Window)&SDL_WINDOW_HIDDEN) SDL_ShowWindow(GX.Window);
		GX.ActiveMode = VGA13;
		dr3_log("[dr3] mode = VGA13 (%dx%d, window %d)", GX.Surface->w, GX.Surface->h, GX.WindowMode);
	}
}

void __VESA101_SETMODE(void){

	if(GX.ActiveMode != VESA101){

		switch(GX.WindowMode){
		case W_LETTERBOX:
			SDL_RenderSetLogicalSize(GX.Renderer, 640, 480);
			break;
		case W_SHRINK:
		default:
#if !defined(__3DS__)
			SDL_SetWindowSize(GX.Window, W_WIDTH, W_HEIGHT);
#endif
			break;
		}

		GX.Surface = GX.VESA101.Surface;
		//SDL_SetRenderDrawColor(GX.Renderer, 0, 0, 0, 255);
		//SDL_RenderClear(GX.Renderer);
		//SDL_RenderPresent(GX.Renderer);
		if(SDL_GetWindowFlags(GX.Window)&SDL_WINDOW_HIDDEN) SDL_ShowWindow(GX.Window);
		GX.ActiveMode = VESA101;
		dr3_log("[dr3] mode = VESA101 (%dx%d)", GX.Surface->w, GX.Surface->h);
	}
}

void DISPLAY_GET_PALETTE(unsigned char * dst){

	int n;

	if(GX.ActiveMode){

		n = -1;
		while(++n < 0x100){
	
			dst[3*n] = GX.Surface->format->palette->colors[n].r >> 2;
			dst[3*n+1] = GX.Surface->format->palette->colors[n].g >> 2;
			dst[3*n+2] = GX.Surface->format->palette->colors[n].b >> 2;
		}
	}
}

void __DISPLAY_GET_PALETTE_COLOR(unsigned char * dst, unsigned char n){

	if(GX.ActiveMode){

		dst[0] = GX.Surface->format->palette->colors[n].r >> 2;
		dst[1] = GX.Surface->format->palette->colors[n].g >> 2;
		dst[2] = GX.Surface->format->palette->colors[n].b >> 2;
	}
}

void save_s3m(__POINTER__ src, unsigned int size, const char * name){

	char buffer[20] = {0};
	int n = -1;

	while(name[++n] != '.') buffer[n] = name[n];
	buffer[n] = '.';
	buffer[n+1] = 'S';
	buffer[n+2] = '3';
	buffer[n+3] = 'M';


	FILE * fd = fopen(buffer, "wb");

	fwrite(src, size, 1, fd);

	fclose(fd);
}

void save_xm(__POINTER__ src, unsigned int size, const char * name){

	char buffer[20] = {0};
	int n = -1;

	while(name[++n] != '.') buffer[n] = name[n];
	buffer[n] = '.';
	buffer[n+1] = 'X';
	buffer[n+2] = 'M';


	FILE * fd = fopen(buffer, "wb");

	fwrite(src, size, 1, fd);

	fclose(fd);
}

void switch_b(__POINTER__ b1, __POINTER__ b2){

	__BYTE__ 	b_tmp;

	b_tmp = B(b1);
	B(b1) = B(b2);
	B(b2) = b_tmp;
}


	extern __BYTE__ ___243ca4h[];
	extern __BYTE__ SUPERGLOBAL___243898h[];
	extern __BYTE__ SUPERGLOBAL___243894h[];
	extern __BYTE__ ___243ca8h[];
	extern __BYTE__ ___243874h[];
	extern __BYTE__ ___2438d0h[];

void incCounter(int n){

	if(n == 1) D(___243ca4h)++;
	if(n == 2) D(SUPERGLOBAL___243898h)++;
	if(n == 3) D(SUPERGLOBAL___243894h)++;
	if(n == 4) D(___243ca8h)++;
	if(n == 5) D(___243874h)++;
	if(n == 6) D(___2438d0h)++;
}

void decCounter(int n){

	if(n == 1) D(___243ca4h)--;
	if(n == 2) D(SUPERGLOBAL___243898h)--;
	if(n == 3) D(SUPERGLOBAL___243894h)--;
	if(n == 4) D(___243ca8h)--;
	if(n == 5) D(___243874h)--;
	if(n == 6) D(___2438d0h)--;
}

__DWORD__ getCounter(int n){

	if(n == 1) return D(___243ca4h);
	if(n == 2) return D(SUPERGLOBAL___243898h);
	if(n == 3) return D(SUPERGLOBAL___243894h);
	if(n == 4) return D(___243ca8h);
	if(n == 5) return D(___243874h);
	if(n == 6) return D(___2438d0h);

	return 0;
}

void resetCounter(int n){

	if(n == 1) D(___243ca4h) = 0;
	if(n == 2) D(SUPERGLOBAL___243898h) = 0;
	if(n == 3) D(SUPERGLOBAL___243894h) = 0;
	if(n == 4) D(___243ca8h) = 0;
	if(n == 5) D(___243874h) = 0;
	if(n == 6) D(___2438d0h) = 0;
}

void setCounter(int n, __DWORD__ val){

	if(n == 1) D(___243ca4h) = val;
	if(n == 2) D(SUPERGLOBAL___243898h) = val;
	if(n == 3) D(SUPERGLOBAL___243894h) = val;
	if(n == 4) D(___243ca8h) = val;
	if(n == 5) D(___243874h) = val;
	if(n == 6) D(___2438d0h) = val;
}

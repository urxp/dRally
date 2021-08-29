#include "drally.h"

#define W_WIDTH 	1024//800//1024//640
#define W_HEIGHT 	768//600//768//480


#pragma pack(1)
typedef struct textbit {
	unsigned char 	ascii;
	unsigned char 	fg:4;
	unsigned char 	bg:3;
} textbit;

unsigned int INT8_FRAME_COUNTER = 0;
extern unsigned int ___60458h;
extern textbit * B800;
extern unsigned char VGA13_ACTIVESCREEN[];
extern unsigned char VESA101_ACTIVESCREEN[];


unsigned int Ticks = 0;
unsigned int VRetraceTicks = 0;

void IO_Loop(void);
void __VGA13_PRESENTSCREEN__(void);
void __VESA101_PRESENTSCREEN__(void);
void __PRESENTSCREEN__(void);
byte dRally_Keyboard_popLastKey();

static struct GX {
	enum { VGA3, VGA13, VESA101 } ActiveMode;
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


extern dword ___60441h;
extern dword ___6045ch;
extern byte ___60446h;
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

		if(!skip) __PRESENTSCREEN__();
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
/*
	unsigned int FrameMs = 1000/___60458h;//1000/70;

	IO_Loop();

	VRetraceTicks = SDL_GetTicks();
	VRetraceTicks %= FrameMs;
	if(VRetraceTicks > (FrameMs - 3)){
		
		SDL_Delay(FrameMs - VRetraceTicks);
		//if(GX.ActiveMode == VGA13) __VGA13_PRESENTSCREEN__();
	}
*/
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

	if(GX.ActiveMode){

		GX.Texture = SDL_CreateTextureFromSurface(GX.Renderer, GX.Surface);
		SDL_RenderCopy(GX.Renderer, GX.Texture, NULL, NULL);
		SDL_RenderPresent(GX.Renderer);
		SDL_DestroyTexture(GX.Texture);
		GX.Texture = NULL;
	}
}

void __VGA13_PRESENTSCREEN__(void){
/*
	int 	i,j;

	i = -1;
	while(++i < 200){

		j = -1;
		while(++j < 320){

			VGA13_ACTIVESCREEN_X2[2*i*640+2*j] = VGA13_ACTIVESCREEN[i*320+j];
			VGA13_ACTIVESCREEN_X2[2*i*640+2*j+1] = VGA13_ACTIVESCREEN[i*320+j];
			VGA13_ACTIVESCREEN_X2[(2*i+1)*640+2*j] = VGA13_ACTIVESCREEN[i*320+j];
			VGA13_ACTIVESCREEN_X2[(2*i+1)*640+2*j+1] = VGA13_ACTIVESCREEN[i*320+j];
		}
	}
*/
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

	if(GX.ActiveMode) SDL_SetPaletteColors(GX.Surface->format->palette, &col, n, 1);
}

void DISPLAY_CLEAR_PALETTE(void){

	int 	n;

	n = -1;
	while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);
}

void dRally_Display_init(void){

	SDL_ShowCursor(SDL_DISABLE);
	SDL_DisableScreenSaver();

	//if(!GX.VGA13.Surface) GX.VGA13.Surface = SDL_CreateRGBSurfaceFrom(VGA13_ACTIVESCREEN_X2, 2*320, 2*200, 8, 2*320, 0, 0, 0, 0);
	if(!GX.VGA13.Surface) GX.VGA13.Surface = SDL_CreateRGBSurfaceFrom(VGA13_ACTIVESCREEN, 320, 200, 8, 320, 0, 0, 0, 0);
	if(!GX.VESA101.Surface) GX.VESA101.Surface = SDL_CreateRGBSurfaceFrom(VESA101_ACTIVESCREEN, 640, 480, 8, 640, 0, 0, 0, 0);

	if(!GX.Window){

		GX.Window = SDL_CreateWindow(
			"dRally / Open Source Shadows of Death Rally [1996]",                  		// window title
			SDL_WINDOWPOS_CENTERED,      	// initial x position
			SDL_WINDOWPOS_CENTERED,       	// initial y position
			W_WIDTH,                  			// width, in pixels
			W_HEIGHT,							// height, in pixels
			SDL_WINDOW_HIDDEN				// flags - see below
		);
	}

	if(!GX.Renderer){

		SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "2");
		GX.Renderer = SDL_CreateRenderer(GX.Window, -1, SDL_RENDERER_ACCELERATED);
		//GX.Renderer = SDL_CreateRenderer(GX.Window, -1, SDL_RENDERER_SOFTWARE);
	}
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

		GX.Surface = GX.VGA13.Surface;
	//	SDL_SetRenderDrawColor(GX.Renderer, 0, 0, 0, 255);
	//	SDL_RenderClear(GX.Renderer);
	//	SDL_RenderPresent(GX.Renderer);
		SDL_RenderSetLogicalSize(GX.Renderer, 320, 200);
		if(SDL_GetWindowFlags(GX.Window)&SDL_WINDOW_HIDDEN) SDL_ShowWindow(GX.Window);
		GX.ActiveMode = VGA13;
	}
}

void __VESA101_SETMODE(void){

	if(GX.ActiveMode != VESA101){

		GX.Surface = GX.VESA101.Surface;
		SDL_RenderSetLogicalSize(GX.Renderer, 640, 480);
		if(SDL_GetWindowFlags(GX.Window)&SDL_WINDOW_HIDDEN) SDL_ShowWindow(GX.Window);
		GX.ActiveMode = VESA101;
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

void save_s3m(void * src, unsigned int size, const char * name){

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

void save_xm(void * src, unsigned int size, const char * name){

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

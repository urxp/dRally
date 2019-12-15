#include <stdio.h>
#include <stdlib.h>
//#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>



typedef struct textbit {
	unsigned char 	ascii;
	unsigned char 	fg:4;
	unsigned char 	bg:4;

} textbit;

extern unsigned int INT8_FRAME_COUNTER;
extern unsigned int ___60458h;
extern unsigned char ___24cc88h[];
extern textbit B8000[];
extern unsigned char VGA13_ACTIVESCREEN[];
extern unsigned char VESA101_ACTIVESCREEN[];

#define DOS_MEM_POOL 	200


struct {
	void * 			ptr;
	unsigned int 	size;
} DOS_MEM[DOS_MEM_POOL] = {0};

unsigned int Ticks;
unsigned int VRetraceTicks = 0;

SDL_Renderer * GX_Renderer;
SDL_Texture * GX_Texture;

int drally_main(int, char *[]);
void __VGA13_PRESENTSCREEN(void);
void IRQ0_TimerISR(void);
void Scancodes_Init(void);
void IO_Loop(void);
void __VGA13_PRESENTSCREEN__(void);
void __VESA101_PRESENTSCREEN__(void);
unsigned char POP_LAST_KEY();

struct {
	enum { VGA13=1, VESA101} ActiveMode;
	struct {
		SDL_Surface * Surface;
	} VGA13;
	struct {
		SDL_Surface * Surface;
	} VESA101;
	SDL_Window * Window;
} GX = {0};

int __DPMI_ALLOCATE_DOS_MEMORY_BLOCK(unsigned int size){
	
	printf("[dRally.DPMI] Trying to allocate %d bytes of dos memory.\n", size);

	unsigned int idx = 0;

	while((DOS_MEM[idx].ptr) && ((++idx) < DOS_MEM_POOL));

	if(idx == DOS_MEM_POOL) return 0;

	DOS_MEM[idx].ptr = malloc((size + 0xf)&0xfffffff0);
	if(DOS_MEM[idx].ptr == 0) return 0;
	else DOS_MEM[idx].size = size;

	// __EAX
	*(unsigned int *)___24cc88h = ((unsigned int)DOS_MEM[idx].ptr + 0xf) >> 4;
	// __EDX
	*((unsigned int *)___24cc88h + 3) = idx;

	return 1;
}

int __DPMI_FREE_DOS_MEMORY_BLOCK(unsigned int idx){

	if(idx < DOS_MEM_POOL){

		free(DOS_MEM[idx].ptr);
		DOS_MEM[idx].ptr = (void *)0;
		DOS_MEM[idx].size = 0;

		return 1;
	}

	return 0;
}

unsigned int __GET_FRAME_COUNTER(void){

	unsigned int NewTicks;
	unsigned int FrameMs = 1000/___60458h - 1;

	NewTicks = SDL_GetTicks()-Ticks;	
	
	if(NewTicks < (FrameMs-3)) SDL_Delay(1);
	else if(NewTicks >= FrameMs){

		INT8_FRAME_COUNTER += NewTicks/FrameMs - 1;
		IRQ0_TimerISR();

		if(GX.ActiveMode == VGA13) __VGA13_PRESENTSCREEN__();
		else if(GX.ActiveMode == VESA101) __VESA101_PRESENTSCREEN__();

		Ticks = SDL_GetTicks();
	}

	IO_Loop();
    
	return INT8_FRAME_COUNTER;
}

void __VRETRACE_WAIT_FOR_START(void){
	
	unsigned int FrameMs = 1000/___60458h - 1;

	VRetraceTicks = SDL_GetTicks();
	VRetraceTicks %= FrameMs;
	if(VRetraceTicks) SDL_Delay(FrameMs - VRetraceTicks);
	SDL_Delay(1);

}

void __VRETRACE_WAIT_IF_INACTIVE(void){
/*
	unsigned int FrameMs = 1000/___60458h;//1000/70;

	IO_Loop();

	VRetraceTicks = SDL_GetTicks();
	VRetraceTicks %= FrameMs;
	if(VRetraceTicks > (FrameMs - 3)){
		
		SDL_Delay(FrameMs - VRetraceTicks);
		//if(GX.ActiveMode == VGA13) __VGA13_PRESENTSCREEN();
	}
*/
}

void __TIMER_SET_TIMER(void){

	Ticks = SDL_GetTicks();
}

unsigned int __GET_TIMER_TICKS(void){

	unsigned int tticks = SDL_GetTicks();

	tticks /= 10000/182;
	tticks %=  0x17fe80;

	return tticks;
}

void __WAIT_5(void){

	//SDL_Delay(5000);
	unsigned int tmp = INT8_FRAME_COUNTER + 3*___60458h;

	while((__GET_FRAME_COUNTER() < tmp) && !POP_LAST_KEY());
}

void __VGA3_PRESENTSCREEN(void){

	int i, j;
	textbit tmp;

	for(i = 0; i < 25; i++){
		for(j = 0; j < 80; j++){

			tmp = B8000[80*i+j];
			if(!isprint(tmp.ascii)) tmp.ascii = '*';

			if(tmp.bg != tmp.fg) printf("%c", tmp.ascii);
			else printf(" ");
		}
		printf("\n");
	}
}

void __VGA13_PRESENTSCREEN__(void){

    GX_Texture = SDL_CreateTextureFromSurface(GX_Renderer, GX.VGA13.Surface);
	SDL_RenderCopy(GX_Renderer, GX_Texture, NULL, NULL);
	SDL_RenderPresent(GX_Renderer);
	SDL_DestroyTexture(GX_Texture);
}

void __VESA101_PRESENTSCREEN__(void){

    GX_Texture = SDL_CreateTextureFromSurface(GX_Renderer, GX.VESA101.Surface);
	SDL_RenderCopy(GX_Renderer, GX_Texture, NULL, NULL);
	SDL_RenderPresent(GX_Renderer);
	SDL_DestroyTexture(GX_Texture);
}

void __VGA13_PRESENTSCREEN(void){
/*
    GX_Texture = SDL_CreateTextureFromSurface(GX_Renderer, GX.VGA13.Surface);
	SDL_RenderCopy(GX_Renderer, GX_Texture, NULL, NULL);
	SDL_RenderPresent(GX_Renderer);
	SDL_DestroyTexture(GX_Texture);
*/
}

void __VESA101_PRESENTSCREEN(void){
/*
    GX_Texture = SDL_CreateTextureFromSurface(GX_Renderer, GX.VESA101.Surface);
	SDL_RenderCopy(GX_Renderer, GX_Texture, NULL, NULL);
	SDL_RenderPresent(GX_Renderer);
	SDL_DestroyTexture(GX_Texture);
*/
}

void __DISPLAY_SET_PALETTE_COLOR(int b, int g, int r, int n){

    SDL_Color col;

    col.r = (r<<2)|(r>>4);
    col.g = (g<<2)|(g>>4);
    col.b = (b<<2)|(b>>4);

	if(GX.ActiveMode == VGA13){
		
		SDL_SetPaletteColors(GX.VGA13.Surface->format->palette, &col, n, 1);
		//if(n == 0xff) __VGA13_PRESENTSCREEN();
	}
	else if(GX.ActiveMode == VESA101){
		
		SDL_SetPaletteColors(GX.VESA101.Surface->format->palette, &col, n, 1);
		//if(n == 0xff) __VESA101_PRESENTSCREEN();
	}
}

void __DISPLAY_SET_PALETTE_COLOR_NOUPDATE(int b, int g, int r, int n){

    SDL_Color col;

    col.r = (r<<2)|(r>>4);
    col.g = (g<<2)|(g>>4);
    col.b = (b<<2)|(b>>4);

	if(GX.ActiveMode == VGA13){
		
		SDL_SetPaletteColors(GX.VGA13.Surface->format->palette, &col, n, 1);
	}
	else if(GX.ActiveMode == VESA101){
		
		SDL_SetPaletteColors(GX.VESA101.Surface->format->palette, &col, n, 1);
	}
}

void __VGA13_SETMODE(void){

	if(GX.ActiveMode != VGA13){

		GX.VGA13.Surface = SDL_CreateRGBSurfaceFrom(VGA13_ACTIVESCREEN,
		                                  320, 200, 8, 320,
		                                 	0, 0, 0, 0);

		if(!GX.Window){
	
			GX.Window = SDL_CreateWindow(
				"dRally / Open Source Shadows of Death Rally [1996]",                  		// window title
				SDL_WINDOWPOS_CENTERED,      	// initial x position
				SDL_WINDOWPOS_CENTERED,       	// initial y position
				640,                  			// width, in pixels
				480,							// height, in pixels
				SDL_WINDOW_HIDDEN				// flags - see below
			);

			GX_Renderer = SDL_CreateRenderer(GX.Window, -1, SDL_RENDERER_ACCELERATED);
		}
		else {

			SDL_SetWindowSize(GX.Window, 640, 480);
		}
					
		SDL_SetRenderDrawColor(GX_Renderer, 0, 0, 0, 255);	
		SDL_RenderClear(GX_Renderer);
		SDL_RenderSetLogicalSize(GX_Renderer, 320, 200);
		SDL_ShowWindow(GX.Window);
		SDL_RenderPresent(GX_Renderer);

		GX.ActiveMode = VGA13;
	}
}

void __VESA101_SETMODE(void){

	if(GX.ActiveMode != VESA101){

		GX.VESA101.Surface = SDL_CreateRGBSurfaceFrom(VESA101_ACTIVESCREEN,
		                                  640, 480, 8, 640,
		                                 	0, 0, 0, 0);

		if(!GX.Window){

			GX.Window = SDL_CreateWindow(
				"dRally / Open Source Shadows of Death Rally [1996]",                  		// window title
				SDL_WINDOWPOS_CENTERED,      	// initial x position
				SDL_WINDOWPOS_CENTERED,       	// initial y position
				640,                  			// width, in pixels
				480,							// height, in pixels
				SDL_WINDOW_HIDDEN				// flags - see below
			);

			GX_Renderer = SDL_CreateRenderer(GX.Window, -1, SDL_RENDERER_ACCELERATED);
		}
		else {
			
			SDL_SetWindowSize(GX.Window, 640, 480);
		}
	
		SDL_SetRenderDrawColor(GX_Renderer, 0, 0, 0, 255);
		SDL_RenderClear(GX_Renderer);
		SDL_RenderSetLogicalSize(GX_Renderer, 640, 480);
		SDL_ShowWindow(GX.Window);
		SDL_RenderPresent(GX_Renderer);

		GX.ActiveMode = VESA101;
	}
}

void DISPLAY_GET_PALETTE(unsigned char * dst){

	unsigned int n = -1;

	if(GX.ActiveMode == VGA13){

		while(++n < 0x100){
	
			dst[3*n] = GX.VGA13.Surface->format->palette->colors[n].r >> 2;
			dst[3*n+1] = GX.VGA13.Surface->format->palette->colors[n].g >> 2;
			dst[3*n+2] = GX.VGA13.Surface->format->palette->colors[n].b >> 2;
		}

	}
	else if(GX.ActiveMode == VESA101){

		while(++n < 0x100){
	
			dst[3*n] = GX.VESA101.Surface->format->palette->colors[n].r >> 2;
			dst[3*n+1] = GX.VESA101.Surface->format->palette->colors[n].g >> 2;
			dst[3*n+2] = GX.VESA101.Surface->format->palette->colors[n].b >> 2;
		}
	}
}

void __DISPLAY_GET_PALETTE_COLOR(unsigned char * dst, unsigned char n){

	if(GX.ActiveMode == VGA13){

		dst[0] = GX.VGA13.Surface->format->palette->colors[n].r >> 2;
		dst[1] = GX.VGA13.Surface->format->palette->colors[n].g >> 2;
		dst[2] = GX.VGA13.Surface->format->palette->colors[n].b >> 2;
		//printf("[COLOR %d: 0x%x]\n", n, *(unsigned int *)dst);

	}
	else if(GX.ActiveMode == VESA101){

		dst[0] = GX.VESA101.Surface->format->palette->colors[n].r >> 2;
		dst[1] = GX.VESA101.Surface->format->palette->colors[n].g >> 2;
		dst[2] = GX.VESA101.Surface->format->palette->colors[n].b >> 2;
	}
}

int main(int argc, char * argv[]){

	SDL_Init(SDL_INIT_VIDEO);
	SDL_DisableScreenSaver();

	Scancodes_Init();

	drally_main(argc, argv);

	SDL_DestroyRenderer(GX_Renderer);
	SDL_DestroyWindow(GX.Window);
	SDL_Quit();

	return 0;
}

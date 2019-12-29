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


extern SDL_AudioDeviceID audio_dev;

#define DOS_MEM_POOL 	256


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
	
	printf("[dRally.DPMI] Trying to simulate allocatation of %d bytes of dos memory.\n", size);

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

int skip;
unsigned int __GET_FRAME_COUNTER(void){

	unsigned int NewTicks;
	unsigned int FrameMs = 1000/___60458h;// - 1;
	//int n;

	NewTicks = SDL_GetTicks()-Ticks;	
	
	if(NewTicks < (FrameMs-3)) SDL_Delay(1);
	else if(NewTicks >= FrameMs){

		Ticks = SDL_GetTicks();

		skip = NewTicks/FrameMs - 1;

		INT8_FRAME_COUNTER += skip;
		//n = skip + 1;
		//while(n--){

			IRQ0_TimerISR();
		//}

		if(!skip){	

			if(GX.ActiveMode == VGA13) __VGA13_PRESENTSCREEN__();
			else if(GX.ActiveMode == VESA101) __VESA101_PRESENTSCREEN__();
		}
	}
    
	IO_Loop();

	return INT8_FRAME_COUNTER;
}

void __VRETRACE_WAIT_FOR_START(void){
	
	unsigned int FrameMs = 1000/___60458h;// - 1;

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

	unsigned int tmp = 2;

	tmp *= ___60458h;
	tmp += __GET_FRAME_COUNTER();

	while((__GET_FRAME_COUNTER() < tmp) && !POP_LAST_KEY());
}

void __VGA3_PRESENTSCREEN(unsigned int n_lines){

	int i, j;
	textbit tmp;

	if((n_lines == 0)||(n_lines > 25)) n_lines = 25;

	for(i = 0; i < n_lines; i++){
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

	//result = FMOD_System_Create(&fmodex_system);
    //ERRCHECK(result);
	//result = FMOD_System_Init(fmodex_system, 32, FMOD_INIT_NORMAL, NULL);
    //ERRCHECK(result);

	drally_main(argc, argv);

	if(audio_dev){

		printf("[dRally.SOUND] Closing audio device.\n");

		SDL_PauseAudioDevice(audio_dev, 1);
		SDL_ClearQueuedAudio(audio_dev);
		SDL_CloseAudioDevice(audio_dev);
	}

	SDL_DestroyRenderer(GX_Renderer);
	SDL_DestroyWindow(GX.Window);
	SDL_Quit();

	return 0;
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


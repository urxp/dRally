#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_fixed.h"

#pragma pack(1)
typedef struct font_props_s {
	__BYTE__ 	w;
	__BYTE__ 	h;
	__BYTE__ 	props[];
} font_props_t;

	extern __BYTE__ ___196a78h[];
	extern __DWORD__ ChatMaximized;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1124h__VESA101h_ScreenBufferA;
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a10fch;
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a110ch;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185c0bh[];
	extern __BYTE__ ___1a1efch[];
	extern __DWORD__ ___19bd60h;
	extern __BYTE__ ___196a84h[];

void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
__BYTE__ ___5994ch(void);
void ___23488h_cdecl(const char *, __DWORD__, __DWORD__);
void ___232f8h(void);
char * itoa_watcom106(int value, char * buffer, int radix);
__BYTE__ ___59b3ch(void);
__DWORD__ DPMI_GET_FREE_MEMORY_INFORMATION(void);
void ___2ab50h(void);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void dRChatbox_push(const char * line, int col);
int dRChatbox_getFont(int line);
char * dRChatbox_getLine(int line);


void ___23758h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x140];
	char 		buffer[0x96];
	int 		n, font;
	char * 		line;
	racer_t *	s_6c;


	s_6c = (racer_t *)___1a01e0h;
	B(esp+0x13d) = 0;
	ChatMaximized = 1;
	D(esp+0x134) = !(D(___196a78h) == 0);
	D(___196a78h) = 0;
	memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x0d200, ___1a1138h__VESA101_BACKGROUND+0x0d200, 0x3c500);
	___135fch(0, 0x6f, 0x27f, 0x171);
	___12e78h_cdecl(___1a10fch, (font_props_t *)___185c0bh, "press   to minimize chat window", 0x10923);
	___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "F1", 0x10959);

	n = -1;
	while(++n < 0x16){

		font = dRChatbox_getFont(n);
		line = dRChatbox_getLine(n);

		if(font == 0) ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, line, 0x1298c+0x2580*n);
		if(font == 1) ___12e78h_cdecl(___1a10fch, (font_props_t *)___185c0bh, line, 0x1298c+0x2580*n);
		if(font == 2) ___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, line, 0x1298c+0x2580*n);
	}

	___12cb8h__VESA101_PRESENTSCREEN();
	ebp = 0;
	B(esp) = 0;
	D(esp+0x138) = 0;
	D(esp+0x130) = 0;

	while(1){

		___2ab50h();
		D(esp+0x130)++;

		if((int)D(esp+0x130) <= 0xa){

			___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, "\x7f", ebp+0x4650c);
		}
		else {

			edx = 0x46500;

			while(1){

				memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+0xc+ebp, ___1a1138h__VESA101_BACKGROUND+edx+0xc+ebp, 0x10);
				edx += 0x280;
				if(edx == 0x48d00) break;
			}
		}
			
		if((int)D(esp+0x130) > 0x14) D(esp+0x130) = 0;

		___1398ch__VESA101_PRESENTRECTANGLE(ebp+0x4650c, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x4650c+ebp, B(___185c0bh+0x61), 0xf);
		B(esp+0x13c) = ___59b3ch();

		switch(B(esp+0x13c)){
		case 8:
			if(strlen(esp) > 0){

				eax = B(___185c0bh+B(esp+strlen(esp)-1)-0x20+2);
				edx = 0x46500;
				ebp -= eax;

				while(1){

					memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+0xc+ebp, ___1a1138h__VESA101_BACKGROUND+edx+0xc+ebp, 0x20);
					edx += 0x280;
					if(edx == 0x48d00) break;
				}

				___1398ch__VESA101_PRESENTRECTANGLE(ebp+0x4650c, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x4650c+ebp, 0x20, 0x10);
				B(esp+strlen(esp)-1) = 0;
			}
			break;
		case 0xd:
			if(strlen(esp) > 0){

				edx = 0x46500;
				ebp = 0;

				while(1){

					memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+0xc, ___1a1138h__VESA101_BACKGROUND+edx+0xc, 0x262);
					edx += 0x280;
					if(edx == 0x48d00) break;
				}

				if(strcmp(esp, "/memavail") == 0){

					itoa_watcom106(DPMI_GET_FREE_MEMORY_INFORMATION(), esp+0x98, 0xa);
					strcpy(buffer, "-- Memory available: ");
					strcat(buffer, esp+0x98);
					dRChatbox_push(buffer, 0);
				}
				else {

					strcpy(buffer, "<");
					strcat(buffer, s_6c[D(___1a1ef8h)].name);
					strcat(buffer, "> ");
					strcat(buffer, esp);
					dRChatbox_push(buffer, 2);
					___23488h_cdecl(buffer, strlen(buffer)+1, 1);
				}

				___232f8h();
				strcpy(esp, "");
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 0x1b:
			D(esp+0x138) = -1;
			break;
		default:
			eax = 0x243-D(___1a1efch);

			if((int)ebp >= (int)eax){
					
				ebp = strlen(esp);
				eax = strlen(esp);

				if((int)eax >= 0){

					while(1){

						if(B(esp+eax) != 0x20){

							eax--;
							if((int)eax < 0) break;
						}
						else {

							ebp = eax;
							break;
						}
					}
				}

				strcpy(esp+0x98, esp);
				B(esp+ebp) = 0;

				edx = 0x46500;
				while(1){

					memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+0xc, ___1a1138h__VESA101_BACKGROUND+edx+0xc, 0x262);
					edx += 0x280;
					if(edx == 0x48d00) break;
				}

				strcpy(buffer, "<");
				strcat(buffer, s_6c[D(___1a1ef8h)].name);
				strcat(buffer, "> ");
				strcat(buffer, esp);
				dRChatbox_push(buffer, 2);
				___23488h_cdecl(buffer, strlen(buffer)+1, 1);
				___232f8h();
				strcpy(esp, "");

				if(ebp != strlen(esp+0x98)) strcpy(esp, esp+0x98+ebp+1);

				strcat(esp, esp+0x13c);
				___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, esp, 0x4650c);

				ebp = 0;
				edx = 0;
				if(edx < strlen(esp)){

					while(1){

						eax = B(___185c0bh+B(esp+edx)-0x20+2);
						ebp += eax;
						edx++;
						if(edx >= strlen(esp)) break;
					}
				}

				___12cb8h__VESA101_PRESENTSCREEN();
			}
			else {

				if((B(esp+0x13c) >= 0x20)&&(B(esp+0x13c) <= 0x7e)){

					strcat(esp, esp+0x13c);

					edx = 0x46500;
					while(1){

						memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+0xc+ebp, ___1a1138h__VESA101_BACKGROUND+edx+0xc+ebp, 0x10);
						edx += 0x280;
						if(edx == 0x48d00) break;
					}

					___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, esp+0x13c, ebp+0x4650c);
					___1398ch__VESA101_PRESENTRECTANGLE(ebp+0x4650c, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x4650c+ebp, B(___185c0bh+B(esp+0x13c)-0x20+2), 0xf);
					eax = B(___185c0bh+B(esp+0x13c)-0x20+2);
					ebp += eax;
				}
			}
			break;
		}

		if(___5994ch() == DR_SCAN_F1) D(esp+0x138) = -1;
	
#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0){

			if(D(___196a84h) != 0) D(esp+0x138) = -1;
		}
#endif // DR_MULTIPLAYER

		if(D(esp+0x138) != 0) break;
	}

	ChatMaximized = 0;
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1124h__VESA101h_ScreenBufferA, 0x4b000);

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){
	
		if(D(___196a84h) == 0){
			
			___23230h();
			___12cb8h__VESA101_PRESENTSCREEN();
		}
	}
#endif // DR_MULTIPLAYER

	D(___196a78h) = D(esp+0x134);
}  

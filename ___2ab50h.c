#include "drally.h"
#include "drmemory.h"
#include "drally_structs_fixed.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __DWORD__ ChatMaximized;
	extern __BYTE__ ___196a74h[];
	extern __POINTER__ ___1a0f9ch;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];


void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void ___6168ch(void);
#if defined(DR_MULTIPLAYER)
void ___23230h(void);
void ___233c0h(void);
void ___1e4f8h(void);
void ___1e62ch_cdecl(__DWORD__);
int ___23594h_cdecl(__POINTER__, int);
void ___23488h_cdecl(__POINTER__, __DWORD__, __DWORD__);
#endif // DR_MULTIPLAYER
void ___2aa08h(void);

void dRChatbox_push(const char * line, int col);

#if defined(DR_MULTIPLAYER)
static void mp_helper(__POINTER__ vp, int i){

	dRChatbox_push(vp, i);
	
	if(D(___196a74h) == 1){

		if(ChatMaximized){
					
			___233c0h();
			___12cb8h__VESA101_PRESENTSCREEN();
		}
		else {

			___23230h();
			___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
		}
	}
}
#endif // DR_MULTIPLAYER

void ___2ab50h(void){

	int 		n;
	__BYTE__ 	esp[0x428];
	char 		buffer[0x64];
	racer_t * 	s_6c;

	___2aa08h();

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		s_6c = (racer_t *)___1a01e0h;
		___6168ch();

		if(___23594h_cdecl(esp, 1)) mp_helper(esp, 1);
		if(___23594h_cdecl(esp, 6)) mp_helper(esp, 0);

		if(___23594h_cdecl(esp, 7)){

			___23488h_cdecl(strcat(strcat(strcpy(buffer, "-- "), s_6c[D(___1a1ef8h)].name), " is currently on Death Rally."), 0x64, 8);
		}

		if(___23594h_cdecl(esp, 20)){
		
			mp_helper(esp, 0);
			___1e4f8h();
			D(___1a1ef8h) = 0x13;
		}

		if(___23594h_cdecl(esp, 9)){

			mp_helper(esp, 0);
			___1e62ch_cdecl(1);
		}

		if(___23594h_cdecl(esp+0x400, 19)){
		
			mp_helper(strcat(strcat(strcpy(buffer, "-- "), s_6c[B(esp+0x400)].name), " is waiting for you to join the next race."), 0);
		}
	}
#endif // DR_MULTIPLAYER
}

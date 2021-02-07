#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___19bd60h[];
	extern byte CONNECTION_TYPE[];
	extern byte ___199f9ch[];
	extern byte ___243cd0h[];
	extern byte kmap[];
	extern __DWORD__ ___1a1140h[8];
	extern byte ___19bd58h[];
	extern byte ___199f3fh[];
	extern byte ___24cc64h[];
	extern byte ___199f3eh[];
	extern byte ___199f41h[];
	extern byte ___199f40h[];
	extern byte ___199f45h[];
	extern byte ___199f44h[];
	extern byte ___199f43h[];
	extern byte ___199f42h[];
	extern byte ___243888h[];
	extern byte ___243890h[];
	extern byte ___243884h[];
	extern byte ___24388ch[];
	extern byte ___1a1164h[];
	extern byte ___1a113ch[];
	extern byte ___1a1110h[];
	extern byte ___1a1130h[];
	extern byte ___1a1120h[];
	extern byte ___1a1118h[];
	extern byte ___1a111ch[];
	extern byte ___243ce8h[];
	extern byte ___1e6ed0h[];
	extern byte ___24387ch[];
	extern byte ___243880h[];
	extern byte ___243898h[];
	extern byte ___243894h[];
	extern byte ___243cach[];


void ___63b20h(dword, dword);
void ___61518h(void);
void ___61418h(dword);
void ___40564h(void);

static byte todo_in(word w){

	printf("[TODO] IN instruction for Joystick/Gamepad\n");
	return 0;
}

void race___40164h(void){

	dword 	ActionFlags;

	if((D(___19bd60h) != 0)&&(D(CONNECTION_TYPE) == 2)) ___63b20h(1, D(___199f9ch));
	ActionFlags = 0;
	if(D(___243cd0h) == 0){
		if((___1a1140h[6] == DR_SCAN_UP)&&(B(kmap+DR_SCAN_KP_8) != 0)) ActionFlags |= 1;			// UP
		if((___1a1140h[4]== DR_SCAN_DOWN)&&(B(kmap+DR_SCAN_KP_2) != 0)) ActionFlags |= 2;			// DOWN
		if((___1a1140h[2] == DR_SCAN_LEFT)&&(B(kmap+DR_SCAN_KP_4) != 0)) ActionFlags |= 4;			// LEFT
		if((___1a1140h[3] == DR_SCAN_RIGHT)&&(B(kmap+DR_SCAN_KP_6) != 0)) ActionFlags |= 8;			// RIGHT
		if((B(kmap+DR_SCAN_UP) != 0)||(B(kmap+DR_SCAN_KP_8) != 0)||(B(___1a1140h[6]+kmap) != 0)) ActionFlags |= 1;
		if((B(kmap+DR_SCAN_DOWN) != 0)||(B(kmap+DR_SCAN_KP_2) != 0)||(B(___1a1140h[4]+kmap) != 0)) ActionFlags |= 2;
		if(B(___1a1140h[2]+kmap) != 0) ActionFlags |= 4;
		if(B(___1a1140h[3]+kmap) != 0) ActionFlags |= 8;
		if(B(___1a1140h[0]+kmap) != 0) ActionFlags |= 0x10;							// TURBO BOOST
		if(B(___1a1140h[7]+kmap) != 0) ActionFlags |= 0x20;							// MACHINE GUN
		if(B(___1a1140h[5]+kmap) != 0){
			ActionFlags |= 0x40;													// DROP MINE
			B(___1a1140h[5]+kmap) = 0;
		}
		if(((ActionFlags&2) != 0)&&((ActionFlags&0x40) != 0)) ActionFlags &= 0xfd;
		if(B(___1a1140h[1]+kmap) != 0) ActionFlags |= 0x42;							// HORN
		
#if defined(DR_GAMEPAD)
		if((int)D(___19bd58h) > 0){
			B(B(___199f3fh)+___24cc64h) = 0;
			B(B(___199f3eh)+___24cc64h) = 0;
			B(B(___199f41h)+___24cc64h) = 0;
			B(B(___199f40h)+___24cc64h) = 0;
			B(B(___199f45h)+___24cc64h) = 0;
			B(B(___199f44h)+___24cc64h) = 0;
			B(B(___199f43h)+___24cc64h) = 0;
			B(B(___199f42h)+___24cc64h) = 0;
			___40564h();
			if((int)(D(___243888h)-0x32) > (int)D(___243890h)) B(B(___199f3eh)+___24cc64h) = 1;
			if((int)(D(___243888h)+0x32) < (int)D(___243890h)) B(B(___199f3fh)+___24cc64h) = 1;
			if((int)(D(___243884h)-0x32) > (int)D(___24388ch)) B(B(___199f40h)+___24cc64h) = 1;
			if((int)(D(___243884h)+0x32) < (int)D(___24388ch)) B(B(___199f41h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x10) == 0) B(B(___199f42h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x20) == 0) B(B(___199f43h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x40) == 0) B(B(___199f44h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x80) == 0) B(B(___199f45h)+___24cc64h) = 1;
			if(B(D(___1a1164h)+___24cc64h) != 0) ActionFlags |= 1;
			if(B(D(___1a113ch)+___24cc64h) != 0) ActionFlags |= 2;
			if(B(D(___1a1110h)+___24cc64h) != 0) ActionFlags |= 4;
			if(B(D(___1a1130h)+___24cc64h) != 0) ActionFlags |= 8;
			if(B(D(___1a1120h)+___24cc64h) != 0) ActionFlags |= 0x10;
			if(B(D(___1a1118h)+___24cc64h) != 0) ActionFlags |= 0x20;
			if(B(D(___1a111ch)+___24cc64h) != 0){
				ActionFlags |= 0x40;
				B(___1a1140h[5]+kmap) = 0;
			}
		}
#endif // DR_GAMEPAD

		if((ActionFlags&0x10) != 0) ActionFlags |= 1;
		D(4*D(0x35e*D(___243ce8h)+___1e6ed0h+0xa0)+0x35e*D(___243ce8h)+___1e6ed0h+0x60) = ActionFlags;
		D(0x35e*D(___243ce8h)+___1e6ed0h+0xa0)++;
		if((int)D(0x35e*D(___243ce8h)+___1e6ed0h+0xa0) > 0xf) D(0x35e*D(___243ce8h)+___1e6ed0h+0xa0) = 0;
		if((D(___19bd60h) != 0)&&(D(___24387ch) != 0)){
			___61418h(ActionFlags);
			if(D(___243880h) != 0) ___61518h();
		}
		D(___243898h)++;
		if((int)D(___243898h) >= 0xf) D(___243898h) = 0;
		D(___243894h)++;
	}
	D(___243cach)++;
}

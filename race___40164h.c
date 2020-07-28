#include "drally.h"

	extern byte ___19bd60h[];
	extern byte CONNECTION_TYPE[];
	extern byte ___199f9ch[];
	extern byte ___243cd0h[];
	extern byte ___1a1158h[];
	extern byte kmap[];
	extern byte ___1a1150h[];
	extern byte ___1a1148h[];
	extern byte ___1a114ch[];
	extern byte ___1a1140h[];
	extern byte ___1a115ch[];
	extern byte ___1a1154h[];
	extern byte ___1a1144h[];
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
	extern byte ___1e6f70h[];
	extern byte ___1e6f30h[];
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
		if((D(___1a1158h) == 0xc8)&&(B(kmap+0x48) != 0)) ActionFlags |= 1;			// UP
		if((D(___1a1150h) == 0xd0)&&(B(kmap+0x50) != 0)) ActionFlags |= 2;			// DOWN
		if((D(___1a1148h) == 0xcb)&&(B(kmap+0x4b) != 0)) ActionFlags |= 4;			// LEFT
		if((D(___1a114ch) == 0xcd)&&(B(kmap+0x4d) != 0)) ActionFlags |= 8;			// RIGHT
		if((B(kmap+0xc8) != 0)||(B(kmap+0x48) != 0)||(B(D(___1a1158h)+kmap) != 0)) ActionFlags |= 1;
		if((B(kmap+0xd0) != 0)||(B(kmap+0x50) != 0)||(B(D(___1a1150h)+kmap) != 0)) ActionFlags |= 2;
		if(B(D(___1a1148h)+kmap) != 0) ActionFlags |= 4;
		if(B(D(___1a114ch)+kmap) != 0) ActionFlags |= 8;
		if(B(D(___1a1140h)+kmap) != 0) ActionFlags |= 0x10;							// TURBO BOOST
		if(B(D(___1a115ch)+kmap) != 0) ActionFlags |= 0x20;							// MACHINE GUN
		if(B(D(___1a1154h)+kmap) != 0){
			ActionFlags |= 0x40;													// DROP MINE
			B(D(___1a1154h)+kmap) = 0;
		}
		if(((ActionFlags&2) != 0)&&((ActionFlags&0x40) != 0)) ActionFlags &= 0xfd;
		if(B(D(___1a1144h)+kmap) != 0) ActionFlags |= 0x42;							// HORN
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
				B(D(___1a1154h)+kmap) = 0;
			}
		}
		if((ActionFlags&0x10) != 0) ActionFlags |= 1;
		D(4*D(0x35e*D(___243ce8h)+___1e6f70h)+0x35e*D(___243ce8h)+___1e6f30h) = ActionFlags;
		D(0x35e*D(___243ce8h)+___1e6f70h)++;
		if((int)D(0x35e*D(___243ce8h)+___1e6f70h) > 0xf) D(0x35e*D(___243ce8h)+___1e6f70h) = 0;
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

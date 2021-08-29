#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_free.h"

	extern byte ___19bd60h[];
	extern byte CONNECTION_TYPE[];
	extern byte ___199f9ch[];
	extern byte ___243cd0h[];
	extern byte kmap[];
	extern kb_control_t ___1a1140h;
	extern __DWORD__ ___19bd58h_gamepad;
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
	extern __DWORD__ ___1a1164h_gp_accelerate;
	extern __DWORD__ ___1a113ch_gp_brake;
	extern __DWORD__ ___1a1110h_gp_steer_left;
	extern __DWORD__ ___1a1130h_gp_steer_right;
	extern __DWORD__ ___1a1120h_gp_turbo_boost;
	extern __DWORD__ ___1a1118h_gp_machine_gun;
	extern __DWORD__ ___1a111ch_gp_drop_mine;
	extern byte ___243ce8h[];
	extern struct_35e_t ___1e6ed0h[4];
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

	dword 	aFlags;

#if defined(DR_MULTIPLAYER)
	if((D(___19bd60h) != 0)&&(D(CONNECTION_TYPE) == 2)) ___63b20h(1, D(___199f9ch));
#endif // DR_MULTIPLAYER

	aFlags = 0;
	if(D(___243cd0h) == 0){
		if((___1a1140h.accelerate == DR_SCAN_UP)&&(B(kmap+DR_SCAN_KP_8) != 0)) aFlags |= 1;		// UP
		if((___1a1140h.brake== DR_SCAN_DOWN)&&(B(kmap+DR_SCAN_KP_2) != 0)) aFlags |= 2;			// DOWN
		if((___1a1140h.steer_left == DR_SCAN_LEFT)&&(B(kmap+DR_SCAN_KP_4) != 0)) aFlags |= 4;		// LEFT
		if((___1a1140h.steer_right == DR_SCAN_RIGHT)&&(B(kmap+DR_SCAN_KP_6) != 0)) aFlags |= 8;	// RIGHT
		if((B(kmap+DR_SCAN_UP) != 0)||(B(kmap+DR_SCAN_KP_8) != 0)||(B(___1a1140h.accelerate+kmap) != 0)) aFlags |= 1;
		if((B(kmap+DR_SCAN_DOWN) != 0)||(B(kmap+DR_SCAN_KP_2) != 0)||(B(___1a1140h.brake+kmap) != 0)) aFlags |= 2;
		if(B(___1a1140h.steer_left+kmap) != 0) aFlags |= 4;
		if(B(___1a1140h.steer_right+kmap) != 0) aFlags |= 8;
		if(B(___1a1140h.turbo_boost+kmap) != 0) aFlags |= 0x10;		// TURBO BOOST
		if(B(___1a1140h.machine_gun+kmap) != 0) aFlags |= 0x20;		// MACHINE GUN
		if(B(___1a1140h.drop_mine+kmap) != 0){
			aFlags |= 0x40;											// DROP MINE
			B(___1a1140h.drop_mine+kmap) = 0;
		}
		if(((aFlags&2) != 0)&&((aFlags&0x40) != 0)) aFlags &= 0xfd;
		if(B(___1a1140h.horn+kmap) != 0) aFlags |= 0x42;				// HORN
		
#if defined(DR_GAMEPAD)
		if((int)___19bd58h_gamepad > 0){

			B(B(___199f3eh)+___24cc64h) = 0;
			B(B(___199f3fh)+___24cc64h) = 0;
			B(B(___199f40h)+___24cc64h) = 0;
			B(B(___199f41h)+___24cc64h) = 0;
			B(B(___199f42h)+___24cc64h) = 0;
			B(B(___199f43h)+___24cc64h) = 0;
			B(B(___199f44h)+___24cc64h) = 0;
			B(B(___199f45h)+___24cc64h) = 0;

			___40564h();
			
			if((int)(D(___243888h)-0x32) > (int)D(___243890h)) B(B(___199f3eh)+___24cc64h) = 1;
			if((int)(D(___243888h)+0x32) < (int)D(___243890h)) B(B(___199f3fh)+___24cc64h) = 1;
			if((int)(D(___243884h)-0x32) > (int)D(___24388ch)) B(B(___199f40h)+___24cc64h) = 1;
			if((int)(D(___243884h)+0x32) < (int)D(___24388ch)) B(B(___199f41h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x10) == 0) B(B(___199f42h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x20) == 0) B(B(___199f43h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x40) == 0) B(B(___199f44h)+___24cc64h) = 1;
			if((todo_in(0x201)&0x80) == 0) B(B(___199f45h)+___24cc64h) = 1;
			if(B(___24cc64h+___1a1164h_gp_accelerate) != 0) aFlags |= 1;
			if(B(___24cc64h+___1a113ch_gp_brake) != 0) aFlags |= 2;
			if(B(___24cc64h+___1a1110h_gp_steer_left) != 0) aFlags |= 4;
			if(B(___24cc64h+___1a1130h_gp_steer_right) != 0) aFlags |= 8;
			if(B(___24cc64h+___1a1120h_gp_turbo_boost) != 0) aFlags |= 0x10;
			if(B(___24cc64h+___1a1118h_gp_machine_gun) != 0) aFlags |= 0x20;
			if(B(___24cc64h+___1a111ch_gp_drop_mine) != 0){
				aFlags |= 0x40;
				B(___1a1140h.drop_mine+kmap) = 0;
			}
		}
#endif // DR_GAMEPAD

		if((aFlags&0x10) != 0) aFlags |= 1;
		___1e6ed0h[D(___243ce8h)].ActionFlags[___1e6ed0h[D(___243ce8h)].ActionFlags_i++] = aFlags;
		___1e6ed0h[D(___243ce8h)].ActionFlags_i &= 0xf;

#if defined(DR_MULTIPLAYER)
		if((D(___19bd60h) != 0)&&(D(___24387ch) != 0)){
			___61418h(aFlags);
			if(D(___243880h) != 0) ___61518h();
		}
#endif // DR_MULTIPLAYER

		D(___243898h)++;
		if((int)D(___243898h) >= 0xf) D(___243898h) = 0;
		D(___243894h)++;
	}
	D(___243cach)++;
}

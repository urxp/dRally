#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_free.h"

#define CTRL_NULL			0x00
#define CTRL_ACCELERATE		0x01
#define CTRL_BRAKE			0x02
#define CTRL_STEER_LEFT		0x04
#define CTRL_STEER_RIGHT	0x08
#define CTRL_TURBO_BOOST	0x10
#define CTRL_MACHINE_GUN	0x20
#define CTRL_DROP_MINE		0x40
#define CTRL_HORN			0x42

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___199f9ch[];
	extern __BYTE__ SUPERGLOBAL___243cd0h[];
	extern __BYTE__ kmap[];
	extern kb_control_t ___1a1140h;
	extern __DWORD__ ___19bd58h_gamepad;
	extern __BYTE__ ___199f3fh[];
	extern __BYTE__ ___24cc64h[];
	extern __BYTE__ ___199f3eh[];
	extern __BYTE__ ___199f41h[];
	extern __BYTE__ ___199f40h[];
	extern __BYTE__ ___199f45h[];
	extern __BYTE__ ___199f44h[];
	extern __BYTE__ ___199f43h[];
	extern __BYTE__ ___199f42h[];
	extern __BYTE__ ___243888h[];
	extern __BYTE__ ___243890h[];
	extern __BYTE__ ___243884h[];
	extern __BYTE__ ___24388ch[];
	extern __DWORD__ ___1a1164h_gp_accelerate;
	extern __DWORD__ ___1a113ch_gp_brake;
	extern __DWORD__ ___1a1110h_gp_steer_left;
	extern __DWORD__ ___1a1130h_gp_steer_right;
	extern __DWORD__ ___1a1120h_gp_turbo_boost;
	extern __DWORD__ ___1a1118h_gp_machine_gun;
	extern __DWORD__ ___1a111ch_gp_drop_mine;
	extern __DWORD__ MY_CAR_IDX;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___24387ch[];
	extern __BYTE__ ___243880h[];
	extern __BYTE__ SUPERGLOBAL___243cach[];


void ___63b20h(__DWORD__, __DWORD__);
void ___61518h(void);
void ___61418h(__DWORD__);
void ___40564h(void);

static __BYTE__ todo_in(__WORD__ w){

	printf("[TODO] IN instruction for Joystick/Gamepad\n");
	return 0;
}

void race___40164h(void){

	__DWORD__ 		aFlags;
	struct_35e_t *	s_35e;

#if defined(DR_MULTIPLAYER)
	if((___19bd60h != 0)&&(CONNECTION_TYPE == 2)) ___63b20h(1, D(___199f9ch));
#endif // DR_MULTIPLAYER

	aFlags = CTRL_NULL;
	if(D(SUPERGLOBAL___243cd0h) == 0){

		s_35e = (struct_35e_t *)___1e6ed0h;
		
		if((___1a1140h.accelerate == DR_SCAN_UP)&&kmap[DR_SCAN_KP_8]) aFlags |= CTRL_ACCELERATE;		// UP
		if((___1a1140h.brake == DR_SCAN_DOWN)&&kmap[DR_SCAN_KP_2]) aFlags |= CTRL_BRAKE;				// DOWN
		if((___1a1140h.steer_left == DR_SCAN_LEFT)&&kmap[DR_SCAN_KP_4]) aFlags |= CTRL_STEER_LEFT;		// LEFT
		if((___1a1140h.steer_right == DR_SCAN_RIGHT)&&kmap[DR_SCAN_KP_6]) aFlags |= CTRL_STEER_RIGHT;	// RIGHT
		
		if(kmap[___1a1140h.accelerate]||kmap[DR_SCAN_UP]||kmap[DR_SCAN_KP_8]) aFlags |= CTRL_ACCELERATE;
		if(kmap[___1a1140h.brake]||kmap[DR_SCAN_DOWN]||kmap[DR_SCAN_KP_2]) aFlags |= CTRL_BRAKE;
		if(kmap[___1a1140h.steer_left]) aFlags |= CTRL_STEER_LEFT;
		if(kmap[___1a1140h.steer_right]) aFlags |= CTRL_STEER_RIGHT;
		if(kmap[___1a1140h.turbo_boost]) aFlags |= CTRL_TURBO_BOOST;		// TURBO BOOST
		if(kmap[___1a1140h.machine_gun]) aFlags |= CTRL_MACHINE_GUN;		// MACHINE GUN
		if(kmap[___1a1140h.drop_mine]){

			aFlags |= CTRL_DROP_MINE;										// DROP MINE
			kmap[___1a1140h.drop_mine] = 0;
		}

		if((aFlags&CTRL_BRAKE)&&(aFlags&CTRL_DROP_MINE)) aFlags &= ~CTRL_BRAKE;
		if(kmap[___1a1140h.horn]) aFlags |= CTRL_HORN;						// HORN
		
#if defined(DR_GAMEPAD)
		if((int)___19bd58h_gamepad > 0){

			B(___24cc64h+B(___199f3eh)) = 0;
			B(___24cc64h+B(___199f3fh)) = 0;
			B(___24cc64h+B(___199f40h)) = 0;
			B(___24cc64h+B(___199f41h)) = 0;
			B(___24cc64h+B(___199f42h)) = 0;
			B(___24cc64h+B(___199f43h)) = 0;
			B(___24cc64h+B(___199f44h)) = 0;
			B(___24cc64h+B(___199f45h)) = 0;

			___40564h();
			
			if((int)(D(___243888h)-0x32) > (int)D(___243890h)) B(___24cc64h+B(___199f3eh)) = 1;
			if((int)(D(___243888h)+0x32) < (int)D(___243890h)) B(___24cc64h+B(___199f3fh)) = 1;
			if((int)(D(___243884h)-0x32) > (int)D(___24388ch)) B(___24cc64h+B(___199f40h)) = 1;
			if((int)(D(___243884h)+0x32) < (int)D(___24388ch)) B(___24cc64h+B(___199f41h)) = 1;
			if((todo_in(0x201)&0x10) == 0) B(___24cc64h+B(___199f42h)) = 1;
			if((todo_in(0x201)&0x20) == 0) B(___24cc64h+B(___199f43h)) = 1;
			if((todo_in(0x201)&0x40) == 0) B(___24cc64h+B(___199f44h)) = 1;
			if((todo_in(0x201)&0x80) == 0) B(___24cc64h+B(___199f45h)) = 1;
			if(B(___24cc64h+___1a1164h_gp_accelerate) != 0) aFlags |= CTRL_ACCELERATE;
			if(B(___24cc64h+___1a113ch_gp_brake) != 0) aFlags |= CTRL_BRAKE;
			if(B(___24cc64h+___1a1110h_gp_steer_left) != 0) aFlags |= CTRL_STEER_LEFT;
			if(B(___24cc64h+___1a1130h_gp_steer_right) != 0) aFlags |= CTRL_STEER_RIGHT;
			if(B(___24cc64h+___1a1120h_gp_turbo_boost) != 0) aFlags |= CTRL_TURBO_BOOST;
			if(B(___24cc64h+___1a1118h_gp_machine_gun) != 0) aFlags |= CTRL_MACHINE_GUN;
			if(B(___24cc64h+___1a111ch_gp_drop_mine) != 0){

				aFlags |= CTRL_DROP_MINE;
				B(___1a1140h.drop_mine+kmap) = 0;
			}
		}
#endif // DR_GAMEPAD

		if(aFlags&CTRL_TURBO_BOOST) aFlags |= CTRL_ACCELERATE;
		s_35e[MY_CAR_IDX].ActionFlags[s_35e[MY_CAR_IDX].ActionFlags_i++] = aFlags;
		s_35e[MY_CAR_IDX].ActionFlags_i &= 0xf;

#if defined(DR_MULTIPLAYER)
		if((___19bd60h != 0)&&(D(___24387ch) != 0)){

			___61418h(aFlags);
			if(D(___243880h) != 0) ___61518h();
		}
#endif // DR_MULTIPLAYER

		incCounter(2);
		if((int)getCounter(2) >= 0xf) resetCounter(2);
		incCounter(3);
	}

	D(SUPERGLOBAL___243cach)++;
}

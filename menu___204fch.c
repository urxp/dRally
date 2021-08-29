#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___1866b8h[];
	extern byte ___19ce70h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern kb_control_t ___1a1140h;
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___185a5ch[];
	extern byte ___185b58h[];

dword ___20220h(void);
byte ___59b3ch(void);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
byte ___5994ch(void);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
int ___146c4h_cdecl(dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___1f6e4h(void);


void menu___204fch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x3c];


	___1f6e4h();
	D(esp+0x28) = 0x15031;
	D(esp+0x10) = 0x95;
	D(esp+0x24) = 0x19631;
	D(esp+0x14) = 0xb1;
	D(esp+0x38) = 0x1dc31;
	D(esp+4) = 0xcd;
	D(esp+0x1c) = 0x22231;
	D(esp+8) = 0xe9;
	D(esp+0x18) = 0x26831;
	D(esp+0x2c) = 0x105;
	D(esp+0x0c) = 0x2ae31;
	D(esp+0x34) = 0x121;
	D(esp+0x20) = 0x2f431;
	D(esp) = 0x13d;
	D(esp+0x30) = 0x33a31;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101h_DefaultScreenBufferB+0x10680, 0x28f00);
		___13710h(0, 0);
		___13710h(3, 0);
		___13710h(6, 1);
		___12cb8h__VESA101_PRESENTSCREEN();
		ebp = ___146c4h_cdecl(6);

		switch(ebp+1){
		case 0:
			if(___20220h() == 1) ebp = 0;
			break;
		case 1:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, 0x79, 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for accelerate...", D(esp+0x28));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.accelerate = ___5994ch();

				if((___1a1140h.accelerate != 0)&&(___1a1140h.accelerate != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xa8c, "Accelerate    ");
			strcat(___1866b8h+0xa8c, ___19ce70h+0xf*___1a1140h.accelerate);
			break;
		case 2:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, D(esp+0x10), 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for brake...", D(esp+0x24));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.brake = ___5994ch();
			
				if((___1a1140h.brake != 0)&&(___1a1140h.brake != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xabe, "Brake        ");
			strcat(___1866b8h+0xabe, ___19ce70h+0xf*___1a1140h.brake);
			break;
		case 3:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, D(esp+0x14), 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for left steer...", D(esp+0x38));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.steer_left = ___5994ch();
			
				if((___1a1140h.steer_left != 0)&&(___1a1140h.steer_left != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xaf0, "Steer Left    \xfa\xfa");
			strcat(___1866b8h+0xaf0, ___19ce70h+0xf*___1a1140h.steer_left);
			break;
		case 4:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, D(esp+4), 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for right steer...", D(esp+0x1c));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.steer_right = ___5994ch();

				if((___1a1140h.steer_right != 0)&&(___1a1140h.steer_right != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xb22, "Steer Right   \xfa\xfa\xfa\xfa\xfa\xfa");
			strcat(___1866b8h+0xb22, ___19ce70h+0xf*___1a1140h.steer_right);
			break;
		case 5:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, D(esp+8), 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for turbo boost...", D(esp+0x18));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.turbo_boost = ___5994ch();
			
				if((___1a1140h.turbo_boost != 0)&&(___1a1140h.turbo_boost != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xb54, "Turbo Boost  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
			strcat(___1866b8h+0xb54, ___19ce70h+0xf*___1a1140h.turbo_boost);
			break;
		case 6:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, D(esp+0x2c), 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for machine gun...", D(esp+0xc));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.machine_gun = ___5994ch();
				
				if((___1a1140h.machine_gun != 0)&&(___1a1140h.machine_gun != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xb86, "Machine Gun  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
			strcat(___1866b8h+0xb86, ___19ce70h+0xf*___1a1140h.machine_gun);
			break;
		case 7:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, D(esp+0x34), 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for drop mine...", D(esp+0x20));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.drop_mine = ___5994ch();

				if((___1a1140h.drop_mine != 0)&&(___1a1140h.drop_mine != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xbb8, "Drop Mine    \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
			strcat(___1866b8h+0xbb8, ___19ce70h+0xf*___1a1140h.drop_mine);
			break;
		case 8:
			___13710h(0, 0);
			___13710h(3, 0);
			___13710h(6, 0);
			___13248h_cdecl(0x127, D(esp), 0x143, 0x30, 1);
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press a key for horn...", D(esp+0x30));
			___12cb8h__VESA101_PRESENTSCREEN();

			while(1){

				___1a1140h.horn = ___5994ch();

				if((___1a1140h.horn != 0)&&(___1a1140h.horn != 0xaa)) break;
			}

			___59b3ch();
			___5994ch();
			strcpy(___1866b8h+0xbea, "Horn        \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
			strcat(___1866b8h+0xbea, ___19ce70h+0xf*___1a1140h.horn);
			break;
		case 9:
			if(___20220h() != 1){

				D(___185a5ch+6*0x1c+0x18) = 0;

				while(1){

					if(B(D(___185a5ch+6*0x1c+0x18)+___185b58h+6*9) != 0) break;
					esi = D(___185a5ch+6*0x1c);
					esi--;

					if((int)D(___185a5ch+6*0x1c+0x18) >= (int)esi){

						D(___185a5ch+6*0x1c+0x18) = 0;
					}
					else {
					
						D(___185a5ch+6*0x1c+0x18)++;
					}
				}

				ebp = 0xffffffff;
			}
			break;
		default:
			break;
		}

		if(ebp == 0xffffffff) break;
	}
}

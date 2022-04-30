#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1a0ef8h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185a14h_UseWeapons[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___17324h(void);
__DWORD__ __GET_TIMER_TICKS(void);
void srand_watcom106(__DWORD__);
int rand_watcom106(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// SABOTAGE
__DWORD__ ___32230h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	__BYTE__	esp[0x84];
	int 		n, x, y;
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;
	D(esp+0x80) = 0x2d;
	B(esp+0x78) = B(___1a0ef8h+4*D(___1a1028h));
	B(esp+0x79) = B(___1a0ef8h+4*D(___1a1028h)+1);
	B(esp+0x7a) = B(___1a0ef8h+4*D(___1a1028h)+2);
	B(esp+0x7b) = B(___1a0ef8h+4*D(___1a1028h)+3);

	n = -1;
	while(++n < 0x14){

		if(n != D(___1a1ef8h)){
#if defined(DR_MULTIPLAYER)
			if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
				s_6c[n].damage = 0;
#if defined(DR_MULTIPLAYER)
			}
#endif // DR_MULTIPLAYER
		}
	}
		
	esi = 0;
	D(esp+0x7c) = 0x1;

	n = -1;
	while(++n < 0x14){

		if(((int)esi < (int)s_6c[n].points)&&(n !=  D(___1a1ef8h))) esi = s_6c[n].points;
	}

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		if((int)esi >= (int)s_6c[D(___1a1ef8h)].points){

			if(D(___185a14h_UseWeapons) != 0){

				if(s_6c[D(___1a1ef8h)].sabotage == 1){

					eax = 0;
					while(1){

						edx = B(esp+eax+0x78);
						edx = 0x6c*edx;
						eax++;
						B(esp+eax+0x33) = s_6c[edx/0x6c].rank;
						if((int)eax >= 4) break;
					}

					edi = B(esp+0x34);
					if(edi == s_6c[D(___1a1ef8h)].rank) edi = B(esp+0x35);
					esi = 0x6c*D(___1a1ef8h);

					eax = 0;
					while(1){

						edx = B(esp+eax+0x34);

						if((int)edx < (int)edi){

							if(edx != s_6c[esi/0x6c].rank) edi = edx;
						}

						eax++;
						if((int)eax >= 4) break;
					}

					esi = 0;
					while(1){

						if(edi == s_6c[B(esp+esi+0x78)].rank) break;
						esi++;
					}
					
					srand_watcom106(__GET_TIMER_TICKS());
					s_6c[B(esp+esi+0x78)].damage = (rand_watcom106()%0x19)+0x19;
					itoa_watcom106(s_6c[B(esp+esi+0x78)].damage, esp+0x6c, 0xa);
					strcpy(esp+0x5c, s_6c[B(esp+esi+0x78)].name);
					___13248h_cdecl(D(esp+0x80), 0xa5, 0x1ca, 0xc3, 1);
					x = 0x280*(0xa5+0x28)+D(esp+0x80)+0x38;
					y = x/0x280;
					x = x%0x280;
					VESA101_16X16_FORMAT_PRINT("Money talks, and [the damage is", x, y);
					strcpy(esp, "[done, ");
					strcat(esp, esp+0x6c);
					strcat(esp, "% worth! Sabotage says that");
					x = 0x280*(0xa5+0x38)+D(esp+0x80)+0x38;
					y = x/0x280;
					x = x%0x280;
					VESA101_16X16_FORMAT_PRINT(esp, x, y);
					strcpy(esp, "[");
					strcat(esp, esp+0x5c);
					strcat(esp, " is going down{ and staying");
					x = 0x280*(0xa5+0x48)+D(esp+0x80)+0x38;
					y = x/0x280;
					x = x%0x280;
					VESA101_16X16_FORMAT_PRINT(esp, x, y);
					x = 0x280*(0xa5+0x58)+D(esp+0x80)+0x38;
					y = x/0x280;
					x = x%0x280;
					VESA101_16X16_FORMAT_PRINT("down. That's dough baked luck for", x, y);
					x = 0x280*(0xa5+0x68)+D(esp+0x80)+0x38;
					y = x/0x280;
					x = x%0x280;
					VESA101_16X16_FORMAT_PRINT("you. And luck, she ain't no lady.", x, y);
					x = 0x280*(0xa5+0x73)+D(esp+0x80)+0x38;
					y = x/0x280;
					x = x%0x280;
					VESA101_16X16_FORMAT_PRINT("", x, y);
					___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 315);
					___12cb8h__VESA101_PRESENTSCREEN();
					___17324h();
					return D(esp+0x7c);
				}
			}
		}
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	return 0;
}

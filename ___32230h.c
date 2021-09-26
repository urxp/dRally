#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___1a1028h[];
	extern byte ___1a0ef8h[];
	extern byte ___19bd60h[];
	extern byte ___1a1ef8h[];
	extern byte ___199f54h[];
	extern byte ___1a01e0h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185ba9h[];
	extern void * ___1a10cch;

void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___17324h(void);
dword __GET_TIMER_TICKS(void);
void srand_watcom106(dword);
int rand_watcom106(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

// SABOTAGE
dword ___32230h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	byte	esp[0x84];
	int 	n;


	D(esp+0x80) = 0x2d;
	B(esp+0x78) = B(___1a0ef8h+4*D(___1a1028h));
	B(esp+0x79) = B(___1a0ef8h+4*D(___1a1028h)+1);
	B(esp+0x7a) = B(___1a0ef8h+4*D(___1a1028h)+2);
	B(esp+0x7b) = B(___1a0ef8h+4*D(___1a1028h)+3);

	n = -1;
	while(++n < 0x14){

		if((n != D(___1a1ef8h))&&(D(___19bd60h) == 0)) D(___1a01e0h+0x6c*n+0xc) = 0;
	}

	if(D(___199f54h) != 0) return 0;
		
	esi = 0;
	D(esp+0x7c) = 0x1;

	n = -1;
	while(++n < 0x14){

		if(((int)esi < (int)D(___1a01e0h+0x6c*n+0x44))&&(n !=  D(___1a1ef8h))) esi = D(___1a01e0h+0x6c*n+0x44);
	}

	if(D(___19bd60h) == 0){

		if((int)esi >= (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44)){

			if(D(___185a14h_UseWeapons) != 0){

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x68) == 1){

					eax = 0;
					while(1){

						edx = B(esp+eax+0x78);
						edx = 0x6c*edx;
						eax++;
						B(esp+eax+0x33) = B(___1a01e0h+edx+0x48);
						if((int)eax >= 4) break;
					}

					edi = B(esp+0x34);
					if(edi == D(___1a01e0h+0x6c*D(___1a1ef8h)+0x48)) edi = B(esp+0x35);
					esi = 0x6c*D(___1a1ef8h);

					eax = 0;
					while(1){

						edx = B(esp+eax+0x34);

						if((int)edx < (int)edi){

							if(edx != D(esi+___1a01e0h+0x48)) edi = edx;
						}

						eax++;
						if((int)eax >= 4) break;
					}

					esi = 0;
					while(1){

						if(edi == D(___1a01e0h+0x6c*B(esp+esi+0x78)+0x48)) break;
						esi++;
					}
					
					srand_watcom106(__GET_TIMER_TICKS());
					D(___1a01e0h+0x6c*B(esp+esi+0x78)+0xc) = (rand_watcom106()%0x19)+0x19;
					itoa_watcom106(D(___1a01e0h+0x6c*B(esp+esi+0x78)+0xc), esp+0x6c, 0xa);
					strcpy(esp+0x5c, ___1a01e0h+0x6c*B(esp+esi+0x78));
					___13248h_cdecl(D(esp+0x80), 0xa5, 0x1ca, 0xc3, 1);
					___13094h_cdecl("Money talks, and [the damage is", 0x280*(0xa5+0x28)+D(esp+0x80)+0x38);
					strcpy(esp, "[done, ");
					strcat(esp, esp+0x6c);
					strcat(esp, "% worth! Sabotage says that");
					___13094h_cdecl(esp, 0x280*(0xa5+0x38)+D(esp+0x80)+0x38);
					strcpy(esp, "[");
					strcat(esp, esp+0x5c);
					strcat(esp, " is going down{ and staying");
					___13094h_cdecl(esp, 0x280*(0xa5+0x48)+D(esp+0x80)+0x38);
					___13094h_cdecl("down. That's dough baked luck for", 0x280*(0xa5+0x58)+D(esp+0x80)+0x38);
					___13094h_cdecl("you. And luck, she ain't no lady.", 0x280*(0xa5+0x68)+D(esp+0x80)+0x38);
					___13094h_cdecl("", 0x280*(0xa5+0x73)+D(esp+0x80)+0x38);
					___12e78h_cdecl(___1a10cch, ___185ba9h, "CONTINUE", 0x280*(0xa5+0x96)+0xc0);
					___12cb8h__VESA101_PRESENTSCREEN();
					___17324h();
					return D(esp+0x7c);
				}
			}
		}
	}

	D(esp+0x7c) = 0;
	return D(esp+0x7c);
}

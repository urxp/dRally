#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0fbch;
	extern __POINTER__ ___1a0fd8h;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___196ae8h[];
	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1a1f64h[];
	extern char ___18d492h[][0xf];
	extern __BYTE__ ___196ad4h[];
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___196adch[];
	extern __BYTE__ ___196aech[];
	extern __BYTE__ ___196af0h[];
	extern __DWORD__ ___1a1134h;
	extern __BYTE__ ___1a10a0h[];
	extern __BYTE__ ___1a10a8h[];
	extern __BYTE__ ___1a1090h[];
	extern __BYTE__ ___1a1034h[];
	extern __BYTE__ ___1a108ch[];
	extern __BYTE__ ___1a0ff4h[];
	extern record_t ___19f750h[6][18];

char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);

// RESULTS AFTER POINTS ASSIGNED
void ___36adch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0xa4];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	int 	x, y;


		edx = 0x36;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101h_DefaultScreenBufferB, 0x4b000);
		ecx = 0x182;
		esip = ___1a0fbch;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd32c;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		ecx = 0x182;
		edx = 0x110;
		esip = ___1a0fd8h;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd362;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		ebp = 0x20e;

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		ecx = 0x182;
		edx = 0x110;
		esip = ___1a0fd8h;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd20a;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		strcpy(esp, "Status after ");
		eax = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x50);
		itoa_watcom106(eax, esp+0x64, 0xa);
		strcat(esp, esp+0x64);
		strcat(esp, " race(s)");
		___12e78h_v3(___1a1108h___185c0bh, esp, 46, 452);
	}

	if(___19bd60h != 0){

		___12e78h_v3(___1a1108h___185c0bh, "Multiplayer Ranking", 56, 86);
	}
#endif // DR_MULTIPLAYER

		___12e78h_v3(___1a1108h___185c0bh, "Your Statistics:", 416, 86);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x48), esp+0x64, 0xa);
		strcat(esp+0x64, ".");
		strcpy(esp, "Position");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 115);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		x = ebp+0x11f80;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x4c), esp+0x64, 0xa);
		strcpy(esp, "Races won");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 138);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		x = ebp+0x15900;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x50), esp+0x64, 0xa);
		strcpy(esp, "Total races");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 161);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);

#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0){

			strcat(esp, " / ");
			itoa_watcom106(D(___196ab8h), esp+0x64, 0xa);
			strcat(esp, esp+0x64);
		}
#endif // DR_MULTIPLAYER

		x = ebp+0x19280;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x58), esp+0x64, 0xa);
		strcpy(esp, "Total income");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 184);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		x = ebp+0x1cc00;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30), esp+0x64, 0xa);
		strcpy(esp, "Total money");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 207);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		x = ebp+0x20580;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		if((int)D(___196ae8h) <= 0) goto ___37ebch;
		eax = D(___1a1028h);
		edx = B(eax+___1a1f64h);
		strcpy(esp, ___18d492h[edx]);

#if defined(DR_MULTIPLAYER)		
		if(___19bd60h != 0){
		
			edx = B(___1a2010h+D(___196ad4h));
			strcpy(esp, ___18d492h[edx]);
		}

		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			if(D(___1a1028h) == 0) strcat(esp, " easy race:");
			if(D(___1a1028h) == 1) strcat(esp, " medium race:");
			if(D(___1a1028h) == 2) strcat(esp, " hard race:");
			if(D(___1a1028h) == 3) strcpy(esp, "The Arena:");
#if defined(DR_MULTIPLAYER)	
		}

		if(___19bd60h != 0){

			itoa_watcom106(D(___196adch), esp+0x64, 0xa);
			strcat(esp, " ");
			strcat(esp, esp+0x64);
			strcat(esp, "-player race:");
		}
#endif // DR_MULTIPLAYER

		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 247);
		itoa_watcom106(D(___196ae8h), esp+0x64, 0xa);
		strcat(esp+0x64, ".");
		strcpy(esp, "Placing");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 270);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		x = ebp+0x2a300;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___196aech), esp+0x64, 0xa);
		strcpy(esp, "Race income");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 293);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		x = ebp+0x2dc80;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___196af0h), esp+0x64, 0xa);
		strcpy(esp, "Bonus income");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 316);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		x = ebp+0x31600;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___196aech)+D(___196af0h), esp+0x64, 0xa);
		strcpy(esp, "Total race income");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 339);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		x = ebp+0x34f80;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(___1a1134h, esp+0x64, 0xa);
		strcpy(esp, "Number of laps");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 362);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		x = ebp+0x38900;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(D(___1a10a0h), esp+0x78, 0xa);
		itoa_watcom106(D(___1a10a8h), esp+0x50, 0xa);
		itoa_watcom106(D(___1a1090h), esp+0x8c, 0xa);

		if(strlen(esp+0x78) == 1){

			B(esp+0x7a) = 0;
			B(esp+0x79) = B(esp+0x78);
			B(esp+0x78) = 0x30;
		}

		if(strlen(esp+0x50) == 1){

			B(esp+0x52) = 0;
			B(esp+0x51) = B(esp+0x50);
			B(esp+0x50) = 0x30;
		}

		if(strlen(esp+0x8c) == 1){

			B(esp+0x8e) = 0;
			B(esp+0x8d) = B(esp+0x8c);
			B(esp+0x8c) = 0x30;
		}

		strcpy(esp+0x64, esp+0x78);
		strcat(esp+0x64, ":");
		strcat(esp+0x64, esp+0x50);
		strcat(esp+0x64, ".");
		strcat(esp+0x64, esp+0x8c);
		strcpy(esp, "Race time");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 385);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		x = ebp+0x3c280;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		
		ebx = ___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec100;
		ebx += 100*___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec;
		ebx += 6000*___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].min;

		eax = 0x64*D(___1a108ch)+0x1770*D(___1a1034h)+D(___1a0ff4h);

		if((int)eax < (int)ebx){

			eax = D(___1a1034h)+D(___1a108ch)+D(___1a0ff4h);

			if(eax != 0){

				strcpy(___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].name, ___1a01e0h+0x6c*D(___1a1ef8h));
				strupr_watcom106(___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].name);
				___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].min = D(___1a1034h);
				___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec = D(___1a108ch);
				___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec100 = D(___1a0ff4h);
			}
		}

		eax = ___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].min;
		eax += ___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec;
		eax += ___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec100;

		if(eax == 0){

			eax = 0x64*D(___1a108ch)+0x1770*D(___1a1034h)+D(___1a0ff4h);

			if((int)eax > 0){

				strcpy(___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].name, ___1a01e0h+0x6c*D(___1a1ef8h));
				strupr_watcom106(___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].name);
				___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].min = D(___1a1034h);
				___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec = D(___1a108ch);
				___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec100 = D(___1a0ff4h);
			}
		}

		itoa_watcom106(D(___1a1034h), esp+0x78, 0xa);
		itoa_watcom106(D(___1a108ch), esp+0x50, 0xa);
		itoa_watcom106(D(___1a0ff4h), esp+0x8c, 0xa);

		if(strlen(esp+0x78) == 1){

			B(esp+0x7a) = 0;
			B(esp+0x79) = B(esp+0x78);
			B(esp+0x78) = 0x30;
		}

		if(strlen(esp+0x50) == 1){

			B(esp+0x52) = 0;
			B(esp+0x51) = B(esp+0x50);
			B(esp+0x50) = 0x30;
		}

		if(strlen(esp+0x8c) == 1){

			B(esp+0x8e) = 0;
			B(esp+0x8d) = B(esp+0x8c);
			B(esp+0x8c) = 0x30;
		}

		strcpy(esp+0x64, esp+0x78);
		strcat(esp+0x64, ":");
		strcat(esp+0x64, esp+0x50);
		strcat(esp+0x64, ".");
		strcat(esp+0x64, esp+0x8c);
		strcpy(esp, "Best lap");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 408);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		x = ebp+0x3fc00;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
		itoa_watcom106(___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].min, esp+0x78, 0xa);
		itoa_watcom106(___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec, esp+0x50, 0xa);
		itoa_watcom106(___19f750h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)][B(___1a1f64h+D(___1a1028h))].sec100, esp+0x8c, 0xa);

		if(strlen(esp+0x78) == 1){

			B(esp+0x78) = 0x30;
			B(esp+0x7a) = 0;
			B(esp+0x79) = B(esp+0x78);
		}

		if(strlen(esp+0x50) == 1){

			B(esp+0x51) = B(esp+0x50);
			B(esp+0x50) = 0x30;
			B(esp+0x52) = 0;
		}

		if(strlen(esp+0x8c) == 1){
		
			B(esp+0x8d) = B(esp+0x8c);
			B(esp+0x8e) = 0;
			B(esp+0x8c) = 0x30;
		}

		strcpy(esp+0x64, esp+0x78);
		strcat(esp+0x64, ":");
		strcat(esp+0x64, esp+0x50);
		strcat(esp+0x64, ".");
		strcat(esp+0x64, esp+0x8c);
		strcpy(esp, "Best lap ever");
		___12e78h_v3(___1a1108h___185c0bh, esp, 360, 431);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		x = ebp+0x43580;
		y = x/0x280;
		x = x%0x280;
		___12e78h_v3(___1a1108h___185c0bh, esp, x, y);
___37ebch:
		D(___196ae8h) = 0;
		return;
}

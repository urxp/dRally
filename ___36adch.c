#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a0fbch;
	extern void * ___1a0fd8h;
	extern byte ___19bd60h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___196ab8h[];
	extern byte ___196ae8h[];
	extern byte ___1a1028h[];
	extern byte ___1a1f64h[];
	extern char ___18d492h[][0xf];
	extern byte ___196ad4h[];
	extern byte ___1a2010h[];
	extern byte ___196adch[];
	extern byte ___196aech[];
	extern byte ___196af0h[];
	extern byte ___1a1134h[];
	extern byte ___1a10a0h[];
	extern byte ___1a10a8h[];
	extern byte ___1a1090h[];
	extern byte ___1a1034h[];
	extern byte ___1a108ch[];
	extern byte ___1a0ff4h[];
	extern byte ___19f750h[];

void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);

// RESULTS AFTER POINTS ASSIGNED
void ___36adch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xa4];
	void * 	ebxp;
	void * 	esip;


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
	if(D(___19bd60h) != 0){

		ecx = 0x182;
		edx = 0x110;
		ebx = ___1a112ch__VESA101_ACTIVESCREEN_PTR;
		esip = ___1a0fd8h;
		ebxp = ebx+0xd20a;

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
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x46a2e);
	}

	if(D(___19bd60h) != 0){

		___12e78h_cdecl(___1a1108h, ___185c0bh, "Multiplayer Ranking", 0xd738);
	}
#endif // DR_MULTIPLAYER

		___12e78h_cdecl(___1a1108h, ___185c0bh, "Your Statistics:", 0xd8a0);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x48), esp+0x64, 0xa);
		strcat(esp+0x64, ".");
		strcpy(esp, "Position");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x120e8);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x11f80);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x4c), esp+0x64, 0xa);
		strcpy(esp, "Races won");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x15a68);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x15900);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x50), esp+0x64, 0xa);
		strcpy(esp, "Total races");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x193e8);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			strcat(esp, " / ");
			itoa_watcom106(D(___196ab8h), esp+0x64, 0xa);
			strcat(esp, esp+0x64);
		}
#endif // DR_MULTIPLAYER

		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x19280);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x58), esp+0x64, 0xa);
		strcpy(esp, "Total income");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x1cd68);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x1cc00);
		itoa_watcom106(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30), esp+0x64, 0xa);
		strcpy(esp, "Total money");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x206e8);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x20580);
		if((int)D(___196ae8h) <= 0) goto ___37ebch;
		eax = D(___1a1028h);
		edx = B(eax+___1a1f64h);
		strcpy(esp, ___18d492h[edx]);

#if defined(DR_MULTIPLAYER)		
		if(D(___19bd60h) != 0){
		
			edx = B(___1a2010h+D(___196ad4h));
			strcpy(esp, ___18d492h[edx]);
		}

		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			if(D(___1a1028h) == 0) strcat(esp, " easy race:");
			if(D(___1a1028h) == 1) strcat(esp, " medium race:");
			if(D(___1a1028h) == 2) strcat(esp, " hard race:");
			if(D(___1a1028h) == 3) strcpy(esp, "The Arena:");
#if defined(DR_MULTIPLAYER)	
		}

		if(D(___19bd60h) != 0){

			itoa_watcom106(D(___196adch), esp+0x64, 0xa);
			strcat(esp, " ");
			strcat(esp, esp+0x64);
			strcat(esp, "-player race:");
		}
#endif // DR_MULTIPLAYER

		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x26ae8);
		itoa_watcom106(D(___196ae8h), esp+0x64, 0xa);
		strcat(esp+0x64, ".");
		strcpy(esp, "Placing");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x2a468);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x2a300);
		itoa_watcom106(D(___196aech), esp+0x64, 0xa);
		strcpy(esp, "Race income");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x2dde8);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x2dc80);
		itoa_watcom106(D(___196af0h), esp+0x64, 0xa);
		strcpy(esp, "Bonus income");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x31768);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x31600);
		itoa_watcom106(D(___196aech)+D(___196af0h), esp+0x64, 0xa);
		strcpy(esp, "Total race income");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x350e8);
		strcpy(esp, ": $");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x34f80);
		itoa_watcom106(D(___1a1134h), esp+0x64, 0xa);
		strcpy(esp, "Number of laps");
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x38a68);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x38900);
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
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x3c3e8);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x3c280);
		
		ebx = D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0x14);
		ebx += 0x64*D(0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+___19f750h+0x10);
		ebx += 0x1770*D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0xc);

		eax = 0x64*D(___1a108ch)+0x1770*D(___1a1034h)+D(___1a0ff4h);

		if((int)eax < (int)ebx){

			eax = D(___1a1034h)+D(___1a108ch)+D(___1a0ff4h);

			if(eax != 0){

				strcpy(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h)), ___1a01e0h+0x6c*D(___1a1ef8h));
				strupr_watcom106(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h)));
				D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0xc) = D(___1a1034h);
				D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0x10) = D(___1a108ch);
				D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0x14) = D(___1a0ff4h);
			}
		}

		eax = D(___19f750h+0x18*B(___1a1f64h+D(___1a1028h))+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)*1+0xc);
		eax += D(___19f750h+0x18*B(___1a1f64h+D(___1a1028h))+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)*1+0x10);
		eax += D(___19f750h+0x18*B(___1a1f64h+D(___1a1028h))+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)*1+0x14);

		if(eax == 0){

			eax = 0x64*D(___1a108ch)+0x1770*D(___1a1034h)+D(___1a0ff4h);

			if((int)eax > 0){

				strcpy(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h)), ___1a01e0h+0x6c*D(___1a1ef8h));
				strupr_watcom106(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h)));
				D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0xc) = D(___1a1034h);
				D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0x10) = D(___1a108ch);
				D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0x14) = D(___1a0ff4h);
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
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x3fd68);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x3fc00);
		itoa_watcom106(D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0xc), esp+0x78, 0xa);
		itoa_watcom106(D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0x10), esp+0x50, 0xa);
		itoa_watcom106(D(___19f750h+0x1b0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x18*B(___1a1f64h+D(___1a1028h))+0x14), esp+0x8c, 0xa);

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
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, 0x436e8);
		strcpy(esp, ": ");
		strcat(esp, esp+0x64);
		___12e78h_cdecl(___1a1108h, ___185c0bh, esp, ebp+0x43580);
___37ebch:
		D(___196ae8h) = 0;
		return;
}

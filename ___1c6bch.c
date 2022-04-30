#include "drally.h"
#include "drally_structs_free.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185a5ch[];
	extern __BYTE__ ___196adch[];
	extern __BYTE__ ___1a103ch[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___196ad4h[];
	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___196a98h[];
	extern __BYTE__ ___196a9ch[];
	extern __BYTE__ ___196aa0h[];
	extern cardata_t ___18e298h[6];
	extern __BYTE__ ___1a1168h[];
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___18d492h[];

void ___2ec68h_cdecl(void);
void ___60a84h(void);
void ___2ab50h(void);
void ___23230h(void);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
__DWORD__ ___60b60h(__DWORD__, __DWORD__, __POINTER__, __DWORD__);
__DWORD__ ___611c0h(__DWORD__ A1, __POINTER__ * A2);
void dRChatbox_push(const char * line, int col);


void helper00(__DWORD__ A1, __DWORD__ A2, __POINTER__ A3, __DWORD__ A4){

	int 	ebx, edx, n;

	___60a84h();
	ebx = 0;
	n = 0;
	while(ebx != 0xff){

		___2ab50h();
		___2ab50h();
		edx = n%10;

		if(edx == 1) ebx = ___60b60h(A1, A2, A3, A4);

		n++;
	}
}


void ___1c6bch_cdecl(int StartingMoney){

	__POINTER__ 	vp[4];
	cardata_t * 	cdp;
	racer_t * 		s_6c;
	int 			n;
	char 			LastLine[0x96];


	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)___18e298h;


	B(___185b58h) = 0;
	B(___185b58h+0x12) = 1;
	B(___185b58h+0x13) = 1;
	B(___185b58h+0x14) = 0;
	B(___185b58h+0x15) = 0;
	strcpy(___1866b8h+0x384, "Continue Current Game");
	B(___185b58h+0x16) = 0;
	B(___185b58h+0x17) = 0; 
	D(___185a5ch+0x50) = 0;
	strcpy(___1866b8h+0x3b6, "Abort Current Game");
	___2ec68h_cdecl();

	helper00(4, D(___196adch), 0, 0);
	D(___1a103ch) = ___611c0h(0, 0);

	if(D(___1a103ch) != D(___1a1ef8h)) memcpy(&s_6c[D(___1a103ch)], &s_6c[D(___1a1ef8h)], sizeof(racer_t));

	D(___1a1ef8h) = D(___1a103ch);
	D(___196ad4h) = 0;
	D(___196a84h) = 0;
	D(___196a98h) = 0;
	D(___196a9ch) = 0;
	D(___196aa0h) = 0;
	s_6c[D(___1a103ch)].points = 0;
	s_6c[D(___1a103ch)].damage = 0;
	s_6c[D(___1a103ch)].engine = 0;
	s_6c[D(___1a103ch)].tires = 0;
	s_6c[D(___1a103ch)].armor = 0;
	s_6c[D(___1a103ch)].car = 0;
	s_6c[D(___1a103ch)].money = StartingMoney;
	s_6c[D(___1a103ch)].rank = 1;
	s_6c[D(___1a103ch)].refund = cdp[0].price;

	n = -1;
	while(++n < 4){
		
		B(___1a1168h+n) = n;
		vp[n] = (__POINTER__)&s_6c[n];
	}

	helper00(1, D(___196adch), (__POINTER__)&s_6c[D(___1a1ef8h)], sizeof(racer_t));
	___611c0h(sizeof(racer_t), vp);

	strcat(strcat(strcpy(LastLine, "-- Prepare for the first track, "), ___18d492h+0xf*B(___1a2010h+D(___196ad4h)+1)), ".");
	dRChatbox_push(LastLine, 0);

	___23230h();
	___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
}

#include "drally.h"

typedef char char40[40];

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

static const char40 ___1923c0h[5][6] = {
	[0] = {
		[0] = "[Borrow $12,000 - Pay $18,000",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$12,000{ sound?",
		[5] = ""
	},
	[1] = {
		[0] = "[Borrow $9,000 - Pay $13,500",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$9,000{ sound?",
		[5] = ""
	},
	[2] = {
		[0] = "[Borrow $6,000 - Pay $9,000",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$6,000{ sound?",
		[5] = ""
	},
	[3] = {
		[0] = "[Borrow $3,000 - Pay $4,500",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$3,000{ sound?",
		[5] = ""
	},
	[4] = {
		[0] = "[Borrow $1,500 - Pay $2,250",
		[1] = "",
		[2] = "With better gear you'd already be",
		[3] = "on the top, eh? So how does a",
		[4] = "short-term loan of [$1,500{ sound?",
		[5] = ""
	}
};

// LOANSHARK STUFF
void ___2d294h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x64];


		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		L(edx) = 0x5;
		H(edx) = B(eax*4+___1a01e0h+0x1c);
		ebx = D(eax*4+___1a01e0h+0x1c);
		L(edx) -= H(edx);
		if(ebx != 0) goto ___2d2edh;
		L(edx) = 0x4;
___2d2edh:
		eax = 27*D(___1a1ef8h);
		if(D(___1a01e0h+0x38+0x6c*D(___1a1ef8h)) != 0xffffffff) goto ___2d375h;
		edx &= 0xff;
		___13094h_cdecl(___1923c0h[edx][0], 0x136aa);
		___13094h_cdecl(___1923c0h[edx][1], 0x15eaa);
		___13094h_cdecl(___1923c0h[edx][2], 0x186aa);
		___13094h_cdecl(___1923c0h[edx][3], 0x1aeaa);
		___13094h_cdecl(___1923c0h[edx][4], 0x1d6aa);
		___13094h_cdecl(___1923c0h[edx][5], 0x1feaa);
		return;
___2d375h:
		edi = esp;
		strcpy(edi, "[Pay back $");
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		eax <<= 0x2;
		if(D(eax+___1a01e0h+0x34) != 0) goto ___2d3f2h;
		eax = D(eax+___1a01e0h+0x38);
		eax--;
		D(esp+0x60) = eax;
		FPUSH((int)D(esp+0x60));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*6000.0;
		ebx = 0xa;
		ST(0) = ST(0)+12000.0;
		edx = esp+0x50;
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		eax = D(esp+0x60);
		eax = itoa_watcom106(eax, edx, ebx);
___2d3f2h:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		eax <<= 0x2;
		edi = D(eax+___1a01e0h+0x34);
		if(edi != 1) goto ___2d451h;
		eax = D(eax+___1a01e0h+0x38);
		eax -= edi;
		D(esp+0x60) = eax;
		FPUSH((int)D(esp+0x60));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*4500.0;
		ebx = 0xa;
		ST(0) = ST(0)+9000.0;
		edx = esp+0x50;
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		eax = D(esp+0x60);
		eax = itoa_watcom106(eax, edx, ebx);
___2d451h:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		eax <<= 0x2;
		if(D(eax+___1a01e0h+0x34) != 2) goto ___2d4adh;
		eax = D(eax+___1a01e0h+0x38);
		eax--;
		D(esp+0x60) = eax;
		FPUSH((int)D(esp+0x60));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*3000.0;
		ebx = 0xa;
		ST(0) = ST(0)+6000.0;
		edx = esp+0x50;
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		eax = D(esp+0x60);
		eax = itoa_watcom106(eax, edx, ebx);
___2d4adh:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		eax <<= 0x2;
		if(D(eax+___1a01e0h+0x34) != 3) goto ___2d509h;
		eax = D(eax+___1a01e0h+0x38);
		eax--;
		D(esp+0x60) = eax;
		FPUSH((int)D(esp+0x60));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*1500.0;
		ebx = 0xa;
		ST(0) = ST(0)+3000.0;
		edx = esp+0x50;
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		eax = D(esp+0x60);
		eax = itoa_watcom106(eax, edx, ebx);
___2d509h:
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x2;
		eax -= ebx;
		eax <<= 0x2;
		if(D(eax+___1a01e0h+0x34) != 4) goto ___2d565h;
		eax = D(eax+___1a01e0h+0x38);
		eax--;
		D(esp+0x60) = eax;
		FPUSH((int)D(esp+0x60));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*750.0;
		ebx = 0xa;
		ST(0) = ST(0)+1500.0;
		edx = esp+0x50;
		ST(0) = (int)ST(0);
		D(esp+0x60) = (int)FPOP();
		eax = D(esp+0x60);
		eax = itoa_watcom106(eax, edx, ebx);
___2d565h:
		esi = esp+0x50;
		edi = esp;
		strcat(edi, esi);
		esi = ".";
		edi = esp;
		strcat(edi, esi);
		___13094h_cdecl(esp, 0x136aa);
		___13094h_cdecl("", 0x15eaa);
		___13094h_cdecl("Petrol brain, you owe me. You'd", 0x186aa);
		___13094h_cdecl("better be here to pay me back, or", 0x1aeaa);
		___13094h_cdecl("else we have nothing to discuss.", 0x1d6aa);
		___13094h_cdecl("", 0x1feaa);
}

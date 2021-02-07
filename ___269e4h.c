#include "drally.h"

typedef char char40[40];

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern void * ___1a1e98h;
	extern __DWORD__ ___186658h[];
	extern byte ___1a1e8ch[];
	extern byte ___1a1ed8h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___18e298h[];


void ___259e0h_cdecl(dword, dword, dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
dword ___251e8h_cdecl(const char *);
void ___12e78h_cdecl(dword, dword, dword, dword);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

static const char40 ___194170h[12][6] = {
	[0] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "This used to be a car, huh? Carry",
		[3] = "the rest of it in here & we'll see",
		[4] = "what can be done.",
		[5] = ""
	},
	[1] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Sorry, this vehicle is gone for",
		[3] = "good... Just kidding. Medic, fast!",
		[4] = "We've got a driver in shock.",
		[5] = ""
	},
	[2] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Don't tell me. You parked your car",
		[3] = "in a nuclear test zone? These",
		[4] = "holes need some gum, start chewing.",
		[5] = ""
	},
	[3] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Who helped you tow this piece of",
		[3] = "junk over the finish line? No",
		[4] = "sweat, this can be fixed.",
		[5] = ""
	},
	[4] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "So. Your car's sorry ass got blown",
		[3] = "clean off. Acme glue will fix your",
		[4] = "mishap-ridden day at the races.",
		[5] = ""
	},
	[5] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "As Mr. Nukem sometimes puts it:",
		[3] = "'Uh-oh, that's gotta hurt.' This",
		[4] = "calls for a screwdriver & aspirin.",
		[5] = ""
	},
	[6] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Your conveyance's methylated",
		[3] = "spirit receptacle has developed a",
		[4] = "chronic hernia, or something...",
		[5] = ""
	},
	[7] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "This is no time to rest in pieces.",
		[3] = "The race awaits! She'll be back on",
		[4] = "her wheels in no time.",
		[5] = ""
	},
	[8] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Take five, driver. A straight &",
		[3] = "simple sledgehammer job here.",
		[4] = "These percussions, gotta love 'em.",
		[5] = ""
	},
	[9] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Nothing a fresh paint-job can't",
		[3] = "fix. You'll be back on the track",
		[4] = "in a pit-stop minute.",
		[5] = ""
	},
	[10] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Got your wax coat scratched? Want",
		[3] = "to be your shining best? Hey, what-",
		[4] = "ever lights up your dashboard.",
		[5] = ""
	},
	[11] = {
		[0] = "[Repair",
		[1] = "",
		[2] = "Perfect is perfect. What ain't",
		[3] = "broken, can't be fixed. Come back",
		[4] = "after you've taken in some.",
		[5] = ""
	}
};

// SHOP REPAIR
void ___269e4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];


		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = ___1a1e98h+0x6c00;
		ebx += 0x279c8;
		edx = ecx;
		L(edx) >>= 0x2;
___26a13h:
		H(ecx) = L(edx);
___26a15h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___26a15h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___26a13h;
		edx = 0x10d;
		eax = 0x148;
		ecx = D(___1a1e8ch);
		ebx = D(___1a1ed8h);
		___259e0h_cdecl(eax, edx, ebx, ecx, ___186658h);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		eax <<= 0x2;
		edx = D(eax+___1a01e0h+0xc);
		if((int)edx >= 0xa) goto ___26b3fh;
		ebx = 0xa;
		eax = edx;
		edx = esp;
		ecx = 0x27f1a;
		eax = itoa_watcom106(eax, edx, ebx);
		eax = esp;
		ebx = esp;
		eax = ___251e8h_cdecl(eax);
		ecx -= eax;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		edx = D(___1a1ef8h);
		ebx = 8*edx;
		ebx -= edx;
		ebx <<= 0x2;
		ebx -= edx;
		ecx = D(___185a14h_UseWeapons);
		ebx <<= 0x2;
		if(ecx == 0) goto ___26affh;
		edx = D(ebx+___1a01e0h+0x1c);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		edx = eax;
		edx <<= 0x5;
		eax = D(edx+___18e298h+0x6dc);
		edx = eax;
		ecx = 0xa;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		edx = eax;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		goto ___26b2ah;
___26affh:
		edx = D(ebx+___1a01e0h+0x1c);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		edx = eax;
		edx <<= 0x5;
		eax = D(edx+___18e298h+0x6dc);
		edx = eax;
		ecx = 0xa;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
___26b2ah:
		eax = eax*D(ebx+___1a01e0h+0xc);
		ebx = ecx;
		edx = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		goto ___26bdfh;
___26b3fh:
		eax = "10";
		ecx = 0x27f1a;
		ebx = "10";
		eax = ___251e8h_cdecl(eax);
		ecx -= eax;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		ebx = D(___185a14h_UseWeapons);
		eax <<= 0x2;
		if(ebx == 0) goto ___26bb6h;
		edx = D(eax+___1a01e0h+0x1c);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		edx = eax;
		edx <<= 0x5;
		eax = D(edx+___18e298h+0x6dc);
		edx = eax;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		ebx = 0xa;
		edx = esp;
		goto ___26bdah;
___26bb6h:
		eax = D(eax+___1a01e0h+0x1c);
		esi = 8*eax;
		esi -= eax;
		esi <<= 0x3;
		esi -= eax;
		ebx = 0xa;
		esi <<= 0x5;
		edx = esp;
		eax = D(esi+___18e298h+0x6dc);
___26bdah:
		eax = itoa_watcom106(eax, edx, ebx);
___26bdfh:
		esi = esp;
		X(eax) = W("$");
		edi = esp+0x14;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x346c8;
		eax = esp+0x14;
		___12f60h_cdecl(eax, edx);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		ebp = D(eax*4+___1a01e0h+0xc);
		esi = 0;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x64) goto ___26c6dh;
		esi = 0x1;
___26c6dh:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x5a) goto ___26c90h;
		esi = 0x2;
___26c90h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x50) goto ___26cb3h;
		esi = 0x3;
___26cb3h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x46) goto ___26cd6h;
		esi = 0x4;
___26cd6h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x3c) goto ___26cf9h;
		esi = 0x5;
___26cf9h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x32) goto ___26d1ch;
		esi = 0x6;
___26d1ch:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x28) goto ___26d3fh;
		esi = 0x7;
___26d3fh:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x1e) goto ___26d62h;
		esi = 0x8;
___26d62h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0x14) goto ___26d85h;
		esi = 0x9;
___26d85h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)D(eax*4+___1a01e0h+0xc) >= 0xa) goto ___26da8h;
		esi = 0xa;
___26da8h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if(D(eax*4+___1a01e0h+0xc) != 0) goto ___26dcbh;
		esi = 0xb;
___26dcbh:
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		___13094h_cdecl(___194170h[esi][0], 0x136aa);
		___13094h_cdecl(___194170h[esi][1], 0x15eaa);
		___13094h_cdecl(___194170h[esi][2], 0x186aa);
		___13094h_cdecl(___194170h[esi][3], 0x1aeaa);
		___13094h_cdecl(___194170h[esi][4], 0x1d6aa);
		___13094h_cdecl(___194170h[esi][5], 0x1feaa);
}

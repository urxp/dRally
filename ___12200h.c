#include "drally.h"
#include "assets.h"

	extern void * ___1a1e68h;
	extern void * ___1a10d8h;
	extern void * ___1a10f0h;
	extern void * ___1a0fb8h;
	extern void * ___1a0fe0h;
	extern void * ___1a10c8h;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a10c4h;
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a10cch;
	extern void * ___1a10fch;
	extern void * ___1a110ch;
	extern void * ___1a1108h;
	extern void * ___1a10b8h;
	extern void * ___1a0fe8h;
	extern void * ___1a0fbch;
	extern void * ___1a0fd8h;
	extern void * ___1a0fcch;
	extern void * ___1a0fd0h;
	extern void * ___1a0fd4h;
	extern void * ___1a0fech;
	extern void * ___1a0fc4h;
	extern void * ___1a0fe4h;
	extern void * ___1a0fdch;
	extern void * ___1a0fach;
	extern void * ___1a0fc8h;
	extern void * ___1a0fb0h;
	extern void * ___1a0ff0h;
	extern void * ___1a0fa8h;
	extern void * ___1a0fc0h;
	extern void * ___1a0fa4h;
	extern byte ___19de70h[];
	extern void * ___1a0fb4h;
	extern void * ___1a1128h;
	extern void * ___1a10f8h;
	extern void * ___1a1104h;
	extern void * ___1a10d4h;
	extern void * ___1a10bch;
	extern void * ___1a10e8h;
	extern void * ___1a10dch;
	extern void * ___1a10ach;
	extern void * ___1a10c0h;
	extern void * ___1a10ech;
	extern void * ___1a10b4h;
	extern void * ___1a10f4h;
	extern void * ___1a10d0h;
	extern void * ___1a10e0h;
	extern void * ___1a0ff8h;
	extern void * ___1a10a4h;

	extern void * ___1a1040h[];

	extern void * ___1a1030h;
	extern void * ___1a1038h;
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern void * ___1a1ed4h;
	extern void * ___1a1e90h;
	extern void * ___1a10b0h;
	extern void * ___1a1eb0h;
	extern void * ___1a1e78h;
	extern void * ___1a1eb8h;
	extern void * ___1a0180h;
	extern void * ___1a01b8h[6];
	extern void * ___1a01a8h[4];
	extern void * ___1a0198h[4];
	extern void * ___1a01d0h[4];
	extern void * ___1a1e8ch;
	extern void * ___1a1ea0h;
	extern void * ___1a1e7ch;
	extern void * ___1a1e80h;
	extern void * ___1a1e74h;
	extern void * ___1a1e84h;
	extern void * ___1a1e60h;
	extern void * ___1a1ebch;
	extern void * ___1a1eb4h;
	extern void * ___1a1e88h;
	extern void * ___1a1ea4h;
	extern void * ___1a1ea8h;
	extern void * ___1a1e6ch;
	extern void * ___1a1e98h;
	extern void * ___1a1e5ch;
	extern void * ___1a1e58h;
	extern void * ___1a1e54h;
	extern void * ___1a1e64h;
	extern void * ___1a0f90h;
	extern void * ___1a0f88h;
	extern void * ___1a0f84h;
	extern void * ___1a0f98h;
	extern void * ___1a0f8ch;
	extern void * ___1a1114h;
	extern void * ___1a0f94h;
	extern void * ___1a1100h__VESA101h_DefaultScreenBuffer;

void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);

void ___117d4h(void){

    ___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer = ___3f71ch__allocateMemory(0x4b000);
}

void ___117f4h(void){

	___1a10c8h = dRally_Assets_loadRaw("MENU.BPA", "bgcop.pal", 0x600);
    ___1a0fb8h = dRally_Assets_loadRaw("MENU.BPA", "copper.pal", 0x300);
    ___1a0fe0h = dRally_Assets_loadRaw("MENU.BPA", "carcol.pal", 0x300);

	___1a10c4h = dRally_Assets_loadDecode("MENU.BPA", "15x150.bpk", 0x8ca);
    ___1a10cch = dRally_Assets_loadDecode("MENU.BPA", "f-big3a.bpk", 0x18000);
    ___1a1108h = dRally_Assets_loadDecode("MENU.BPA", "f-sma3a.bpk", 0x6000);
    ___1a10fch = dRally_Assets_loadDecode("MENU.BPA", "f-sma3b.bpk", 0x6000);
    ___1a110ch = dRally_Assets_loadDecode("MENU.BPA", "f-sma3c.bpk", 0x6000);
    ___1a10b8h = dRally_Assets_loadDecode("MENU.BPA", "f-med1a.bpk", 0x1a28);
    ___1a0fbch = dRally_Assets_loadDecode("MENU.BPA", "rank1c.bpk", 0x516c);
    ___1a0fd8h = dRally_Assets_loadDecode("MENU.BPA", "resupok1.bpk", 0x19a20);
    ___1a0fe8h = dRally_Assets_loadDecode("MENU.BPA", "mulsbg2.bpk", 0x2e00);
    ___1a0fcch = dRally_Assets_loadDecode("MENU.BPA", "rankinf1.bpk", 0x22e);
    ___1a0fd0h = dRally_Assets_loadDecode("MENU.BPA", "rankinf2.bpk", 0x71a);
    ___1a0fd4h = dRally_Assets_loadDecode("MENU.BPA", "rankinf3.bpk", 0x3ba);
    ___1a0fech = dRally_Assets_loadDecode("MENU.BPA", "race-eas.bpk", 0x3fc0);
    ___1a0fc4h = dRally_Assets_loadDecode("MENU.BPA", "race-med.bpk", 0x3fc0);
    ___1a0fe4h = dRally_Assets_loadDecode("MENU.BPA", "race-har.bpk", 0x3fc0);
    ___1a0fdch = dRally_Assets_loadDecode("MENU.BPA", "p-name.bpk", 0x71a);
    ___1a0fach = dRally_Assets_loadDecode("MENU.BPA", "p-pist.bpk", 0x3ba);
    ___1a0fc8h = dRally_Assets_loadDecode("MENU.BPA", "p-rank.bpk", 0x22e);
    ___1a0fb0h = dRally_Assets_loadDecode("MENU.BPA", "pts-easy.bpk", 0x2f4);
    ___1a0ff0h = dRally_Assets_loadDecode("MENU.BPA", "pts-med.bpk", 0x2f4);
    ___1a0fa8h = dRally_Assets_loadDecode("MENU.BPA", "pts-hard.bpk", 0x2f4);
    ___1a0fc0h = dRally_Assets_loadDecode("MENU.BPA", "placing.bpk", 0x3a64);
    ___1a0fa4h = dRally_Assets_loadDecode("MENU.BPA", "carres.bpk", 0x1e780);
	
    D(___19de70h+0x00) = dRally_Assets_loadDecode("MENU.BPA", "face01.bpk", 0x1000);
    D(___19de70h+0x04) = dRally_Assets_loadDecode("MENU.BPA", "face02.bpk", 0x1000);
    D(___19de70h+0x08) = dRally_Assets_loadDecode("MENU.BPA", "face03.bpk", 0x1000);
    D(___19de70h+0x0c) = dRally_Assets_loadDecode("MENU.BPA", "face04.bpk", 0x1000);
    D(___19de70h+0x10) = dRally_Assets_loadDecode("MENU.BPA", "face05.bpk", 0x1000);
    D(___19de70h+0x14) = dRally_Assets_loadDecode("MENU.BPA", "face06.bpk", 0x1000);
    D(___19de70h+0x18) = dRally_Assets_loadDecode("MENU.BPA", "face07.bpk", 0x1000);
    D(___19de70h+0x1c) = dRally_Assets_loadDecode("MENU.BPA", "face08.bpk", 0x1000);
    D(___19de70h+0x20) = dRally_Assets_loadDecode("MENU.BPA", "face09.bpk", 0x1000);
    D(___19de70h+0x24) = dRally_Assets_loadDecode("MENU.BPA", "face10.bpk", 0x1000);
    D(___19de70h+0x28) = dRally_Assets_loadDecode("MENU.BPA", "face11.bpk", 0x1000);
    D(___19de70h+0x2c) = dRally_Assets_loadDecode("MENU.BPA", "face12.bpk", 0x1000);
    D(___19de70h+0x30) = dRally_Assets_loadDecode("MENU.BPA", "face13.bpk", 0x1000);
    D(___19de70h+0x34) = dRally_Assets_loadDecode("MENU.BPA", "face14.bpk", 0x1000);
    D(___19de70h+0x38) = dRally_Assets_loadDecode("MENU.BPA", "face15.bpk", 0x1000);
    D(___19de70h+0x3c) = dRally_Assets_loadDecode("MENU.BPA", "face16.bpk", 0x1000);
    D(___19de70h+0x40) = dRally_Assets_loadDecode("MENU.BPA", "face17.bpk", 0x1000);
    D(___19de70h+0x44) = dRally_Assets_loadDecode("MENU.BPA", "face18.bpk", 0x1000);
    D(___19de70h+0x48) = dRally_Assets_loadDecode("MENU.BPA", "face19.bpk", 0x1000);
    D(___19de70h+0x4c) = dRally_Assets_loadDecode("MENU.BPA", "face20.bpk", 0x1000);

    ___1a0fb4h = dRally_Assets_loadDecode("MENU.BPA", "facexx.bpk", 0x1000);
    ___1a10f0h = dRally_Assets_loadDecode("MENU.BPA", "corn3a.bpk", 0xa00);
    ___1a10d8h = dRally_Assets_loadDecode("MENU.BPA", "corn3b.bpk", 0xa00);
    ___1a1138h__VESA101h_DefaultScreenBufferB = dRally_Assets_loadDecode("MENU.BPA", "menubg5.bpk", 0x4b000);
}

void * all_3800;

void ___1240ch(void){

	dword 	n;

	___1a1e68h = 0;

	all_3800 = dRally_Assets_loadDecode("MENU.BPA", "trsnap2m.bpk", 0x15*0x3800);

	n = -1;
	while(++n < 0x13) ___1a1040h[n] = all_3800+0x3800*n;

	___1a1030h = all_3800+0x3f000;
	___1a1038h = all_3800+0x42800;

	___1a10f4h = dRally_Assets_loadDecode("MENU.BPA", "cursor.bpk", 0x4e20);
	___1a10e0h = dRally_Assets_loadDecode("MENU.BPA", "f-big3b.bpk", 0x18000);
	___1a10d0h = dRally_Assets_loadDecode("MENU.BPA", "f-big3d.bpk", 0x18000);
	___1a10b4h = dRally_Assets_loadDecode("MENU.BPA", "chatlin1.bpk", 0x1900);
	___1a1128h = dRally_Assets_loadDecode("MENU.BPA", "chattext.bpk", 0x7530);
	___1a10d4h = dRally_Assets_loadDecode("MENU.BPA", "entertx2.bpk", 0x5000);
	___1a10bch = dRally_Assets_loadDecode("MENU.BPA", "shoptxt1.bpk", 0x2800);
	___1a10e8h = dRally_Assets_loadDecode("MENU.BPA", "shoptxt2.bpk", 0x2800);
	___1a10dch = dRally_Assets_loadDecode("MENU.BPA", "fametxt.bpk", 0x8700);
	___1a10ach = dRally_Assets_loadDecode("MENU.BPA", "recotxt.bpk", 0x2800);
	___1a10c0h = dRally_Assets_loadDecode("MENU.BPA", "recobar.bpk", 0xaa00);
	___1a10ech = dRally_Assets_loadDecode("MENU.BPA", "lic-lin1.bpk", 0x111c);
	___1a10f8h = dRally_Assets_loadDecode("MENU.BPA", "facesel1.bpk", 0x1b18);
	___1a1104h = dRally_Assets_loadDecode("MENU.BPA", "facearr1.bpk", 0x1100);
	___1a0ff8h = dRally_Assets_loadDecode("MENU.BPA", "mseletx1.bpk", 0x2800);
	___1a10a4h = dRally_Assets_loadDecode("MENU.BPA", "trarr1.bpk", 0x1500);
}

void ___2faf0h(void){

    ___1a1114h = ___3f71ch__allocateMemory(0x18150);

    ___1a0f90h = dRally_Assets_loadDecode("MENU.BPA", "badtit.bpk", 0x1b80);
    ___1a0f88h = dRally_Assets_loadDecode("MENU.BPA", "badsnap.bpk", 0xe400);
    ___1a0f84h = dRally_Assets_loadDecode("MENU.BPA", "escbox.bpk", 0x2eb8);
    ___1a0f8ch = dRally_Assets_loadDecode("MENU.BPA", "prep4.bpk", 0x8700);
    ___1a0f98h = dRally_Assets_loadDecode("MENU.BPA", "signline.bpk", 0x110);
    ___1a0f94h = dRally_Assets_loadDecode("MENU.BPA", "prepw1.bpk", 0xf0d2); 
}

void ___12200h(void){

	printf("[dRally.Clean] ___12200h\n");

	dRally_Memory_free(___1a10d8h);
	dRally_Memory_free(___1a10f0h);
	dRally_Memory_free(___1a0fb8h);
	dRally_Memory_free(___1a0fe0h);
	dRally_Memory_free(___1a10c8h);
	dRally_Memory_free(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	dRally_Memory_free(___1a10c4h);
	dRally_Memory_free(___1a1138h__VESA101h_DefaultScreenBufferB);
	dRally_Memory_free(___1a10cch);
	dRally_Memory_free(___1a10fch);
	dRally_Memory_free(___1a110ch);
	dRally_Memory_free(___1a1108h);
	dRally_Memory_free(___1a10b8h);
	dRally_Memory_free(___1a0fe8h);
	dRally_Memory_free(___1a0fbch);
	dRally_Memory_free(___1a0fd8h);
	dRally_Memory_free(___1a0fcch);
	dRally_Memory_free(___1a0fd0h);
	dRally_Memory_free(___1a0fd4h);
	dRally_Memory_free(___1a0fech);
	dRally_Memory_free(___1a0fc4h);
	dRally_Memory_free(___1a0fe4h);
	dRally_Memory_free(___1a0fdch);
	dRally_Memory_free(___1a0fach);
	dRally_Memory_free(___1a0fc8h);
	dRally_Memory_free(___1a0fb0h);
	dRally_Memory_free(___1a0ff0h);
	dRally_Memory_free(___1a0fa8h);
	dRally_Memory_free(___1a0fc0h);
	dRally_Memory_free(___1a0fa4h);
	dRally_Memory_free(D(___19de70h+0x00));
	dRally_Memory_free(D(___19de70h+0x04));
	dRally_Memory_free(D(___19de70h+0x08));
	dRally_Memory_free(D(___19de70h+0x0c));
	dRally_Memory_free(D(___19de70h+0x10));
	dRally_Memory_free(D(___19de70h+0x14));
	dRally_Memory_free(D(___19de70h+0x18));
	dRally_Memory_free(D(___19de70h+0x1c));
	dRally_Memory_free(D(___19de70h+0x20));
	dRally_Memory_free(D(___19de70h+0x24));
	dRally_Memory_free(D(___19de70h+0x28));
	dRally_Memory_free(D(___19de70h+0x2c));
	dRally_Memory_free(D(___19de70h+0x30));
	dRally_Memory_free(D(___19de70h+0x34));
	dRally_Memory_free(D(___19de70h+0x38));
	dRally_Memory_free(D(___19de70h+0x3c));
	dRally_Memory_free(D(___19de70h+0x40));
	dRally_Memory_free(D(___19de70h+0x44));
	dRally_Memory_free(D(___19de70h+0x48));
	dRally_Memory_free(D(___19de70h+0x4c));
	dRally_Memory_free(___1a0fb4h);
}

void ___12a54h(void){

	dword 	n;

	printf("[dRally.Clean] ___12a54h\n");

	dRally_Memory_free(___1a1128h);
	dRally_Memory_free(___1a10f8h);
	dRally_Memory_free(___1a1104h);
	dRally_Memory_free(___1a10d4h);
	dRally_Memory_free(___1a10bch);
	dRally_Memory_free(___1a10e8h);
	dRally_Memory_free(___1a10dch);
	dRally_Memory_free(___1a10ach);
	dRally_Memory_free(___1a10c0h);
	dRally_Memory_free(___1a10ech);
	dRally_Memory_free(___1a10b4h);
	dRally_Memory_free(___1a10f4h);
	dRally_Memory_free(___1a10d0h);
	dRally_Memory_free(___1a10e0h);
	dRally_Memory_free(___1a0ff8h);
	dRally_Memory_free(___1a10a4h);

	dRally_Memory_free(all_3800);
}

void ___24ec0h(void){

	printf("[dRally.Clean] ___24ec0h\n");

	dRally_Memory_free(___1a1124h__VESA101h_ScreenBufferA);
	dRally_Memory_free(___1a1ed4h);
	dRally_Memory_free(___1a1e90h);
	dRally_Memory_free(___1a10b0h);
	dRally_Memory_free(___1a1eb0h);
	dRally_Memory_free(___1a1e78h);
	dRally_Memory_free(___1a1eb8h);
	dRally_Memory_free(___1a0180h);
	dRally_Memory_free(___1a01b8h[0]);
	dRally_Memory_free(___1a01b8h[1]);
	dRally_Memory_free(___1a01b8h[2]);
	dRally_Memory_free(___1a01b8h[3]);
	dRally_Memory_free(___1a01b8h[4]);
	dRally_Memory_free(___1a01b8h[5]);
	dRally_Memory_free(___1a01a8h[0]);
	dRally_Memory_free(___1a01a8h[1]);
	dRally_Memory_free(___1a01a8h[2]);
	dRally_Memory_free(___1a01a8h[3]);
	dRally_Memory_free(___1a0198h[0]);
	dRally_Memory_free(___1a0198h[1]);
	dRally_Memory_free(___1a0198h[2]);
	dRally_Memory_free(___1a0198h[3]);
	dRally_Memory_free(___1a01d0h[0]);
	dRally_Memory_free(___1a01d0h[1]);
	dRally_Memory_free(___1a01d0h[2]);
	dRally_Memory_free(___1a01d0h[3]);
	dRally_Memory_free(___1a1e8ch);
	dRally_Memory_free(___1a1ea0h);
	dRally_Memory_free(___1a1e7ch);
	dRally_Memory_free(___1a1e80h);
	dRally_Memory_free(___1a1e74h);
	dRally_Memory_free(___1a1e84h);
	dRally_Memory_free(___1a1e60h);
	dRally_Memory_free(___1a1ebch);
	dRally_Memory_free(___1a1eb4h);
	dRally_Memory_free(___1a1e88h);
	dRally_Memory_free(___1a1ea4h);
	dRally_Memory_free(___1a1ea8h);
	dRally_Memory_free(___1a1e6ch);
	dRally_Memory_free(___1a1e98h);
	dRally_Memory_free(___1a1e5ch);
	dRally_Memory_free(___1a1e58h);
	dRally_Memory_free(___1a1e54h);
	dRally_Memory_free(___1a1e64h);
}

void ___2fc50h(void){

	printf("[dRally.Clean] ___2fc50h\n");

	dRally_Memory_free(___1a0f90h);
	dRally_Memory_free(___1a0f88h);
	dRally_Memory_free(___1a0f84h);
	dRally_Memory_free(___1a0f98h);
	dRally_Memory_free(___1a0f8ch);
	dRally_Memory_free(___1a1114h);
	dRally_Memory_free(___1a0f94h);
}

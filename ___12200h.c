#include "drally.h"
#include "assets.h"
#include "drmemory.h"

	extern __DWORD__ ___1a1e68h;
	extern __POINTER__ ___1a10d8h;
	extern __POINTER__ ___1a10f0h;
	extern __POINTER__ ___1a0fb8h;
	extern __POINTER__ ___1a0fe0h;
	extern __POINTER__ ___1a10c8h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10c4h;
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a10cch;
	extern __POINTER__ ___1a10fch;
	extern __POINTER__ ___1a110ch;
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a10b8h;
	extern __POINTER__ ___1a0fe8h;
	extern __POINTER__ ___1a0fbch;
	extern __POINTER__ ___1a0fd8h;
	extern __POINTER__ ___1a0fcch;
	extern __POINTER__ ___1a0fd0h;
	extern __POINTER__ ___1a0fd4h;
	extern __POINTER__ ___1a0fech;
	extern __POINTER__ ___1a0fc4h;
	extern __POINTER__ ___1a0fe4h;
	extern __POINTER__ ___1a0fdch;
	extern __POINTER__ ___1a0fach;
	extern __POINTER__ ___1a0fc8h;
	extern __POINTER__ ___1a0fb0h;
	extern __POINTER__ ___1a0ff0h;
	extern __POINTER__ ___1a0fa8h;
	extern __POINTER__ ___1a0fc0h;
	extern __POINTER__ ___1a0fa4h;
	extern __POINTER__ ___19de70h[20];
	extern __POINTER__ ___1a0fb4h;
	extern __POINTER__ ___1a1128h;
	extern __POINTER__ ___1a10f8h;
	extern __POINTER__ ___1a1104h;
	extern __POINTER__ ___1a10d4h;
	extern __POINTER__ ___1a10bch;
	extern __POINTER__ ___1a10e8h;
	extern __POINTER__ ___1a10dch;
	extern __POINTER__ ___1a10ach;
	extern __POINTER__ ___1a10c0h;
	extern __POINTER__ ___1a10ech;
	extern __POINTER__ ___1a10b4h;
	extern __POINTER__ ___1a10f4h;
	extern __POINTER__ ___1a10d0h;
	extern __POINTER__ ___1a10e0h;
	extern __POINTER__ ___1a0ff8h;
	extern __POINTER__ ___1a10a4h;

	extern __POINTER__ ___1a1040h[];

	extern __POINTER__ ___1a1030h;
	extern __POINTER__ ___1a1038h;
	extern __POINTER__ ___1a1124h__VESA101h_ScreenBufferA;
	extern __POINTER__ ___1a1ed4h;
	extern __POINTER__ ___1a1e90h;
	extern __POINTER__ ___1a10b0h;
	extern __POINTER__ ___1a1eb0h;
	extern __POINTER__ ___1a1e78h;
	extern __POINTER__ ___1a1eb8h;
	extern __POINTER__ ___1a0180h;
	extern __POINTER__ ___1a01b8h[6];
	extern __POINTER__ ___1a01a8h[4];
	extern __POINTER__ ___1a0198h[4];
	extern __POINTER__ ___1a01d0h[4];
	extern __POINTER__ ___1a1e8ch;
	extern __POINTER__ ___1a1ea0h;
	extern __POINTER__ ___1a1e7ch;
	extern __POINTER__ ___1a1e80h;
	extern __POINTER__ ___1a1e74h;
	extern __POINTER__ ___1a1e84h;
	extern __POINTER__ ___1a1e60h;
	extern __POINTER__ ___1a1ebch;
	extern __POINTER__ ___1a1eb4h;
	extern __POINTER__ ___1a1e88h;
	extern __POINTER__ ___1a1ea4h;
	extern __POINTER__ ___1a1ea8h;
	extern __POINTER__ ___1a1e6ch;
	extern __POINTER__ ___1a1e98h;
	extern __POINTER__ ___1a1e5ch;
	extern __POINTER__ ___1a1e58h;
	extern __POINTER__ ___1a1e54h;
	extern __POINTER__ ___1a1e64h;
	extern __POINTER__ ___1a0f90h;
	extern __POINTER__ ___1a0f88h;
	extern __POINTER__ ___1a0f84h;
	extern __POINTER__ ___1a0f98h;
	extern __POINTER__ ___1a0f8ch;
	extern __POINTER__ ___1a1114h;
	extern __POINTER__ ___1a0f94h;
	extern __POINTER__ ___1a1100h__VESA101h_DefaultScreenBuffer;

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);

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
	
    ___19de70h[0] = dRally_Assets_loadDecode("MENU.BPA", "face01.bpk", 0x1000);
    ___19de70h[1] = dRally_Assets_loadDecode("MENU.BPA", "face02.bpk", 0x1000);
    ___19de70h[2] = dRally_Assets_loadDecode("MENU.BPA", "face03.bpk", 0x1000);
    ___19de70h[3] = dRally_Assets_loadDecode("MENU.BPA", "face04.bpk", 0x1000);
    ___19de70h[4] = dRally_Assets_loadDecode("MENU.BPA", "face05.bpk", 0x1000);
    ___19de70h[5] = dRally_Assets_loadDecode("MENU.BPA", "face06.bpk", 0x1000);
    ___19de70h[6] = dRally_Assets_loadDecode("MENU.BPA", "face07.bpk", 0x1000);
    ___19de70h[7] = dRally_Assets_loadDecode("MENU.BPA", "face08.bpk", 0x1000);
    ___19de70h[8] = dRally_Assets_loadDecode("MENU.BPA", "face09.bpk", 0x1000);
    ___19de70h[9] = dRally_Assets_loadDecode("MENU.BPA", "face10.bpk", 0x1000);
    ___19de70h[10] = dRally_Assets_loadDecode("MENU.BPA", "face11.bpk", 0x1000);
    ___19de70h[11] = dRally_Assets_loadDecode("MENU.BPA", "face12.bpk", 0x1000);
    ___19de70h[12] = dRally_Assets_loadDecode("MENU.BPA", "face13.bpk", 0x1000);
    ___19de70h[13] = dRally_Assets_loadDecode("MENU.BPA", "face14.bpk", 0x1000);
    ___19de70h[14] = dRally_Assets_loadDecode("MENU.BPA", "face15.bpk", 0x1000);
    ___19de70h[15] = dRally_Assets_loadDecode("MENU.BPA", "face16.bpk", 0x1000);
    ___19de70h[16] = dRally_Assets_loadDecode("MENU.BPA", "face17.bpk", 0x1000);
    ___19de70h[17] = dRally_Assets_loadDecode("MENU.BPA", "face18.bpk", 0x1000);
    ___19de70h[18] = dRally_Assets_loadDecode("MENU.BPA", "face19.bpk", 0x1000);
    ___19de70h[19] = dRally_Assets_loadDecode("MENU.BPA", "face20.bpk", 0x1000);

    ___1a0fb4h = dRally_Assets_loadDecode("MENU.BPA", "facexx.bpk", 0x1000);
    ___1a10f0h = dRally_Assets_loadDecode("MENU.BPA", "corn3a.bpk", 0xa00);
    ___1a10d8h = dRally_Assets_loadDecode("MENU.BPA", "corn3b.bpk", 0xa00);
    ___1a1138h__VESA101h_DefaultScreenBufferB = dRally_Assets_loadDecode("MENU.BPA", "menubg5.bpk", 0x4b000);
}

__POINTER__ all_3800;

void ___1240ch(void){

	__DWORD__ 	n;

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

	dRMemory_free(___1a10d8h);
	dRMemory_free(___1a10f0h);
	dRMemory_free(___1a0fb8h);
	dRMemory_free(___1a0fe0h);
	dRMemory_free(___1a10c8h);
	dRMemory_free(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	dRMemory_free(___1a10c4h);
	dRMemory_free(___1a1138h__VESA101h_DefaultScreenBufferB);
	dRMemory_free(___1a10cch);
	dRMemory_free(___1a10fch);
	dRMemory_free(___1a110ch);
	dRMemory_free(___1a1108h);
	dRMemory_free(___1a10b8h);
	dRMemory_free(___1a0fe8h);
	dRMemory_free(___1a0fbch);
	dRMemory_free(___1a0fd8h);
	dRMemory_free(___1a0fcch);
	dRMemory_free(___1a0fd0h);
	dRMemory_free(___1a0fd4h);
	dRMemory_free(___1a0fech);
	dRMemory_free(___1a0fc4h);
	dRMemory_free(___1a0fe4h);
	dRMemory_free(___1a0fdch);
	dRMemory_free(___1a0fach);
	dRMemory_free(___1a0fc8h);
	dRMemory_free(___1a0fb0h);
	dRMemory_free(___1a0ff0h);
	dRMemory_free(___1a0fa8h);
	dRMemory_free(___1a0fc0h);
	dRMemory_free(___1a0fa4h);
	dRMemory_free(___19de70h[0]);
	dRMemory_free(___19de70h[1]);
	dRMemory_free(___19de70h[2]);
	dRMemory_free(___19de70h[3]);
	dRMemory_free(___19de70h[4]);
	dRMemory_free(___19de70h[5]);
	dRMemory_free(___19de70h[6]);
	dRMemory_free(___19de70h[7]);
	dRMemory_free(___19de70h[8]);
	dRMemory_free(___19de70h[9]);
	dRMemory_free(___19de70h[10]);
	dRMemory_free(___19de70h[11]);
	dRMemory_free(___19de70h[12]);
	dRMemory_free(___19de70h[13]);
	dRMemory_free(___19de70h[14]);
	dRMemory_free(___19de70h[15]);
	dRMemory_free(___19de70h[16]);
	dRMemory_free(___19de70h[17]);
	dRMemory_free(___19de70h[18]);
	dRMemory_free(___19de70h[19]);
	dRMemory_free(___1a0fb4h);
}

void ___12a54h(void){

	__DWORD__ 	n;

	printf("[dRally.Clean] ___12a54h\n");

	dRMemory_free(___1a1128h);
	dRMemory_free(___1a10f8h);
	dRMemory_free(___1a1104h);
	dRMemory_free(___1a10d4h);
	dRMemory_free(___1a10bch);
	dRMemory_free(___1a10e8h);
	dRMemory_free(___1a10dch);
	dRMemory_free(___1a10ach);
	dRMemory_free(___1a10c0h);
	dRMemory_free(___1a10ech);
	dRMemory_free(___1a10b4h);
	dRMemory_free(___1a10f4h);
	dRMemory_free(___1a10d0h);
	dRMemory_free(___1a10e0h);
	dRMemory_free(___1a0ff8h);
	dRMemory_free(___1a10a4h);

	dRMemory_free(all_3800);
}

void ___24ec0h(void){

	printf("[dRally.Clean] ___24ec0h\n");

	dRMemory_free(___1a1124h__VESA101h_ScreenBufferA);
	dRMemory_free(___1a1ed4h);
	dRMemory_free(___1a1e90h);
	dRMemory_free(___1a10b0h);
	dRMemory_free(___1a1eb0h);
	dRMemory_free(___1a1e78h);
	dRMemory_free(___1a1eb8h);
	dRMemory_free(___1a0180h);
	dRMemory_free(___1a01b8h[0]);
	dRMemory_free(___1a01b8h[1]);
	dRMemory_free(___1a01b8h[2]);
	dRMemory_free(___1a01b8h[3]);
	dRMemory_free(___1a01b8h[4]);
	dRMemory_free(___1a01b8h[5]);
	dRMemory_free(___1a01a8h[0]);
	dRMemory_free(___1a01a8h[1]);
	dRMemory_free(___1a01a8h[2]);
	dRMemory_free(___1a01a8h[3]);
	dRMemory_free(___1a0198h[0]);
	dRMemory_free(___1a0198h[1]);
	dRMemory_free(___1a0198h[2]);
	dRMemory_free(___1a0198h[3]);
	dRMemory_free(___1a01d0h[0]);
	dRMemory_free(___1a01d0h[1]);
	dRMemory_free(___1a01d0h[2]);
	dRMemory_free(___1a01d0h[3]);
	dRMemory_free(___1a1e8ch);
	dRMemory_free(___1a1ea0h);
	dRMemory_free(___1a1e7ch);
	dRMemory_free(___1a1e80h);
	dRMemory_free(___1a1e74h);
	dRMemory_free(___1a1e84h);
	dRMemory_free(___1a1e60h);
	dRMemory_free(___1a1ebch);
	dRMemory_free(___1a1eb4h);
	dRMemory_free(___1a1e88h);
	dRMemory_free(___1a1ea4h);
	dRMemory_free(___1a1ea8h);
	dRMemory_free(___1a1e6ch);
	dRMemory_free(___1a1e98h);
	dRMemory_free(___1a1e5ch);
	dRMemory_free(___1a1e58h);
	dRMemory_free(___1a1e54h);
	dRMemory_free(___1a1e64h);
}

void ___2fc50h(void){

	printf("[dRally.Clean] ___2fc50h\n");

	dRMemory_free(___1a0f90h);
	dRMemory_free(___1a0f88h);
	dRMemory_free(___1a0f84h);
	dRMemory_free(___1a0f98h);
	dRMemory_free(___1a0f8ch);
	dRMemory_free(___1a1114h);
	dRMemory_free(___1a0f94h);
}

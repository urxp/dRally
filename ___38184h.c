#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___1a01e0h[];
	extern byte ___185c7ah[];
	extern void * ___1a10b8h;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___19de70h[20];
	extern void * ___1a0fa4h;
	extern byte ___1a1ef8h[];
	extern byte ___19bd60h[];
	extern void * ___1a0fb8h;
	extern void * ___1a0fe0h;
	extern byte ___196adch[];

void ___35b68h_cdecl(dword A0, dword A1, dword A2, dword A3);
void ___2b318h(void);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);
dword ___251e8h_cdecl(const char *);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);

// RACE RESULTS, FACES, CARS, COLORS
void ___38184h_cdecl(dword A1, void * A2){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0xc+0x48];
	byte * 	esp = __esp+0xc;
	void * 	ebxp;
	void * 	esip;
	void * 	edxp;


	eax = A1;
	edx = A2;
	D(esp+0x30) = eax;
	ecx = 0x4;
	edi = esp+0x14;
	esi = edx;
	memcpy(esp+0x14, A2, ecx);
	eax = D(esp+0x30);
	ebp = 4*eax;
	ebp += eax;
	ebp <<= 0x4;
	edx = 0x15e;
	ebp -= eax;
	ebx = eax+0x1;
	edx -= ebp;
	eax = edx;
	edx = (int)edx>>0x1f;
	___idiv32(&eax, &edx, ebx);
	ebp ^= ebp;
	D(esp+0x34) = eax;
	ebx = D(esp+0x30);
	edx = D(esp+0x34);
	eax += 0x6c;
	edx += 0x4f;
	D(esp+0x2c) = eax;
	D(esp+0x34) = edx;

	if((int)ebx > 0){

		esi = eax+0x34;
		edi = eax+0x39;
		ecx = eax+0x3;
		eax = 4*edx;
		eax += edx;
		ebx = 0*edx;
		eax <<= 0x7;
		D(esp+0x28) = eax;
		eax = 4*ecx;
		eax += ecx;
		eax <<= 0x7;
		eax += ebx;
		D(esp+0x3c) = eax;
		eax = D(esp+0x28);
		D(esp+0x20) = eax;
		eax = 4*edi;
		eax += edi;
		edx = ebx+0x1ef;
		eax <<= 0x7;
		edx += eax;
		eax = D(esp+0x28);
		D(esp+0x24) = eax;
		eax = 4*esi;
		D(esp+0x40) = edx;
		eax += esi;
		edx = ebx+0x1a4;
		eax <<= 0x7;
		edx += eax;
		D(esp+0x18) = ebp;
		D(esp+0x1c) = edx;

		while(1){

			eax ^= eax;
			L(eax) = B(esp+ebp+0x14);
			eax = 0x6c*eax;
			ebx = 0xa;
			edx = esp;
			esi = ".";
			eax = D(eax+___1a01e0h+0x48);
			edi = esp;
			itoa_watcom106(eax, esp, ebx);
			strcat(esp, ".");
			eax = D(esp+0x34);
			eax = eax*ebp;
			ecx = D(esp+0x1c);
			ebx = esp;
			D(esp+0x38) = eax;
			eax = ___251e8h_cdecl(esp);
			ecx -= eax;
			___12e78h_cdecl(___1a10b8h, ___185c7ah, esp, ecx);
			eax ^= eax;
			L(eax) = B(esp+ebp+0x14);
			eax = 0x6c*eax;
			edi = esp;
			ecx = D(esp+0x40);
			esi = ___1a01e0h+eax;
			ebx = esp;
			strcpy(esp, ___1a01e0h+eax);
			strupr_watcom106(esp);
			___12e78h_cdecl(___1a10b8h, ___185c7ah, esp, ecx);
			eax ^= eax;
			L(eax) = B(esp+ebp+0x14);
			eax = 0x6c*eax;
			ecx = D(esp+0x3c);
			esi = D(eax+___1a01e0h+0x40);
			ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+0x1a6;
			ecx = 0x40;
			edx = ecx;
			esip = ___19de70h[esi];
			L(edx) >>= 2;

			while(1){

				H(ecx) = L(edx);

				while(1){

					eax = D(esip);
					D(ebxp) = eax;
					ebxp += 0x4;
					esip += 0x4;
					H(ecx)--;
					if(H(ecx) == 0) break;
				}

				ebxp += 0x280;
				L(edx) <<= 2;
				ebxp -= edx;
				L(edx) >>= 2;
				L(ecx)--;
				if(L(ecx) == 0) break;
			}

			eax = D(esp+0x2c);
			eax += D(esp+0x38);
			ebx = 0x280*eax;
			ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx+0x1ea;
			eax = B(esp+ebp+0x14);
			eax = 0x6c*eax;
			esi = 0x5140*D(eax+___1a01e0h+0x1c);
			ebp++;
			ecx = 0x34;
			eax = D(esp+0x18);
			edx = 0x64;
			esip = ___1a0fa4h+esi+eax;
			edi = D(esp+0x30);
			L(edx) >>= 2;

			while(1){

				H(ecx) = L(edx);

				while(1){

					eax = D(esip);
					D(ebxp) = eax;
					ebxp += 0x4;
					esip += 0x4;
					H(ecx)--;
					if(H(ecx) == 0) break;
				}

				ebxp += 0x280;
				L(edx) <<= 2;
				ebxp -= edx;
				L(edx) >>= 2;
				L(ecx)--;
				if(L(ecx) == 0) break;
			}

			eax = D(esp+0x28);
			edx = D(esp+0x3c);
			ebx = D(esp+0x40);
			esi = D(esp+0x18);
			ecx = D(esp+0x1c);
			esi += 0x1450;
			edx += eax;
			eax = D(esp+0x20);
			D(esp+0x3c) = edx;
			ebx += eax;
			eax = D(esp+0x24);
			D(esp+0x18) = esi;
			ecx += eax;
			D(esp+0x40) = ebx;
			D(esp+0x1c) = ecx;
			if((int)ebp >= (int)edi) break;
		}
	}

	___2b318h();
	edx ^= edx;
	ebp = D(___1a1ef8h);
	L(edx) = B(esp+0x14);

	if((edx == ebp)||(D(___19bd60h) != 0)){

		edx ^= edx;
		L(edx) = B(esp+0x14);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fb8h;
	}
	else {

		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fe0h;
	}

	edxp += eax;
	eax ^= eax;
	L(eax) = B(edxp+0x2);
	D(esp+0x44) = eax;
	FPUSH((short)W(esp+0x44));
	esp -= 4;
	eax ^= eax;
	F32(esp) = (float)FPOP();
	L(eax) = B(edxp+0x1);
	D(esp+0x48) = eax;
	FPUSH((short)W(esp+0x48));
	esp -= 4;
	eax ^= eax;
	F32(esp) = (float)FPOP();
	L(eax) = B(edxp);
	D(esp+0x4c) = eax;
	FPUSH((short)W(esp+0x4c));
	esp -= 4;
	eax = 0x40;
	F32(esp) = (float)FPOP();
	___35b68h_cdecl(eax, D(esp), D(esp+4), D(esp+8));
	esp += 0xc;
	edx ^= edx;
	ebx = D(___1a1ef8h);
	L(edx) = B(esp+0x15);

	if((edx == ebx)||(D(___19bd60h) != 0)){

		edx ^= edx;
		L(edx) = B(esp+0x15);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fb8h;
	}
	else {

		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fe0h;
	}

	edxp += eax;
	eax ^= eax;
	L(eax) = B(edxp+0x2);
	D(esp+0x44) = eax;
	FPUSH((short)W(esp+0x44));
	esp -= 4;
	eax ^= eax;
	F32(esp) = (float)FPOP();
	L(eax) = B(edxp+0x1);
	D(esp+0x48) = eax;
	FPUSH((short)W(esp+0x48));
	esp -= 4;
	eax ^= eax;
	F32(esp) = (float)FPOP();
	L(eax) = B(edxp);
	D(esp+0x4c) = eax;
	FPUSH((short)W(esp+0x4c));
	esp -= 4;
	eax = 0x50;
	F32(esp) = (float)FPOP();
	___35b68h_cdecl(eax, D(esp), D(esp+4), D(esp+8));
	esp += 0xc;
	eax ^= eax;
	esi = D(___1a1ef8h);
	L(eax) = B(esp+0x16);

	if((eax == esi)||((D(___19bd60h) != 0)&&((int)D(___196adch) > 2))){

		edx ^= edx;
		L(edx) = B(esp+0x16);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fb8h;
	}
	else {

		edx ^= edx;
		L(edx) = B(esp+0x16);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fe0h;
	}

	edxp += eax;
	eax ^= eax;
	L(eax) = B(edxp+0x2);
	D(esp+0x44) = eax;
	FPUSH((short)W(esp+0x44));
	esp -= 4;
	eax ^= eax;
	F32(esp) = (float)FPOP();
	L(eax) = B(edxp+0x1);
	D(esp+0x48) = eax;
	FPUSH((short)W(esp+0x48));
	esp -= 4;
	eax ^= eax;
	F32(esp) = (float)FPOP();
	L(eax) = B(edxp);
	D(esp+0x4c) = eax;
	FPUSH((short)W(esp+0x4c));
	esp -= 4;
	eax = 0xe0;
	F32(esp) = (float)FPOP();
	___35b68h_cdecl(eax, D(esp), D(esp+4), D(esp+8));
	esp += 0xc;
	eax ^= eax;
	edx = D(___1a1ef8h);
	L(eax) = B(esp+0x17);

	if((eax == edx)||((D(___19bd60h) != 0)&&((int)D(___196adch) > 3))){

		edx ^= edx;
		L(edx) = B(esp+0x17);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fb8h;
	}
	else {

		edx ^= edx;
		L(edx) = B(esp+0x17);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = D(eax*4+___1a01e0h+0x2c);
		eax = 4*edx;
		eax -= edx;
		edxp = ___1a0fe0h;
	}

	esp -= 4;
	F32(esp) = (float)(double)B(edxp+eax+0x2);
	esp -= 4;
	F32(esp) = (float)(double)B(edxp+eax+0x1);
	esp -= 4;
	F32(esp) = (float)(double)B(edxp+eax);
	___35b68h_cdecl(0xf0, D(esp), D(esp+4), D(esp+8));
}

#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___19de70h[20];
	extern __POINTER__ ___1a0fa4h;
	extern __BYTE__ ___1a1ef8h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __POINTER__ ___1a0fb8h;
	extern __POINTER__ ___1a0fe0h;
	extern __BYTE__ ___196adch[];

void ___35b68h_cdecl(__DWORD__ A0, float A1, float A2, float A3);
void ___2b318h(void);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);
__DWORD__ ___251e8h_cdecl(const char *);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);

// RACE RESULTS, FACES, CARS, COLORS
void ___38184h_cdecl(__DWORD__ A1, __POINTER__ A2){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	__esp[0xc+0x48];
	__BYTE__ * 	esp = __esp+0xc;
	int 	bool_tmp;
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	__POINTER__ 	edxp;
	racer_t * 		s_6c;


	s_6c = (racer_t *)___1a01e0h;
	eax = A1;
	D(esp+0x30) = eax;
	ecx = 0x4;
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
	___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
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
			eax = s_6c[eax/0x6c].rank;
			itoa_watcom106(eax, esp, ebx);
			strcat(esp, ".");
			eax = D(esp+0x34);
			eax = eax*ebp;
			ecx = D(esp+0x1c);
			D(esp+0x38) = eax;
			eax = ___251e8h_cdecl(esp);
			ecx -= eax;
			___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, ecx);
			eax ^= eax;
			L(eax) = B(esp+ebp+0x14);
			eax = 0x6c*eax;
			ecx = D(esp+0x40);
			strcpy(esp, s_6c[eax/0x6c].name);
			strupr_watcom106(esp);
			___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, ecx);
			eax ^= eax;
			L(eax) = B(esp+ebp+0x14);
			eax = 0x6c*eax;
			ecx = D(esp+0x3c);
			esi = s_6c[eax/0x6c].face;
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
			esi = 0x5140*s_6c[eax/0x6c].car;
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

	bool_tmp = 0;
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) bool_tmp = 1;
#endif // DR_MULTIPLAYER

	edxp = ((B(esp+0x14) == D(___1a1ef8h))||bool_tmp) ? ___1a0fb8h : ___1a0fe0h;

	___35b68h_cdecl(
		0x40,
		(float)(double)B(edxp+3*s_6c[B(esp+0x14)].color),
		(float)(double)B(edxp+3*s_6c[B(esp+0x14)].color+0x1),
		(float)(double)B(edxp+3*s_6c[B(esp+0x14)].color+0x2));

	bool_tmp = 0;
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) bool_tmp = 1;
#endif // DR_MULTIPLAYER

	edxp = ((B(esp+0x15) == D(___1a1ef8h))||bool_tmp) ? ___1a0fb8h : ___1a0fe0h;

	___35b68h_cdecl(
		0x50,
		(float)(double)B(edxp+3*s_6c[B(esp+0x15)].color),
		(float)(double)B(edxp+3*s_6c[B(esp+0x15)].color+0x1),
		(float)(double)B(edxp+3*s_6c[B(esp+0x15)].color+0x2));

	bool_tmp = 0;
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) bool_tmp = 1;
#endif // DR_MULTIPLAYER

	edxp = ((B(esp+0x16) == D(___1a1ef8h))||(bool_tmp&&((int)D(___196adch) > 2))) ? ___1a0fb8h : ___1a0fe0h;

	___35b68h_cdecl(
		0xe0,
		(float)(double)B(edxp+3*s_6c[B(esp+0x16)].color),
		(float)(double)B(edxp+3*s_6c[B(esp+0x16)].color+0x1),
		(float)(double)B(edxp+3*s_6c[B(esp+0x16)].color+0x2));

	bool_tmp = 0;
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) bool_tmp = 1;
#endif // DR_MULTIPLAYER

	edxp = ((B(esp+0x17) == D(___1a1ef8h))||(bool_tmp&&((int)D(___196adch) > 3))) ? ___1a0fb8h : ___1a0fe0h;

	___35b68h_cdecl(
		0xf0,
		(float)(double)B(edxp+3*s_6c[B(esp+0x17)].color),
		(float)(double)B(edxp+3*s_6c[B(esp+0x17)].color+0x1),
		(float)(double)B(edxp+3*s_6c[B(esp+0x17)].color+0x2));
}

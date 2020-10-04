#include "drally.h"

	extern byte ___1a0224h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a0f18h[];
	extern byte ___19bd60h[];
	extern byte ___1a1168h[];
	extern byte ___1de7d0h[];

// SORT RANKINGS
void ___30a84h_cdecl(dword A1, dword A2){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x10];

	eax = A1;
	edx = A2;

		D(esp+0x4) = eax;
		D(esp+0x8) = edx;
___30a9eh:
		eax = D(esp+0x8);
		ebx = D(esp+0x4);
		edx = ebx+eax;
		D(esp+0xc) = eax;
		eax = edx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		eax = 0x6c*eax;
		edx = D(eax+___1a0224h);
___30abfh:
		eax = 0x6c*ebx;
		if((int)edx <= (int)D(eax+___1a0224h)) goto ___30acdh;
		ebx++;
		goto ___30abfh;
___30acdh:
		ecx = 0x6c*D(esp+0xc);
___30ad2h:
		if((int)edx >= (int)D(ecx+___1a0224h)) goto ___30ae8h;
		eax = D(esp+0xc);
		eax--;
		ecx -= 0x6c;
		D(esp+0xc) = eax;
		goto ___30ad2h;
___30ae8h:
		eax = D(esp+0xc);
		if((int)ebx > (int)eax) goto ___30c2ah;
		ecx = D(___1a1ef8h);
		if(ebx != ecx) goto ___30b05h;
		D(___1a1ef8h) = eax;
		goto ___30b0fh;
___30b05h:
		if(ecx != eax) goto ___30b0fh;
		D(___1a1ef8h) = ebx;
___30b0fh:
		ebp = 0x6c*ebx;
		ecx = 0x6c;
		ebp = ___1a01e0h+ebp;
		edi = ___1a0f18h;
		esi = ebp;
		memcpy(edi, esi, ecx);
		eax = 0x6c*D(esp+0xc);
		ecx = ___1a01e0h;
		ecx += eax;
		edi = ebp;
		D(esp) = ecx;
		ecx = 0x6c;
		esi = D(esp);
		memcpy(edi, esi, ecx);
		ecx = 0x6c;
		esi = ___1a0f18h;
		edi = D(esp);
		memcpy(edi, esi, ecx);
		if(D(___19bd60h) == 0) goto ___30c20h;
		esi = D(esp+0xc);
		eax ^= eax;
___30b8dh:
		ecx ^= ecx;
		L(ecx) = B(eax+___1a1168h);
		if(ecx != ebx) goto ___30ba5h;
		L(ecx) = B(esp+0xc);
		B(eax+___1a1168h) = L(ecx);
		goto ___30bafh;
___30ba5h:
		if(ecx != esi) goto ___30bafh;
		B(eax+___1a1168h) = L(ebx);
___30bafh:
		eax++;
		if((int)eax < 4) goto ___30b8dh;
		ebp = 0x54*ebx;
		ecx = 0x54;
		ebp = ___1de7d0h+ebp;
		edi = ___1a0f18h;
		esi = ebp;
		memcpy(edi, esi, ecx);
		eax = 0x54*D(esp+0xc);
		ecx = ___1de7d0h;
		ecx += eax;
		edi = ebp;
		D(esp) = ecx;
		ecx = 0x54;
		esi = D(esp);
		memcpy(edi, esi, ecx);
		ecx = 0x54;
		esi = ___1a0f18h;
		edi = D(esp);
		memcpy(edi, esi, ecx);
___30c20h:
		ebp = D(esp+0xc);
		ebp--;
		ebx++;
		D(esp+0xc) = ebp;
___30c2ah:
		if((int)ebx < (int)D(esp+0xc)) goto ___30abfh;
		eax = D(esp+0x4);
		edx = D(esp+0xc);
		if((int)eax >= (int)edx) goto ___30c45h;
		___30a84h_cdecl(eax, edx);
___30c45h:
		if((int)ebx >= (int)D(esp+8)) goto ___30c54h;
		D(esp+0x4) = ebx;
		goto ___30a9eh;
___30c54h:
		return;
}

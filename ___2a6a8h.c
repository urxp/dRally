#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___19bd60h[];
	extern byte kmap[];
	extern void * ___1a0f9ch;
	extern byte ___1a1ef8h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___196a94h[];
	extern byte ___1a01e0h[];
	extern byte ___243d44h[];
	extern byte ___196ab4h[];
	extern byte ___1a0a50h[];

void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);
int rand_watcom106(void);

static byte ROL_BYTE(byte b, int n){

    return (b<<n)|(b>>(8-n));
}

static byte ROR_BYTE(byte b, int n){

    return (b>>n)|(b<<(8-n));
}

dword ___2a6a8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi;
	byte 	esp[0x24];
	FILE * 	fd;
	int 	n, rslt;
	byte 	key;


	rslt = 0;

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

		if(kmap[DR_SCAN_F2]){	// QUICK SAVE
		
			___1a0f9ch = ___3f71ch__allocateMemory(0x883);
			memset(___1a0f9ch, 0, 0x883);
			B(___1a0f9ch) = key = rand_watcom106()%0xff;
			B(___1a0f9ch+1) = B(___1a1ef8h);
			B(___1a0f9ch+2) = B(___185a14h_UseWeapons);
			B(___1a0f9ch+3) = B(___196a94h);
			strcpy(___1a0f9ch+4, "Quicksave Slot");
			memcpy(___1a0f9ch+0x13, ___1a01e0h, 0x870);

			n = 0;
			while(++n < 0x883) B(___1a0f9ch+n) = ROR_BYTE(B(___1a0f9ch+n)+0x11*n-key, n%6);

			fd = strupr_fopen("DR.SG7", "wb");
			fwrite(___1a0f9ch, 0x883, 1, fd);
			fclose(fd);
			dRally_Memory_free(___1a0f9ch);
			rslt = 1;
		}

		if(kmap[DR_SCAN_F3]){	// QUICK LOAD

			D(___243d44h) = 0;
			D(___196ab4h) = 0;
			___1a0f9ch = ___3f71ch__allocateMemory(0x883);
			memset(___1a0f9ch, 0, 0x883);
		
			if((fd = strupr_fopen("DR.SG7", "rb"))){
			
				fread(___1a0f9ch, 0x883, 0x1, fd);
				fclose(fd);
				key = B(___1a0f9ch);

				n = 0;
				while(++n < 0x883) B(___1a0f9ch+n) = ROL_BYTE(B(___1a0f9ch+n), n%6)-0x11*n+key;

				D(___1a1ef8h) = B(___1a0f9ch+0x1);
				D(___185a14h_UseWeapons) = B(___1a0f9ch+0x2);
				D(___196a94h) =  B(___1a0f9ch+0x3);
				memcpy(___1a01e0h, ___1a0f9ch+0x13, 0x870);
				dRally_Memory_free(___1a0f9ch);
				D(___1a0a50h) = !(D(___1a01e0h+0x5c+0x6c*D(___1a1ef8h)) == 8);
				D(___1a0a50h+4) = !(D(___1a01e0h+0x60+0x6c*D(___1a1ef8h)) == 1);
				D(___1a0a50h+8) = !(D(___1a01e0h+0x64+0x6c*D(___1a1ef8h)) == 1);
				D(___1a0a50h+0xc) = !(D(___1a01e0h+0x68+0x6c*D(___1a1ef8h)) == 1);
				rslt = 2;
			}
			else {

				rslt = 3;
			}
		}
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	return rslt;
}

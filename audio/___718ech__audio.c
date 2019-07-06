#include "x86.h"

	extern byte Sound_CardType;
	extern byte IsSoundEnabled;
	extern byte ___19a280h;
	extern byte ___19a281h;
	extern byte * MSX_Ptr;
	extern dword ___68a90h[];
	extern word ___68c40h;
	extern byte * ___24e858h;
	extern byte ___24e830h[];
	extern byte * ___24e860h;
	extern byte ___19a468h;
	extern byte ___24e750h[];
	extern byte S3M_InitialTempo;
	extern byte S3M_GlobalVolume;
	extern byte S3M_InitialSpeed;

    #pragma aux __STOSB__clib3r parm [eax][edx][ecx]
	void __STOSB__clib3r(void *, dword, dword);

	void ___6ef2ch__audio(void);
	void ___68cfbh(void (*)(void));
	void ___685a4h(void);

static dword idiv_quo(dword, dword, dword);
#pragma aux idiv_quo =      \
    "idiv   ebx"            \
    parm [eax][edx][ebx]

static void important(void);
#pragma aux important =      				\
"L0:"									\
	"cmp     byte ptr [___19a468h], 0"	\
	"jne     L0"

// 718ech
void ___718ech(void){

	dword	n0, n1;

	if(!Sound_CardType||!IsSoundEnabled||___19a280h||!MSX_Ptr) return;

	n0 = 0;
	n1 = 0;

	___19a468h = 1;

	S3M_GlobalVolume = MSX_Ptr[0x30];
	S3M_InitialSpeed = MSX_Ptr[0x31];
	S3M_InitialTempo = MSX_Ptr[0x32];

	___68c40h = 0x7a12 / MSX_Ptr[0x32];

	while(n0 < 0x20){

		___68a90h[n0] = 0x8000;

		if(___24e858h[n0] > 0xf){

			___24e830h[n0] = 0xff;
		}
		else {

			if(___24e860h&&(___24e860h[n0] & 0x20)){

				___68a90h[n1] = (___24e860h[n0] & 0xf) << 0xc;
			}
			else {

				___68a90h[n1] = (___24e858h[n0] > 7) ? 0xc000 : 0x3000;
			}

			___24e830h[n0] = n1;
			n1++;
		}

		n0++;
	}

	__STOSB__clib3r(___24e750h, 0xff, 0x40);

	___68cfbh(___6ef2ch__audio);
	___685a4h();

	___19a280h = 1;
	___19a281h = 0;

	important();	// forces while(___19a468h);
}

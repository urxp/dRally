#include "drally.h"

#pragma pack(1)
typedef union struct_94_s {
	__BYTE__ 	raw[0x94];
	struct {
		__DWORD__	car;		// +00
		float		__04;		// +04
		float		__08;		// +08
		float		__0C;		// +0C
		float		__10;		// +10
		float		__14;		// +14
		__DWORD__	__18;		// +18
		__DWORD__	__1C;		// +1C
		__DWORD__	__20;		// +20
		__DWORD__	__24;		// +24
		__DWORD__	__28;		// +28
		__DWORD__	__2C;		// +2C
		__DWORD__	__30;		// +30
		__DWORD__	__34;		// +34
		float		r;			// +38
		float		g;			// +3C
		float		b;			// +40
		char		name[12];	// +44
		__DWORD__	__50;		// +50
		__DWORD__	__54;		// +54
		__DWORD__	__58;		// +58
		__DWORD__	numofguns;	// +5C
		__DWORD__	__60;		// +60
		__DWORD__	__64;		// +64
		__DWORD__	__68;		// +68
		__DWORD__	__6C;		// +6C
		__DWORD__	__70;		// +70
		__DWORD__	__74;		// +74
		__DWORD__	__78;		// +78
		__DWORD__	__7C;		// +7C
		__DWORD__	__80;		// +80
		__DWORD__	gun1_type;	// +84
		__DWORD__	gun2_type;	// +88
		__DWORD__	__8C;		// +8C
		__DWORD__	__90;		// +90
	};
} struct_94_t;

typedef union struct_54_s {
	__BYTE__ 	raw[0x54];
	struct {
		char		name[12];	// +00
		__DWORD__	__0C;		// +0C
		__DWORD__	__10;		// +10
		__DWORD__	__14;		// +14
		__DWORD__	__18;		// +18
		__DWORD__	__1C;		// +1C
		__DWORD__	__20;		// +20
		__DWORD__	__24;		// +24
		__DWORD__	__28;		// +28
		__DWORD__	__2C;		// +2C
		__DWORD__	car;		// +30
		float		r;			// +34
		float		g;			// +38
		float		b;			// +3C
		__DWORD__	__40;		// +40
		__DWORD__	dfclty;		// +44
		__DWORD__	__48;		// +48	
		__DWORD__	__4C;		// +4C
		__DWORD__	__50;		// +50
	};
} struct_54_t;

enum e_difficulty { SPEED_MAKES_ME_DIZZY, I_LIVE_TO_RIDE, PETROL_IN_MY_VEINS, MY_DIFFICULTY };
enum e_car { VAGABOND, DERVISH, SENTINEL, SHRIEKER, WRAITH, DELIVERATOR, DELIVERATOR_ADVERSARY };

	static const float ___3f1f0h_floats[4][6][5] = {
		[SPEED_MAKES_ME_DIZZY] = {	
			[   VAGABOND] = { 2.55f, 2.60f, 1.00f, 1.00f, 1.00f },
			[    DERVISH] = { 2.70f, 2.75f, 2.80f, 1.00f, 1.00f },
			[   SENTINEL] = { 2.90f, 3.00f, 3.10f, 1.00f, 1.00f },
			[   SHRIEKER] = { 3.25f, 3.40f, 3.55f, 3.70f, 1.00f },
			[     WRAITH] = { 3.70f, 3.80f, 3.90f, 4.00f, 1.00f },
			[DELIVERATOR] = { 4.05f, 4.10f, 4.20f, 4.25f, 4.30f } 
		},
		[I_LIVE_TO_RIDE] = {
			[   VAGABOND] = { 2.65f, 2.70f, 1.00f, 1.00f, 1.00f },
			[    DERVISH] = { 2.75f, 2.80f, 2.85f, 1.00f, 1.00f },
			[   SENTINEL] = { 2.95f, 3.05f, 3.15f, 1.00f, 1.00f },
			[   SHRIEKER] = { 3.40f, 3.50f, 3.60f, 3.70f, 1.00f },
			[     WRAITH] = { 3.70f, 3.80f, 3.90f, 4.00f, 1.00f },
			[DELIVERATOR] = { 4.10f, 4.20f, 4.30f, 4.35f, 4.40f }
		},
		[PETROL_IN_MY_VEINS] = {
			[   VAGABOND] = { 2.80f, 2.85f, 1.00f, 1.00f, 1.00f },
			[    DERVISH] = { 2.95f, 3.00f, 3.05f, 1.00f, 1.00f },
			[   SENTINEL] = { 3.15f, 3.25f, 3.35f, 1.00f, 1.00f },
			[   SHRIEKER] = { 3.55f, 3.65f, 3.75f, 3.80f, 1.00f },
			[     WRAITH] = { 3.80f, 3.90f, 4.00f, 4.10f, 1.00f },
			[DELIVERATOR] = { 4.20f, 4.30f, 4.40f, 4.50f, 4.60f }
		},
		[MY_DIFFICULTY] = {
			[   VAGABOND] = { 2.50f, 2.55f, 1.00f, 1.00f, 1.00f },
			[    DERVISH] = { 2.65f, 2.70f, 2.75f, 1.00f, 1.00f },
			[   SENTINEL] = { 2.80f, 2.85f, 2.90f, 1.00f, 1.00f },
			[   SHRIEKER] = { 3.10f, 3.20f, 3.30f, 3.40f, 1.00f },
			[     WRAITH] = { 3.50f, 3.55f, 3.60f, 3.70f, 1.00f },
			[DELIVERATOR] = { 3.80f, 3.90f, 4.00f, 4.10f, 4.20f }
		}
	};

	static const float ___3f3d0h_floats[4][6][5] = {
		[SPEED_MAKES_ME_DIZZY] = {
			[   VAGABOND] = { 0.50f, 0.30f, 0.10f, 1.00f, 1.00f },
			[    DERVISH] = { 0.50f, 0.30f, 0.10f, 1.00f, 1.00f },
			[   SENTINEL] = { 0.80f, 0.60f, 0.40f, 0.20f, 1.00f },
			[   SHRIEKER] = { 0.80f, 0.60f, 0.40f, 0.20f, 1.00f },
			[     WRAITH] = { 0.80f, 0.60f, 0.40f, 0.20f, 0.00f },
			[DELIVERATOR] = { 0.80f, 0.60f, 0.40f, 0.20f, 0.00f }
		},
		[I_LIVE_TO_RIDE] = {
			[   VAGABOND] = { 0.50f, 0.30f, 0.10f, 1.00f, 1.00f },
			[    DERVISH] = { 0.50f, 0.30f, 0.10f, 1.00f, 1.00f },
			[   SENTINEL] = { 0.80f, 0.60f, 0.40f, 0.20f, 1.00f },
			[   SHRIEKER] = { 0.80f, 0.60f, 0.40f, 0.20f, 1.00f },
			[     WRAITH] = { 0.80f, 0.60f, 0.40f, 0.20f, 0.00f },
			[DELIVERATOR] = { 0.80f, 0.60f, 0.40f, 0.20f, 0.00f }
		},
		[PETROL_IN_MY_VEINS] = {
			[   VAGABOND] = { 0.50f, 0.30f, 0.10f, 1.00f, 1.00f },
			[    DERVISH] = { 0.50f, 0.30f, 0.10f, 1.00f, 1.00f },
			[   SENTINEL] = { 0.80f, 0.60f, 0.40f, 0.20f, 1.00f },
			[   SHRIEKER] = { 0.80f, 0.60f, 0.40f, 0.20f, 1.00f },
			[     WRAITH] = { 0.80f, 0.60f, 0.40f, 0.20f, 0.00f },
			[DELIVERATOR] = { 0.80f, 0.60f, 0.40f, 0.20f, 0.00f }
		},
		[MY_DIFFICULTY] = {
			[   VAGABOND] = { 0.50f, 0.30f, 0.10f, 1.00f, 1.00f },
			[    DERVISH] = { 0.55f, 0.30f, 0.10f, 1.00f, 1.00f },
			[   SENTINEL] = { 0.60f, 0.50f, 0.35f, 0.20f, 1.00f },
			[   SHRIEKER] = { 0.65f, 0.55f, 0.40f, 0.20f, 1.00f },
			[     WRAITH] = { 0.75f, 0.60f, 0.40f, 0.20f, 0.00f },
			[DELIVERATOR] = { 0.75f, 0.60f, 0.40f, 0.20f, 0.00f }
		}
	};

	static const float ___3f5b0h_floats[4][6] = {
		[SPEED_MAKES_ME_DIZZY] = {
			[   VAGABOND] = 1.80f,
			[    DERVISH] = 1.70f,
			[   SENTINEL] = 1.60f,
			[   SHRIEKER] = 1.55f,
			[     WRAITH] = 1.45f,
			[DELIVERATOR] = 1.40f
		},
		[I_LIVE_TO_RIDE] = {
			[   VAGABOND] = 1.80f,
			[    DERVISH] = 1.70f,
			[   SENTINEL] = 1.60f,
			[   SHRIEKER] = 1.55f,
			[     WRAITH] = 1.45f,
			[DELIVERATOR] = 1.40f
		},
		[PETROL_IN_MY_VEINS] = {
			[   VAGABOND] = 1.60f,
			[    DERVISH] = 1.50f,
			[   SENTINEL] = 1.40f,
			[   SHRIEKER] = 1.30f,
			[     WRAITH] = 1.25f,
			[DELIVERATOR] = 1.20f
		},
		[MY_DIFFICULTY] = {
			[   VAGABOND] = 1.75f,
			[    DERVISH] = 1.65f,
			[   SENTINEL] = 1.55f,
			[   SHRIEKER] = 1.50f,
			[     WRAITH] = 1.40f,
			[DELIVERATOR] = 1.35f
		}
	};

	static const int ___3f610h_ints[4][6] = {
		[SPEED_MAKES_ME_DIZZY] = {
			[   VAGABOND] = 120,
			[    DERVISH] = 130,
			[   SENTINEL] = 140,
			[   SHRIEKER] = 230,
			[     WRAITH] = 300,
			[DELIVERATOR] = 350
		},
		[I_LIVE_TO_RIDE] = {
			[   VAGABOND] = 130,
			[    DERVISH] = 135,
			[   SENTINEL] = 140,
			[   SHRIEKER] = 230,
			[     WRAITH] = 300,
			[DELIVERATOR] = 350
		},
		[PETROL_IN_MY_VEINS] = {
			[   VAGABOND] = 150,
			[    DERVISH] = 155,
			[   SENTINEL] = 160,
			[   SHRIEKER] = 230,
			[     WRAITH] = 300,
			[DELIVERATOR] = 350
		},
		[MY_DIFFICULTY] = {
			[   VAGABOND] = 150,
			[    DERVISH] = 190,
			[   SENTINEL] = 240,
			[   SHRIEKER] = 290,
			[     WRAITH] = 360,
			[DELIVERATOR] = 400
		}
	};

	static const int ___3f670h_ints[4][5] = {
		[SPEED_MAKES_ME_DIZZY] = {
			360,
			370,
			430,
			460,
			510
		},
		[I_LIVE_TO_RIDE] = {
			440,
			450,
			460,
			470,
			520
		},
		[PETROL_IN_MY_VEINS] = {
			510,
			520,
			530,
			580,
			600
		},
		[MY_DIFFICULTY] = {
			240,
			280,
			330,
			380,
			440
		}
	};

	static const float ___3f6c0h_floats[6] = {
		8.3f,	// VAGABOND
		9.7f,	// DERVISH
		9.0f,	// SENTINEL
		10.5f,	// SHRIEKER
		8.5f,	// WRAITH
		9.2f	// DELIVERATOR
	};




	extern byte ___243898h[];
	extern byte ___243cf4h[];
	extern byte ___196dach[];
	extern struct_94_t ___1de580h[4];
	extern struct_54_t ___1de7d0h[4];
	extern byte ___243ce8h[];
	extern byte ___24389ch[];

#if defined(DR_MULTIPLAYER)
	extern byte ___19bd60h[];
#endif // DR_MULTIPLAYER

void race___3f970h(void){

	int 	n;

	n = -1;
	while(++n < 6) F32(___24389ch+4*n) = (float)(0.15*(double)n+0.2);

	D(___196dach) = D(___1de7d0h[0].raw+0x48);
	F32(___24389ch+0x18) = F32(___24389ch+0x14);

	n = -1;
	while(++n < (int)D(___243cf4h)){

		___1de580h[n].car = ___1de7d0h[n].car;
		F32(___1de580h[n].raw+4) = ___3f1f0h_floats[___1de7d0h[n].dfclty][___1de580h[n].car][D(___1de7d0h[n].raw+0x14)];
		F32(___1de580h[n].raw+8) = F32(___1de580h[n].raw+4);
		F32(___1de580h[n].raw+0xc) = ___3f3d0h_floats[___1de7d0h[n].dfclty][___1de580h[n].car][D(___1de7d0h[n].raw+0x18)];

		F32(___1de580h[n].raw+0x14) = (float)(3.75/((double)___3f5b0h_floats[___1de7d0h[n].dfclty][___1de580h[n].car]-0.05*(double)D(___1de7d0h[n].raw+0x14)));
		D(___1de580h[n].raw+0x1c) = ___3f610h_ints[___1de7d0h[n].dfclty][___1de580h[n].car]+___3f670h_ints[___1de7d0h[n].dfclty][D(___1de7d0h[n].raw+0x1c)];

		if(D(___243ce8h) == n) D(___1de580h[n].raw+0x1c) += 0x64;

		if(strcmp(___1de7d0h[n].raw, "DUKE NUKEM") == 0) D(___1de580h[n].raw+0x1c) = (int)(2.2*(double)D(___1de580h[n].raw+0x1c));

		if((int)D(___1de580h[n].raw+0x1c) > 0x384) D(___1de580h[n].raw+0x1c) = 0x384;
		D(___1de580h[n].raw+0x18) = 0x400*(0x64-D(___1de7d0h[n].raw+0x10));
		D(___1de580h[n].raw+0x20) = D(___1de7d0h[n].raw+0x20);
		D(___1de580h[n].raw+0x24) = D(___1de7d0h[n].raw+0x24);
		D(___1de580h[n].raw+0x28) = D(___1de7d0h[n].raw+0x28);		// LOAD BOUGHT MINES AGAIN
		D(___1de580h[n].raw+0x2c) = D(___1de7d0h[n].raw+0x2c);
		D(___1de580h[n].raw+0x30) = D(___1de580h[n].raw+0x34) = 512*200;
		D(___1de580h[n].raw+0x50) = 0;
		D(___1de580h[n].raw+0x58) = 0;
		F32(___1de580h[n].raw+0x10) = ___3f6c0h_floats[___1de580h[n].car];
		D(___1de580h[n].raw+0x60) = 0;

		if(___1de580h[n].car == VAGABOND){
				
			___1de580h[n].numofguns = 1;
			D(___1de580h[n].raw+0x64) = 22;
			D(___1de580h[n].raw+0x74) = 8;
			___1de580h[n].gun1_type = 0;
		}

		if(___1de580h[n].car == DERVISH){

			___1de580h[n].numofguns = 1;
			D(___1de580h[n].raw+0x64) = -18;
			D(___1de580h[n].raw+0x74) = 17;
			___1de580h[n].gun1_type = 1;
		}

		if(___1de580h[n].car == SENTINEL){

			___1de580h[n].numofguns = 1;
			D(___1de580h[n].raw+0x64) = -40;
			D(___1de580h[n].raw+0x74) = 7;
			___1de580h[n].gun1_type = 2;
		}

		if(___1de580h[n].car == SHRIEKER){

			___1de580h[n].numofguns = 2;
			D(___1de580h[n].raw+0x64) = 16;
			D(___1de580h[n].raw+0x68) = -17;
			D(___1de580h[n].raw+0x74) = D(___1de580h[n].raw+0x78) = 20;
			___1de580h[n].gun1_type = ___1de580h[n].gun2_type = 3;
		}

		if(___1de580h[n].car == WRAITH){

			___1de580h[n].numofguns = 2;
			D(___1de580h[n].raw+0x64) = 16;
			D(___1de580h[n].raw+0x68) = -17;
			D(___1de580h[n].raw+0x74) = D(___1de580h[n].raw+0x78) = 19;
			___1de580h[n].gun1_type = ___1de580h[n].gun2_type = 4;
		}

		if(___1de580h[n].car == DELIVERATOR){

			___1de580h[n].numofguns = 2;
			D(___1de580h[n].raw+0x64) = 16;
			D(___1de580h[n].raw+0x68) = -17;
			D(___1de580h[n].raw+0x74) = D(___1de580h[n].raw+0x78) = 20;
			___1de580h[n].gun1_type = ___1de580h[n].gun2_type = 5;
		}
	}

	if(D(___1de580h[0].raw) == DELIVERATOR_ADVERSARY){
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER
			if(D(___1de580h[D(___243ce8h)].raw+0x2c) == 0){

				if(___1de7d0h[0].dfclty == SPEED_MAKES_ME_DIZZY)	F32(___1de580h[0].raw+4) = 4.3f;
				if(___1de7d0h[0].dfclty == I_LIVE_TO_RIDE)			F32(___1de580h[0].raw+4) = 4.4f;
				if(___1de7d0h[0].dfclty == PETROL_IN_MY_VEINS)		F32(___1de580h[0].raw+4) = 4.5f;
			}
			else {

				if(___1de7d0h[0].dfclty == SPEED_MAKES_ME_DIZZY)	F32(___1de580h[0].raw+4) = 4.5f;
				if(___1de7d0h[0].dfclty == I_LIVE_TO_RIDE)			F32(___1de580h[0].raw+4) = 4.6f;
				if(___1de7d0h[0].dfclty == PETROL_IN_MY_VEINS)		F32(___1de580h[0].raw+4) = 4.7f;
			}

			F32(___1de580h[0].raw+0x14) = (float)(3.75/((double)___3f5b0h_floats[___1de7d0h[1].dfclty][1]-0.05*(double)D(___1de7d0h[1].raw+0x14)));
			F32(___1de580h[0].raw+8) = F32(___1de580h[0].raw+4);
			F32(___1de580h[0].raw+0xc) = 0;
			D(___1de580h[0].raw+0x1c) = ___3f610h_ints[___1de7d0h[1].dfclty][5]+___3f670h_ints[___1de7d0h[1].dfclty][4];
			D(___1de580h[0].raw+0x18) = 0x400*(0x64-D(___1de7d0h[0].raw+0x10));

			if((int)D(___1de580h[0].raw+0x1c) > 0x384) D(___1de580h[0].raw+0x1c) = 0x384;

			F32(___1de580h[0].raw+0x10) = ___3f6c0h_floats[3];
			D(___1de580h[0].raw+0x30) = D(___1de580h[0].raw+0x34) = 512*200;
			___1de580h[0].numofguns = 2;
			D(___1de580h[0].raw+0x64) = 30;
			D(___1de580h[0].raw+0x68) = -30;
			D(___1de580h[0].raw+0x74) = D(___1de580h[0].raw+0x78) = 19;
			___1de580h[0].gun1_type = ___1de580h[0].gun2_type = 4;
			D(___1de580h[0].raw+0x20) = D(___1de7d0h[0].raw+0x20);
			D(___1de580h[0].raw+0x24) = D(___1de7d0h[0].raw+0x24);
			D(___1de580h[0].raw+0x28) = D(___1de7d0h[0].raw+0x28);
			D(___1de580h[0].raw+0x2c) = D(___1de7d0h[0].raw+0x2c);
			
			D(___1de580h[0].raw+0x50) = 0;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}

	___1de580h[0].r = ___1de7d0h[0].r;
	___1de580h[0].g = ___1de7d0h[0].g;
	___1de580h[0].b = ___1de7d0h[0].b;

	___1de580h[1].r = ___1de7d0h[1].r;
	___1de580h[1].g = ___1de7d0h[1].g;
	___1de580h[1].b = ___1de7d0h[1].b;

	___1de580h[2].r = ___1de7d0h[2].r;
	___1de580h[2].g = ___1de7d0h[2].g;
	___1de580h[2].b = ___1de7d0h[2].b;

	___1de580h[3].r = ___1de7d0h[3].r;
	___1de580h[3].g = ___1de7d0h[3].g;
	___1de580h[3].b = ___1de7d0h[3].b;

	strcpy(___1de580h[0].name, ___1de7d0h[0].name);
	strcpy(___1de580h[1].name, ___1de7d0h[1].name);
	strcpy(___1de580h[2].name, ___1de7d0h[2].name);
	strcpy(___1de580h[3].name, ___1de7d0h[3].name);   
}

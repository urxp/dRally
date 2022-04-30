#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"
#include "drally_structs_free.h"
#include "watcom106.h"
#include "assets.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern cardata_t ___18e298h[6];
	extern __DWORD__ ___1862bch[][0x18];
	extern __DWORD__ ___1864fch[][0x10];
	extern __DWORD__ ___18643ch[][0xc];
	extern __POINTER__ ___1a01d0h[4];
	extern __POINTER__ ___1a0198h[4];
	extern __POINTER__ ___1a01a8h[4];
	extern __BYTE__ ___1a1eech[];
	extern __BYTE__ ___1a1ec0h[];
	extern __BYTE__ ___1a1ec8h[];

int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);

// ENGINES
static const char40 ___191100h[4][6] = {
	[0] = {
		[0] = "[4 cylinder motor installed",
		[1] = "",
		[2] = "This engine genie will let you",
		[3] = "win. It will grant your boy racer",
		[4] = "wishes.",
		[5] = ""
	},
	[1] = {
		[0] = "[Enhanced 4 cylinder installed",
		[1] = "",
		[2] = "Now any bitter regrets are in the",
		[3] = "past, just blurred, sweet street-",
		[4] = "lights speeding past fast.",
		[5] = ""
	},
	[2] = {
		[0] = "[V6 Injection motor installed",
		[1] = "",
		[2] = "If speeding is the 8th deadly sin,",
		[3] = "with this babe under your hood,",
		[4] = "you are now past redemption.",
		[5] = ""
	},
	[3] = {
		[0] = "[V8 Turbo Injection",
		[1] = "",
		[2] = "Gleaming pistons pumping in chorus",
		[3] = "with your hungry heart. This sweet",
		[4] = "symbiosis can cause addiction.",
		[5] = ""
	}
};

// TIRES
static const char40 ___191880h[4][6] = {
	[0] = {
		[0] = "[Trackmaster 155 bought",
		[1] = "",
		[2] = "Warp 9, Captain. No problems with",
		[3] = "traction now. The finish line,",
		[4] = "she's closing fast.",
		[5] = ""
	},
	[1] = {
		[0] = "[Roadrunner NS 175 bought",
		[1] = "",
		[2] = "On these wheels, your vehicle",
		[3] = "starts like a nuclear blast, and",
		[4] = "stops you like a cardiac arrest.",
		[5] = ""
	},
	[2] = {
		[0] = "[Slidestop 200 bought",
		[1] = "",
		[2] = "Now fast talk to that asphalt,",
		[3] = "motormouth. Time to make some",
		[4] = "beautiful automobile poetry.",
		[5] = ""
	},
	[3] = {
		[0] = "[Racer-X230 bought",
		[1] = "",
		[2] = "Smart move, motorman. Now get out",
		[3] = "there, and do some dashing, dare-",
		[4] = "devilish damage.",
		[5] = ""
	}
};

static const char40 ___192000h[4][6] = {
	[0] = {
		[0] = "[Steel Triumph bought",
		[1] = "",
		[2] = "Straight from the best R&D Labs,",
		[3] = "shielding Steel Triumph gives you",
		[4] = "that extra edge you crave.",
		[5] = ""
	},
	[1] = {
		[0] = "[FerroChromium Armor",
		[1] = "",
		[2] = "Deflects bullets, and most other",
		[3] = "bad stuff that goes bang in the",
		[4] = "night, too.",
		[5] = ""
	},
	[2] = {
		[0] = "[Titanium Plates installed",
		[1] = "",
		[2] = "Shiny hard stuff. No explosive can",
		[3] = "shadow its tanning radiance. Don't",
		[4] = "forget your shades!",
		[5] = ""
	},
	[3] = {
		[0] = "[Accesteel Armor installed",
		[1] = "",
		[2] = "Not even a shell-shock serious",
		[3] = "bazooka can faze the cool mirror",
		[4] = "beauty of Accesteel.",
		[5] = ""
	}
};

static const char40 ___1914c0h[4][6] = {
	[0] = {
		[0] = "[Trackmaster 155",
		[1] = "",
		[2] = "These wheels will let you do some",
		[3] = "rapid fire cornerings on that",
		[4] = "shimmering silver street.",
		[5] = ""
	},
	[1] = {
		[0] = "[Roadrunner NS 175",
		[1] = "",
		[2] = "With these fat tires, you'll shoot",
		[3] = "from the starting-line like a",
		[4] = "blood lusting bullet.",
		[5] = ""
	},
	[2] = {
		[0] = "[Slidestop 200",
		[1] = "",
		[2] = "These fat bottomed tires'll kiss",
		[3] = "the road like crazy, they just",
		[4] = "can't get enough. They're hot.",
		[5] = ""
	},
	[3] = {
		[0] = "[Racer-X230",
		[1] = "",
		[2] = "Zorro's Zs were nothing. Carve",
		[3] = "your whole signature, to the",
		[4] = "rainbow-oiled road, doing 160.",
		[5] = ""
	}
};

static const char40 ___191c40h[4][6] = {
	[0] = {
		[0] = "[Steel Triumph Plating",
		[1] = "",
		[2] = "Steel Triumph won't stop the hurt,",
		[3] = "but it just might keep you in one",
		[4] = "piece to the finish line.",
		[5] = ""
	},
	[1] = {
		[0] = "[FerroChromium Armor",
		[1] = "",
		[2] = "What the rival guns give, this",
		[3] = "armor can take, but you'd better",
		[4] = "shoot back, there's a limit.",
		[5] = ""
	},
	[2] = {
		[0] = "[Titanium Plating",
		[1] = "",
		[2] = "See this big gun; see this armor.",
		[3] = "[BANG!{ Now see the armor. Smile to",
		[4] = "your reflection. Looking good.",
		[5] = ""
	},
	[3] = {
		[0] = "[Accesteel Armor",
		[1] = "",
		[2] = "All but the most extreme shots",
		[3] = "bounce off like hail on hard",
		[4] = "concrete.",
		[5] = ""
	}
};

static const char40 MaxUpgrades[3][6] = {
	[0] = {
		[0] = "[NO MORE ENGINE UPGRADES",
		[1] = "",
		[2] = "You've got the most beastly motor",
		[3] = "monster this vehicle can carry.",
		[4] = "Hear its powerful & sublime sound.",
		[5] = ""
	},
	[1] = {
		[0] = "[NO MORE TIRE UPGRADES",
		[1] = "",
		[2] = "You've got the best fat, sticky",
		[3] = "tires this vehicle can boast. You",
		[4] = "are in close touch with the road.",
		[5] = ""
	},
	[2] = {
		[0] = "[NO MORE ARMOR UPGRADES",
		[1] = "",
		[2] = "You got the best shining knight's",
		[3] = "armor this warhorsepower chariot",
		[4] = "can carry to any road battle.",
		[5] = ""
	}
};

enum { UPGRADE_ENGINE = 0, UPGRADE_TIRE = 1, UPGRADE_ARMOR = 2 };

static void helper_aa(int dst_offx, int dst_offy, int type){

	int 		i, j;
	__BYTE__ *	bases4;

	bases4 = getAssets(MENU_BASES4);

	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(dst_offy+j)+(dst_offx+i)) = B(bases4+0x2400*type+0x60*j+i);
		}
	}
}

static void helper_yy(int idx, int dst_offx, int dst_offy, int type){

	int 		i, j;
	__BYTE__ * 	maxi1f;

	maxi1f = getAssets(MENU_MAXI1F);

	j = -1;
	while(++j < 0x40){

		i = -1;
		while(++i < 0x60){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(dst_offy+j)+(dst_offx+i)) = B(maxi1f+0x6000*type+0x1800*idx+0x60*j+i);
		}
	}
}

static void helper_xx(int price, int dst_x, int dst_y){

	__BYTE__ 	esp[0x28];

	itoa_watcom106(price, esp, 0xa);
	strcat(strcpy(esp+0x14, "$"), esp);
	___12f60h_cdecl(esp+0x14, ___25180h_cdecl(esp+0x14)+0x280*dst_y+dst_x);
}

static void helper_all(int n, int x1, int type, int lvl, int frame_n, __POINTER__ p, int * ip, int price, const char40 * info){

	int 	i, j;

	helper_aa(x1, 253, type);

	if(n != lvl){

		___259e0h_cdecl(x1, 269, frame_n, p, ip);
		helper_xx(price, x1, 335);
	}
	else {

		helper_yy(n, x1, 269, type);
	}

	___13248h_cdecl(144, 114, 384, 119, 1);
	VESA101_16X16_FORMAT_PRINT(info[0], 170, 124);
	VESA101_16X16_FORMAT_PRINT(info[1], 170, 140);
	VESA101_16X16_FORMAT_PRINT(info[2], 170, 156);
	VESA101_16X16_FORMAT_PRINT(info[3], 170, 172);
	VESA101_16X16_FORMAT_PRINT(info[4], 170, 188);
	VESA101_16X16_FORMAT_PRINT(info[5], 170, 204);
}

// SHOP ENGINES
void ___25e40h(void){

	int 			n;
	racer_t * 		s_6c;
	const char40 * 	info;
	cardata_t * 	cdp;

	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)&___18e298h[s_6c[D(___1a1ef8h)].car];
	n = s_6c[D(___1a1ef8h)].engine;
	info = (n < cdp->n_engine_upgrades )?cdp->txt_engine_upgrades[n]:MaxUpgrades[UPGRADE_ENGINE];

	helper_all(n-1, 16, UPGRADE_ENGINE, cdp->n_engine_upgrades-1, D(___1a1ec8h), ___1a01a8h[n], ___1862bch[n], cdp->price_engine_upgrades[n], info);
}

// SHOP ENGINE UPGRADE INSTALLED
void ___273d8h(void){

	int 			n;
	racer_t * 		s_6c;
	const char40 * 	info;
	cardata_t * 	cdp;

	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)&___18e298h[s_6c[D(___1a1ef8h)].car];
	n = s_6c[D(___1a1ef8h)].engine;
	info = ___191100h[n];

	helper_all(n, 16, UPGRADE_ENGINE, cdp->n_engine_upgrades-1, D(___1a1ec8h), ___1a01a8h[n], ___1862bch[n], cdp->price_engine_upgrades[n+1], info);
}

// SHOP TIRES
void ___262b4h(void){

	int 			n;
	racer_t * 		s_6c;
	const char40 * 	info;
	cardata_t * 	cdp;

	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)&___18e298h[s_6c[D(___1a1ef8h)].car];
	n = s_6c[D(___1a1ef8h)].tires;
	info = (n < cdp->n_tire_upgrades )?___1914c0h[n]:MaxUpgrades[UPGRADE_TIRE];

	helper_all(n-1, 120, UPGRADE_TIRE, cdp->n_tire_upgrades-1, D(___1a1ec0h), ___1a0198h[n], ___18643ch[n], cdp->price_tire_upgrades[n], info);
}

// SHOP TIRES UPGRADE INSTALLED
void ___276f0h(void){

	int 			n;
	racer_t * 		s_6c;
	const char40 * 	info;
	cardata_t * 	cdp;

	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)&___18e298h[s_6c[D(___1a1ef8h)].car];
	n = s_6c[D(___1a1ef8h)].tires;
	info = ___191880h[n];

	helper_all(n, 120, UPGRADE_TIRE, cdp->n_tire_upgrades-1, D(___1a1ec0h), ___1a0198h[n], ___18643ch[n], cdp->price_tire_upgrades[n+1], info);
}

// SHOP ARMOR
void ___26650h(void){

	int 			n;
	racer_t * 		s_6c;
	const char40 * 	info;
	cardata_t * 	cdp;

	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)&___18e298h[s_6c[D(___1a1ef8h)].car];
	n = s_6c[D(___1a1ef8h)].armor;
	info = (n < cdp->n_armor_upgrades)?___191c40h[n]:MaxUpgrades[UPGRADE_ARMOR];

	helper_all(n-1, 224, UPGRADE_ARMOR, cdp->n_armor_upgrades-1, D(___1a1eech), ___1a01d0h[n], ___1864fch[n], cdp->price_armor_upgrades[n], info);
}

// SHOP ARMOR UPGRADE INSTALLED
void ___27a10h(void){

	int 			n;
	racer_t * 		s_6c;
	const char40 * 	info;
	cardata_t * 	cdp;

	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)&___18e298h[s_6c[D(___1a1ef8h)].car];
	n = s_6c[D(___1a1ef8h)].armor;
	info = ___192000h[n];

	helper_all(n, 224, UPGRADE_ARMOR, cdp->n_armor_upgrades-1, D(___1a1eech), ___1a01d0h[n], ___1864fch[n], cdp->price_armor_upgrades[n+1], info);
}

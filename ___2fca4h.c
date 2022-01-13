#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___1a1160h[];
	extern __BYTE__ ___196abch[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static const char __dfr_18d5a0h_0[][40] = {
    "}Suburbia,",
    "{Number of laps: 5",
    "{Difficulty: Easy",
    "",
    "}Downtown,",
    "{Number of laps: 5",
    "{Difficulty: Hard",
    "",
    "}Utopia,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Rock Zone,",
    "{Number of laps: 5",
    "{Difficulty: Hard",
    "",
    "}Snake Alley,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Oasis,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Velodrome,",
    "{Number of laps: 5",
    "{Difficulty: Easy",
    "",
    "}Holocaust,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Bogota,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}West End,",
    "{Number of laps: 5",
    "{Difficulty: Easy",
    "",
    "}Newark,",
    "{Number of laps: 5",
    "{Difficulty: Hard",
    "",
    "}Complex,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Hell Mountain,",
    "{Number of laps: 5",
    "{Difficulty: Hard",
    "",
    "}Desert Run,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Palm Side,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Eidolon,",
    "{Number of laps: 5",
    "{Difficulty: Easy",
    "",
    "}Toxic Dump,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    "",
    "}Borneo,",
    "{Number of laps: 5",
    "{Difficulty: Medium",
    ""
};


void ___2fca4h(void){
	
	__BYTE__ 	esp[0x64];
    __POINTER__ __dfr_18d5a0h;

    __dfr_18d5a0h = (__POINTER__)__dfr_18d5a0h_0;
	itoa_watcom106(D(___196ab8h), esp+0x50, 0xa);
	___13248h_cdecl(0xd0, 0x72, 0x12c, 0x6d, 1);

	if((int)D(___1a1160h) >= 0x12){

		if(D(___1a1160h) != 0x12){

			VESA101_16X16_FORMAT_PRINT("[Accept the current track", 218, 124);
		}
		else {
			
			VESA101_16X16_FORMAT_PRINT("[Clear your latest track", 218, 124);
		}

		VESA101_16X16_FORMAT_PRINT("[selection!", 218, 140);
		VESA101_16X16_FORMAT_PRINT("", 218, 156);
		VESA101_16X16_FORMAT_PRINT("", 218, 172);
	}
	else {

		VESA101_16X16_FORMAT_PRINT(__dfr_18d5a0h+0xa0*B(___196abch+D(___1a1160h)), 218, 124);
		VESA101_16X16_FORMAT_PRINT(__dfr_18d5a0h+0xa0*B(___196abch+D(___1a1160h))+0x28, 218, 140);
		VESA101_16X16_FORMAT_PRINT(__dfr_18d5a0h+0xa0*B(___196abch+D(___1a1160h))+0x50, 218, 156);
		VESA101_16X16_FORMAT_PRINT(__dfr_18d5a0h+0xa0*B(___196abch+D(___1a1160h))+0x78, 218, 172);
	}

	VESA101_16X16_FORMAT_PRINT(strcat(strcpy(esp, "[Total tracks selected: "), esp+0x50), 218, 188);
}

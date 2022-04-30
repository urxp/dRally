#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___196ab8h[];
	extern __BYTE__ ___1a1160h[];
	extern __BYTE__ ___196abch[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

static const char loc_info[20][4][40] = {
    [0] = {
        "}Suburbia,",
        "{Number of laps: 5",
        "{Difficulty: Easy",
        ""
    },
    [1] = {
        "}Downtown,",
        "{Number of laps: 5",
        "{Difficulty: Hard",
        ""
    },
    [2] = {
        "}Utopia,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [3] = {
        "}Rock Zone,",
        "{Number of laps: 5",
        "{Difficulty: Hard",
        ""
    },
    [4] = {
        "}Snake Alley,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [5] = {
        "}Oasis,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [6] = {
        "}Velodrome,",
        "{Number of laps: 5",
        "{Difficulty: Easy",
        ""
    },
    [7] = {
        "}Holocaust,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [8] = {
        "}Bogota,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [9] = {
        "}West End,",
        "{Number of laps: 5",
        "{Difficulty: Easy",
        ""
    },
    [10] = {
        "}Newark,",
        "{Number of laps: 5",
        "{Difficulty: Hard",
        ""
    },
    [11] = {
        "}Complex,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [12] = {
        "}Hell Mountain,",
        "{Number of laps: 5",
        "{Difficulty: Hard",
        ""
    },
    [13] = {
        "}Desert Run,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [14] = {
        "}Palm Side,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [15] = {
        "}Eidolon,",
        "{Number of laps: 5",
        "{Difficulty: Easy",
        ""
    },
    [16] = {
        "}Toxic Dump,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [17] = {
        "}Borneo,",
        "{Number of laps: 5",
        "{Difficulty: Medium",
        ""
    },
    [18] = {
        "[Clear your latest track",
        "[selection!",
        "",
        ""
    },
    [19] = {
        "[Accept the current track",
        "[selection!",
        "",
        ""
    }
};


void ___2fca4h(void){
	
	__BYTE__ 	esp[0x64];
    int         i;


	itoa_watcom106(D(___196ab8h), esp+0x50, 10);
	___13248h_cdecl(208, 114, 300, 109, 1);

	if((int)D(___1a1160h) >= 18){

        i = (D(___1a1160h) == 18)?18:19;
	}
	else {

        i = B(___196abch+D(___1a1160h));
	}

    VESA101_16X16_FORMAT_PRINT(loc_info[i][0], 218, 124);
    VESA101_16X16_FORMAT_PRINT(loc_info[i][1], 218, 140);
    VESA101_16X16_FORMAT_PRINT(loc_info[i][2], 218, 156);
    VESA101_16X16_FORMAT_PRINT(loc_info[i][3], 218, 172);

	VESA101_16X16_FORMAT_PRINT(strcat(strcpy(esp, "[Total tracks selected: "), esp+0x50), 218, 188);
}

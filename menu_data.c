#include "drally.h"

#pragma pack(1)
typedef struct menubox_s {
	__DWORD__ 	row_n;			// +00
	__DWORD__ 	x;				// +04
	__DWORD__ 	y;				// +08
	__DWORD__ 	row_h;			// +0C
	__DWORD__ 	w;				// +10
	__DWORD__ 	h;				// +14
	__DWORD__ 	row_i;			// +18
} menubox_t;

menubox_t ___185a5ch[9] = {
/*0*/   { 7, 0x91, 0x7c, 0x1c, 0x15d,  0xde, 0 },
/*1*/   { 6, 0x6d, 0xab, 0x1c, 0x1a5,  0xc0, 0 },
/*2*/   { 8, 0x67, 0x76, 0x1c, 0x1af,  0xfa, 2 },
/*3*/   { 6, 0x5f, 0x92, 0x1c, 0x1e5,  0xc0, 0 },
/*4*/   { 5, 0xa8, 0xc8, 0x1c, 0x12f,  0xa1, 0 },
/*5*/   { 8, 0xe7, 0x72, 0x1c, 0x17f,  0xfa, 0 },
/*6*/   { 9, 0x32, 0x5d, 0x1c, 0x214, 0x116, 0 },
/*7*/   { 8, 0xd3, 0x74, 0x1c, 0x14f,  0xfa, 0 },
/*8*/   { 8, 0x32, 0x71, 0x1c, 0x214,  0xfa, 0 }
};

__BYTE__ ___185b58h[9][9] = {
/*0*/   { 1,1,1,1,1,1,1,0,0 },
/*1*/   { 1,0,0,1,0,1,0,0,0 },
/*2*/   { 0,0,1,1,1,1,1,1,0 },
/*3*/   { 1,1,1,1,1,1,0,0,0 },
/*4*/   { 1,1,1,1,1,0,0,0,0 },
/*5*/   { 1,1,1,1,1,1,1,1,0 },
/*6*/   { 1,1,1,1,1,1,1,1,1 },
/*7*/   { 1,1,1,1,1,1,1,1,0 },
/*8*/   { 1,1,1,1,1,1,1,1,0 }
};

char ___1866b8h[9][9][50] = {
    {// 0
        /*0*/   "Start Racing",
        /*1*/   "Multiplayer Race",
        /*2*/   "Configure",
        /*3*/   "See Hall Of Fame",
        /*4*/   "Credits",
        /*5*/   "Show Preview",
        /*6*/   "Exit To DOS",
        /*7*/   0,
        /*8*/   0
    },
    {//  1
        /*0*/   "Start A New Game",
        /*1*/   "End Current Game",
        /*2*/   "See Current Statistics",
        /*3*/   "Load Game",
        /*4*/   "Save Game",
        /*5*/   "Previous Menu",
        /*6*/   0,
        /*7*/   0,
        /*8*/   0
    },
    {//  2
        /*0*/   "Initialize A New Game",
        /*1*/   "Join An Existing Game",
        /*2*/   "Network Connection",
        /*3*/   "Serial Connection",
        /*4*/   "Dial Modem",
        /*5*/   "Answer Modem",
        /*6*/   "Serial/COM Options",
        /*7*/   "Previous Menu",
        /*8*/   0
    },
    {//  3
        /*0*/   "Music Volume",
        /*1*/   "Effect Volume",
        /*2*/   "Define Keyboard",
        /*3*/   "Define Gamepad/Joystick",
        /*4*/   "Gamepad Disabled",
        /*5*/   "Previous Menu",
        /*6*/   0,
        /*7*/   0,
        /*8*/   0
    },
    {//  4
        /*0*/   "Select Tracks",
        /*1*/   "Enter Money",
        /*2*/   "Violence On",
        /*3*/   "Initialize Game",
        /*4*/   "Previous Menu",
        /*5*/   0,
        /*6*/   0,
        /*7*/   0,
        /*8*/   0
    },
    {//  5   Load/Save
        /*0*/   0,
        /*1*/   0,
        /*2*/   0,
        /*3*/   0,
        /*4*/   0,
        /*5*/   0,
        /*6*/   0,
        /*7*/   0,
        /*8*/   0
    },
    {//  6
        /*0*/   "Accelerate    a",
        /*1*/   "Brake        z",
        /*2*/   "Steer Left    \xfa\xfaleft arrow",
        /*3*/   "Steer Right   \xfa\xfa\xfa\xfa\xfa\xfaright arrow",
        /*4*/   "Turbo Boost  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfaspace",
        /*5*/   "Machine Gun  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfaleft control",
        /*6*/   "Drop Mine    \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfaleft alt",
        /*7*/   "Horn        \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfaspace",
        /*8*/   "Previous Menu"
    },
    {//  7
        /*0*/   "Standard COM1",
        /*1*/   "Standard COM2",
        /*2*/   "Standard COM3",
        /*3*/   "Standard COM4",
        /*4*/   "Custom COM-port",
        /*5*/   "Modem Init String",
        /*6*/   "Tone Dialing",
        /*7*/   "Previous Menu",
        /*8*/   0
    },
    {//  8
        /*0*/   "Accelerate    a",
        /*1*/   "Brake        z",
        /*2*/   "Steer Left    \xfa\xfaleft arrow",
        /*3*/   "Steer Right   \xfa\xfa\xfa\xfa\xfa\xfaright arrow",
        /*4*/   "Turbo Boost  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfaspace",
        /*5*/   "Machine Gun  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfaleft control",
        /*6*/   "Drop Mine    \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfaleft alt",
        /*7*/   "Previous Menu",
        /*8*/   0
    }
};

const __DWORD__ ___186658h[] = {    // REPAIR ANIMATION
    0x5b3, 0x5bb, 0x5aa, 0x5ad, 0x598, 0x597, 0x5a9, 0x593, 0x5a5, 0x5b0, 0x5aa, 0x593,
    0x597, 0x580, 0x580, 0x5a9, 0x5bb, 0x5b8, 0x5b3, 0x5bf, 0x5bb, 0x5a9, 0x59d, 0x5a3
};

const __DWORD__ ___1865fch[] = {    // CONTINUE ANIMATION
    0x602, 0x5f7, 0x622, 0x613, 0x608, 0x601, 0x5ee, 0x5dc, 0x5d5, 0x5dc, 0x5da, 0x5ec,
    0x5f7, 0x5fd, 0x60c, 0x651, 0x639, 0x62e, 0x61e, 0x630, 0x627, 0x629, 0x61b
};

const char ___18768ah[][0x18] = {
    [0] = "speed makes me dizzy",
    [1] = "i live to ride",
    [2] = "petrol in my veins"
};

const char ___18d492h[][0xf] = {
    [0] = "Suburbia",
    [1] = "Downtown",
    [2] = "Utopia",
    [3] = "Rock Zone",
    [4] = "Snake Alley",
    [5] = "Oasis",
    [6] = "Velodrome",
    [7] = "Holocaust",
    [8] = "Bogota",
    [9] = "West End",
    [10] = "Newark",
    [11] = "Complex",
    [12] = "Hell Mountain",
    [13] = "Desert Run",
    [14] = "Palm Side",
    [15] = "Eidolon",
    [16] = "Toxic Dump",
    [17] = "Borneo"
};

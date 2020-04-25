#include "drally.h"

#define E0(c) (0x80|(c))

enum DR_KEYS {
    DR_LCTRL = 0x1d,
    DR_LSHIFT = 0x2a,
    DR_RSHIFT = 0x36,
    DR_LALT = 0x38,
    DR_KP_PERIOD = 0x53,
    DR_RCTRL = E0(0x1d),
    DR_RALT = E0(0x38),
    DR_DELETE = E0(0x53)
};

extern void (*___2432c8h)(void);

byte LAST_KEY;
byte LAST_CHAR;
byte kmap[256];
static byte SCANCODE_TABLE[SDL_NUM_SCANCODES];

static const byte lower[] = {
    0x00,0x1b,'1','2','3','4','5','6','7','8','9','0','-','=',0x08,0x09,
    'q','w','e','r','t','y','u','i','o','p','[',']',0x0d,0x00,'a','s',
    'd','f','g','h','j','k','l',';',0x27,0x00,0x00,'\\','z','x','c','v',
    'b','n','m',',','.','/',0x00,'*',0x00,' ',0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,'7','8','9','-','4','5','6','+','1',
    '2','3','0',0x00,0x00,0x00,'\\',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,'/',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xcd,0xc9,0xce,0x00,0xca,0x00,0xcb,0x00,0xcf,
    0xcc,0xd0,0xd1,0xd2
};

static const byte upper[] = {
    0x00,0x1b,'!','@','#','$','%','^','&','*','(',')','_','+',0x08,0x09,
    'Q','W','E','R','T','Y','U','I','O','P','{','}',0x0d,0x00,'A','S',
    'D','F','G','H','J','K','L',':','"',0x00,0x00,'|','Z','X','C','V',
    'B','N','M','<','>','?',0x00,'*',0x00,' ',0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,'7','8','9','-','4','5','6','+','1',
    '2','3','0',0x00,0x00,0x00,'|',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,'/',0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xcd,0xc9,0xce,0x00,0xca,0x00,0xcb,0x00,0xcf,
    0xcc,0xd0,0xd1,0xd2
};


void dRally_Keaboard_init(void){

    SCANCODE_TABLE[SDL_SCANCODE_UNKNOWN]        = 0x00;    // is normally an error code
    SCANCODE_TABLE[SDL_SCANCODE_ESCAPE]         = 0x01;    // (Esc)
    SCANCODE_TABLE[SDL_SCANCODE_1]              = 0x02;    // (1!)
    SCANCODE_TABLE[SDL_SCANCODE_2]              = 0x03;    // (2@)
    SCANCODE_TABLE[SDL_SCANCODE_3]              = 0x04;    // (3#)
    SCANCODE_TABLE[SDL_SCANCODE_4]              = 0x05;    // (4$)
    SCANCODE_TABLE[SDL_SCANCODE_5]              = 0x06;    // (5%E)
    SCANCODE_TABLE[SDL_SCANCODE_6]              = 0x07;    // (6^)
    SCANCODE_TABLE[SDL_SCANCODE_7]              = 0x08;    // (7&)
    SCANCODE_TABLE[SDL_SCANCODE_8]              = 0x09;    // (8*)
    SCANCODE_TABLE[SDL_SCANCODE_9]              = 0x0a;    // (9()
    SCANCODE_TABLE[SDL_SCANCODE_0]              = 0x0b;    // (0))
    SCANCODE_TABLE[SDL_SCANCODE_MINUS]          = 0x0c;    // (-_)
    SCANCODE_TABLE[SDL_SCANCODE_EQUALS]         = 0x0d;    // (=+)
    SCANCODE_TABLE[SDL_SCANCODE_BACKSPACE]      = 0x0e;    // (Backspace)
    SCANCODE_TABLE[SDL_SCANCODE_TAB]            = 0x0f;    // (Tab)
    SCANCODE_TABLE[SDL_SCANCODE_Q]              = 0x10;    // (Q)
    SCANCODE_TABLE[SDL_SCANCODE_W]              = 0x11;    // (W)
    SCANCODE_TABLE[SDL_SCANCODE_E]              = 0x12;    // (E)
    SCANCODE_TABLE[SDL_SCANCODE_R]              = 0x13;    // (R)
    SCANCODE_TABLE[SDL_SCANCODE_T]              = 0x14;    // (T)
    SCANCODE_TABLE[SDL_SCANCODE_Y]              = 0x15;    // (Y)
    SCANCODE_TABLE[SDL_SCANCODE_U]              = 0x16;    // (U)
    SCANCODE_TABLE[SDL_SCANCODE_I]              = 0x17;    // (I)
    SCANCODE_TABLE[SDL_SCANCODE_O]              = 0x18;    // (O)
    SCANCODE_TABLE[SDL_SCANCODE_P]              = 0x19;    // (P)
    SCANCODE_TABLE[SDL_SCANCODE_LEFTBRACKET]    = 0x1a;    // ([{)
    SCANCODE_TABLE[SDL_SCANCODE_RIGHTBRACKET]   = 0x1b;    // (]})
    SCANCODE_TABLE[SDL_SCANCODE_RETURN]         = 0x1c;    // (Enter)
    SCANCODE_TABLE[SDL_SCANCODE_LCTRL]          = 0x1d;    // (LCtrl)
    SCANCODE_TABLE[SDL_SCANCODE_A]              = 0x1e;    // (A)
    SCANCODE_TABLE[SDL_SCANCODE_S]              = 0x1f;    // (S)
    SCANCODE_TABLE[SDL_SCANCODE_D]              = 0x20;    // (D)
    SCANCODE_TABLE[SDL_SCANCODE_F]              = 0x21;    // (F)
    SCANCODE_TABLE[SDL_SCANCODE_G]              = 0x22;    // (G)
    SCANCODE_TABLE[SDL_SCANCODE_H]              = 0x23;    // (H)
    SCANCODE_TABLE[SDL_SCANCODE_J]              = 0x24;    // (J)
    SCANCODE_TABLE[SDL_SCANCODE_K]              = 0x25;    // (K)
    SCANCODE_TABLE[SDL_SCANCODE_L]              = 0x26;    // (L)
    SCANCODE_TABLE[SDL_SCANCODE_SEMICOLON]      = 0x27;    // (;:)
    SCANCODE_TABLE[SDL_SCANCODE_APOSTROPHE]     = 0x28;    // ('")
    SCANCODE_TABLE[SDL_SCANCODE_GRAVE]          = 0x29;    // (`~)
    SCANCODE_TABLE[SDL_SCANCODE_LSHIFT]         = 0x2a;    // (LShift)
    SCANCODE_TABLE[SDL_SCANCODE_BACKSLASH]      = 0x2b;    // (\|), on a 102-key keyboard
    SCANCODE_TABLE[SDL_SCANCODE_Z]              = 0x2c;    // (Z)
    SCANCODE_TABLE[SDL_SCANCODE_X]              = 0x2d;    // (X)
    SCANCODE_TABLE[SDL_SCANCODE_C]              = 0x2e;    // (C)
    SCANCODE_TABLE[SDL_SCANCODE_V]              = 0x2f;    // (V)
    SCANCODE_TABLE[SDL_SCANCODE_B]              = 0x30;    // (B)
    SCANCODE_TABLE[SDL_SCANCODE_N]              = 0x31;    // (N)
    SCANCODE_TABLE[SDL_SCANCODE_M]              = 0x32;    // (M)
    SCANCODE_TABLE[SDL_SCANCODE_COMMA]          = 0x33;    // (,<)
    SCANCODE_TABLE[SDL_SCANCODE_PERIOD]         = 0x34;    // (.>)
    SCANCODE_TABLE[SDL_SCANCODE_SLASH]          = 0x35;    // (/?)
    SCANCODE_TABLE[SDL_SCANCODE_RSHIFT]         = 0x36;    // (RShift)
    SCANCODE_TABLE[SDL_SCANCODE_KP_MULTIPLY]    = 0x37;    // (Keypad-*) or (*/PrtScn) on a 83/84-key keyboard
    SCANCODE_TABLE[SDL_SCANCODE_LALT]           = 0x38;    // (LAlt)
    SCANCODE_TABLE[SDL_SCANCODE_SPACE]          = 0x39;    // (Space bar)
    SCANCODE_TABLE[SDL_SCANCODE_CAPSLOCK]       = 0x3a;    // (CapsLock)
    SCANCODE_TABLE[SDL_SCANCODE_F1]             = 0x3b;    // (F1)
    SCANCODE_TABLE[SDL_SCANCODE_F2]             = 0x3c;    // (F2)
    SCANCODE_TABLE[SDL_SCANCODE_F3]             = 0x3d;    // (F3)
    SCANCODE_TABLE[SDL_SCANCODE_F4]             = 0x3e;    // (F4)
    SCANCODE_TABLE[SDL_SCANCODE_F5]             = 0x3f;    // (F5)
    SCANCODE_TABLE[SDL_SCANCODE_F6]             = 0x40;    // (F6)
    SCANCODE_TABLE[SDL_SCANCODE_F7]             = 0x41;    // (F7)
    SCANCODE_TABLE[SDL_SCANCODE_F8]             = 0x42;    // (F8)
    SCANCODE_TABLE[SDL_SCANCODE_F9]             = 0x43;    // (F9)
    SCANCODE_TABLE[SDL_SCANCODE_F10]            = 0x44;    // (F10)
    SCANCODE_TABLE[SDL_SCANCODE_NUMLOCKCLEAR]   = 0x45;    // (NumLock)
    SCANCODE_TABLE[SDL_SCANCODE_SCROLLLOCK]     = 0x46;    // (ScrollLock)
    SCANCODE_TABLE[SDL_SCANCODE_KP_7]           = 0x47;    // (Keypad-7/Home)
    SCANCODE_TABLE[SDL_SCANCODE_KP_8]           = 0x48;    // (Keypad-8/Up)
    SCANCODE_TABLE[SDL_SCANCODE_KP_9]           = 0x49;    // (Keypad-9/PgUp)
    SCANCODE_TABLE[SDL_SCANCODE_KP_MINUS]       = 0x4a;    // (Keypad--)
    SCANCODE_TABLE[SDL_SCANCODE_KP_4]           = 0x4b;    // (Keypad-4/Left)
    SCANCODE_TABLE[SDL_SCANCODE_KP_5]           = 0x4c;    // (Keypad-5)
    SCANCODE_TABLE[SDL_SCANCODE_KP_6]           = 0x4d;    // (Keypad-6/Right)
    SCANCODE_TABLE[SDL_SCANCODE_KP_PLUS]        = 0x4e;    // (Keypad-+)
    SCANCODE_TABLE[SDL_SCANCODE_KP_1]           = 0x4f;    // (Keypad-1/End)
    SCANCODE_TABLE[SDL_SCANCODE_KP_2]           = 0x50;    // (Keypad-2/Down)
    SCANCODE_TABLE[SDL_SCANCODE_KP_3]           = 0x51;    // (Keypad-3/PgDn)
    SCANCODE_TABLE[SDL_SCANCODE_KP_0]           = 0x52;    // (Keypad-0/Ins)
    SCANCODE_TABLE[SDL_SCANCODE_KP_PERIOD]      = 0x53;    // (Keypad-./Del)
    SCANCODE_TABLE[SDL_SCANCODE_SYSREQ]         = 0x54;    // (Alt-SysRq) on a 84+ key keyboard
    //SCANCODE_TABLE[??]                        = 0x55;    // is less common; occurs e.g. as F11 on a Cherry G80-0777 keyboard, as F12 on a Telerate keyboard, as PF1 on a Focus 9000 keyboard, and as FN on an IBM ThinkPad.
    //SCANCODE_TABLE[??] = 0x56;    // mostly on non-US keyboards. It is often an unlabelled key to the left or to the right of the left Alt key.
    SCANCODE_TABLE[SDL_SCANCODE_F11]            = 0x57;    // (F11)
    SCANCODE_TABLE[SDL_SCANCODE_F12]            = 0x58;    // (F12) both on a 101+ key keyboard

    SCANCODE_TABLE[SDL_SCANCODE_KP_ENTER]       = E0(0x1c);    // (Keypad Enter)
    SCANCODE_TABLE[SDL_SCANCODE_RCTRL]          = E0(0x1d);    // (RCtrl)
    //SCANCODE_TABLE[??]                        = E0(0x2a);    // (fake LShift)
    SCANCODE_TABLE[SDL_SCANCODE_KP_DIVIDE]      = E0(0x35);    // (Keypad-/)
    //SCANCODE_TABLE[??]                        = E0(0x36);    // (fake RShift)
    SCANCODE_TABLE[SDL_SCANCODE_PRINTSCREEN]    = E0(0x37);    // (Ctrl-PrtScn)
    SCANCODE_TABLE[SDL_SCANCODE_RALT]           = E0(0x38);    // (RAlt)
    //SCANCODE_TABLE[??]                        = E0(0x46);    // (Ctrl-Break)
    SCANCODE_TABLE[SDL_SCANCODE_HOME]           = E0(0x47);    // (Grey Home)
    SCANCODE_TABLE[SDL_SCANCODE_UP]             = E0(0x48);    // (Grey Up)
    SCANCODE_TABLE[SDL_SCANCODE_PAGEUP]         = E0(0x49);    // (Grey PgUp)
    SCANCODE_TABLE[SDL_SCANCODE_LEFT]           = E0(0x4b);    // (Grey Left)
    SCANCODE_TABLE[SDL_SCANCODE_RIGHT]          = E0(0x4d);    // (Grey Right)
    SCANCODE_TABLE[SDL_SCANCODE_END]            = E0(0x4f);    // (Grey End)
    SCANCODE_TABLE[SDL_SCANCODE_DOWN]           = E0(0x50);    // (Grey Down)
    SCANCODE_TABLE[SDL_SCANCODE_PAGEDOWN]       = E0(0x51);    // (Grey PgDn)
    SCANCODE_TABLE[SDL_SCANCODE_INSERT]         = E0(0x52);    // (Grey Insert)
    SCANCODE_TABLE[SDL_SCANCODE_DELETE]         = E0(0x53);    // (Grey Delete)
}

void dRally_Keyboard_make(SDL_Scancode code){

    kmap[LAST_KEY = SCANCODE_TABLE[code]] = 1;
    LAST_CHAR = (kmap[DR_LSHIFT]|kmap[DR_RSHIFT]) ? upper[LAST_KEY] : lower[LAST_KEY];

    if((kmap[DR_LCTRL]|kmap[DR_RCTRL])
        &&(kmap[DR_LALT]|kmap[DR_RALT])
        &&(kmap[DR_DELETE]|kmap[DR_KP_PERIOD])) ___2432c8h();
}

void dRally_Keyboard_break(SDL_Scancode code){

    kmap[SCANCODE_TABLE[code]] = 0;
    LAST_KEY = 0;
}

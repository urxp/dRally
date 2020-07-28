#include "drally.h"
#include "drally_keyboard.h"

extern void (*___2432c8h)(void);

byte LAST_KEY;
byte LAST_CHAR;
byte kmap[256];
byte dR_Scancodes[SDL_NUM_SCANCODES];

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


void dRally_Keyboard_init(void){

    dR_Scancodes[SDL_SCANCODE_UNKNOWN]        = DR_SCAN_ERROR;
    dR_Scancodes[SDL_SCANCODE_ESCAPE]         = DR_SCAN_ESCAPE;
    dR_Scancodes[SDL_SCANCODE_1]              = DR_SCAN_1;
    dR_Scancodes[SDL_SCANCODE_2]              = DR_SCAN_2;
    dR_Scancodes[SDL_SCANCODE_3]              = DR_SCAN_3;
    dR_Scancodes[SDL_SCANCODE_4]              = DR_SCAN_4;
    dR_Scancodes[SDL_SCANCODE_5]              = DR_SCAN_5;
    dR_Scancodes[SDL_SCANCODE_6]              = DR_SCAN_6;
    dR_Scancodes[SDL_SCANCODE_7]              = DR_SCAN_7;
    dR_Scancodes[SDL_SCANCODE_8]              = DR_SCAN_8;
    dR_Scancodes[SDL_SCANCODE_9]              = DR_SCAN_9;
    dR_Scancodes[SDL_SCANCODE_0]              = DR_SCAN_0;
    dR_Scancodes[SDL_SCANCODE_MINUS]          = DR_SCAN_MINUS;
    dR_Scancodes[SDL_SCANCODE_EQUALS]         = DR_SCAN_EQUALS;
    dR_Scancodes[SDL_SCANCODE_BACKSPACE]      = DR_SCAN_BACKSPACE;
    dR_Scancodes[SDL_SCANCODE_TAB]            = DR_SCAN_TAB;
    dR_Scancodes[SDL_SCANCODE_Q]              = DR_SCAN_Q;
    dR_Scancodes[SDL_SCANCODE_W]              = DR_SCAN_W;
    dR_Scancodes[SDL_SCANCODE_E]              = DR_SCAN_E;
    dR_Scancodes[SDL_SCANCODE_R]              = DR_SCAN_R;
    dR_Scancodes[SDL_SCANCODE_T]              = DR_SCAN_T;
    dR_Scancodes[SDL_SCANCODE_Y]              = DR_SCAN_Y;
    dR_Scancodes[SDL_SCANCODE_U]              = DR_SCAN_U;
    dR_Scancodes[SDL_SCANCODE_I]              = DR_SCAN_I;
    dR_Scancodes[SDL_SCANCODE_O]              = DR_SCAN_O;
    dR_Scancodes[SDL_SCANCODE_P]              = DR_SCAN_P;
    dR_Scancodes[SDL_SCANCODE_LEFTBRACKET]    = DR_SCAN_LEFTBRACKET;
    dR_Scancodes[SDL_SCANCODE_RIGHTBRACKET]   = DR_SCAN_RIGHTBRACKET;
    dR_Scancodes[SDL_SCANCODE_RETURN]         = DR_SCAN_ENTER;
    dR_Scancodes[SDL_SCANCODE_LCTRL]          = DR_SCAN_LCTRL;
    dR_Scancodes[SDL_SCANCODE_A]              = DR_SCAN_A;
    dR_Scancodes[SDL_SCANCODE_S]              = DR_SCAN_S;
    dR_Scancodes[SDL_SCANCODE_D]              = DR_SCAN_D;
    dR_Scancodes[SDL_SCANCODE_F]              = DR_SCAN_F;
    dR_Scancodes[SDL_SCANCODE_G]              = DR_SCAN_G;
    dR_Scancodes[SDL_SCANCODE_H]              = DR_SCAN_H;
    dR_Scancodes[SDL_SCANCODE_J]              = DR_SCAN_J;
    dR_Scancodes[SDL_SCANCODE_K]              = DR_SCAN_K;
    dR_Scancodes[SDL_SCANCODE_L]              = DR_SCAN_L;
    dR_Scancodes[SDL_SCANCODE_SEMICOLON]      = DR_SCAN_SEMICOLON;
    dR_Scancodes[SDL_SCANCODE_APOSTROPHE]     = DR_SCAN_APOSTROPHE;
    dR_Scancodes[SDL_SCANCODE_GRAVE]          = DR_SCAN_GRAVE;
    dR_Scancodes[SDL_SCANCODE_LSHIFT]         = DR_SCAN_LSHIFT;
    dR_Scancodes[SDL_SCANCODE_BACKSLASH]      = DR_SCAN_BACKSLASH;
    dR_Scancodes[SDL_SCANCODE_Z]              = DR_SCAN_Z;
    dR_Scancodes[SDL_SCANCODE_X]              = DR_SCAN_X;
    dR_Scancodes[SDL_SCANCODE_C]              = DR_SCAN_C;
    dR_Scancodes[SDL_SCANCODE_V]              = DR_SCAN_V;
    dR_Scancodes[SDL_SCANCODE_B]              = DR_SCAN_B;
    dR_Scancodes[SDL_SCANCODE_N]              = DR_SCAN_N;
    dR_Scancodes[SDL_SCANCODE_M]              = DR_SCAN_M;
    dR_Scancodes[SDL_SCANCODE_COMMA]          = DR_SCAN_COMMA;
    dR_Scancodes[SDL_SCANCODE_PERIOD]         = DR_SCAN_PERIOD;
    dR_Scancodes[SDL_SCANCODE_SLASH]          = DR_SCAN_SLASH;
    dR_Scancodes[SDL_SCANCODE_RSHIFT]         = DR_SCAN_RSHIFT;
    dR_Scancodes[SDL_SCANCODE_KP_MULTIPLY]    = DR_SCAN_KP_MULTIPLY;
    dR_Scancodes[SDL_SCANCODE_LALT]           = DR_SCAN_LALT;
    dR_Scancodes[SDL_SCANCODE_SPACE]          = DR_SCAN_SPACE;
    dR_Scancodes[SDL_SCANCODE_CAPSLOCK]       = DR_SCAN_CAPSLOCK;
    dR_Scancodes[SDL_SCANCODE_F1]             = DR_SCAN_F1;
    dR_Scancodes[SDL_SCANCODE_F2]             = DR_SCAN_F2;
    dR_Scancodes[SDL_SCANCODE_F3]             = DR_SCAN_F3;
    dR_Scancodes[SDL_SCANCODE_F4]             = DR_SCAN_F4;
    dR_Scancodes[SDL_SCANCODE_F5]             = DR_SCAN_F5;
    dR_Scancodes[SDL_SCANCODE_F6]             = DR_SCAN_F6;
    dR_Scancodes[SDL_SCANCODE_F7]             = DR_SCAN_F7;
    dR_Scancodes[SDL_SCANCODE_F8]             = DR_SCAN_F8;
    dR_Scancodes[SDL_SCANCODE_F9]             = DR_SCAN_F9;
    dR_Scancodes[SDL_SCANCODE_F10]            = DR_SCAN_F10;
    dR_Scancodes[SDL_SCANCODE_NUMLOCKCLEAR]   = DR_SCAN_NUMLOCKCLEAR;
    dR_Scancodes[SDL_SCANCODE_SCROLLLOCK]     = DR_SCAN_SCROLLLOCK;
    dR_Scancodes[SDL_SCANCODE_KP_7]           = DR_SCAN_KP_7;
    dR_Scancodes[SDL_SCANCODE_KP_8]           = DR_SCAN_KP_8;
    dR_Scancodes[SDL_SCANCODE_KP_9]           = DR_SCAN_KP_9;
    dR_Scancodes[SDL_SCANCODE_KP_MINUS]       = DR_SCAN_KP_MINUS;
    dR_Scancodes[SDL_SCANCODE_KP_4]           = DR_SCAN_KP_4;
    dR_Scancodes[SDL_SCANCODE_KP_5]           = DR_SCAN_KP_5;
    dR_Scancodes[SDL_SCANCODE_KP_6]           = DR_SCAN_KP_6;
    dR_Scancodes[SDL_SCANCODE_KP_PLUS]        = DR_SCAN_KP_PLUS;
    dR_Scancodes[SDL_SCANCODE_KP_1]           = DR_SCAN_KP_1;
    dR_Scancodes[SDL_SCANCODE_KP_2]           = DR_SCAN_KP_2;
    dR_Scancodes[SDL_SCANCODE_KP_3]           = DR_SCAN_KP_3;
    dR_Scancodes[SDL_SCANCODE_KP_0]           = DR_SCAN_KP_0;
    dR_Scancodes[SDL_SCANCODE_KP_PERIOD]      = DR_SCAN_KP_PERIOD;
    dR_Scancodes[SDL_SCANCODE_SYSREQ]         = DR_SCAN_SYSREQ;
    //dR_Scancodes[??]                        = DR_SCAN_55H;
    //dR_Scancodes[??]                        = DR_SCAN_56H;
    dR_Scancodes[SDL_SCANCODE_F11]            = DR_SCAN_F11;
    dR_Scancodes[SDL_SCANCODE_F12]            = DR_SCAN_F12;

    dR_Scancodes[SDL_SCANCODE_KP_ENTER]       = DR_SCAN_KP_ENTER;
    dR_Scancodes[SDL_SCANCODE_RCTRL]          = DR_SCAN_RCTRL;
    //dR_Scancodes[??]                        = DR_SCAN_E0_2AH;
    dR_Scancodes[SDL_SCANCODE_KP_DIVIDE]      = DR_SCAN_KP_DIVIDE;
    //dR_Scancodes[??]                        = DR_SCAN_E0_36H;
    dR_Scancodes[SDL_SCANCODE_PRINTSCREEN]    = DR_SCAN_PRINTSCREEN;
    dR_Scancodes[SDL_SCANCODE_RALT]           = DR_SCAN_RALT;
    //dR_Scancodes[??]                        = DR_SCAN_E0_46H;
    dR_Scancodes[SDL_SCANCODE_HOME]           = DR_SCAN_HOME;
    dR_Scancodes[SDL_SCANCODE_UP]             = DR_SCAN_UP;
    dR_Scancodes[SDL_SCANCODE_PAGEUP]         = DR_SCAN_PAGEUP;
    dR_Scancodes[SDL_SCANCODE_LEFT]           = DR_SCAN_LEFT;
    dR_Scancodes[SDL_SCANCODE_RIGHT]          = DR_SCAN_RIGHT;
    dR_Scancodes[SDL_SCANCODE_END]            = DR_SCAN_END;
    dR_Scancodes[SDL_SCANCODE_DOWN]           = DR_SCAN_DOWN;
    dR_Scancodes[SDL_SCANCODE_PAGEDOWN]       = DR_SCAN_PAGEDOWN;
    dR_Scancodes[SDL_SCANCODE_INSERT]         = DR_SCAN_INSERT;
    dR_Scancodes[SDL_SCANCODE_DELETE]         = DR_SCAN_DELETE;
}

void dRally_Keyboard_make(SDL_Scancode code){

    kmap[LAST_KEY = dR_Scancodes[code]] = 1;
    LAST_CHAR = (kmap[DR_SCAN_LSHIFT]|kmap[DR_SCAN_RSHIFT]) ? upper[LAST_KEY] : lower[LAST_KEY];

    if((kmap[DR_SCAN_LCTRL]|kmap[DR_SCAN_RCTRL])
        &&(kmap[DR_SCAN_LALT]|kmap[DR_SCAN_RALT])
        &&(kmap[DR_SCAN_DELETE]|kmap[DR_SCAN_KP_PERIOD])) ___2432c8h();
}

void dRally_Keyboard_break(SDL_Scancode code){

    kmap[dR_Scancodes[code]] = 0;
    LAST_KEY = 0;
}

byte dRally_Keyboard_popLastChar(void){

    byte    rslt;

    rslt = LAST_CHAR;
    LAST_CHAR = 0;

    return rslt;    
}

byte dRally_Keyboard_popLastKey(void){

    byte rslt;

    rslt = LAST_KEY;
    LAST_KEY = 0;
	
    return rslt;
}

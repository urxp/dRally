#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))

	extern byte * ___1a10cch;
	extern byte ___185ba9h[];

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(byte *, byte *, const char *, dword);

void ___17248h(void){

	___13248h_cdecl(0x2d, 0x83, 0x1ca, 0xe6, 1);

	___13094h_cdecl("", COOXY(60, 141));
	___13094h_cdecl("[Welcome to Death Rally.", COOXY(60, 157));
	___13094h_cdecl("", COOXY(60, 173));
	___13094h_cdecl("The race is on, in [Death Rally{, where life is", COOXY(60, 189));
	___13094h_cdecl("short & hot, fast & deadly. Watch the road,", COOXY(60, 205));
	___13094h_cdecl("hear the rumble. [Start out easy{, get the", COOXY(60, 221));
	___13094h_cdecl("feel of it. But remember: by the rules or", COOXY(60, 237));
	___13094h_cdecl("fry the rules, [play to win{. 'nuff said. Now", COOXY(60, 253));
	___13094h_cdecl("[ride your machine{, your motor-war-chariot.", COOXY(60, 269));
	___13094h_cdecl("", COOXY(60, 285));

	___12e78h_cdecl(___1a10cch, ___185ba9h, "CONTINUE", COOXY(0xc0, 0x13c));
}

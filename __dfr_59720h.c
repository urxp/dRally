#include "drally.h"

/*
 * ___59720h - "read one key / one character and feed the text buffer" (original DOS routine).
 *
 * Ported for the keyboard only: the original also polls the joystick/analog pad through inp_() and
 * uses it for key repeat, which does not exist on the 3DS (the pad arrives as keyboard scancodes
 * via platform_3ds/dr3_input.c).  The upstream project still had the "TODO / exit(1)" stub here,
 * which aborted the game as soon as a dialogue wanted a typed name.
 *
 * Return value: high byte = character, low byte = DOS scan code (callers test eax & 0xff).
 */
extern __BYTE__  dRally_Keyboard_popLastKey(void);
extern __BYTE__  dRally_Keyboard_popLastChar(void);

extern __DWORD__ ___199f4ch;    /* text input active          */
extern __DWORD__ ___199f48h;    /* write position in the buffer */
extern __BYTE__  ___24cc64h[];  /* buffer descriptor           */
extern __DWORD__ ___199f50h;    /* "END" marker handling       */

__DWORD__ ___199f54h = 0;       /* force-Enter flag (DOS BSS 0x199f54, not ported elsewhere) */

__DWORD__ ___59720h(void){

	__BYTE__	key;
	__BYTE__	chr;

	key = dRally_Keyboard_popLastKey();
	chr = dRally_Keyboard_popLastChar();

	if(___199f4ch != 0){

		__BYTE__ *	base = (__BYTE__ *)D(___24cc64h+8);
		__DWORD__	pos  = ___199f48h;

		base[pos] = key;	___199f48h = pos+1;
		base[pos+1] = chr;	___199f48h = pos+2;
	}

	if(___199f50h != 0){

		__BYTE__ *	p = (__BYTE__ *)D(___24cc64h+8) + ___199f48h;

		/* the input is terminated by the literal "END" marker */
		if((p[0] == 'E')&&(p[1] == 'N')&&(p[2] == 'D')) ___199f50h = 0;
		___199f48h += 2;
	}

	if(___199f54h != 0){

		chr = 0x0d;
		key = 0x1c;
	}

	return ((__DWORD__)chr << 8) | (__DWORD__)key;
}

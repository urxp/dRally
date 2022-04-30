#include "drally.h"
#include "netpage.h"

	extern NetPage * ___24e4ach;
	extern NetPage * ___24e4c0h;
	extern NetPage * ___24cee0h[4];

void ___61278h(void);

void ___4495ch(void){

	int 	n;;


	___61278h();

	n = -1;
	while(++n < 4) npg_zero(___24cee0h[n]);

	npg_zero(___24e4ach);
	npg_zero(___24e4c0h);
}

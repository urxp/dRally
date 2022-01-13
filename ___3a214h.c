#include "drally.h"

__DWORD__ ___3a2ach_cdecl(__DWORD__, __DWORD__);

void void___3a214h_cdecl(__BYTE__ * row_p, int row_size){

	int 	n;
	__BYTE__ 	previous, counter;

	previous = row_p[0];
	counter = 1;

	n = 0;
	while(++n < row_size){

		if(row_p[n] == previous){

			if(++counter == 0x3f){

				if(!___3a2ach_cdecl(previous, 0x3f)) return;

				counter = 0;
			}
		}
		else {

			if(counter&&!___3a2ach_cdecl(previous, counter)) return;

			counter = 1;
			previous = row_p[n];
		}
	}

	if(counter) ___3a2ach_cdecl(previous, counter);
}


__DWORD__ ___3a214h_cdecl(__BYTE__ * row_p, int row_size){

	void___3a214h_cdecl(row_p, row_size);

	return 0; // whatever

/*
	__DWORD__ 	eax, ebx;
	int 	n;
	__BYTE__ 	previous;

	previous = row_p[0];
	L(eax) = 1;
	ebx = 0;

	n = 0;
	while(++n < row_size){

		if(row_p[n] == previous){

			L(eax)++;
			if(L(eax) == 0x3f){

				if((eax = ___3a2ach_cdecl(previous, 0x3f))){

					ebx += eax;
				}
				else {
				
					return 	0;
				}

				L(eax) = 0;
			}
		}
		else {

			if(L(eax) != 0){

				if((eax = ___3a2ach_cdecl(previous, L(eax)))){

					ebx += eax;
				}
				else {

					return 	0;
				}
			}

			L(eax) = 1;
			previous = row_p[n];
		}
	}

	if(L(eax) != 0){

		if((eax = ___3a2ach_cdecl(previous, L(eax)))){

			ebx += eax;
		}
		else {

			return 0;
		}
	}
		
	return 	ebx;
	*/
}

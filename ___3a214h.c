#include "drally.h"

dword ___3a2ach_cdecl(dword, dword);

void void___3a214h_cdecl(byte * row_p, int row_size){

	int 	n;
	byte 	previous, counter;

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


dword ___3a214h_cdecl(byte * row_p, int row_size){

	void___3a214h_cdecl(row_p, row_size);

	return 0; // whatever

/*
	dword 	eax, ebx;
	int 	n;
	byte 	previous;

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

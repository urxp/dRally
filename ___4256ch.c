#include "drally.h"

	extern __POINTER__ ___243d80h;


static void helper00(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3, __DWORD__ A5, __DWORD__ B0, __DWORD__ B1){

	int 		i, j;
	__BYTE__ 	px;

	j = -1;
	while(++j < A3){

		i = -1;
		while(++i < A2){

			if((px = read_b(A1+A2*A3*(A5+B0)+A2*j+i)) != 0) write_b(___243d80h+B1+0x200*j+i, px);
		}
	}
}

// DAMAGE %
__DWORD__ ___4256ch_cdecl(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3, int A4, __DWORD__ A5, __DWORD__ A6, int A7, __DWORD__ A8){

	if(A4 < 0) A4 = 0;

	if((A4 >= 0)&&(A4 < 0xa)){			// 0...9

		if(A7 > 0){
		
			helper00(A1, A2, A3, A5, 0, A6-A7);
			helper00(A1, A2, A3, A5, A4, A6+A2-A7);
			
			return A6+2*A2-A7;
		}
		else {

			helper00(A1, A2, A3, A5, A4, A6);

			return A6+A2;
		}
	}

	if((A4 > 9)&&(A4 < 0x64)){			// 10...99

		if(A7 > 0){
			
			helper00(A1, A2, A3, A5, A4/10, A6-A7);
			helper00(A1, A2, A3, A5, A4%10, A6-A7+A2);

			return A6-A7+2*A2;
		}
		else {

			helper00(A1, A2, A3, A5, A4/10, A6+A7);
			helper00(A1, A2, A3, A5, A4%10, A6+A7+A2);

			return A6+A7+2*A2;
		}
	}

	if((A4 > 0x63)&&(A4 < 0x3e8)){		// 100...999

		helper00(A1, A2, A3, A5, A4/100, A6+A8);
		helper00(A1, A2, A3, A5, (A4%100)/10, A6+A8+A2);
		helper00(A1, A2, A3, A5, (A4%100)%10, A6+A8+2*A2);

		return A6+A8+3*A2;
	}

	return A6;
}

#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243ddeh[];
	extern __DWORD__ MY_CAR_IDX;
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___196dbch[];
	extern __BYTE__ ___196dc0h[];
	extern __BYTE__ ___196dc4h[];

__BYTE__ ___5994ch(void);

// INRACE CHEATS
void race___56594h(void){

	__BYTE__ 		scan;
	int 			n;
	struct_35e_t *	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	if((scan = ___5994ch()) != 0){

		n = -1;
		while(++n < 0xe) B(___243ddeh+n) = B(___243ddeh+n+1);

		B(___243ddeh+0xe) = scan;

		if((B(___243ddeh+0xb) == DR_SCAN_D)
		&&(B(___243ddeh+0xc) == DR_SCAN_R)
		&&(B(___243ddeh+0xd) == DR_SCAN_U)
		&&(B(___243ddeh+0xe) == DR_SCAN_G)){
		
			s_35e[MY_CAR_IDX].Drug = 0xf423f;	// 999999
		}

		if((B(___243ddeh+0xa) == DR_SCAN_D)
		&&(B(___243ddeh+0xb) == DR_SCAN_R)
		&&(B(___243ddeh+0xc) == DR_SCAN_I)
		&&(B(___243ddeh+0xd) == DR_SCAN_N)
		&&(B(___243ddeh+0xe) == DR_SCAN_K)){
			
			D(___1de580h+0x94*MY_CAR_IDX+0x20) = 1;
		}

		if((B(___243ddeh+0xb) == DR_SCAN_D)
		&&(B(___243ddeh+0xc) == DR_SCAN_R)
		&&(B(___243ddeh+0xd) == DR_SCAN_U)
		&&(B(___243ddeh+0xe) == DR_SCAN_B)){
		
			D(___196dbch) = 1;
		}


		if((B(___243ddeh+0xa) == DR_SCAN_D)
		&&(B(___243ddeh+0xb) == DR_SCAN_R)
		&&(B(___243ddeh+0xc) == DR_SCAN_E)
		&&(B(___243ddeh+0xd) == DR_SCAN_A)
		&&(B(___243ddeh+0xe) == DR_SCAN_D)){
		
			D(___196dc0h) = 1;
		}

		if((B(___243ddeh+0xb) == DR_SCAN_D)
		&&(B(___243ddeh+0xc) == DR_SCAN_R)
		&&(B(___243ddeh+0xd) == DR_SCAN_A)
		&&(B(___243ddeh+0xe) == DR_SCAN_G)){
	
			D(___196dc4h) = 1;
		}
	}

	if(D(___196dbch) != 0) D(___1de580h+0x94*MY_CAR_IDX+0x18) = 0x19000;
	if(D(___196dc0h) != 0) D(___1de580h+0x94*MY_CAR_IDX+0x30) = 0x19000;
	if(D(___196dc4h) != 0) D(___1de580h+0x94*MY_CAR_IDX+0x34) = 0x19000;
}

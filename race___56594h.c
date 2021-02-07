#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___243ddeh[];
	extern byte ___243ce8h[];
	extern byte ___1e6ed0h[];
	extern byte ___1de580h[];
	extern byte ___199f54h[];
	extern byte ___196dbch[];
	extern byte ___196dc0h[];
	extern byte ___196dc4h[];

byte ___5994ch(void);

// INRACE CHEATS
void race___56594h(void){

	byte 	scan;
	int 	n;


	if((scan = ___5994ch()) != 0){

		n = -1;
		while(++n < 0xe) B(n+___243ddeh) = B(n+___243ddeh+1);

		B(___243ddeh+0xe) = scan;

		if((B(___243ddeh+0xb) == DR_SCAN_D)
		&&(B(___243ddeh+0xc) == DR_SCAN_R)
		&&(B(___243ddeh+0xd) == DR_SCAN_U)
		&&(B(___243ddeh+0xe) == DR_SCAN_G)){
		
			D(___1e6ed0h+0x34e +0x35e*D(___243ce8h)) = 0xf423f;
		}

		if((B(___243ddeh+0xa) == DR_SCAN_D)
		&&(B(___243ddeh+0xb) == DR_SCAN_R)
		&&(B(___243ddeh+0xc) == DR_SCAN_I)
		&&(B(___243ddeh+0xd) == DR_SCAN_N)
		&&(B(___243ddeh+0xe) == DR_SCAN_K)){
			
			D(___1de580h+0x94*D(___243ce8h)+0x20) = 1;
		}

		if((B(___243ddeh+0xb) == DR_SCAN_D)
		&&(B(___243ddeh+0xc) == DR_SCAN_R)
		&&(B(___243ddeh+0xd) == DR_SCAN_U)
		&&(B(___243ddeh+0xe) == DR_SCAN_B)){
		
			D(___196dbch) = 1;
		}
		else {

			if(D(___199f54h) != 0) D(___196dbch) = 1;
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

	if(D(___196dbch) != 0) D(___1de580h+0x94*D(___243ce8h)+0x18) = 0x19000;
	if(D(___196dc0h) != 0) D(___1de580h+0x94*D(___243ce8h)+0x30) = 0x19000;
	if(D(___196dc4h) != 0) D(___1de580h+0x94*D(___243ce8h)+0x34) = 0x19000;
}

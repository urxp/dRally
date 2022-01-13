#include "drally.h"
#include "drally_keyboard.h"

__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___2ab50h(void);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);

void ___17324h(void){

	int 	mWait;
	__BYTE__ 	mScan;

	___5994ch();
	___59b3ch();

	mScan = 0;
	mWait = -1;
	
	while((mScan != DR_SCAN_ESCAPE)&&(mScan != DR_SCAN_ENTER)&&(mScan != DR_SCAN_KP_ENTER)){

		if(++mWait > 0xa) mScan = ___5994ch();

		___2ab50h();
		___2ab50h();
		___13bd4h_cdecl(0xa4, 0x141);
	}

	___5994ch();
	___59b3ch();
}

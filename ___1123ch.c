#include "drally.h"

	extern __DWORD__ MP_ERROR;

void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void dRally_Sound_release(void);
void __VGA3_SETMODE(void);
void dRally_System_clean(void);

void ___1123ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;

	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();
	dRally_Sound_release();
	dRally_System_clean();
	__VGA3_SETMODE();

	switch(MP_ERROR){
	case 0x64:
		printf("DEATH RALLY MP-ERROR: Not enough low memory available. About 570k needed!\n");
		break;
	case 0x65:
		printf("DEATH RALLY MP-ERROR: IPX-driver not installed!\n");
		break;
	case 0x66:
		printf("DEATH RALLY MP-ERROR: Socket table is full!\n");
		break;
	case 0x67:
		printf("DEATH RALLY MP-ERROR: Socket already open!\n");
		break;
	case 0x68:
		printf("DEATH RALLY MP-ERROR: COM-PORT not detected!\n");
		break;
	default:
		printf("DEATH RALLY MP-ERROR: Unknown error!\n");
		break;
	}

	printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");
	exit(0x70);
}

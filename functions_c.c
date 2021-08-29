#include "drally.h"

char * strupr_watcom106(char *);

FILE * strupr_fopen(const char * file_name, const char * mode){

	char buffer[256];

	if(strlen(file_name) > 255){

		printf("[strupr_fopen] File name too long: (%s)\n", file_name);
		return ((void *)0);
	}

	return fopen(strupr_watcom106(strcpy(buffer, file_name)), mode);
}

dword GET_FILE_SIZE(const char * file_name){

	FILE * fd;
	dword size;

	if(!(fd = strupr_fopen(file_name, "rb"))) return 0;

	fseek(fd, 0, SEEK_END);
	size = (dword)ftell(fd);
	fclose(fd);

	return size;
}

dword MULSHIFT(dword d0, dword d1){

	dword 	rslt, q_rslt;

	q_rslt = ((qword)d0*(qword)d1)>>0x10; 
	rslt = (d0>>0x10)*d1 + (d0&0xffff)*(d1>>0x10) + (((d0&0xffff)*(d1&0xffff))>>0x10);

	if(q_rslt != rslt) printf("MULSHIFT doesn't match\n");

	return rslt;
}

void my_ceil(double * dval){

	*dval = ceil(*dval);
}

extern void * ___1a1100h__VESA101h_DefaultScreenBuffer;
extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void restoreDefaultScreenBuffer(void){
    
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
}

extern void * ___1a10e4h__VESA101h_DefaultScreenBufferA;
extern void * ___1a1124h__VESA101h_ScreenBufferA;

void restoreDefaultScreenBufferA(void){
		
	___1a1124h__VESA101h_ScreenBufferA = ___1a10e4h__VESA101h_DefaultScreenBufferA;
}

// ASM HELPERS

void ___idiv32(void * eax, void * edx, int dv){

	long long 	ll_tmp;

	ll_tmp = D(edx);
	ll_tmp <<= 0x20;
	ll_tmp += D(eax);
	
	D(eax) = ll_tmp/dv;
	D(edx) = ll_tmp%dv;
}

void ___idiv16(void * ax, void * dx, short dv){

	int 	ll_tmp;

	ll_tmp = W(dx);
	ll_tmp <<= 0x10;
	ll_tmp += W(ax);
	
	W(ax) = ll_tmp/dv;
	W(dx) = ll_tmp%dv;
}

void ___imul32(void * eax, void * edx, int mp){

	long long 	ll_tmp;

	ll_tmp = (long long)(int)D(eax)*mp;

	D(eax) = ll_tmp;
	D(edx) = ll_tmp>>0x20;
}

double create_double(int lsb, int b1, int b2, int b3, int b4, int b5, int b6, int msb){

	unsigned long long 	rslt;

	rslt = 0;
	rslt <<= 8; rslt |= msb&0xff;
	rslt <<= 8; rslt |= b6&0xff;
	rslt <<= 8; rslt |= b5&0xff;
	rslt <<= 8; rslt |= b4&0xff;
	rslt <<= 8; rslt |= b3&0xff;
	rslt <<= 8; rslt |= b2&0xff;
	rslt <<= 8; rslt |= b1&0xff;
	rslt <<= 8; rslt |= lsb&0xff;

	return *(double *)&rslt;
}

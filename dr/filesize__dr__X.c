#include "x86.h"

	int open__clib3r(const char * path, int oflag, ...);
	int close__clib3r(int fd);
	int filelength__clib3r(int fd);


// ~3a214h (-1 label)
int getFileSize__dr(const char * s){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x100];
	byte * 	esp = __esp + 0x100;

	eax = s;

//		push    14h
//		call    __CHK
//		push    ebx
//		push    edx
//		push    200h			;; O_RDONLY | O_BINARY
	PUSH(0x200);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(open__clib3r)
	eax = open__clib3r(D(esp), D(esp+4));
//		add     esp, byte 8
	esp += 8;
//		mov     edx, eax
	edx = eax;
//		call    __CEXT_F(filelength__clib3r)
	eax = filelength__clib3r(eax);
//		mov     ebx, eax
	ebx = eax;
//		mov     eax, edx
	eax = edx;
//		call    __CEXT_F(close__clib3r)
	eax = close__clib3r(eax);
//		mov     eax, ebx
	eax = ebx;
//		pop     edx
//		pop     ebx
//		retn  
	return eax;
}

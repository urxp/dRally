#include "x86.h"

	// "DEATH RALLY ErroR: Cannot allocate memory!\n"
    extern const char ___182df4h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182e20h[];

    extern byte NetworkConnectionEstablished[];
    
    dword allocMemoryLock(dword, dword);
    void freeAllocInfoTable(void);
    void setmode3h__video(void);
    void ___623d4h(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);


// 3f71ch
void * allocMemSafe(dword size){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x80];
	byte *	esp = __esp + 0x80;

	eax = size;

//		push    18h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		xor     edx, edx
	edx = 0;
//		call    __CEXT_F(allocMemoryLock)
	eax = allocMemoryLock(eax, edx);
//		mov     esi, eax
	esi = eax;
//		test    eax, eax
//		jne     ___3f774h
	if(eax != 0) goto ___3f774h;
//		call    __CEXT_F(freeAllocInfoTable)
	freeAllocInfoTable();
//		call    __CEXT_F(setmode3h__video)
	setmode3h__video();
//		push    __CEXT_V(___182df4h)
	PUSH(___182df4h);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp));
//		add     esp, byte 4
	esp += 4;
//		push    __CEXT_V(___182e20h)
	PUSH(___182e20h);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp));
//		mov     edx, [__CEXT_V(NetworkConnectionEstablished)]
	edx = D(NetworkConnectionEstablished);
//		add     esp, byte 4
	esp += 4;
//		test    edx, edx
//		je      ___3f76ah
	if(edx == 0) goto ___3f76ah;
//		call    __CEXT_F(___623d4h)
	___623d4h();
___3f76ah:
//		mov     eax, 70h
	eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
___3f774h:
//		mov     eax, esi
	eax = esi;
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return eax;
}

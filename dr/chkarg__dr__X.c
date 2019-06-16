typedef unsigned char   byte;
typedef unsigned long   dword;

    extern byte CLArgc[];
    extern byte CLArgv[];

    int stricmp__clib3r(const char *, const char *);

dword chkarg__dr(dword A){

	dword 	eax, ebx, ecx, edx, esi, edi;

	eax = A;

//		push    18h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi

//		mov     esi, eax
	esi = eax;
//		mov     ebx, 1
	ebx = 1;
//		cmp     ebx, [__CEXT_V(CLArgc)]
//		jge     ___10056h
	if((int)ebx >= *(int *)CLArgc) goto ___10056h;
//		mov     ecx, 4
	ecx = 4;
___10033h:
//		mov     eax, esi
	eax = esi;
//		mov     edx, [ecx+__CEXT_V(CLArgv)]
	edx = *(dword *)(ecx+CLArgv);
//		call    __CEXT_F(stricmp__clib3r)
	eax = stricmp__clib3r(eax, edx);
//		test    eax, eax
//		jne     ___10048h
	if(eax != 0) goto ___10048h;
//		mov     eax, ebx
	eax = ebx;
//		jmp     ___10058h
	goto ___10058h;
___10048h:
//		mov     edi, [__CEXT_V(CLArgc)]
	edi = *(dword *)CLArgc;
//		inc     ebx
	ebx++;
//		add     ecx, 4
	ecx += 4;
//		cmp     ebx, edi
//		jl      ___10033h
	if((int)ebx < (int)edi)goto ___10033h;
___10056h:
//		xor     eax, eax
	eax = 0;
___10058h:
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn
	return eax;
}

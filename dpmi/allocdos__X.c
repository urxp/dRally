typedef unsigned char   byte;
typedef unsigned long   dword;

    int int386__clib3r(int inter_no, dword in_regs, dword out_regs);

dword allocDOSMemBlock__dpmi(dword A, dword B){

    dword   eax, ebx, ecx, edx;
    byte    esp[0x1C];

        eax = A;
        edx = B;

//		push    28h
//		call    __CHK
//		push    ebx
//		push    ecx
//		sub     esp, 1ch
//		mov     ecx, edx
	ecx = edx;
//		mov     dword [esp], 100h
	*(dword *)esp = 0x100;
//		add     eax, 0fh
	eax += 0xF;
//		shr     eax, 4
	eax >>= 4;
//		mov     [esp+4], eax
	*(dword *)(esp+4) = eax;
//		mov     ebx, esp
	ebx = esp;
//		mov     edx, esp
	edx = esp;
//		mov     eax, 31h
	eax = 0x31;
//		call    __CEXT_F(int386__clib3r)
	eax = int386__clib3r(eax, edx, ebx);
//		mov     eax, [esp+0ch]
	eax = *(dword *)(esp+0xC);
//		mov     [ecx], eax
	*(dword *)ecx = eax;
//		cmp     dword [esp+18h], 0
//		je      ok
	if(*(dword *)(esp+0x18) == 0) goto ok;
//		xor     eax, eax
	eax = 0;
//		jmp     failed
	goto failed;
ok:
//		mov     eax, [esp]
	eax = *(dword *)esp;
//		and     eax, 0ffffh
	eax &= 0xffff;
//		shl     eax, 4
	eax <<= 4;
failed:
//		add     esp, 1ch
//		pop     ecx
//		pop     ebx
//		retn

    return eax;
}

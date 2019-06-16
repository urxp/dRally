typedef unsigned char   byte;
typedef unsigned long   dword;

typedef struct {

	dword   eax;
	dword   ebx;
	dword   ecx;
	dword   edx;
	dword   esi;
	dword   edi;
	dword   cflag;
} dwordregs;

    int int386__clib3r(int inter_no, dwordregs *, dwordregs *);

void restrdos__dr(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	dwordregs	regs;

//		push    34h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		sub     esp, 1ch
//		mov     edx, 3
	edx = 3;
//		mov     ebx, esp
	ebx = &regs;
//		mov     eax, 10h
	eax = 0x10;
//		mov     ecx, 708h
	ecx = 0x708;
//		mov     esi, 200h
	esi = 0x200;
//		mov     [esp], dx
	regs.eax = edx;
//		mov     edx, esp
	edx = &regs;
//		xor     edi, edi
	edi = 0;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
//		mov     ebx, 100h
	ebx = 0x100;
//		mov     edx, esp
	edx = &regs;
//		mov     eax, 10h
	eax = 0x10;
//		mov     [esp], bx
	regs.eax = ebx;
//		mov     ebx, esp
	ebx = &regs;
//		mov     [esp+8], cx
	regs.ecx = ecx;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
//		mov     eax, 1700h
	eax = 0x1700;
//		mov     ebx, esp
	ebx = &regs;
//		mov     edx, esp
	edx = &regs;
//		mov     [esp], si
	regs.eax = esi;
//		mov     [esp+0ch], ax
	regs.edx = eax;
//		mov     eax, 10h
	eax = 0x10;
//		mov     [esp+4], di
	regs.ebx = edi;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
//		add     esp, 1ch
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn
}

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

	dwordregs	regs;

	regs.eax = 3;
	int386__clib3r(0x10, &regs, &regs);

	regs.eax = 0x100;
	regs.ecx = 0x708;
	int386__clib3r(0x10, &regs, &regs);

	regs.eax = 0x200;
	regs.edx = 0x1700;
	regs.ebx = 0;
	int386__clib3r(0x10, &regs, &regs);
}

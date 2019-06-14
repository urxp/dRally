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

dword allocDOSMemBlock__dpmi(dword nbytes, dword * selector){

    dwordregs    regs;

	regs.eax = 0x100;                   // ALLOCATE DOS MEMORY BLOCK
	regs.ebx = (nbytes + 15) >> 4;      // number o paragraphs (16 bytes)
    int386__clib3r(0x31, &regs, &regs);
	*selector = regs.edx;

    return regs.cflag ? 0 : (regs.eax & 0x0000ffff) << 4;
}

#define al 	((byte *)&eax)[0]
#define ah 	((byte *)&eax)[1]
#define ax 	((word *)&eax)[0]
#define bl 	((byte *)&ebx)[0]
#define bh 	((byte *)&ebx)[1]
#define bx 	((word *)&ebx)[0]
#define cl 	((byte *)&ecx)[0]
#define ch 	((byte *)&ecx)[1]
#define cx 	((word *)&ecx)[0]
#define dl 	((byte *)&edx)[0]
#define dh 	((byte *)&edx)[1]
#define dx 	((word *)&edx)[0]
#define si 	((word *)&esi)[0]
#define di 	((word *)&edi)[0]

#define B(b)	(*(byte *)(b))
#define W(w)	(*(word *)(w))
#define D(d)	(*(dword *)(d))

typedef unsigned char   byte;
typedef unsigned short 	word;
typedef unsigned long   dword;

#pragma pack(1)

typedef struct {
	dword   eax;
	dword   ebx;
	dword   ecx;
	dword   edx;
    dword   esi;
	dword   edi;
	dword   cflag;
} dwordregs;

typedef struct AllocEntry {
	byte 	type;		// +0
	void * 	linear;		// +1
	dword 	nbytes;		// +5
	dword 	handle;		// +9
	word 	selector;	// +0dh
	word 	segment;	// +0dh
	byte 	lock;		// +11h
} AllocEntry;

    extern byte AllocEntries[];
    extern byte ___24ccb4h[];
    extern byte ___24ccbeh[];

    extern byte REGS1_EBX[];
    extern byte REGS1_ECX[];
    extern byte REGS1_ESI[];
    extern byte REGS1_EDI[];
    extern byte REGS1_EAX[];
    extern byte REGS1_CFLAG[];

	int int386__REGS1(int inter_no);
    void ___58b20h(int errn);
    void ___600b0h(void);
    void freeMemory(dword);
    void ___5ff99h(void);

void freeAllocInfoTable(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		call    __CEXT_F(___5ff99h)
	___5ff99h();
//		mov     ebx, [__CEXT_V(AllocEntries)]
	ebx = D(AllocEntries);
___5ec13h:
//		mov     edx, ebx
	edx = ebx;
//		mov     cl, [ebx]
	cl = B(ebx);
//		xor     eax, eax
	eax = 0;
//		test    cl, cl
//		jne     ___5ec2fh
	if(cl != 0) goto ___5ec2fh;
___5ec1dh:
//		cmp     eax, 0e38h
//		jae     ___5ec2fh
	if(eax >= 0xe38) goto ___5ec2fh;
//		mov     ch, [edx+12h]
	ch = B(edx+0x12);
//		add     edx, 12h
	edx += 0x12;
//		inc     eax
	eax++;
//		test    ch, ch
//		je      ___5ec1dh
	if(ch == 0) goto ___5ec1dh;
___5ec2fh:
//		cmp     eax, 0e38h
//		jae     ___5ec44h
	if(eax >= 0xe38) goto ___5ec44h;
//		imul    eax, eax, 12h
	eax = (int)eax * 0x12;
//		mov     eax, [ebx+eax+1]
	eax = D(ebx+eax+1);
//		call    __CEXT_F(freeMemory)
	freeMemory(eax);
//		jmp     ___5ec13h
	goto ___5ec13h;
___5ec44h:
//		mov     al, [__CEXT_V(___24ccbeh)]
	al = B(___24ccbeh);
//		mov     edx, __CEXT_V(AllocEntries)
	edx = AllocEntries;
//		test    al, al
//		je      ___5ec9ch
	if(al == 0) goto ___5ec9ch;
//		mov     eax, [__CEXT_V(AllocEntries)]
	eax = D(AllocEntries);
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_EBX)], ax
	W(REGS1_EBX) = ax;
//		mov     ax, [__CEXT_V(AllocEntries)]
	ax = W(AllocEntries);
//		mov     [__CEXT_V(REGS1_ECX)], ax
	W(REGS1_ECX) = ax;
//		mov     eax, [__CEXT_V(___24ccb4h)]
	eax = D(___24ccb4h);
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_ESI)], ax
	W(REGS1_ESI) = ax;
//		mov     ax, [__CEXT_V(___24ccb4h)]
	ax = W(___24ccb4h);
//		mov     ebx, 601h
	ebx = 0x601;
//		mov     [__CEXT_V(REGS1_EDI)], ax
	W(REGS1_EDI) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		mov     [__CEXT_V(REGS1_EAX)], bx
	W(REGS1_EAX) = bx;
//		call    __CEXT_F(int386_REGS1)
	int386__REGS1(eax);
___5ec9ch:
//		mov     ax, [edx+8]
	ax = W(edx+8);
//		mov     [__CEXT_V(REGS1_EDI)], ax
	W(REGS1_EDI) = ax;
//		mov     eax, [edx+8]
	eax = D(edx+8);
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     ecx, 502h
	ecx = 0x502;
//		mov     [__CEXT_V(REGS1_ESI)], ax
	W(REGS1_ESI) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		mov     [__CEXT_V(REGS1_EAX)], cx
	W(REGS1_EAX) = cx;
//		call    __CEXT_F(int386_REGS1)
	int386__REGS1(eax);
//		cmp     dword [__CEXT_V(REGS1_CFLAG)], 0
//		je      ___5ecdbh
	if(D(REGS1_CFLAG) == 0) goto ___5ecdbh;
//		push    5
//		call    __CEXT_F(___58b20h)
	___58b20h(5);
//		add     esp, 4
___5ecdbh:
//		mov     ax, [edx+0ch]
	ax = W(edx+0xc);
//		mov     esi, 1
	esi = 1;
//		mov     [__CEXT_V(REGS1_EBX)], ax
	W(REGS1_EBX) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		mov     [__CEXT_V(REGS1_EAX)], si
	W(REGS1_EAX) = si;
//		call    __CEXT_F(int386_REGS1)
	int386__REGS1(eax);
//		cmp     dword [__CEXT_V(REGS1_CFLAG)], 0
//		je      ___5ed0eh
	if(D(REGS1_CFLAG) == 0) goto ___5ed0eh;
//		push    9
//		call    __CEXT_F(___58b20h)
	___58b20h(9);
//		add     esp, 4
___5ed0eh:
//		mov     dword [edx+8], 0
	D(edx+8) = 0;
//		mov     word [edx+0ch], 0
	W(edx+0xc) = 0;
//		mov     dword [edx], 0
	D(edx) = 0;
//		mov     dword [edx+4], 0
	D(edx+4) = 0;
//		mov     byte [edx+0eh], 0
	B(edx+0xe) = 0;
//		call    __CEXT_F(___600b0h)
	___600b0h();
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}

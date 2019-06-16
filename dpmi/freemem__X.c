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

    extern byte REGS1_EBX[];
    extern byte REGS1_ECX[];
    extern byte REGS1_EDX[];
    extern byte REGS1_ESI[];
    extern byte REGS1_EDI[];
    extern byte REGS1_EAX[];
    extern byte REGS1_CFLAG[];

    extern byte REGS1[];

    void ___58b20h(int errn);
	int int386__clib3r(int inter_no, dwordregs *, dwordregs *);

void freeMemory(void * allocM){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;

    eax = (dword)allocM;

//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		mov     edx, eax
	edx = eax;
//		mov     esi, [__CEXT_V(AllocEntries)]
	esi = D(AllocEntries);
//		xor     ecx, ecx
	ecx = 0;
//		mov     ebx, [esi+1]
	ebx = D(esi+1);
//		mov     eax, esi
	eax = esi;
//		cmp     edx, ebx
//		je      ___5ef27h
	if(edx == ebx) goto ___5ef27h;
___5ef14h:
//		cmp     ecx, 0e38h
//		jae     ___5ef27h
	if(ecx >= 0xe38) goto ___5ef27h;
//		mov     edi, [eax+13h]
	edi = D(eax+0x13);
//		add     eax, 12h
	eax += 0x12;
//		inc     ecx
	ecx++;
//		cmp     edx, edi
//		jne     ___5ef14h
	if(edx != edi) goto ___5ef14h;
___5ef27h:
//		cmp     ecx, 0e38h
//		je      ___5ef3eh
	if(ecx == 0xe38) goto ___5ef3eh;
//		lea     eax, [ecx*8+0]
	eax = ecx*8;
//		add     eax, ecx
	eax += ecx;
//		cmp     byte [esi+eax*2], 0
//		jne     ___5ef48h
	if(B(esi+eax*2) != 0) goto ___5ef48h;
___5ef3eh:
//		push    0eh
//		call    __CEXT_F(___58b20h)
	___58b20h(0xe);
//		add     esp, 4
___5ef48h:
//		lea     eax, [ecx*8+0]
	eax= ecx*8;
//		add     eax, ecx
	eax += ecx;
//		add     eax, eax
	eax += eax;
//		lea     edi, [esi+eax]
	edi = esi+eax;
//		cmp     byte [edi+11h], 0
//		je      ___5efa9h
	if(B(edi+0x11) == 0) goto ___5efa9h;
//		mov     eax, [edi+1]
	eax = D(edi+1);
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_EBX)], ax
	W(REGS1_EBX) = ax;
//		mov     ax, [edi+1]
	ax = W(edi+1);
//		mov     edx, 601h
	edx = 0x601;
//		mov     [__CEXT_V(REGS1_ECX)], ax
	W(REGS1_ECX) = ax;
//		mov     eax, [edi+5]
	eax = D(edi+5);
//		mov     ebx, __CEXT_V(REGS1)
	ebx = REGS1;
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_EAX)], dx
	W(REGS1_EAX) = dx;
//		mov     [__CEXT_V(REGS1_ESI)], ax
	W(REGS1_ESI) = ax;
//		mov     ax, [edi+5]
	ax = W(edi+5);
//		mov     edx, ebx
	edx = ebx;
//		mov     [__CEXT_V(REGS1_EDI)], ax
	W(REGS1_EDI) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
//		mov     byte [edi+11h], 0
	B(edi+0x11) = 0;
___5efa9h:
//		lea     eax, [ecx*8+0]
	eax = ecx*8;
//		add     eax, ecx
	eax += ecx;
//		add     eax, eax
	eax += eax;
//		add     eax, esi
	eax += esi;
//		mov     dl, [eax]
	dl = B(eax);
//		cmp     dl, 1
//		jb      ___5f01eh
	if(dl < 1) goto ___5f01eh;
//		jbe     ___5efc6h
	if(dl <= 1) goto ___5efc6h;
//		cmp     dl, 2
//		je      ___5eff7h
	if(dl == 2) goto ___5eff7h;
//		jmp     ___5f01eh
	goto ___5f01eh;
___5efc6h:
//		mov     edi, 502h
	edi = 0x502;
//		mov     ebx, __CEXT_V(REGS1)
	ebx = REGS1;
//		mov     dx, [eax+9]
	dx = W(eax+9);
//		mov     eax, [eax+9]
	eax = D(eax+9);
//		mov     [__CEXT_V(REGS1_EDI)], dx
	W(REGS1_EDI) = dx;
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     edx, ebx
	edx = ebx;
//		mov     [__CEXT_V(REGS1_ESI)], ax
	W(REGS1_ESI) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		mov     [__CEXT_V(REGS1_EAX)], di
	W(REGS1_EAX) = di;
//		jmp     ___5f019h
	goto ___5f019h;
___5eff7h:
//		mov     ebx, 101h
	ebx = 0x101;
//		mov     ax, [eax+0dh]
	ax = D(eax+0xd);
//		mov     [__CEXT_V(REGS1_EAX)], bx
	W(REGS1_EAX) = bx;
//		mov     [__CEXT_V(REGS1_EDX)], ax
	W(REGS1_EDX) = ax;
//		mov     ebx, __CEXT_V(REGS1)
	ebx = REGS1;
//		mov     eax, 31h
	eax = 0x31;
//		mov     edx, ebx
	edx = ebx;
___5f019h:
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
___5f01eh:
//		cmp     dword [__CEXT_V(REGS1_CFLAG)], 0
//		je      ___5f031h
	if(D(REGS1_CFLAG) == 0) goto ___5f031h;
//		push    0eh
//		call    __CEXT_F(___58b20h)
	___58b20h(0xe);
//		add     esp, 4
___5f031h:
//		lea     eax, [ecx*8+0]
	eax = ecx*8;
//		add     eax, ecx
	eax += ecx;
//		mov     byte [esi+eax*2], 0
	B(esi+eax*2) = 0;
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    	
	return eax;

/*
;		push    ebx
;		push    ecx
;		push    edx
;		mov     ebx, [__CEXT_V(AllocEntries)]
;___5f04dh:
;		mov     edx, ebx
;		mov     cl, [ebx]
;		xor     eax, eax
;		test    cl, cl
;		jne     short ___5f069h
;___5f057h:
;		cmp     eax, dword 0e38h
;		jae     short ___5f069h
;		mov     ch, [edx+12h]
;		add     edx, byte 12h
;		inc     eax
;		test    ch, ch
;		je      short ___5f057h
;___5f069h:
;		cmp     eax, dword 0e38h
;		jae     short ___5f040h
;		imul    eax, eax, byte 12h
;		mov     eax, [ebx+eax+1]
;		call    near __CEXT_F(freeMemory)
;		jmp     short ___5f04dh
;___5f040h:
;		pop     edx
;		pop     ecx
;		pop     ebx
;		retn  
*/
}

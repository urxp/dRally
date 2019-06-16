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

typedef struct {

	dword   eax;
	dword   ebx;
	dword   ecx;
	dword   edx;
    dword   esi;
	dword   edi;
	dword   cflag;
} dwordregs;

    extern byte AllocEntries[];
    extern byte REGS1[];
    extern byte REGS1_EAX[];
    extern byte REGS1_EBX[];
    extern byte REGS1_ECX[];
    extern byte REGS1_EDX[];
    extern byte REGS1_ESI[];
    extern byte REGS1_EDI[];
    extern byte REGS1_CFLAG[];

    void ___58b20h(int errn);
	int int386__clib3r(int inter_no, dwordregs *, dwordregs *);

void * allocMemoryLock(dword A1, dword A2){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[4];

	eax = A1;
	edx = A2;

//		push    ebx
//		push    ecx
//		push    esi
//		push    edi
//		sub     esp, byte 4
//		mov     esi, eax
	esi = eax;
//		mov     [esp], dl
	B(esp) = dl;
//		mov     edi, [__CEXT_V(AllocEntries)]
	edi = D(AllocEntries);
//		xor     ecx, ecx
	ecx = 0;
//		mov     dl, [edi]
	dl = B(edi);
//		mov     eax, edi
	eax = edi;
//		test    dl, dl
//		je      ___5ed67h
	if(dl == 0) goto ___5ed67h;
___5ed54h:
//		cmp     ecx, 0e38h
//		jae     ___5ed67h
	if(ecx >= 0xe38) goto ___5ed67h;
//		mov     dh, [eax+12h]
	dh = B(eax+0x12);
//		add     eax, byte 12h
	eax += 0x12;
//		inc     ecx
	ecx++;
//		test    dh, dh
//		jne     ___5ed54h
	if(dh != 0) goto ___5ed54h;
___5ed67h:
//		cmp     ecx, 0e38h
//		jne     ___5ed79h
	if(ecx != 0xe38) goto ___5ed79h;
//		push    byte 0dh
//		call    __CEXT_F(___58b20h)
	___58b20h(0xd);
//		add     esp, byte 4
___5ed79h:
//		cmp     esi, 100000h
//		jb      ___5ed87h
	if(esi < 0x100000) goto ___5ed87h;
//		or      si, 0fffh
	si |= 0x0fff;
//		inc     esi
	esi++;
___5ed87h:
//		mov     edx, 501h
	edx = 0x501;
//		mov     eax, esi
	eax = esi;
//		mov     ebx, __CEXT_V(REGS1)
	ebx = REGS1;
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_EAX)], dx
	W(REGS1_EAX) = dx;
//		mov     [__CEXT_V(REGS1_EBX)], ax
	W(REGS1_EBX) = ax;
//		mov     edx, ebx
	edx = ebx;
//		mov     eax, 31h
	eax = 0x31;
//		mov     [__CEXT_V(REGS1_ECX)], si
	W(REGS1_ECX) = si;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
//		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
//		jne     ___5ee09h
	if(D(REGS1_CFLAG) != 0) goto ___5ee09h;
//		xor     eax, eax
	eax = 0;
//		mov     ax, [__CEXT_V(REGS1_ESI)]
	ax = W(REGS1_ESI);
//		mov     edx, eax
	edx = eax;
//		xor     eax, eax
	eax = 0;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     ax, [__CEXT_V(REGS1_EDI)]
	ax = W(REGS1_EDI);
//		lea     ebx, [edx+eax]
	ebx = edx+eax;
//		mov     edx, ecx
	edx = ecx;
//		lea     eax, [ecx*8+0]
	eax = ecx*8;
//		add     eax, ecx
	eax += ecx;
//		xor     edx, ecx
	edx ^= ecx; 
//		mov     [edi+eax*2+9], ebx
	D(edi+eax*2+9) = ebx;
//		mov     dx, [__CEXT_V(REGS1_EBX)]
	dx = W(REGS1_EBX);
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		shl     ebx, 10h
	ebx <<= 0x10;
//		mov     dx, [__CEXT_V(REGS1_ECX)]
	dx = W(REGS1_ECX);
//		mov     byte [edi+eax*2], 1
	B(edi+eax*2) = 1;
//		add     edx, ebx
	edx += ebx;
//		mov     [edi+eax*2+1], edx
	D(edi+eax*2+1) = edx;
//		jmp     ___5ee7ah
	goto ___5ee7ah;
___5ee09h:
//		mov     ebx, 100h
	ebx = 0x100;
//		lea     eax, [esi+0fh]
	eax = esi+0xf;
//		mov     [__CEXT_V(REGS1_EAX)], bx
	W(REGS1_EAX) = bx;
//		shr     eax, 4
	eax >>= 4;
//		mov     ebx, __CEXT_V(REGS1)
	ebx = REGS1;
//		mov     [__CEXT_V(REGS1_EBX)], ax
	W(REGS1_EBX) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		mov     edx, ebx
	edx = ebx;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
//		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
//		je      ___5ee45h
	if(D(REGS1_CFLAG) == 0) goto ___5ee45h;
//		push    byte 0dh
//		call    __CEXT_F(___58b20h)
	___58b20h(0xd);
//		add     esp, byte 4
___5ee45h:
//		lea     eax, [ecx*8+0]
	eax = ecx*8;
//		add     eax, ecx
	eax += ecx;
//		mov     dx, [__CEXT_V(REGS1_EAX)]
	dx = W(REGS1_EAX);
//		mov     [edi+eax*2+0fh], dx
	W(edi+eax*2+0xf) = dx;
//		xor     edx, edx
	edx = 0;
//		mov     dx, [__CEXT_V(REGS1_EAX)]
	dx = W(REGS1_EAX);
//		shl     edx, 4
	edx <<= 4;
//		mov     [edi+eax*2+1], edx
	D(edi+eax*2+1) = edx;
//		mov     dx, [__CEXT_V(REGS1_EDX)]
	dx = W(REGS1_EDX);
//		mov     byte [edi+eax*2], 2
	B(edi+eax*2) = 2;
//		mov     [edi+eax*2+0dh], dx
	W(edi+eax*2+0xd) = dx;
___5ee7ah:
//		lea     eax, [ecx*8+0]
	eax = ecx*8;
//		add     eax, ecx
	eax += ecx;
//		add     eax, eax
	eax += eax;
//		add     eax, edi
	eax += edi;
//		mov     bl, [esp]
	bl = B(esp);
//		mov     [eax+5], esi
	D(eax+5) = esi;
//		test    bl, bl
//		je      ___5eeddh
	if(bl == 0) goto ___5eeddh;
//		mov     esi, 600h
	esi = 0x600;
//		mov     edx, [eax+1]
	edx = D(eax+1);
//		mov     ebx, __CEXT_V(REGS1)
	ebx = REGS1;
//		shr     edx, 10h
	edx >>= 0x10;
//		mov     [__CEXT_V(REGS1_EAX)], si
	W(REGS1_EAX) = si;
//		mov     [__CEXT_V(REGS1_EBX)], dx
	W(REGS1_EBX) = dx;
//		mov     edx, [eax+5]
	edx = D(eax+5);
//		mov     si, [eax+1]
	si = W(eax+1);
//		shr     edx, 10h
	edx >>= 0x10;
//		mov     ax, [eax+5]
	ax = W(eax+5);
//		mov     [__CEXT_V(REGS1_ESI)], dx
	W(REGS1_ESI) = dx;
//		mov     [__CEXT_V(REGS1_EDI)], ax
	W(REGS1_EDI) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		mov     edx, ebx
	edx = ebx;
//		mov     [__CEXT_V(REGS1_ECX)], si
	W(REGS1_ECX) = si;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
___5eeddh:
//		lea     eax, [ecx*8+0]
	eax = ecx*8;
//		add     eax, ecx
	eax += ecx;
//		add     eax, eax
	eax += eax;
//		add     edi, eax
	edi += eax;
//		mov     al, [esp]
	al = B(esp);
//		mov     [edi+11h], al
	B(edi+0x11) = al;
//		mov     eax, [edi+1]
	eax = D(edi+1);
//		add     esp, byte 4
//		pop     edi
//		pop     esi
//		pop     ecx
//		pop     ebx
//		retn    
	return eax;
}

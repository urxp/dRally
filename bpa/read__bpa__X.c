#define al 	((byte *)&eax)[0]
#define ah 	((byte *)&eax)[1]
#define ax 	((word *)&eax)[0]
#define bl 	((byte *)&ebx)[0]
#define bh 	((byte *)&ebx)[1]
#define bx 	((word *)&ebx)[0]

typedef unsigned char	byte;
typedef unsigned short	word;
typedef unsigned long	dword;

    extern byte ___24bb60h[];
    extern byte ___18309ch[];
    extern byte ___1830ach[];
    extern byte ___1830b0h[];
    extern byte ___183098h[];
    extern byte ___24bb6dh[];

	dword fopen__clib3r(const char * pathname, const char * mode);
	dword fread__clib3r(void * ptr, dword size, dword nmemb, dword stream);
	int fseek__clib3r(dword stream, long offset, int whence);
    int fclose__clib3r(dword stream);

	char * strupr__clib3r(char * s);
	int strcmp__clib3r(const char * s1, const char * s2);

	void exitErrorMsg__dr(const char * errmsg);

void read__bpa(const char * bpa, void * dst, const char * file){

	dword	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[0x74];

	eax = bpa;
    edx = dst;
    ebx = file;

//		push    88h
//		call    __CHK
//		push    ecx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 74h
//		mov     [esp+68h], eax
	*(dword *)(esp+0x68) = eax;
//		mov     [esp+6ch], edx
	*(dword *)(esp+0x6c) = edx;
//		mov     [esp+64h], ebx
	*(dword *)(esp+0x64) = ebx;
//		lea     edi, [esp+50h]
	edi = esp+0x50;
//		mov     esi, ebx
	esi = ebx;
//		mov     edx, ___183098h
	edx = ___183098h;
//		push    edi
___429b1h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___429c9h
	if(al == 0) goto ___429c9h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___429b1h
	if(al != 0) goto ___429b1h;
___429c9h:
//		pop     edi
//		mov     eax, [esp+68h]
	eax = *(dword *)(esp+0x68);
//		mov     ebx, 1
	ebx = 1;
//		call    __CEXT_F(fopen__clib3r)
	eax = fopen__clib3r(eax, edx);
//		mov     edx, 4
	edx = 4;
//		mov     edi, eax
	edi = eax;
//		mov     ecx, eax
	ecx = eax;
//		lea     eax, [esp+60h]
	eax = esp+0x60;
//		call    __CEXT_F(fread__clib3r)
	fread(eax, edx, ebx, ecx);
//		mov     ebx, 1
	ebx = 1;
//		mov     edx, 10efh
	edx = 0x10ef;
//		mov     eax, ___24bb60h
	eax = ___24bb60h;
//		mov     ecx, edi
	ecx = edi;
//		call    __CEXT_F(fread__clib3r)
	fread(eax, edx, ebx, ecx);
//		mov     eax, edi
	eax = edi;
//		call    __CEXT_F(fclose__clib3r)
	fclose__clib3r(eax);
//		xor     edx, edx
	edx = 0;
//		lea     eax, [esp+50h]
	eax = esp+0x50;
//		mov     [esp+70h], edx
	*(dword *)(esp+0x70) = edx;
//		call    __CEXT_F(strupr__clib3r)
	strupr__clib3r(eax);
//		mov     al, [esp+70h]
	al = *(byte *)(esp+0x70);
//		mov     ah, 3
	ah = 3;
//		mul     ah
	ax = al * ah;
//		mov     bl, al
	bl = al;
//		neg     bl
	bl = -bl;
//		add     bl, 75h
	bl += 0x75;
//		jmp     ___42a35h
	goto ___42a35h;
___42a27h:
//		add     [esp+esi+50h], bl
	*(byte *)(esp+esi+0x50) += bl;
//		lea     edx, [esi+1]
	edx = esi+1;
//		sub     bl, 3
	bl -= 3;
//		mov     [esp+70h], edx
	*(dword *)(esp+0x70) = edx;
___42a35h:
//		lea     edi, [esp+50h]
	edi = esp+0x50;
//		mov     esi, [esp+70h]
	esi = *(dword *)(esp+0x70);
//		sub     ecx, ecx
	ecx = 0;
//		dec     ecx
	ecx--;
//		xor     eax, eax
	eax = 0;
//		repne scasb
	while((ecx--)&&(*(byte *)edi++ != al));
//		not     ecx
	ecx = ~ecx;
//		dec     ecx
	ecx--;
//		cmp     ecx, esi
//		ja      ___42a27h
	if(ecx > esi) goto ___42a27h;
//		mov     eax, [esp+60h]
	eax = *(dword *)(esp+0x60);
//		xor     edi, edi
	edi = 0;
//		mov     ebp, 0ffffffffh
	ebp = -1;
//		mov     [esp+70h], edi
	*(dword *)(esp+0x70) = edi;
//		test    eax, eax
//		jle     ___42a8fh
	if((int)eax <= 0) goto ___42a8fh;
//		mov     ebx, ___24bb60h
	ebx = ___24bb60h;
___42a63h:
//		lea     edx, [esp+50h]
	edx = esp+0x50;
//		mov     eax, ebx
	eax = ebx;
//		call    __CEXT_F(strcmp__clib3r)
	eax = strcmp__clib3r(eax, edx);
//		test    eax, eax
//		jne     ___42a76h
	if(eax != 0) goto ___42a76h;
//		mov     ebp, [esp+70h]
	ebp = *(dword *)(esp+0x70);
___42a76h:
//		cmp     ebp, 0ffffffffh
//		jne     ___42a8fh
	if(ebp != -1) goto ___42a8fh;
//		mov     ecx, [esp+70h]
	ecx = *(dword *)(esp+0x70);
//		mov     esi, [esp+60h]
	esi = *(dword *)(esp+0x60);
//		inc     ecx
	ecx++;
//		add     ebx, 11h
	ebx += 0x11;
//		mov     [esp+70h], ecx
	*(dword *)(esp+0x70) = ecx;
//		cmp     ecx, esi
//		jl      ___42a63h
	if((int)ecx < (int)esi)goto ___42a63h;
___42a8fh:
//		cmp     ebp, 0ffffffffh
//		jne     ___42b4ch
	if(ebp != -1) goto ___42b4ch;
//		mov     edi, esp
	edi = esp;
//		mov     esi, ___18309ch
	esi = ___18309ch;
//		movsd   
	*(dword *)edi = *(dword *)esi;
//		movsd   
	*(dword *)(edi+4) = *(dword *)(esi+4);
//		movsd   
	*(dword *)(edi+8) = *(dword *)(esi+8);
//		movsd   
	*(dword *)(edi+12) = *(dword *)(esi+12);
//		mov     esi, [esp+68h]
	esi = *(dword *)(esp+0x68);
//		mov     edi, esp
	edi = esp;
//		push    edi
//		sub     ecx, ecx
	ecx = 0;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___42ab2h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___42acah
	if(al == 0) goto ___42acah;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___42ab2h
	if(al != 0) goto ___42ab2h;
___42acah:
//		pop     edi
//		mov     esi, ___1830ach
	esi = ___1830ach;
//		mov     edi, esp
	edi = esp;
//		push    edi
//		sub     ecx, ecx
	ecx = 0;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___42adbh:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___42af3h
	if(al == 0) goto ___42af3h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___42adbh
	if(al != 0) goto ___42adbh;
___42af3h:
//		pop     edi
//		mov     esi, [esp+64h]
	esi = *(dword *)(esp+0x64);
//		mov     edi, esp
	edi = esp;
//		push    edi
//		sub     ecx, ecx
	ecx = 0;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___42b03h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___42b1bh
	if(al == 0) goto ___42b1bh;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___42b03h
	if(al != 0) goto ___42b03h;
___42b1bh:
//		pop     edi
//		mov     esi, ___1830b0h
	esi = ___1830b0h;
//		mov     edi, esp
	edi = esp;
//		push    edi
//		sub     ecx, ecx
	ecx = 0;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___42b2ch:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___42b44h
	if(al == 0) goto ___42b44h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___42b2ch
	if(al != 0) goto ___42b2ch;
___42b44h:
//		pop     edi
//		mov     eax, esp
	eax = esp;
//		call    __CEXT_F(exitErrorMsg__dr)
	exitErrorMsg__dr(eax);
___42b4ch:
//		mov     edx, ___183098h
	edx = ___183098h;
//		mov     eax, [esp+68h]
	eax = *(dword *)(esp+0x68);
//		call    __CEXT_F(fopen__clib3r)
	eax = fopen__clib3r(eax, edx);
//		xor     ebx, ebx
	ebx = 0;
//		mov     edx, 10f3h
	edx = 0X10f3;
//		mov     edi, eax
	edi = eax;
//		call    __CEXT_F(fseek__clib3r)
	fseek__clib3r(eax, edx, ebx);
//		xor     edx, edx
	edx = 0;
//		mov     [esp+70h], edx
	*(dword *)(esp+0x70) = edx;
//		test    ebp, ebp
//		jle     ___42b93h
	if((int)ebp <= 0) goto ___42b93h;
//		mov     ebx, ebp
	ebx = ebp;
//		shl     ebx, 4
	ebx <<= 4;
//		xor     eax, eax
	eax = 0;
//		add     ebx, ebp
	ebx += ebp;
___42b7bh:
//		mov     esi, [esp+70h]
	esi = *(dword *)(esp+0x70);
//		mov     ecx, [eax+___24bb6dh]
	ecx = *(dword *)(eax+___24bb6dh);
//		add     eax, 11h
	eax += 0x11;
//		inc     esi
	esi++;
//		add     edx, ecx
	edx += ecx;
//		mov     [esp+70h], esi
	*(dword *)(esp+0x70) = esi;
//		cmp     eax, ebx
//		jl      ___42b7bh
	if((int)eax < (int)ebx) goto ___42b7bh;
___42b93h:
//		mov     ebx, 1
	ebx = 1;
//		mov     eax, edi
	eax =edi;
//		call    __CEXT_F(fseek__clib3r)
	fseek__clib3r(eax, edx, ebx);
//		mov     eax, ebp
	eax = ebp;
//		mov     ecx, edi
	ecx = edi;
//		shl     eax, 4
	eax <<= 4;
//		mov     ebx, 1
	ebx = 1;
//		mov     edx, [eax+ebp+___24bb6dh]
	edx = *(dword *)(eax+ebp+___24bb6dh);
//		mov     eax, [esp+6ch]
	eax = *(dword *)(esp+0x6c);
//		call    __CEXT_F(fread__clib3r)
	fread__clib3r(eax, edx, ebx, ecx);
//		mov     eax, edi
	eax = edi;
//		call    __CEXT_F(fclose__clib3r)
	fclose__clib3r(eax);
//		add     esp, 74h
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     ecx
//		retn
}

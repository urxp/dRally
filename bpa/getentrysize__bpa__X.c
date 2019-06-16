#define al 	((byte *)&eax)[0]
#define ah 	((byte *)&eax)[1]
#define ax 	((word *)&eax)[0]
#define bl 	((byte *)&ebx)[0]
#define bh 	((byte *)&ebx)[1]
#define bx 	((word *)&ebx)[0]

typedef unsigned char 	byte;
typedef unsigned short	word;
typedef unsigned long   dword;


    extern  byte TmpBPAHeader[];
	extern  byte ___19bd81h[];
    extern  char ___180108h[];	// "Problems with ["
    extern  char ___180118h[];	// "] "
    extern  char ___18011ch[];	// " file!"
    
    extern	byte rb_m_0[];		// "rb"

	dword fopen__clib3r(const char * pathname, const char * mode);
	dword fread__clib3r(void * ptr, dword size, dword nmemb, dword stream);
	int fseek__clib3r(dword stream, long offset, int whence);
    int fclose__clib3r(dword stream);

	char * strupr__clib3r(char * s);
	int strcmp__clib3r(const char * s1, const char * s2);
	char * strcpy__clib3r(char * dest, const char * src);
	dword strlen__clib3r(const char * s);

	void exitErrorMsg__dr(const char * errmsg);

dword getentrysize__bpa(const char * bpa, const char * elm){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[0x70];

	eax = bpa;
	edx = elm;

//		mov     [esp+68h], eax
	*(dword *)(esp+0x68) = eax;
//		mov     [esp+64h], edx
	*(dword *)(esp+0x64) = edx;
//		lea     edi, [esp+50h]
	edi = esp+0x50;
//		mov     esi, edx
	esi = edx;
//		push    edi






/*
___10261h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___10279h
	if(al == 0) goto ___10279h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___10261h
	if(al != 0) goto ___10261h;
*/
	strcpy__clib3r(edi, esi);



___10279h:
//		pop     edi
//		mov     edx, __CEXT_V(rb_m_0)
	edx = rb_m_0;
//		mov     eax, [esp+68h]
	eax = *(dword *)(esp+0x68);
//		mov     ebx, 1
	ebx = 1;
//		call    fopen__clib3r
	eax = fopen__clib3r(eax, edx);
//		mov     edx, 4
	edx = 4;
//		mov     edi, eax
	edi = eax;
//		mov     ecx, eax
	ecx = eax;
//		lea     eax, [esp+60h]
	eax = esp+0x60;
//		call    fread__clib3r
	eax = fread__clib3r(eax, edx, ebx, ecx);
//		mov     ebx, 1
	ebx = 1;
//		mov     edx, 10efh
	edx = 0x10ef;
//		mov     eax, TmpBPAHeader
	eax = TmpBPAHeader;
//		mov     ecx, edi
	ecx = edi;
//		call    fread__clib3r
	eax = fread__clib3r(eax, edx, ebx, ecx);
//		mov     eax, edi
	eax = edi;
//		call    fclose__clib3r
	fclose__clib3r(eax);
//		xor     edx, edx
	edx = 0;
//		lea     eax, [esp+50h]
	eax = esp+0x50;
//		mov     [esp+6ch], edx
	*(dword *)(esp+0x6c) = edx;
//		call    strupr__clib3r
	strupr__clib3r(eax);
//		mov     al, [esp+6ch]
	al = *(byte *)(esp+0x6c);
//		mov     ah, 3
	ah = 3;
//		mul     ah
	ax = al * ah;
//		mov     bl, al
	bl = al;
//		neg     bl
	bl = 0 - bl;
//		add     bl, 75h
	bl += 0x75;
//		jmp     ___102eah
	goto ___102eah;
___102dch:
//		add     [esp+esi+50h], bl
	*(byte *)(esp+esi+0x50) += bl;
//		lea     edx, [esi+1]
	edx = esi+1;
//		sub     bl, 3
	bl -= 3;
//		mov     [esp+6ch], edx
	*(dword *)(esp+0x6c) = edx;


___102eah:
//		lea     edi, [esp+50h]
	edi = esp+0x50;
//		mov     esi, [esp+6ch]
	esi = *(dword *)(esp+0x6c);


/*
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
*/
	ecx = strlen__clib3r(edi);

//		cmp     ecx, esi
//		ja      ___102dch
	if(ecx > esi) goto ___102dch;
//		mov     eax, [esp+60h]
	eax = *(dword *)(esp+0x60);
//		xor     edi, edi
	edi = 0;
//		mov     ebp, 0ffffffffh
	ebp = -1;
//		mov     [esp+6ch], edi
	*(dword *)(esp+0x6c) = edi;
//		test    eax, eax
//		jle     END_EBP_EQ_MINUSONE
	if((int)eax <= 0) goto END_EBP_EQ_MINUSONE;
//		mov     ebx, TmpBPAHeader
	ebx = TmpBPAHeader;
___10318h:
//		lea     edx, [esp+50h]
	edx = esp+0x50;
//		mov     eax, ebx
	eax = ebx;
//		call    strcmp__clib3r
	eax = strcmp__clib3r(eax, edx);
//		test    eax, eax
//		jne     OK_EBP_NOT_MINUSONE
	if(eax != 0) goto OK_EBP_NOT_MINUSONE;
//		mov     ebp, [esp+6ch]
	ebp = *(dword *)(esp+0x6c);
OK_EBP_NOT_MINUSONE:
//		cmp     ebp, 0ffffffffh
//		jne     END_EBP_EQ_MINUSONE
	if(ebp != -1) goto END_EBP_EQ_MINUSONE;
//		mov     ecx, [esp+6ch]
	ecx = *(dword *)(esp+0x6c);
//		mov     esi, [esp+60h]
	esi = *(dword *)(esp+0x60);
//		inc     ecx
	ecx++;
//		add     ebx, 11h
	ebx += 0x11;
//		mov     [esp+6ch], ecx
	*(dword *)(esp+0x6c) = ecx;
//		cmp     ecx, esi
//		jl      ___10318h
	if((int)ecx < (int)esi) goto ___10318h;
END_EBP_EQ_MINUSONE:
//		cmp     ebp, 0ffffffffh
//		jne     ___10401h
	if(ebp != -1) goto ___10401h;
//		mov     edi, esp
	edi = esp;
//		mov     esi, ___180108h
	esi = ___180108h;
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



/*
___10367h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___1037fh
	if(al == 0) goto ___1037fh;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___10367h
	if(al != 0) goto ___10367h;
*/
	strcpy__clib3r(edi, esi);



___1037fh:
//		pop     edi
//		mov     esi, ___180118h
	esi = ___180118h;
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


/*
___10390h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___103a8h
	if(al == 0) goto ___103a8h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___10390h
	if(al != 0) goto ___10390h;
*/
	strcpy__clib3r(edi, esi);


___103a8h:
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


/*
___103b8h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___103d0h
	if(al == 0) goto ___103d0h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___103b8h
	if(al != 0) goto ___103b8h;
*/
	strcpy__clib3r(edi, esi);

___103d0h:
//		pop     edi
//		mov     esi, __CEXT_V(___18011ch)
	esi = ___18011ch;
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


/*	
___103e1h:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___103f9h
	if(al == 0) goto ___103f9h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi +=2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___103e1h
	if(al != 0) goto ___103e1h;
*/
	strcpy__clib3r(edi, esi);


___103f9h:
//		pop     edi
//		mov     eax, esp
	eax = esp;
//		call    exitErrorMsg__dr
	exitErrorMsg__dr(eax);
___10401h:
//		mov     edx, __CEXT_V(rb_m_0)
	edx = rb_m_0;
//		mov     eax, [esp+68h]
	eax = *(dword *)(esp+0x68);
//		call    fopen__clib3r
	eax = fopen__clib3r(eax, edx);
//		xor     ebx, ebx
	ebx = 0;
//		mov     edx, 10f3h
	edx = 0x10f3;
//		mov     ecx, eax
	ecx = eax;
//		call    fseek__clib3r
	fseek__clib3r(eax, edx, ebx);
//		xor     edx, edx
	edx = 0;
//		mov     [esp+6ch], edx
	*(dword *)(esp+0x6c) = edx;
//		test    ebp, ebp
//		jle     ___10448h
	if((int)ebp <= 0) goto ___10448h;
//		mov     ebx, ebp
	ebx = ebp;
//		shl     ebx, 4
	ebx <<= 4;
//		xor     eax, eax
	eax = 0;
//		add     ebx, ebp
	ebx += ebp;
___10430h:
//		mov     edi, [esp+6ch]
	edi = *(dword *)(esp+0x6c);
//		mov     esi, [eax+___19bd81h]
	esi = *(dword *)(eax+___19bd81h);
//		add     eax, 11h
	eax += 0x11;
//		inc     edi
	edi++;
//		add     edx, esi
	edx += esi;
//		mov     [esp+6ch], edi
	*(dword *)(esp+0x6c) = edi;
//		cmp     eax, ebx
//		jl      ___10430h
	if((int)eax < (int)ebx) goto ___10430h;
___10448h:
//		mov     ebx, 1
	ebx = 1;
//		mov     eax, ecx
	eax = ecx;
//		call    fseek__clib3r
	fseek__clib3r(eax, edx, ebx);
//		mov     eax, ebp
	eax = ebp;
//		shl     eax, 4
	eax <<= 4;
//		mov     edx, [eax+ebp+___19bd81h]
	edx = *(dword *)(eax+ebp+___19bd81h);
//		mov     eax, ecx
	eax = ecx;
//		call    fclose__clib3r
	fclose__clib3r(eax);
//		mov     eax, edx
	eax = edx;
//		retn
	return eax;
}

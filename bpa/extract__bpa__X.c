#define al 	((byte *)&eax)[0]
#define bl 	((byte *)&ebx)[0]
#define cl 	((byte *)&ecx)[0]
#define dl 	((byte *)&edx)[0]
#define ah 	((byte *)&eax)[1]
#define bh 	((byte *)&ebx)[1]
#define ch 	((byte *)&ecx)[1]
#define dh 	((byte *)&edx)[1]

#define ax 	((word *)&eax)[0]

typedef unsigned char 	byte;
typedef unsigned short 	word;
typedef unsigned long	dword;


    extern const char string__MUSICS_BPA[];		// "MUSICS.BPA"
    
	dword getentrysize__bpa(const char * bpa, const char * elm);
    dword allocMemoryLock(dword, dword);
	void read__bpa(const char *, void *, const char *);

// 10490h
dword extract__musics_bpa(dword A, dword B){

	dword 	eax, ebx, ecx, edx, esi ,edi, ebp;
	byte 	esp[0xc];

	eax = A;
	edx = B;

//		push    24h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 0ch
//		mov     ebx, eax
	ebx = eax;
//		mov     [esp+4], dl
	*(byte *)(esp+4) = dl;
//		mov     edx, eax
	edx = eax;
//		mov     eax, __CEXT_V(string__MUSICS_BPA)
	eax = string__MUSICS_BPA;
//		call    __CEXT_F(getentrysize__bpa)
	eax = getentrysize__bpa(eax, edx);
//		xor     edx, edx
	edx = 0;
//		mov     ecx, eax
	ecx = eax;
//		mov     dl, [esp+4]
	dl = *(byte *)(esp+4);
//		mov     edi, eax
	edi = eax;
//		call    __CEXT_F(allocMemoryLock)
	eax = allocMemoryLock(eax, edx);
//		mov     esi, eax
	esi = eax;
//		mov     ebp, eax
	ebp = eax;
//		mov     edx, eax
	edx = eax;
//		mov     eax, __CEXT_V(string__MUSICS_BPA)
	eax = string__MUSICS_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		xor     edx, edx
	edx = 0;
//		mov     [esp], edx
	*(dword *)esp = edx;
//		test    ecx, ecx
//		jbe     ___10527h
	if(ecx >= 0) goto ___10527h;
//		mov     al, [esp]
	al = *(byte *)esp;
//		mov     dl, 11h
	dl = 0x11;
//		mul     dl
	ax = (word)al * dl;
//		mov     [esp+8], al
	*(byte *)(esp+8) = al;
___104e7h:
//		mov     eax, [esp]
	eax = *(dword *)esp;
//		mov     edx, eax
	edx = eax;
//		mov     ebx, 7
	ebx = 7;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		idiv    ebx
	edx = (((long long)edx << 32) + eax) % ebx;
//		mov     ecx, edx
	ecx = edx;
//		mov     ebx, esi
	ebx = esi;
//		mov     eax, [ebx]
	eax = *(dword *)ebx;
//		rol     al, cl	
	al = (al << cl) + (al >> (8 - cl));
//		mov     [ebx], eax
	*(dword *)ebx = eax;
//		mov     ah, [esi]
	ah = *(byte *)esi;
//		add     ah, 93h
	ah += 0x93;
//		mov     [esi], ah
	*(byte *)esi = ah;
//		mov     al, [esp+8]
	al = *(byte *)(esp+8);
//		mov     dl, ah
	dl = ah;
//		inc     esi
	esi++;
//		sub     dl, al
	dl -= al;
//		mov     ebx, [esp]
	ebx = *(dword *)esp;
//		mov     [esi-1], dl
	*(byte *)(esi-1) = dl;
//		mov     dh, al
	dh = al;
//		inc     ebx
	ebx++;
//		add     dh, 11h
	dh += 0x11;
//		mov     [esp], ebx
	*(dword *)esp = ebx;
//		mov     [esp+8], dh
	*(byte *)(esp+8) = dh;
//		cmp     edi, ebx
//		ja      ___104e7h
	if(edi > ebx) goto ___104e7h;
___10527h:
//		mov     eax, ebp
	eax = ebp;
//		add     esp, 0ch
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     ecx
//		pop     ebx
//		retn    
	return eax;
}

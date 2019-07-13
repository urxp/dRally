#include "x86.h"

	extern char cdrom_ini[];
	extern const char string__DR_IDF[];	// "DR.IDF"
	extern const char rb_m[];			// "rb"

	int getFileSize__dr(const char *);

	void * malloc__clib3r(dword size);
	void free__clib3r(void * ptr);

	dword fopen__clib3r(const char * pathname, const char * mode);
	dword fread__clib3r(void * ptr, dword size, dword nmemb, dword stream);
	int fseek__clib3r(dword stream, long offset, int whence);
	int fclose__clib3r(dword stream);

	char * strcpy__clib3r(char * dest, const char * src);

dword chkcdrom__dr(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[0x110];

//		push    12ch
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 110h
//		mov     esi, __CEXT_V(cdrom_ini)
	esi = cdrom_ini;
//		mov     edi, esp
	edi = esp;

/*
//		push    edi
___3e4beh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e4d6h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e4beh
___3e4d6h:
		pop     edi
*/
	strcpy__clib3r(edi, esi);

//		mov     esi, __CEXT_V(string__DR_IDF)		;; "DR.IDF"
	esi = string__DR_IDF;
//		mov     edi, esp
	edi = esp;
//		mov     edx, 1
	edx = 1;

/*
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3e4ech:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e504h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e4ech
___3e504h:
		pop     edi
*/

	while(*(char *)edi) edi++;
	strcpy__clib3r(edi, esi);

//		mov     eax, esp
	eax = esp;
//		mov     [esp+10ch], edx
	D(esp+0x10c) = edx;
//		call 	__CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		cmp     eax, 186cf392h
//		jge     ___3e521h
	if((int)eax >= 0x186cf392) goto ___3e521h;
//		xor     edx, edx
	edx = 0;
//		jmp     ___3e6efh
	goto ___3e6efh;
___3e521h:
//		mov     eax, 10000h
	eax = 0x10000;
//		call    __CEXT_F(malloc__clib3r)
	eax = malloc__clib3r(eax);
//		mov     edi, eax
	edi = eax;
//		mov     esi, eax
	esi = eax;
//		mov     eax, esp
	eax = esp;
//		call    __CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		cmp     eax, 18033688h
//		jge     ___3e555h
	if((int)eax >= 0x18033688) goto ___3e555h;
___3e53dh:
//		mov     eax, edi
	eax = edi;
//		call    __CEXT_F(free__clib3r)
	free__clib3r(eax);
//		xor     edx, edx
	edx = 0;
//		mov     eax, edx
	eax = edx;
//		add     esp, 110h
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return eax;
___3e555h:
//		mov     edx, __CEXT_V(rb_m)
	edx = rb_m;
//		mov     eax, esp
	eax = esp;
//		call    __CEXT_F(fopen__clib3r)
	eax = fopen__clib3r(eax, edx);
//		mov     ebp, eax
	ebp = eax;
//		mov     [esp+104h], eax
	D(esp+0x104) = eax;
//		test    eax, eax
//		je      ___3e53dh
	if(eax == 0) goto ___3e53dh;
//		mov     ebx, 1
	ebx = 1;
//		mov     edx, 4
	edx = 4;
//		mov     ecx, eax
	ecx = eax;
//		lea     eax, [esp+100h]
	eax = esp+0x100;
//		call    __CEXT_F(fread__clib3r)
	fread__clib3r(eax, edx, ebx ,ecx);
//		mov     eax, [esp+100h]
	eax = D(esp+0x100);
//		mov     ebx, 1
	ebx = 1;
//		sub     eax, 2b7916f1h
	eax -= 0x2b7916f1;
//		mov     edx, 20000h
	edx = 0x20000;
//		mov     [esp+108h], eax
	D(esp+0x108) = eax;
//		mov     eax, ebp
	eax = ebp;
//		mov     ecx, ebp
	ecx = ebp;
//		call    __CEXT_F(fseek__clib3r)
	fseek__clib3r(eax, edx, ebx);
//		mov     ebx, 1
	ebx = 1;
//		mov     edx, 10000h
	edx = 0x10000;
//		mov     eax, edi
	eax = edi;
//		call    __CEXT_F(fread__clib3r)
	fread__clib3r(eax, edx, ebx ,ecx);
//		mov     dl, [edi+7cd1h]
	dl = B(edi+0x7cd1);
//		sub     dl, [edi+1403h]
	dl -= B(edi+0x1403);
//		mov     dh, [edi+9ab2h]
	dh = B(edi+0x9ab2);
//		xor     ebp, ebp
	ebp = 0;
//		cmp     dl, dh
//		jne     ___3e5dah
	if(dl != dh) goto ___3e5dah;
//		mov     ebp, 1
	ebp = 1;
___3e5dah:
//		mov     bl, [esi+613bh]
	bl = B(esi+0x613b);
//		mov     dl, [esi+7cd1h]
	dl = B(esi+0x7cd1);
//		add     dl, bl
	dl += bl;
//		cmp     dl, [esi+0f6ceh]
//		jne     ___3e5f1h
	if(dl != B(esi+0xf6ce)) goto ___3e5f1h;
//		inc     ebp
	ebp++;
___3e5f1h:
//		mov     cl, [esi+2d3eh]
	cl = B(esi+0x2d3e);
//		mov     dl, [esi+1403h]
	dl = B(esi+0x1403);
//		add     dl, cl
	dl += cl;
//		cmp     dl, [esi+0db97h]
//		jne     ___3e608h
	if(dl != B(esi+0xdb97)) goto ___3e608h;
//		inc     ebp
	ebp++;
___3e608h:
//		mov     al, [esi+7cd1h]
	al = B(esi+0x7cd1);
//		mov     dl, [esi+2d3eh]
	dl = B(esi+0x2d3e);
//		sub     dl, al
	dl -= al;
//		cmp     dl, [esi+0afc8h]
//		jne     ___3e61fh
	if(dl != B(esi+0xafc8)) goto ___3e61fh;
//		inc     ebp
	ebp++;
___3e61fh:
//		cmp     ebp, 4
//		jne     ___3e62dh
	if(ebp != 4) goto ___3e62dh;
//		xor     ebx, ebx
	ebx = 0;
//		mov     [esp+10ch], ebx
	D(esp+0x10c) = ebx;
___3e62dh:
//		mov     edx, [esp+108h]
	edx = D(esp+0x108);
//		mov     ebx, 1
	ebx = 1;
//		sub     edx, 4
	edx -= 4;
//		mov     eax, [esp+104h]
	eax = D(esp+0x104);
//		shl     edx, 10h
	edx <<= 0x10;
//		call    __CEXT_F(fseek__clib3r)
	fseek__clib3r(eax, edx, ebx);
//		mov     dl, [esi+7cd1h]
	dl = B(esi+0x7cd1);
//		mov     dh, [esi+1403h]
	dh = B(esi+0x1403);
//		mov     bl, [esi+9ab2h]
	bl = B(esi+0x9ab2);
//		sub     dl, dh
	dl -= dh;
//		xor     edi, edi
	edi = 0;
//		cmp     dl, bl
//		jne     ___3e66ah
	if(dl != bl) goto ___3e66ah;
//		mov     edi, 1
	edi = 1;
___3e66ah:
//		mov     bh, [esi+613bh]
	bh = B(esi+0x613b);
//		mov     dl, [esi+7cd1h]
	dl = B(esi+0x7cd1);
//		mov     cl, [esi+0f6ceh]
	cl = B(esi+0xf6ce);
//		add     dl, bh
	dl += bh;
//		cmp     dl, cl
//		jne     ___3e683h
	if(dl != cl) goto ___3e683h;
//		inc     edi
	edi++;
___3e683h:
//		mov     ch, [esi+2d3eh]
	ch = B(esi+0x2d3e);
//		mov     dl, [esi+1403h]
	dl = B(esi+0x1403);
//		mov     al, [esi+0db97h]
	al = B(esi+0xdb97);
//		add     dl, ch
	dl += ch;
//		cmp     dl, al
//		jne     ___3e69ch
	if(dl != al) goto ___3e69ch;
//		inc     edi
	edi++;
___3e69ch:
//		mov     ah, [esi+7cd1h]
	ah = B(esi+0x7cd1);
//		mov     dl, [esi+2d3eh]
	dl = B(esi+0x2d3e);
//		sub     dl, ah
	dl -= ah;
//		cmp     dl, [esi+0afc8h]
//		jne     ___3e6b3h
	if(dl != B(esi+0xafc8)) goto ___3e6b3h;
//		inc     edi
	edi++;
___3e6b3h:
//		cmp     edi, 4
//		jne     ___3e6c1h
	if(edi != 4) goto ___3e6c1h;
//		xor     ecx, ecx
	ecx = 0;
//		mov     [esp+10ch], ecx
	D(esp+0x10c) = ecx;
___3e6c1h:
//		cmp     dword [esp+10ch], 1
//		jne     ___3e6e3h
	if(D(esp+0x10c) != 1) goto ___3e6e3h;
//		mov     eax, esi
	eax = esi;
//		call    __CEXT_F(free__clib3r)
	free__clib3r(eax);
//		xor     edx, edx
	edx = 0;
//		mov     eax, edx
	eax = edx;
//		add     esp, 110h
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return eax;
___3e6e3h:
//		mov     eax, esi
	eax = esi;
//		mov     edx, 1
	edx = 1;
//		call    __CEXT_F(free__clib3r)
	free__clib3r(eax);
___3e6efh:
//		mov     eax, edx
	eax = edx;
//		add     esp, 110h
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn
	return eax;
}

 typedef unsigned char 	byte;
 typedef unsigned long 	dword;

	extern byte ___180004h[];
	extern byte ___18005ch[];
	extern byte ___180060h[];
	extern byte string__WINDIR[];
	extern byte ___19bd48h[];
	extern byte ___18006ch[];
	extern byte ___19bd4ch[];
	extern byte ___180084h[];

	char * getenv__clib3r(const char * name);
    int chkarg__dr(const char * s);
	int printf__clib3r(const char * format, ...);

void welcome__dr(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp; 

//		push    0ch
//		call    __CHK
//		push    ebx
//		push    __CEXT_V(___180004h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___180004h);
//		add     esp, 4
//		push    __CEXT_V(___18005ch)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___18005ch);
//		add     esp, 4
//		mov     eax, __CEXT_V(___180060h)
	eax = ___180060h;
//		call    __CEXT_F(chkarg__dr)
	eax = chkarg__dr(eax);
//		test    eax, eax
//		je      ___1009dh
	if(eax == 0) goto ___1009dh;
//		mov     dword [__CEXT_V(___19bd4ch)], 1
	*(dword *)___19bd4ch = 1;
___1009dh:
//		mov     eax, __CEXT_V(string__WINDIR)
	eax = string__WINDIR;
//		call    __CEXT_F(getenv__clib3r)
	eax = getenv__clib3r(eax);
//		mov     [__CEXT_V(___19bd48h)], eax
	*(dword *)___19bd48h = eax;
//		test    eax, eax
//		je      ___100cah
	if(eax == 0) goto ___100cah;
//		push    __CEXT_V(___18006ch)
//		mov     ebx, 1
	ebx = 1;
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___18006ch);
//		add     esp, 4
//		mov     [__CEXT_V(___19bd4ch)], ebx
	*(dword *)___19bd4ch = ebx;
//		pop     ebx
//		retn    
	return;
___100cah:
//		push    __CEXT_V(___180084h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___180084h);
//		add     esp, 4
//		pop     ebx
//		retn
	return;
}

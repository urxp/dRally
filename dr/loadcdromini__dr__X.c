#define al 	((byte *)&eax)[0]

typedef unsigned char   byte;
typedef unsigned long   dword;

    extern byte rb_m[];
    extern byte string__CDROM_INI[];
    
    extern byte cdrom_ini[];
    extern byte ___182bc8h[];
    extern byte ___182bcch[];

	// "Error reading CDROM.INI file!\n"
    extern const char ___182bd0h[];

    void freeAllocInfoTable(void);
    void restore__keyboard(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);

	char * strcpy__clib3r(char * dest, const char * src);

    dword fopen__clib3r(const char * pathname, const char * mode);
    int fscanf__clib3r(dword stream, const char * format, ...);

void chkcdromini__dr(void){

	dword 	eax, ecx, edx, esi, edi;

//		push    20h
//		call    __CHK
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		mov     edx, __CEXT_V(rb_m)         ;; "rb"
	edx = rb_m;
//		mov     eax, __CEXT_V(string__CDROM_INI)         ;; "CDROM.INI"
	eax = string__CDROM_INI;
//		call    __CEXT_F(fopen__clib3r)
	eax = fopen__clib3r(eax, edx);
//		test    eax, eax
//		je      nocdromini
	if(eax == 0) goto nocdromini;
//		push    __CEXT_V(cdrom_ini)
//		push    __CEXT_V(___182bc8h)              ;; "%s"
//		push    eax
//		call    __CEXT_F(fscanf__clib3r)
	fscanf__clib3r(eax, ___182bc8h, cdrom_ini);
//		add     esp, 0ch
//		mov     edi, __CEXT_V(cdrom_ini)
	edi = cdrom_ini;
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
//		cmp     byte [ecx+__CEXT_V(cdrom_ini)-1], 5ch  ;; '\'
//		je      ok
	if(*(byte *)(ecx+cdrom_ini-1) == '\\') goto ok;
//		mov     esi, __CEXT_V(___182bcch)             ;; "\"
	esi = ___182bcch;
//		mov     edi, __CEXT_V(cdrom_ini)
	edi = cdrom_ini;
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
___3e42bh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e443h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e42bh
___3e443h:
*/
	strcpy__clib3r(edi, esi);

//		pop     edi
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		retn    
	return;

nocdromini:
//		push    __CEXT_V(___182bd0h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___182bd0h);
//		add     esp, 4
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(freeAllocInfoTable)
	freeAllocInfoTable();
//		mov     eax, 70h
	eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
ok:
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		retn
	return;
}

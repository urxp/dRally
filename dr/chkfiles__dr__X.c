#define al  ((byte *)&eax)[0]
#define ah  ((byte *)&eax)[1]
#define cl  ((byte *)&ecx)[0]

typedef unsigned char   byte;
typedef unsigned long   dword;

	// "\nDEATH RALLY ERROR: File %s is not found!\n"
    extern const char ___182a30h[];

	// "\nDEATH RALLY ERROR: File %s is not in original form!\n"
    extern const char ___182aach[];

	// "\nDEATH RALLY ERROR: File %s is not in original form!\n"
    extern const char ___182b34h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182a5ch[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182ae4h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182b6ch[];

    extern byte drfile_size[];
    extern byte drfiles_list[];
    extern byte cdrom_ini[];
    extern byte animfiles_list[];
    extern byte ___180130h[];
    extern byte ___1a214ah[];
    extern byte animfile_size[];

    dword getFileSize__dr(const char *);
    void ___5ec04h(void);
    void restore__keyboard(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);

	char * strcpy__clib3r(char * dest, const char * src);

void chkfiles__dr(void){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;
    byte    esp[0x100];


//		push    124h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 100h
//		mov     ebx, __CEXT_V(drfiles_list)
	ebx = drfiles_list;
//		xor     edx, edx
	edx = 0;
//		mov     ebp, 70h
	ebp = 0x70;
file_chk:
//		mov     eax, ebx
	eax = ebx;
//		call    __CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		mov     edi, eax
	edi = eax;
//		cmp     eax, 1
//		jge     file_exists
	if((int)eax >= 1) goto file_exists;
//		push    ebx
//		push    __CEXT_V(___182a30h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___182a30h, ebx);
//		add     esp, 8
//		push    __CEXT_V(___182a5ch)
//		call    __CEXT_F(printf__clib3r)
		printf__clib3r(___182a5ch);
//		add     esp, 4
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(___5ec04h)
	___5ec04h();
//		mov     eax, ebp
	eax = ebp;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
file_exists:
//		cmp     edi, [edx+__CEXT_V(drfile_size)]
//		je      file_original
	if(edi == *(dword *)(edx+drfile_size)) goto file_original;
//		mov     eax, __CEXT_V(drfiles_list)
	eax = drfiles_list;
//		add     eax, edx
	eax += edx;
//		push    eax
//		push    __CEXT_V(___182aach)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___182aach, eax);
//		add     esp, 8
//		push    __CEXT_V(___182ae4h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___182ae4h);
//		add     esp, 4
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(___5ec04h)
	___5ec04h();
//		mov     eax, ebp
	eax = ebp;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
file_original:
//		add     edx, 11h
	edx += 0x11;
//		add     ebx, 11h
	ebx += 0x11;
//		cmp     edx, 0eeh
//		jne     file_chk
	if(edx != 0xee) goto file_chk;
//		mov     ah, 2
	ah = 2;
//		mov     esi, __CEXT_V(cdrom_ini)
	esi = cdrom_ini;
//		mov     edi, esp
	edi = esp;
//		mov     [__CEXT_V(___1a214ah)], ah
	*(byte *)___1a214ah = ah;
//		push    edi

/*
___3e27dh:
//		mov     al, [esi]
	al = *(byte *)esi;
//		mov     [edi], al
	*(byte *)edi = al;
//		cmp     al, 0
//		je      ___3e295h
	if(al == 0) goto ___3e295h;
//		mov     al, [esi+1]
	al = *(byte *)(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	*(byte *)(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3e27dh
	if(al != 0) goto ___3e27dh;
___3e295h:
*/
	strcpy__clib3r(edi, esi);

//		pop     edi
//		mov     esi, __CEXT_V(animfiles_list)
	esi = animfiles_list;
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
___3e2a6h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e2beh
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e2a6h
___3e2beh:
*/
	strcpy__clib3r(edi, esi);

//		pop     edi
//		mov     eax, esp
	eax = esp;
//		call    __CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		cmp     eax, 1
//		jge     ___3e2d2h
	if((int)eax >= 1) goto ___3e2d2h;
//		mov     byte [__CEXT_V(___1a214ah)], 1
	*(byte *)___1a214ah = 1;
___3e2d2h:
//		mov     edx, __CEXT_V(animfiles_list)
	edx = animfiles_list;
//		xor     ebx, ebx
	ebx = 0;
anim_chk:
//		mov     al, [__CEXT_V(___180130h)]
	al = *(byte *)___180130h;
//		mov     cl, [__CEXT_V(___1a214ah)]
	cl = *(byte *)___1a214ah;
//		mov     [esp], al
	*(byte *)esp = al;
//		cmp     cl, 2
//		jne     ___3e315h
	if(cl != 2) goto ___3e315h;
//		mov     esi, __CEXT_V(cdrom_ini)
	esi = cdrom_ini;
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
___3e2fch:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e314h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e2fch
___3e314h:
*/
	strcpy__clib3r(edi, esi);

//		pop     edi
___3e315h:
//		imul    ebp, ebx, 11h
	ebp = (int)ebx * 0x11;
//		mov     edi, esp
	edi = esp;
//		mov     esi, edx
	esi = edx;
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
___3e325h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e33dh
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e325h
___3e33dh:
*/
	strcpy__clib3r(edi, esi);

//		pop     edi
//		mov     eax, esp
	eax = esp;
//		call    __CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		test    eax, eax
//		jle     anim_original
	if((int)eax <= 0) goto anim_original;
//		cmp     eax, [ebp+__CEXT_V(animfile_size)]
//		je      anim_original
	if(eax == *(dword *)(ebp+animfile_size)) goto anim_original;
//		push    edx
//		push    __CEXT_V(___182b34h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___182b34h, edx);
//		add     esp, 8
//		push    __CEXT_V(___182b6ch)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___182b6ch);
//		add     esp, 4
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(___5ec04h)
	___5ec04h();
//		mov     eax, 70h
	eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
anim_original:
//		inc     ebx
	ebx++;
//		add     edx, 11h
	edx += 0x11;
//		cmp     ebx, 3
//		jl      anim_chk
	if((int)ebx < 3) goto anim_chk;
//		add     esp, 100h
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn
	return;
}

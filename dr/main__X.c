typedef unsigned char   byte;
typedef unsigned long   dword;

    void exitcb0(void);
    extern byte ___19bd54h[];
    extern byte ___19bd20h[];
    void welcome__dr(void);
    void ___5eb70h(void);
    extern byte ___5ff98h[];
    extern byte ___19bd4ch[];
    
    extern byte ___2432c8h[];
    void install__keyboard();
    void startup__dr();
    void restore__keyboard();
    extern byte ___19bd60h[];
    void ___623d4h(void);
    void ___5ec04h(void);
    void restrdos__dr();
    extern byte string__dr_bin[];
    extern byte string__MENU_BPA[];
    void read__bpa(const char *, void *, const char *);


    void install__timer(dword, dword);
    #pragma aux install__keyboard parm [eax] [ebx]

int main(int argc, const char * argv[]){

	dword 	eax, ebx, edx;

	eax = argc;
	edx = argv;

//		push    8
//		call    __CHK
//		push    ebx
//		mov     [__CEXT_V(___19bd54h)], eax
	*(dword *)___19bd54h = eax;
//		xor     eax, eax
	eax = 0;
___1019eh:		
//		mov     ebx, [edx]
	ebx = *(dword *)edx;
//		add     edx, 4
	edx +=4;
//		mov     [eax*4+__CEXT_V(___19bd20h)], ebx
	*(dword *)(4*eax+___19bd20h) = ebx;
//		inc     eax
	eax++;
//		cmp     eax, 0ah
//		jl      ___1019eh
	if((int)eax < 0xa) goto ___1019eh;
//		call    __CEXT_F(welcome__dr)
	welcome__dr();
//		call    __CEXT_F(___5eb70h)
	___5eb70h();
//		cmp     dword [__CEXT_V(___19bd4ch)], 0
//		je      ___101cah
	if(*(dword *)___19bd4ch == 0) goto ___101cah;
//		mov     byte [__CEXT_V(___5ff98h)], 1
	*(byte *)___5ff98h = 1;
___101cah:
//		cmp     dword [__CEXT_V(___19bd4ch)], 0
//		je      ___101dch
	if(*(dword *)___19bd4ch == 0) goto ___101dch;
//		mov     eax, 46h
	eax = 0x46;
//		xor     ebx, ebx
	ebx = 0;
//		jmp     ___101e6h
	goto ___101e6h;
___101dch:
//		mov     ebx, 1
	ebx = 1;
//		mov     eax, 46h
	eax = 0x46;
___101e6h:
//		call    __CEXT_F(install__timer)
	install__timer(eax, ebx);
//		mov     dword [__CEXT_V(___2432c8h)], __CEXT_F(exitcb0)
	*(dword *)___2432c8h = exitcb0;
//		call    __CEXT_F(install__keyboard)
	install__keyboard();
//		call    __CEXT_F(startup__dr)
	startup__dr();
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		cmp     dword [__CEXT_V(___19bd60h)], 0
//		je      ___10212h
	if(*(dword *)___19bd60h == 0) goto ___10212h;
//		call    __CEXT_F(___623d4h)
	___623d4h();
___10212h:
//		call    __CEXT_F(___5ec04h)
	___5ec04h();
//		call    __CEXT_F(restrdos__dr)
	restrdos__dr();
//		mov     ebx, __CEXT_V(string__dr_bin)
	ebx = string__dr_bin;
//		mov     edx, 0b8000h
	edx = 0xb8000;
//		mov     eax, __CEXT_V(string__MENU_BPA)
	eax = string__MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		pop     ebx
//		retn
		return 0;
}

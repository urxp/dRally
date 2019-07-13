#include "x86.h"

	extern byte ___182a30h[];
	extern byte ___182a5ch[];
	extern byte drfiles_list[];
	extern byte ___182aach[];
	extern byte ___182ae4h[];
	extern byte cdrom_ini[];
	extern byte animfiles_list[];
	extern byte ___180130h[];
	extern byte CDPath[];
	extern byte ___182b34h[];
	extern byte ___182b6ch[];

	dword getFileSize__dr(const char *);
	void freeAllocInfoTable(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);
    void restore__keyboard(void);


// ~3e27dh (-4 labels)
void chkfiles__dr(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x180];
	byte *	esp = __esp + 0x180;

//		push    124h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 100h
	esp -= 0x100;
//		mov     ebx, __CEXT_V(drfiles_list)
	ebx = drfiles_list;
//		xor     edx, edx
	edx = 0;
//		mov     ebp, 70h
	ebp = 0x70;
l_file_chk:
//		mov     eax, ebx
	eax = ebx;
//		call    __CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		mov     edi, eax
	edi = eax;
//		cmp     eax, 1
//		jge     l_file_exists
	if((int)eax >= 1) goto l_file_exists;
//		push    ebx
	PUSH(ebx);
//		push    __CEXT_V(___182a30h)
	PUSH(___182a30h);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp), D(esp+4));
//		add     esp, 8
	esp += 8;
//		push    __CEXT_V(___182a5ch)
	PUSH(___182a5ch);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp));
//		add     esp, 4
	esp += 4;
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(freeAllocInfoTable)
	freeAllocInfoTable();
//		mov     eax, ebp
	eax = ebp;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
l_file_exists:
//		cmp     edi, [edx+__CEXT_V(drfiles_list)+0dh]
//		je      l_file_original
	if(edi == D(edx+drfiles_list+0xd)) goto l_file_original;
//		mov     eax, __CEXT_V(drfiles_list)
	eax = drfiles_list;
//		add     eax, edx
	eax += edx;
//		push    eax
	PUSH(eax);
//		push    __CEXT_V(___182aach)
	PUSH(___182aach);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp), D(esp+4));
//		add     esp, 8
	esp += 8;
//		push    __CEXT_V(___182ae4h)
	PUSH(___182ae4h);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp));
//		add     esp, 4
	esp += 4;
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(freeAllocInfoTable)
	freeAllocInfoTable();
//		mov     eax, ebp
	eax = ebp;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
l_file_original:
//		add     edx, 11h
	edx += 0x11;
//		add     ebx, 11h
	ebx += 0x11;
//		cmp     edx, 0eeh
//		jne     l_file_chk
	if(edx != 0xee) goto l_file_chk;
//		mov     ah, 2
	ah = 2;
//		mov     esi, __CEXT_V(cdrom_ini)
	esi = cdrom_ini;
//		mov     edi, esp
	edi = esp;
//		mov     [__CEXT_V(CDPath)], ah
	B(CDPath) = ah;
//		push    edi
	PUSH(edi);
___3e27dh:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3e295h
	if(al == 0) goto ___3e295h;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3e27dh
	if(al != 0) goto ___3e27dh;
___3e295h:
//		pop     edi
	POP(edi);
//		mov     esi, __CEXT_V(animfiles_list)
	esi = animfiles_list;
//		mov     edi, esp
	edi = esp;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx&&ecx--)&&(B(edi++)!=al));
//		dec     edi
	edi--;
___3e2a6h:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3e2beh
	if(al == 0) goto ___3e2beh;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3e2a6h
	if(al != 0) goto ___3e2a6h;
___3e2beh:
//		pop     edi
	POP(edi);
//		mov     eax, esp
	eax = esp;
//		call    __CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		cmp     eax, 1
//		jge     ___3e2d2h
	if((int)eax >= 1) goto ___3e2d2h;
//		mov     byte [__CEXT_V(CDPath)], 1
	B(CDPath) = 1;
___3e2d2h:
//		mov     edx, __CEXT_V(animfiles_list)
	edx = animfiles_list;
//		xor     ebx, ebx
	ebx = 0;
l_anim_chk:
//		mov     al, [__CEXT_V(___180130h)]
	al = B(___180130h);
//		mov     cl, [__CEXT_V(CDPath)]
	cl = B(CDPath);
//		mov     [esp], al
	B(esp) = al;
//		cmp     cl, 2
//		jne     ___3e315h
	if(cl != 2) goto ___3e315h;
//		mov     esi, __CEXT_V(cdrom_ini)
	esi = cdrom_ini;
//		mov     edi, esp
	edi = esp;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx&&ecx--)&&(B(edi++)!=al));
//		dec     edi
	edi--;
___3e2fch:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3e314h
	if(al == 0) goto ___3e314h;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3e2fch
	if(al != 0) goto ___3e2fch;
___3e314h:
//		pop     edi
	POP(edi);
___3e315h:
//		imul    ebp, ebx, 11h
	ebp = (int)ebx * 0x11;
//		mov     edi, esp
	edi = esp;
//		mov     esi, edx
	esi = edx;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx&&ecx--)&&(B(edi++)!=al));
//		dec     edi
	edi--;
___3e325h:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3e33dh
	if(al == 0) goto ___3e33dh;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3e325h
	if(al != 0) goto ___3e325h;
___3e33dh:
//		pop     edi
	POP(edi);
//		mov     eax, esp
	eax = esp;
//		call    __CEXT_F(getFileSize__dr)
	eax = getFileSize__dr(eax);
//		test    eax, eax
//		jle     l_anim_original
	if((int)eax <= 0) goto l_anim_original;
//		cmp     eax, [ebp+__CEXT_V(animfiles_list)+0dh]
//		je      l_anim_original
	if(eax == D(ebp+animfiles_list+0xd)) goto l_anim_original;
//		push    edx
	PUSH(edx);
//		push    __CEXT_V(___182b34h)
	PUSH(___182b34h);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp), D(esp+4));
//		add     esp, 8
	esp += 8;
//		push    __CEXT_V(___182b6ch)
	PUSH(___182b6ch);
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(D(esp));
//		add     esp, 4
	esp += 4;
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(freeAllocInfoTable)
	freeAllocInfoTable();
//		mov     eax, 70h
	eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
l_anim_original:
//		inc     ebx
	ebx++;
//		add     edx, 11h
	edx += 0x11;
//		cmp     ebx, 3
//		jl      l_anim_chk
	if((int)ebx < 3) goto l_anim_chk;
//		add     esp, 100h
	esp += 0x100;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn
	return;
}

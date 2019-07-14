#include "x86.h"

	extern byte p_bpk_menubg5[];
	extern byte VGABufferPtr_0[];
	extern byte ChatLinesBuffer[];
	extern byte RowBox0Colors[];
	extern byte Font0Props[];
	extern byte p_bpk_f_sma3a[];
	extern byte p_bpk_f_sma3b[];
	extern byte p_bpk_f_sma3c[];

	void renderTextToBuffer__video(void *, byte *, const char *, dword);

// ~ 23245h (-1 label)
void footer__dr(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x100];
	byte *	esp = __esp + 0x100;

//		push    1ch
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		mov     ebp, 3b600h
	ebp = 0x3b600;
___23245h:
//		mov     ecx, 280h
	ecx = 0x280;
//		mov     esi, [__CEXT_V(p_bpk_menubg5)]
	esi = D(p_bpk_menubg5);
//		mov     edi, [__CEXT_V(VGABufferPtr_0)]
	edi = D(VGABufferPtr_0);
//		add     esi, ebp
	esi += ebp;
//		add     edi, ebp
	edi += ebp;
//		add     ebp, 280h
	ebp += 0x280;
//		push    edi
	PUSH(edi);
//		mov     eax, ecx
	eax = ecx;
//		shr     ecx, 2
	ecx >>= 2;
//		rep movsd
	while(ecx&&ecx--){

		D(edi) = D(esi);
		edi += 4; esi += 4;
	}
//		mov     cl, al
	cl = al;
//		and     cl, 3
	cl &= 3;
//		rep movsb
	while(ecx&&ecx--) B(edi++) = B(esi++);
//		pop     edi
	POP(edi);
//		cmp     ebp, 49480h
//		jne     ___23245h
	if(ebp != 0x49480) goto ___23245h;
//		mov     edi, __CEXT_V(ChatLinesBuffer)
	edi = ChatLinesBuffer;
//		mov     esi, 3b10ch
	esi = 0x3b10c;
//		xor     ebp, ebp
	ebp = 0;
//		add     edi, 960h
	edi += 0x960;
___2328ah:
//		cmp     byte [ebp+__CEXT_V(RowBox0Colors)], 0
//		jne     ___232a6h
	if(B(ebp+RowBox0Colors) != 0) goto ___232a6h;
//		mov     edx, __CEXT_V(Font0Props)
	edx = Font0Props;
//		mov     eax, [__CEXT_V(p_bpk_f_sma3a)]
	eax = D(p_bpk_f_sma3a);
//		mov     ecx, esi
	ecx = esi;
//		mov     ebx, edi
	ebx = edi;
//		call    __CEXT_F(renderTextToBuffer__video)
	renderTextToBuffer__video(eax, edx, ebx, ecx);
___232a6h:
//		cmp     byte [ebp+__CEXT_V(RowBox0Colors)], 1
//		jne     ___232c2h
	if(B(ebp+RowBox0Colors) != 1) goto ___232c2h;
//		mov     edx, __CEXT_V(Font0Props)
	edx = Font0Props;
//		mov     eax, [__CEXT_V(p_bpk_f_sma3b)]
	eax = D(p_bpk_f_sma3b);
//		mov     ecx, esi
	ecx = esi;
//		mov     ebx, edi
	ebx = edi;
//		call    __CEXT_F(renderTextToBuffer__video)
	renderTextToBuffer__video(eax, edx, ebx, ecx);
___232c2h:
//		cmp     byte [ebp+__CEXT_V(RowBox0Colors)], 2
//		jne     ___232deh
	if(B(ebp+RowBox0Colors) != 2) goto ___232deh;
//		mov     edx, __CEXT_V(Font0Props)
	edx = Font0Props;
//		mov     eax, [__CEXT_V(p_bpk_f_sma3c)]
	eax = D(p_bpk_f_sma3c);
//		mov     ecx, esi
	ecx = esi;
//		mov     ebx, edi
	ebx = edi;
//		call    __CEXT_F(renderTextToBuffer__video)
	renderTextToBuffer__video(eax, edx, ebx, ecx);
___232deh:
//		add     esi, 2580h
	esi += 0x2580;
//		inc     ebp
	ebp++;
//		add     edi, 96h
	edi += 0x96;
//		cmp     ebp, 6
//		jl      ___2328ah
	if((int)ebp < 6) goto ___2328ah;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn
	return;
}

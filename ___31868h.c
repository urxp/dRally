#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"
#include "sfx.h"

	extern __BYTE__ ___196b24h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___1a1ef8h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e80h;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___196aa4h[];
	extern __POINTER__ ___1a1e84h;
	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1a0ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___196aa8h[];
	extern __BYTE__ ___196aach[];
	extern __BYTE__ ___1a1ff1h[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
int ___148cch_cdecl(int x, int y, __DWORD__ A3, int * A4);
int rand_watcom106(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

__DWORD__ ___31868h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x54];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	int 	rslt;
	racer_t * 		s_6c;


	s_6c = (racer_t *)___1a01e0h;
	rslt = 0;

	eax = rand_watcom106();
	edx = (int)eax>>0x1f;
	___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x64);
	rslt = 0;

	if(((int)edx >= (int)D(___196b24h))||(D(___185a14h_UseWeapons) == 0)){

		if((int)D(___196b24h) < 0x61) D(___196b24h) += 2;
	}
	else {

		D(___196b24h) = 5;
		eax = rand_watcom106();
		edx = (int)eax>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x64);
	
		if((int)edx >= 0x32){

			if(s_6c[D(___1a1ef8h)].car == 5){

				D(esp+0x48) = 1;
				strcpy(esp+0x34, "6000");
			}

			if(s_6c[D(___1a1ef8h)].car == 4){

				D(esp+0x48) = 2;
				strcpy(esp+0x34, "4000");
			}

			if(s_6c[D(___1a1ef8h)].car == 3){
					
				D(esp+0x48) = 3;
				strcpy(esp+0x34, "3000");
			}

			if(s_6c[D(___1a1ef8h)].car == 2){

				D(esp+0x48) = 4;
				strcpy(esp+0x34, "2000");
			}

			if(s_6c[D(___1a1ef8h)].car == 1){

				D(esp+0x48) = 5;
				strcpy(esp+0x34, "1000");
			}

			if(s_6c[D(___1a1ef8h)].car == 0){

				D(esp+0x48) = 6;
				strcpy(esp+0x34, "500");
			}

			___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);
			esip = ___1a1e84h;
			ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(0x83+0x25)+0x21+0xc;

			ecx = 0x80;
			while(1){

				edi = 0x68;

				while(1){

					L(eax) = B(esip);
					if(L(eax) != 0) B(ebxp) = L(eax);
					ebxp++;
					esip++;
					edi--;
					if(edi == 0) break;
				}

				ebxp += 0x280;
				ebxp -= 0x68;
				ecx--;
				if(ecx == 0) break;
			}

			VESA101_16X16_FORMAT_PRINT("[Wanna be my hitman, driver?", 161, 168);
			VESA101_16X16_FORMAT_PRINT("", 161, 184);
			VESA101_16X16_FORMAT_PRINT("Wanna get rich, tough guy? OK.", 161, 200);
			VESA101_16X16_FORMAT_PRINT("[Here's the deal{. I have put some", 161, 216);
			VESA101_16X16_FORMAT_PRINT("major funds on this race, betting", 161, 232);

			edx = 0;
			while(1){

				eax = rand_watcom106();
				edx = (int)eax>>0x1f;
				___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 4);
				eax = B(___1a0ef8h+4*D(___1a1028h)+edx);
				if(eax != D(___1a1ef8h)) break;
			}

			ebp = edx;
			VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "that ["), s_6c[B(___1a0ef8h+4*D(___1a1028h)+edx)].name), " won't reach the"), 161, 248);
			VESA101_16X16_FORMAT_PRINT("[finish line{. Make me right, and", 161, 264);
			VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "[it'll pay you $"), esp+0x34), "."), 161, 280);
			VESA101_16X16_FORMAT_PRINT("", 161, 296);
			VESA101_16X16_FORMAT_PRINT("", 161, 312);
			___12cb8h__VESA101_PRESENTSCREEN();

			edx = 0;
			while(1){

				edx++;
				___2ab50h();
				if((int)edx >= 0x32) break;
			}

			dRally_Sound_pushEffect(5, SFX_SPECIAL_OFFER, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);

			edx = 0;
			while(1){

				edx++;
				___2ab50h();
				if((int)edx >= 0x14) break;
			}

			D(esp+0x40) = 1;
			___148cch_cdecl(0x21+0x80, 0x83+0xbe, 0, (int *)(esp+0x40));
		
			if(D(esp+0x40) == 1){

				D(___196aa8h) = D(esp+0x48);
				D(___196aach) = B(___1a0ef8h+ebp+4*D(___1a1028h));
				strcpy(___1a1ff1h, s_6c[D(___196aach)].name);
			}
		}
		else {
				
			if(s_6c[D(___1a1ef8h)].car == 5){

				D(esp+0x48) = 1;
				strcpy(esp+0x34, "12000");
			}

			if(s_6c[D(___1a1ef8h)].car == 4){

				D(esp+0x48) = 2;
				strcpy(esp+0x34, "8000");
			}

			if(s_6c[D(___1a1ef8h)].car == 3){

				D(esp+0x48) = 3;
				strcpy(esp+0x34, "6000");
			}

			if(s_6c[D(___1a1ef8h)].car == 2){

				D(esp+0x48) = 4;
				strcpy(esp+0x34, "4000");
			}

			if(s_6c[D(___1a1ef8h)].car == 1){

				D(esp+0x48) = 5;
				strcpy(esp+0x34, "2000");
			}

			if(s_6c[D(___1a1ef8h)].car == 0){

				D(esp+0x48) = 6;
				strcpy(esp+0x34, "1000");
			}

			___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);
			esip = ___1a1e80h;
			ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(0x83+0x25)+0x21+0xc;

			ecx = 0x80;
			while(1){

				edi = 0x68;

				while(1){

					L(eax) = B(esip);
					if(L(eax) != 0) B(ebxp) = L(eax);
					ebxp++;
					esip++;
					edi--;
					if(edi == 0) break;
				}

				ebxp += 0x280;
				ebxp -= 0x68;
				ecx--;
				if(ecx == 0) break;
			}

			VESA101_16X16_FORMAT_PRINT("[A slick steroid run, anyone?", 161, 168);
			VESA101_16X16_FORMAT_PRINT("", 161, 184);
			VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "[Extra $"), esp+0x34), "{, anyone? You? This is"), 161, 200);
			VESA101_16X16_FORMAT_PRINT("easy as shifting gears 1-2-3.", 161, 216);
			VESA101_16X16_FORMAT_PRINT("[Just pick up some pills along the", 161, 232);
			VESA101_16X16_FORMAT_PRINT("[way, and get them to the finish", 161, 248);
			VESA101_16X16_FORMAT_PRINT("[line before things get crowded{, be", 161, 264);
			VESA101_16X16_FORMAT_PRINT("first, like, floor it, like.", 161, 280);
			VESA101_16X16_FORMAT_PRINT("", 161, 296);
			VESA101_16X16_FORMAT_PRINT("", 161, 312);
			___12cb8h__VESA101_PRESENTSCREEN();
		
			edx = 0;
			while(1){

				edx++;
				___2ab50h();
				if((int)edx >= 0x32) break;
			}

			dRally_Sound_pushEffect(5, SFX_SPECIAL_OFFER, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);

			edx = 0;
			while(1){

				edx++;
				___2ab50h();
				if((int)edx >= 0x14) break;
			}

			D(esp+0x40) = 1;
			___148cch_cdecl(0x21+0x80, 0x83+0xbe, 0, (int *)(esp+0x40));

			if(D(esp+0x40) == 1) D(___196aa4h) = D(esp+0x48);
		}
	
		dRally_Sound_freeEffectChannel(5);
		rslt = 1;
	}
	
	return rslt;
}




/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___199f54h
	extern	rand_
	extern	___196b24h
	extern	___185a14h
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1806a0h
	extern	___1806a8h
	extern	___1806b0h
	extern	___1806b8h
	extern	___1806c0h
	extern	___1806c8h
	extern	___13248h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e80h
	extern	___1930e0h
	extern	___13094h
	extern	___193180h
	extern	___193130h
	extern	___182370h
	extern	___1931d0h
	extern	___193220h
	extern	___193270h
	extern	___1932c0h
	extern	___193310h
	extern	___193360h
	extern	___1933b0h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	___24cc54h
	extern	___654d4h
	extern	___148cch
	extern	___196aa4h
	extern	___6563ch
	extern	___1806dch
	extern	___1806e4h
	extern	___1a1e84h
	extern	___193400h
	extern	___193450h
	extern	___1934a0h
	extern	___1934f0h
	extern	___193540h
	extern	___1a1028h
	extern	___1a0ef8h
	extern	___193590h
	extern	___1a01e0h
	extern	___182388h
	extern	___193630h
	extern	___1935e0h
	extern	___180724h
	extern	___193680h
	extern	___1936d0h
	extern	___196aa8h
	extern	___196aach
	extern	___1a1ff1h

section .text

__GDECL(___31868h)
		push    78h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 54h
		mov     ebx, 83h
		mov     edx, 21h
		mov     ecx, [___199f54h]
		mov     [esp+4ch], ebx
		mov     [esp+50h], edx
		test    ecx, ecx
		je      short ___3189eh
		xor     eax, eax
		jmp     near ___32224h
___3189eh:
		call    near rand_
		mov     edx, eax
		mov     ebx, 64h
		sar     edx, 1fh
		idiv    ebx
		mov     esi, 1
		mov     edi, [___196b24h]
		mov     [esp+44h], esi
		cmp     edx, edi
		jge     near ___32207h
		cmp     dword [___185a14h], byte 0
		je      near ___32207h
		mov     ecx, 5
		mov     [___196b24h], ecx
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		mov     ebx, edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     ebx, byte 32h
		jge     near ___31d05h
		cmp     ecx, [eax+___1a01fch]
		jne     short ___31929h
		mov     ebx, 1
		lea     edi, [esp+34h]
		mov     esi, ___1806a0h
		mov     [esp+48h], ebx
		movsd   
		movsw   
___31929h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 4
		jne     short ___3195ah
		lea     edi, [esp+34h]
		mov     esi, ___1806a8h
		movsd   
		movsb   
		mov     dword [esp+48h], 2
___3195ah:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 3
		jne     short ___3198ch
		mov     ebp, 3
		lea     edi, [esp+34h]
		mov     esi, ___1806b0h
		mov     [esp+48h], ebp
		movsd   
		movsb   
___3198ch:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 2
		jne     short ___319beh
		mov     ebx, 4
		lea     edi, [esp+34h]
		mov     esi, ___1806b8h
		mov     [esp+48h], ebx
		movsd   
		movsb   
___319beh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 1
		jne     short ___319efh
		lea     edi, [esp+34h]
		mov     esi, ___1806c0h
		movsd   
		movsb   
		mov     dword [esp+48h], 5
___319efh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 0
		jne     short ___31a21h
		mov     ebp, 6
		lea     edi, [esp+34h]
		mov     esi, ___1806c8h
		mov     [esp+48h], ebp
		movsd   
		movsb   
___31a21h:
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1e2h
		mov     edx, [esp+50h]
		mov     eax, [esp+54h]
		call    near ___13248h
		mov     edx, [esp+4ch]
		add     edx, byte 25h
		lea     ebp, [edx*4+0]
		mov     ebx, [esp+50h]
		add     ebp, edx
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     ebp, 7
		mov     ecx, 80h
		add     eax, ebp
		mov     esi, [___1a1e80h]
		add     ebx, eax
		mov     edx, 68h
		add     ebx, byte 0ch
___31a6dh:
		mov     edi, edx
___31a6fh:
		mov     al, [esi]
		or      al, al
		je      short ___31a77h
		mov     [ebx], al
___31a77h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___31a6fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___31a6dh
		mov     edx, [esp+50h]
		add     edx, ebp
		mov     eax, ___1930e0h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 35h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		mov     esi, ___193180h
		add     edx, eax
		mov     eax, ___193130h
		add     edx, 80h
		mov     edi, esp
		call    near ___13094h
		call 	__STRCPY
		lea     esi, [esp+34h]
		mov     edi, esp
		mov     edx, [esp+4ch]
		call 	__STRCAT
		mov     esi, ___182370h
		mov     edi, esp
		add     edx, byte 45h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     eax, edx
		lea     edx, [eax+80h]
		mov     eax, esp
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 55h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     ebx, [esp+50h]
		shl     eax, 7
		add     eax, ebx
		lea     edx, [eax+80h]
		mov     eax, ___1931d0h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 65h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___193220h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 75h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebx
		lea     edx, [eax+80h]
		mov     eax, ___193270h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, 85h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___1932c0h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, 95h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___193310h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, 0a5h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___193360h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, 0b5h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___1933b0h
		add     edx, 80h
		call    near ___13094h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		xor     edx, edx
___31c7dh:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 32h
		jl      short ___31c7dh
		push    8000h
		mov     edx, 5
		mov     ecx, [___24cc54h]
		push    24000h
		xor     ebx, ebx
		mov     eax, edx
		call    near ___654d4h
		xor     edx, edx
___31ca8h:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 14h
		jl      short ___31ca8h
		mov     edi, 1
		mov     edx, [esp+4ch]
		mov     eax, [esp+50h]
		lea     ecx, [esp+40h]
		xor     ebx, ebx
		add     edx, 0beh
		add     eax, 80h
		mov     [esp+40h], edi
		call    near ___148cch
		cmp     edi, [esp+40h]
		jne     near ___321efh
		mov     eax, [esp+48h]
		mov     [___196aa4h], eax
		mov     eax, 5
		call    near ___6563ch
		mov     eax, [esp+44h]
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___31d05h:
		cmp     ecx, [eax+___1a01fch]
		jne     short ___31d20h
		lea     edi, [esp+34h]
		mov     esi, ___1806b0h
		movsd   
		movsb   
		mov     dword [esp+48h], 1
___31d20h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 4
		jne     short ___31d52h
		mov     eax, 2
		lea     edi, [esp+34h]
		mov     esi, ___1806b8h
		mov     [esp+48h], eax
		movsd   
		movsb   
___31d52h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		cmp     edx, byte 3
		jne     short ___31d81h
		lea     edi, [esp+34h]
		mov     esi, ___1806dch
		mov     [esp+48h], edx
		movsd   
		movsb   
___31d81h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 2
		jne     short ___31db2h
		lea     edi, [esp+34h]
		mov     esi, ___1806c0h
		movsd   
		movsb   
		mov     dword [esp+48h], 4
___31db2h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 1
		jne     short ___31de4h
		mov     ebp, 5
		lea     edi, [esp+34h]
		mov     esi, ___1806c8h
		mov     [esp+48h], ebp
		movsd   
		movsb   
___31de4h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 0
		jne     short ___31e14h
		mov     ebx, 6
		mov     eax, [___1806e4h]
		mov     [esp+48h], ebx
		mov     [esp+34h], eax
___31e14h:
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1e2h
		mov     edx, [esp+50h]
		mov     eax, [esp+54h]
		call    near ___13248h
		mov     eax, [esp+4ch]
		add     eax, byte 25h
		lea     ebp, [eax*4+0]
		mov     ecx, [esp+50h]
		add     ebp, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     ebp, 7
		mov     edx, 68h
		add     eax, ebp
		mov     esi, [___1a1e84h]
		add     eax, ecx
		mov     ecx, 80h
		lea     ebx, [eax+0ch]
___31e60h:
		mov     edi, edx
___31e62h:
		mov     al, [esi]
		or      al, al
		je      short ___31e6ah
		mov     [ebx], al
___31e6ah:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___31e62h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___31e60h
		mov     edx, [esp+50h]
		add     edx, ebp
		mov     eax, ___193400h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 35h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+50h]
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___193450h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 45h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___1934a0h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 55h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___1934f0h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, byte 65h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___193540h
		add     edx, 80h
		mov     ebx, 4
		call    near ___13094h
___31f2eh:
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		mov     eax, [___1a1028h]
		mov     ebp, edx
		mov     al, [ebp+eax*4+___1a0ef8h]
		mov     esi, [___1a1ef8h]
		and     eax, 0ffh
		cmp     eax, esi
		je      short ___31f2eh
		mov     esi, ___193590h
		mov     edi, esp
		call 	__STRCPY
		mov     eax, [___1a1028h]
		xor     edx, edx
		mov     dl, [ebp+eax*4+___1a0ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, esp
		add     esi, eax
		mov     edx, [esp+4ch]
		call 	__STRCAT
		mov     esi, ___182388h
		mov     edi, esp
		add     edx, byte 75h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     edx, eax
		mov     eax, esp
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, 85h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edi, [esp+50h]
		shl     eax, 7
		add     eax, edi
		lea     edx, [eax+80h]
		mov     esi, ___193630h
		mov     eax, ___1935e0h
		mov     edi, esp
		call    near ___13094h
		call 	__STRCPY
		lea     esi, [esp+34h]
		mov     edi, esp
		mov     edx, [esp+4ch]
		call 	__STRCAT
		mov     esi, ___180724h
		mov     edi, esp
		add     edx, 95h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     eax, edx
		lea     edx, [eax+80h]
		mov     eax, esp
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, 0a5h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     edx, eax
		mov     eax, ___193680h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [esp+4ch]
		add     edx, 0b5h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     ebx, [esp+50h]
		shl     eax, 7
		add     eax, ebx
		lea     edx, [eax+80h]
		mov     eax, ___1936d0h
		call    near ___13094h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		xor     edx, edx
___32137h:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 32h
		jl      short ___32137h
		push    8000h
		mov     edx, 5
		mov     ecx, [___24cc54h]
		push    24000h
		xor     ebx, ebx
		mov     eax, edx
		call    near ___654d4h
		xor     edx, edx
___32162h:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 14h
		jl      short ___32162h
		mov     ecx, 1
		mov     edx, [esp+4ch]
		mov     eax, [esp+50h]
		xor     ebx, ebx
		mov     [esp+40h], ecx
		add     edx, 0beh
		add     eax, 80h
		lea     ecx, [esp+40h]
		call    near ___148cch
		cmp     dword [esp+40h], byte 1
		jne     short ___321efh
		mov     eax, [esp+48h]
		mov     [___196aa8h], eax
		mov     eax, [___1a1028h]
		mov     al, [ebp+eax*4+___1a0ef8h]
		and     eax, 0ffh
		mov     [___196aach], eax
		mov     edx, eax
		shl     eax, 3
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a1ff1h
		add     esi, eax
		call 	__STRCPY
___321efh:
		mov     eax, 5
		call    near ___6563ch
		mov     eax, [esp+44h]
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___32207h:
		mov     eax, [___196b24h]
		cmp     eax, byte 61h
		jge     short ___3221ah
		lea     edx, [eax+2]
		mov     [___196b24h], edx
___3221ah:
		xor     ebx, ebx
		mov     [esp+44h], ebx
		mov     eax, [esp+44h]
___32224h:
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

*/

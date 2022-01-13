#include "drally.h"
#include "drally_fonts.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __POINTER__ ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __BYTE__ ___1a1160h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0ff8h;
	extern __BYTE__ ___196abch[];
	extern __POINTER__ ___1a1040h[0x13];
	extern __BYTE__ ___196ab8h[];
	extern __POINTER__ ___1a10a4h;
	extern __BYTE__ ___196af4h[];
	extern __BYTE__ ___1a2010h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __POINTER__ ___1a1030h;
	extern __POINTER__ ___1a1038h;


void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___23758h(void);
__BYTE__ ___5994ch(void);
void ___2ab50h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a968h_cdecl(__DWORD__);
void restoreDefaultScreenBuffer(void);
void ___2fca4h(void);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___25330h(void);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);

void ___2fe64h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, esi0, ebp;
	__BYTE__ 	esp[4];

	
		ecx = 0x4b000;
		ebx = 0x27f;
		D(___1a1160h) = 0;
		memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101h_DefaultScreenBufferB, ecx);
		ecx = 0x6d;
		___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
		edx = 0x173;
		eax = 0;
		___135fch(eax, edx, ebx, ecx);

#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			goto ___2fefbh;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
		___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
___2fefbh:
		___23230h();
		ecx = 0x29b80;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101h_DefaultScreenBufferB+0xf000, ecx);
		edx = 0x280;
		___25330h();
		ecx = 0x10;
		esi = 0;
		ebx = 0xd200;

		while(1){

			edi = edx;
		
			while(1){

				L(eax) = B(___1a0ff8h+esi);
				if(L(eax) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = L(eax);
				ebx++;
				esi++;
				edi--;
				if(edi == 0) break;
			}

			ebx += 0x280;
			ebx -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		eax = D(___1a1160h);
		ebx = 0x12c20;
		L(eax) = B(eax+___196abch);
		eax &= 0xff;
		ecx = 0x62;
		edx = 0x80;
		esi = 0;
		L(edx) >>= 2;
___2ff98h:
		H(ecx) = L(edx);
___2ff9ah:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1040h[eax]+esi);
		ebx += 4;
		//add     esi, byte 4
		esi += 4;
		//dec     ch
		H(ecx)--;
		//jne     short ___2ff9ah
		if(H(ecx)) goto ___2ff9ah;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___2ff98h
		if(L(ecx)) goto ___2ff98h;
		//mov     ecx, 54h
		ecx = 0x54;
		//mov     edx, 10h
		edx = 0x10;
		esi = 0;
		ebx = 0x14f10;
		L(edx) >>= 2;
___2ffd9h:
		//mov     ch, dl
		H(ecx) = L(edx);
___2ffdbh:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a10a4h+esi);
		//add     ebx, byte 4
		ebx += 4;
		//add     esi, byte 4
		esi += 4;
		//dec     ch
		H(ecx)--;
		//jne     short ___2ffdbh
		if(H(ecx)) goto ___2ffdbh;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___2ffd9h
		if(L(ecx)) goto ___2ffd9h;
		//mov     ecx, 54h
		ecx = 0x54;
		//mov     edx, 10h
		edx = 0x10;
		ebx = 0x14fa0;
		esi = 0x540;
		L(edx) >>= 2;
___30020h:
		H(ecx) = L(edx);
___30022h:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a10a4h+esi);
		ebx += 4;
		esi += 4;
		//dec     ch
		H(ecx)--;
		//jne     short ___30022h
		if(H(ecx)) goto ___30022h;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___30020h
		if(L(ecx)) goto ___30020h;
		//mov     ecx, 75h
		ecx = 0x75;
		//mov     ebx, 0b2h
		ebx = 0xb2;
		//mov     edx, 6eh
		edx = 0x6e;
		//mov     eax, 7
		eax = 7;

	//push 	ecx
	//push 	ebx
	//push 	edx
	//push 	eax
	//	call    ___27f80h_cdecl
	//add 	esp, 10h
		___27f80h_cdecl(eax, edx, ebx, ecx);
	//	call    near ___2fca4h
		___2fca4h();
	//	mov     ecx, [___196ab8h]
		ecx = D(___196ab8h);
	//	xor     edi, edi
		edi = 0;
	//	test    ecx, ecx
	//	jle     short ___300c7h
		if((int)ecx <= 0) goto ___300c7h;
	//	xor     ebp, ebp
		ebp = 0;
___3006eh:
		//mov     ecx, 62h
		ecx = 0x62;
		eax = 0;
		esi = D(ebp+___196af4h);
		L(eax) = B(edi+___1a2010h+1);
		edx = 0x80;
		ebx = esi;
		edi++;
		L(edx) >>= 2;
___30099h:
		//mov     ch, dl
		H(ecx) = L(edx);
___3009bh:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1040h[eax]+esi);
		//add     ebx, byte 4
		ebx += 4;
		//add     esi, byte 4
		esi += 4;
		//dec     ch
		H(ecx)--;
		//jne     short ___3009bh
		if(H(ecx)) goto ___3009bh;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___30099h
		if(L(ecx)) goto ___30099h;
		//mov     eax, [___196ab8h]
		eax = D(___196ab8h);
		//add     ebp, byte 4
		ebp += 4;
		//cmp     edi, eax
		//jl      short ___3006eh
		if((int)edi < (int)eax) goto ___3006eh;
___300c7h:
		//xor     edx, edx
		edx = 0;
	//push 	edx
	//push 	ecx
	//	call 	restoreDefaultScreenBuffer
	//pop 	ecx
	//pop 	edx
		restoreDefaultScreenBuffer();
		//xor     eax, eax
		eax = 0;
		//mov     [esp], edx
		D(esp) = edx;
	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___3a968h_cdecl
	//add 	esp, 4
	//pop 	ecx
	//pop 	edx
		___3a968h_cdecl(eax);
	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___12cb8h__VESA101_PRESENTSCREEN
	//pop 	eax
	//pop		ecx
	//pop		edx
		___12cb8h__VESA101_PRESENTSCREEN();
___300e2h:
	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___2ab50h
	//pop 	eax
	//pop 	ecx
	//pop 	edx
		___2ab50h();

	//push 	edx
	//push 	ecx
	//	call    ___5994ch
	//pop 	ecx
	//pop 	edx
		L(eax) = ___5994ch();
		//and     eax, 0ffh
		eax &= 0xff;
		//cmp     eax, byte 4bh
		//jb      short ___30134h
		if(eax < 0x4b) goto ___30134h;
		//jbe     near ___3016eh
		if(eax <= 0x4b) goto ___3016eh;
		//cmp     eax, dword 9ch
		//jb      short ___30126h
		if(eax < 0x9c) goto ___30126h;
		//jbe     near ___3051dh
		if(eax <= 0x9c) goto ___3051dh;
		//cmp     eax, dword 0cbh
		//jb      near ___306edh
		if(eax < 0xcb) goto ___306edh;
		//jbe     short ___3016eh
		if(eax <= 0xcb) goto ___3016eh;
		//cmp     eax, dword 0cdh
		//je      near ___30345h
		if(eax == 0xcd) goto ___30345h;
		//jmp     near ___306edh
		goto ___306edh;
___30126h:
		//cmp     eax, byte 4dh
		//je      near ___30345h
		if(eax == 0x4d) goto ___30345h;
		//jmp     near ___306edh
		goto ___306edh;
___30134h:
		//cmp     eax, byte 1ch
		//jb      short ___30149h
		if(eax < 0x1c) goto ___30149h;
		//jbe     near ___3051dh
		if(eax <= 0x1c) goto ___3051dh;
		//cmp     eax, byte 3bh
		//je      short ___30157h
		if(eax == 0x3b) goto ___30157h;
		//jmp     near ___306edh
		goto ___306edh;
___30149h:
		//cmp     eax, byte 1
		//je      near ___306e6h
		if(eax == 1) goto ___306e6h;
		//jmp     near ___306edh
		goto ___306edh;
___30157h:
		//cmp     dword [___19bd60h], byte 0
		//je      near ___306edh
#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			goto ___306edh;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		//call    near ___23758h
		___23758h();
		//jmp     near ___306edh
		goto ___306edh;
___3016eh:
		//mov     ebx, [___1a1160h]
		ebx = D(___1a1160h);
		//test    ebx, ebx
		//jle     short ___30183h
		if((int)ebx <= 0) goto ___30183h;
		//lea     esi, [ebx-1]
		esi = ebx-1;
		//mov     [___1a1160h], esi
		D(___1a1160h) = esi;
		//jmp     short ___3018dh
		goto ___3018dh;
___30183h:
		//mov     dword [___1a1160h], 13h
		D(___1a1160h) = 0x13;
___3018dh:
		//push    8000h
		//mov     edx, 1ah
		edx = 0x1a;
		//mov     edi, 28000h
		edi = 0x28000;
		//mov     eax, 1
		eax = 1;
		//push    edi
		//mov     ecx, [___24cc54h_sfx_volume]
		ecx = ___24cc54h_sfx_volume;
		//xor     ebx, ebx
		ebx = 0;
	//push 	ecx
	//push 	ebx
	//push 	edx
	//push 	eax
	//	call    dRally_Sound_pushEffect
	//add 	esp, 18h
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, edi, 0x8000);
		//mov     ecx, 54h
		ecx = 0x54;
		//mov     edx, 10h
		edx = 0x10;
		ebx = 0x14f10;
		esi = 0xa80;
		//shr     dl, 2
		L(edx) >>= 2;
___301d5h:
		//mov     ch, dl
		H(ecx) = L(edx);
___301d7h:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a10a4h+esi);
		//add     ebx, byte 4
		ebx += 4;
		//add     esi, byte 4
		esi += 4;
		//dec     ch
		H(ecx)--;
		//jne     short ___301d7h
		if(H(ecx)) goto ___301d7h;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___301d5h
		if(L(ecx)) goto ___301d5h;
		//cmp     dword [___1a1160h], byte 12h
		//jne     short ___30241h
		if(D(___1a1160h) != 0x12) goto ___30241h;
		//mov     ecx, 62h
		ecx = 0x62;
		//mov     edx, 80h
		edx = 0x80;
		esi = 0;
		ebx = 0x12c20;
		L(edx) >>= 2;
___3021fh:
		H(ecx) = L(edx);
___30221h:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1030h+esi);
		//add     ebx, byte 4
		ebx += 4;
		//add     esi, byte 4
		esi += 4;
		//dec     ch
		H(ecx)--;
		//jne     short ___30221h
		if(H(ecx)) goto ___30221h;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___3021fh
		if(L(ecx)) goto ___3021fh;
___30241h:
		//cmp     dword [___1a1160h], byte 13h
		//jne     short ___3028bh
		if(D(___1a1160h) != 0x13) goto ___3028bh;
		//mov     ecx, 62h
		ecx = 0x62;
		//mov     edx, 80h
		edx = 0x80;
		esi = 0;
		ebx = 0x12c20;
		L(edx) >>= 2;
___30269h:
		H(ecx) = L(edx);
___3026bh:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1038h+esi);
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___3026bh;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___30269h;
___3028bh:
		edx = D(___1a1160h);
		if((int)edx >= 0x12) goto ___302e3h;
		L(eax) = B(edx+___196abch);
		ebx = 0x12c20;
		eax &= 0xff;
		ecx = 0x62;
		edx = 0x80;
		esi = 0;
		L(edx) >>= 2;
___302c1h:
		H(ecx) = L(edx);
___302c3h:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1040h[eax]+esi);
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___302c3h;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___302c1h
		if(L(ecx)) goto ___302c1h;
___302e3h:
		//call    near ___2fca4h
		___2fca4h();
	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___12cb8h__VESA101_PRESENTSCREEN
	//pop 	eax
	//pop		ecx
	//pop		edx
		___12cb8h__VESA101_PRESENTSCREEN();
		//xor     edx, edx
		edx = 0;
___302efh:
		//inc     edx
		edx++;
	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___2ab50h
	//pop 	eax
	//pop 	ecx
	//pop 	edx
		___2ab50h();
		//cmp     edx, byte 8
		//jl      short ___302efh
		if((int)edx < 8) goto ___302efh;
		//mov     ecx, 54h
		ecx = 0x54;
		//mov     edx, 10h
		edx = 0x10;
		esi = 0;
		ebx = 0x14f10;
		L(edx) >>= 2;
___30319h:
		H(ecx) = L(edx);
___3031bh:
		eax = D(___1a10a4h+esi);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___3031bh;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___30319h
		if(L(ecx)) goto ___30319h;

	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___12cb8h__VESA101_PRESENTSCREEN
	//pop 	eax
	//pop		ecx
	//pop		edx
		___12cb8h__VESA101_PRESENTSCREEN();
		//jmp     near ___306edh
		goto ___306edh;
___30345h:
		//mov     ebx, [___1a1160h]
		ebx = D(___1a1160h);
		//cmp     ebx, byte 13h
		//jge     short ___3035bh
		if((int)ebx >= 0x13) goto ___3035bh;
		//lea     esi, [ebx+1]
		esi = ebx+1;
		//mov     [___1a1160h], esi
		D(___1a1160h) = esi;
		//jmp     short ___30363h
		goto ___30363h;
___3035bh:
		//xor     ecx, ecx
		ecx = 0;
		//mov     [___1a1160h], ecx
		D(___1a1160h) = ecx;
___30363h:
		//push    8000h
		//mov     edx, 1ah
		edx = 0x1a;
		//mov     edi, 28000h
		edi = 0x28000;
		//mov     eax, 1
		eax = 1;
		//push    edi
		//mov     ecx, [___24cc54h_sfx_volume]
		ecx = ___24cc54h_sfx_volume;
		//xor     ebx, ebx
		ebx = 0;
	//push 	ecx
	//push 	ebx
	//push 	edx
	//push 	eax
	//	call    dRally_Sound_pushEffect
	//add 	esp, 18h
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, edi, 0x8000);
		//mov     ecx, 54h
		ecx = 0x54;
		edx = 0x10;
		ebx = 0x14fa0;
		esi = 0xfc0;
		L(edx) >>= 2;
___303abh:
		H(ecx) = L(edx);
___303adh:
		eax = D(___1a10a4h+esi);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___303adh;
		//add     ebx, 280h
		ebx += 0x280;
		//shl     dl, 2
		L(edx) <<= 2;
		//sub     ebx, edx
		ebx -= edx;
		//shr     dl, 2
		L(edx) >>= 2;
		//dec     cl
		L(ecx)--;
		//jne     short ___303abh
		if(L(ecx)) goto ___303abh;
		//cmp     dword [___1a1160h], byte 12h
		//jne     short ___30417h
		if(D(___1a1160h) != 0x12) goto ___30417h;
		ecx = 0x62;
		edx = 0x80;
		esi = 0;
		ebx = 0x12c20;
		L(edx) >>= 2;
___303f5h:
		H(ecx) = L(edx);
___303f7h:
		eax = D(___1a1030h+esi);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___303f7h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___303f5h;
___30417h:
		if(D(___1a1160h) != 0x13) goto ___30461h;
		ecx = 0x62;
		edx = 0x80;
		esi = 0;
		ebx = 0x12c20;
		L(edx) >>= 2;
___3043fh:
		H(ecx) = L(edx);
___30441h:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1038h+esi);
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___30441h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___3043fh;
___30461h:
		edx = D(___1a1160h);
		if((int)edx >= 0x12) goto ___304b5h;
		ecx = 0x62;
		esi0 = B(edx+___196abch);
		edx = 0x80;
		ebx = 0x12c20;
		esi = 0;;
		L(edx) >>= 2;
___30493h:
		H(ecx) = L(edx);
___30495h:
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1040h[esi0]+esi);
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___30495h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___30493h;
___304b5h:
		//call    near ___2fca4h
		___2fca4h();
	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___12cb8h__VESA101_PRESENTSCREEN
	//pop 	eax
	//pop		ecx
	//pop		edx
		___12cb8h__VESA101_PRESENTSCREEN();
		//xor     edx, edx
		edx = 0;
___304c1h:
		edx++;
		___2ab50h();
		if((int)edx < 8) goto ___304c1h;
		ecx = 0x54;
		edx = 0x10;
		ebx = 0x14fa0;
		esi = 0x540;
		L(edx) >>= 2;
___304f1h:
		H(ecx) = L(edx);
___304f3h:
		eax = D(___1a10a4h+esi);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___304f3h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___304f1h;

	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___12cb8h__VESA101_PRESENTSCREEN
	//pop 	eax
	//pop		ecx
	//pop		edx
		___12cb8h__VESA101_PRESENTSCREEN();
		//jmp     near ___306edh
		goto ___306edh;
___3051dh:
		//push    8000h
		//mov     edx, 19h
		edx = 0x19;
		//mov     ecx, 28000h
		//mov     eax, 1
		eax = 1;
		//push    ecx
		//xor     ebx, ebx
		ebx = 0;
		//mov     ecx, [___24cc54h_sfx_volume]
		ecx = ___24cc54h_sfx_volume;
	//push 	ecx
	//push 	ebx
	//push 	edx
	//push 	eax
	//	call    dRally_Sound_pushEffect
	//add 	esp, 18h
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x28000, 0x8000);
		//cmp     dword [___1a1160h], byte 12h
		//jne     near ___3063bh
		if(D(___1a1160h) != 0x12) goto ___3063bh;
		//mov     edi, [___196ab8h]
		edi = D(___196ab8h);
		//test    edi, edi
		//jle     near ___30618h
		if((int)edi <= 0) goto ___30618h;
		//xor     dl, dl
		L(edx) = 0;
		//mov     eax, edi
		eax = edi;
		//mov     [edi+___1a2010h+1], dl
		B(edi+___1a2010h+1) = L(edx);
		//test    edi, edi
		//jle     short ___30571h
		if((int)edi <= 0) goto ___30571h;
		//lea     eax, [edi-1]
		eax = edi-1;
		//mov     [___196ab8h], eax
		D(___196ab8h) = eax;
___30571h:
		//mov     edx, 23f00h
		edx = 0x23f00;
		//mov     ebx, 203h
		ebx = 0x203;
___3057bh:
		ecx = ebx;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx, ___1a1138h__VESA101h_DefaultScreenBufferB+edx, ecx);
		edx += 0x280;
		if(edx != 0x39080) goto ___3057bh;
		//mov     edx, [___196ab8h]
		edx = D(___196ab8h);
		//xor     edi, edi
		edi = 0;
		//test    edx, edx
		//jle     near ___3063bh
		if((int)edx <= 0) goto ___3063bh;
		//xor     ebp, ebp
		ebp = 0;
___305bdh:
		edx = 0x80;
		esi0 = B(edi+___1a2010h+1);
		ecx = D(ebp+___196af4h);
		esi = 0;;
		ebx = ecx;
		ecx = 0x62;
		edi++;
		L(edx) >>= 2;
___305e7h:
		H(ecx) = L(edx);
___305e9h:
		eax = D(___1a1040h[esi0]+esi);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___305e9h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___305e7h;
		esi = D(___196ab8h);
		ebp += 4;
		if((int)edi >= (int)esi) goto ___3063bh;
		goto ___305bdh;
___30618h:
		//push    8000h
		//mov     edx, 1dh
		edx = 0x1d;
		//mov     ebp, 28000h
		ebp = 0x28000;
		//mov     eax, 1
		eax = 1;
		//push    ebp
		//mov     ecx, [___24cc54h_sfx_volume]
		ecx = ___24cc54h_sfx_volume;
		//xor     ebx, ebx
		ebx = 0;
	//push 	ecx
	//push 	ebx
	//push 	edx
	//push 	eax
	//	call    dRally_Sound_pushEffect
	//add 	esp, 18h
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, ebp, 0x8000);
___3063bh:
		//cmp     dword [___1a1160h], byte 13h
		//jne     short ___3064bh
		if(D(___1a1160h) != 0x13) goto ___3064bh;
		//mov     dword [esp], 0ffffffffh
		D(esp) = 0xffffffff;
___3064bh:
		eax = D(___1a1160h);
		if((int)eax >= 0x12) goto ___306dah;
		edx = D(___196ab8h);
		if((int)edx >= 9) goto ___306d3h;
		ecx = D(edx*4+___196af4h);
		L(eax) = B(eax+___196abch);
		ebx = ecx;
		eax &= 0xff;
		ecx = 0x62;
		edx = 0x80;
		esi = 0;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				D(___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx) = D(___1a1040h[eax]+esi);
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		eax = D(___196ab8h);
		edx = D(___1a1160h);
		L(edx) = B(edx+___196abch);
		B(eax+___1a2010h+1) = L(edx);
		eax++;
		D(___196ab8h) = eax;
		goto ___306dah;
___306d3h:
		//mov     dword [esp], 0fffffffeh
		D(esp) = 0xfffffffe;
___306dah:
		//call    near ___2fca4h
		___2fca4h();
	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    ___12cb8h__VESA101_PRESENTSCREEN
	//pop 	eax
	//pop		ecx
	//pop		edx
		___12cb8h__VESA101_PRESENTSCREEN();
		//jmp     short ___306edh
		goto ___306edh;
___306e6h:
		//mov     dword [esp], 0ffffffffh
		D(esp) = 0xffffffff;
___306edh:
		//cmp     dword [esp], byte 0
		//je      near ___300e2h
		if(D(esp) == 0) goto ___300e2h;
		//mov     edi, [___196ab8h]
		edi = D(___196ab8h);
		//test    edi, edi
		//jne     short ___30711h
		if(edi != 0) goto ___30711h;
		//lea     eax, [edi+1]
		eax = edi+1;
		//xor     dh, dh
		H(edx) = 0;
		//mov     [___196ab8h], eax
		D(___196ab8h) = eax;
		//mov     [edi+___1a2010h+1], dh
		B(edi+___1a2010h+1) = H(edx);
___30711h:
		ecx = 0x4b000;
		ebx = 0x27f;
		edx = 0x173;
		memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101h_DefaultScreenBufferB, ecx);
		ecx = 0x6d;
		___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
		eax = 0;
		___135fch(eax, edx, ebx, ecx);

#if defined(DR_MULTIPLAYER)
		if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
			goto ___3078dh;
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
		___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
		___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
___3078dh:
	___23230h();
	return;
}

/*
section .data
chat_mode:
	db 	"press   to enter chat mode",0,0
k_f1:
	db 	"F1",0,0
*/

#include "x86.h"
	
	// " aborted current netgame."
	extern const char ___18108ch[];

    // ""
	extern const char ___180130h[];

	// "-- "
	extern const char ___180864h[];	

	// "Abort Current Game"
	extern const char ___180ba0h[];

	// " has left from Death Rally."
	extern const char ___180ca4h[];

    // "Gamepad/Joystick Enabled"
	extern const char ___181c30h[];

    // "Gamepad/Joystick Disabled"
	extern const char ___181c4ch[];

	extern const char ___181c9ch[];     // "MEN-SAM.CMF"
	extern const char ___181ca8h[];     // "MEN-MUS.CMF"

    // "\nLoading music & effects, please wait...\n"
	extern const char ___182bf8h[];

    // "DEATH RALLY Error: Your VGA-adapter is not fully VESA (VBE 1.0) compliant.\n                   Use UNIVBE or similar emulator to fix the problem.\n"
	extern const char ___182c24h[];

    // "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
	extern const char ___182cb8h[];

    // "          Welcome to Death Rally - Full version 1.1"
	extern const char ___182d08h[];

    // "    Developed by Remedy Entertainment for Apogee Software"
	extern const char ___182d3ch[];

    // "Use arrow keys to change selection and press enter to confirm."
	extern const char ___182d78h[];	

	// "Please insert Death Rally to CD-ROM drive!"
	extern const char ___182db8h[];

	// "Are you sure?"
	extern const char ___182de4h[];

	// "CONTINUE"
	extern const char STRING_CONTINUE[];	
		
	extern byte ___1854bch[];
	extern byte ___185a2ch[];	
	extern byte ___185ba9h[];	
	extern byte ___186a6eh[];
	extern byte ___186cc6h[];
	extern byte ___187432h[];	
	extern byte ___196a84h[];		
	extern byte ___196ab8h[];
	extern byte ___196abch[];
	extern byte ___196abdh[];
	extern byte ___196abeh[];
	extern byte ___196abfh[];
	extern byte ___196d84h[];
	extern byte ___199fa0h[];
	extern byte Pal8to24_1[];
	extern byte p_pal_copper[];	
	extern byte p_bpk_f_big3a[];
	extern byte ___1a10e4h[];	
	extern byte ___1a1124h[];
	extern byte ___1a1dbah[];
	extern byte ___1a1ef4h[];	
	extern byte ___1a1f4dh[];			
	extern byte ___1a1f4eh[];
	extern byte ___1a1f4fh[];
	extern byte ___1a2011h[];
	extern byte ___1a2012h[];
	extern byte ___1a2013h[];
	extern byte ___1a2014h[];
	extern byte ___1a202fh[];
	extern byte ___1a2148h[];
	extern byte ExitCB[];
	extern byte Gamepad[];
	extern byte p_bpk_menubg5[];
	extern byte MyID[];
	extern byte Roster[];
	extern byte RowBoxBuffers[];	
	extern byte RowBox0Colors_R5[];	
	extern byte TimesPlayed[];
	extern byte ToneDialing[];
	extern byte VGABufferPtr_0[];
	extern byte ___VGABufferPtr_0[];		
	extern byte ConfigMusicVolume[];	
	extern byte ConfigSFXVolume[];
	extern byte Font0Props[];	
	extern byte p_bpk_f_sma3a[];
	extern byte NetworkConnectionEstablished[];
	extern byte NetworkConnectionType[];		
	extern const char string__pulse_dialing[];  // "Pulse Dialing"


	void multiplayerRaceMenu__dr(dword);	
	void startRacingMenu__dr(void);		
	void configureMenu__dr(void);	
	void hallOfFameMenu__dr(void);
	void creditsMenu__dr(void);
 	void showPreviewMenu__dr(void);

	void ___11564h(float, float, float);
	void emptyFunction_0(void);	
	void loadMenuBPK(void);	
	void unloadMenuBPK(void);
	void loadOtherBPK(void);
	void ___12940h(void);
    void unloadOtherBPK(void);
	void popScreen(void);
    void ___12dc4h(void);
	void ___13248h(dword, dword, dword, dword, dword);
	void ___13710h(dword, dword);
	void ___13a98h(dword);
	dword ___146c4h(dword);
	dword ___148cch(dword, dword, dword, dword);		
	void ___23488h(dword, dword, dword);
	void loadShopBPK(void);	
	void unloadShopBPK(void);
    void ___2b318h(void);
	void loadAddBPK(void);
	void unloadAddBPK(void);	
	void ___3a7e0h(dword);
	void ___3d2bch(void);
	void apogee_gt_remedy(void);	
	void ___3d79ch(void);
	void startingScreen__dr(void);	
    void waitSync__dr(void);
	void ___596f0h(void);

	#pragma aux writeColor__video parm routine []
	void writeColor__video(dword, dword, dword, dword);
	void ___605deh(dword);
	void ___606dfh(void);
	void ___61278h(void);
	void ___623d4h(void);
    
    void ___64864h__esp(dword tMSX, const char * fMSX,
                        dword tSFX, const char * fSFX, int nSFX);

	void ___648d8h(void);
	void ___649a8h(void);
	void ___64a28h(void);		
	void updateAMPVolume(dword);	
	void updateMSXVolume(dword);	
	void updateSFXVolume(dword);
	dword ___682a4h(dword);
	dword setSampleRate__esp(dword);
	dword ___659b8h(dword);
	void allocVGABuffer(void);	
    dword chkbankswitch__video(void);
	dword chkcdrom__dr(void);
	void chkfiles__dr(void);
	void chkmemory__dr(void);
	void exitcb2__dr(void);
	void frameFooter__dr(dword, dword, dword, dword);
    void footer__dr(void);
    void freeAllocInfoTable(void);
	void initDrivers(void);	
	void intro__anim(void);			
	dword lastScanCode__keyboard(void);	
	dword nullScanCode__keyboard(void);
	void loadcdromini__dr(void);
	void readConfig__dr(void);
	void writeConfig__dr(void);
	void setmode3h__video(void);
    void restore__keyboard(void);
	void renderTextToBuffer__video(dword, dword, dword, dword);
	void updateScreen_TBD(dword, dword);
	void updateMenuBackgroundAndTextArea(void);
	void playSFX__sound(dword, dword, dword, dword, dword, dword);
    void exit__clib3r(int status);

    #pragma aux __STOSB__clib3r parm [eax][edx][ecx]
    void __STOSB__clib3r(void *, dword, dword);
    
    int printf__clib3r(const char * format, ...);
	int strcmp__clib3r(const char * s1, const char * s2);
    void srand__clib3r(unsigned int seed);

    static inline dword getBiosTicks(void);
    #pragma aux getBiosTicks =  \
        "mov    eax, 46ch"      \
    	"mov    eax, [eax]"     \
        value [eax]

    static inline void setmode101h__vesa(void);
    #pragma aux setmode101h__vesa = \
        "mov    ax, 4f02h"          \
        "mov    bx, 101h"           \
        "int    10h"                \
        modify [eax ebx]

#if defined(__WATCOMC__)
    static inline int idiv_rem(dword, dword, int);
    #pragma aux idiv_rem =          \
        "idiv   ebx"                \
        parm [eax] [edx] [ebx]      \
        value [edx]
#else
    static inline int idiv_rem(dword lo, dword hi, int d){

        return ((long long)lo + ((long long)hi << 0x20)) % d;
    }
#endif

    static dword imul_edx(dword, dword);
    #pragma aux imul_edx =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [edx]

    static dword imul_eax(dword, dword);
    #pragma aux imul_eax =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [eax]

/*
l_drmainmenu:
dd	l_drmultiplayer
dd	l_drstartracing
dd	l_drmultiplayer
dd	l_drconfigure
dd	l_drhof
dd	l_drcredits
dd	l_drpreview
dd	l_drexit
*/

// ~3e847h
void startup__dr(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	double 	st0, st1, st2, st3, st4, st5, st6, st7, st_tmp;
	byte 	__esp[0x100];
	byte *	esp = __esp+0x100;

	PUSH(0);

//		push    58h
//		call    __CHK
//		push    ebx
	PUSH(ebx);
//		push    ecx
	PUSH(ecx);
//		push    edx
	PUSH(edx);
//		push    esi
	PUSH(esi);
//		push    edi
	PUSH(edi);
//		push    ebp
	PUSH(ebp);
//		sub     esp, byte 2ch
	esp -= 0x2c;
//		xor     edx, edx
	edx = 0;
//		mov     ecx, 4eh
	ecx = 0x4e;
//		mov     [esp+24h], edx
	D(esp+0x24) = edx;
//		mov     [esp+0ch], edx
	D(esp+0xc) = edx;
//		mov     [esp+18h], ecx
	D(esp+0x18) = edx;
//		call    __CEXT_F(loadcdromini__dr)
    loadcdromini__dr();
//		call    __CEXT_F(chkmemory__dr)
    chkmemory__dr();
//		call    __CEXT_F(chkfiles__dr)
    chkfiles__dr();
//		mov     ecx, 13h
    ecx = 0x13;
//		mov     eax, __CEXT_V(___1a202fh)
    eax = ___1a202fh;
//		mov     [__CEXT_V(___199fa0h)], edx
    D(___199fa0h) = edx;
//		call    __CEXT_F(__STOSB__clib3r)
    __STOSB__clib3r(eax, edx, ecx);
//		xor     ah, ah
    ah = 0;
//		mov     esi, 0afh
    esi = 0xaf;
//		mov     [__CEXT_V(___1a2148h)], ah
    B(___1a2148h) = ah;
//		call    __CEXT_F(initDrivers)
    initDrivers();
//		call    __CEXT_F(readConfig__dr)
    readConfig__dr();
//		mov     eax, [__CEXT_V(TimesPlayed)]
    eax = D(TimesPlayed);
//		mov     ebp, __CEXT_F(exitcb2__dr)
    ebp = exitcb2__dr;
//		inc     eax
    eax++;
//		mov     [__CEXT_V(ExitCB)], ebp
    D(ExitCB) = ebp;
//		mov     [__CEXT_V(TimesPlayed)], eax
    D(TimesPlayed) = eax;
//		call    __CEXT_F(writeConfig__dr)
    writeConfig__dr();
//		push    __CEXT_V(___182bf8h) 			;; "Loading music & ..."
    PUSH(___182bf8h);
//		mov     [esp+24h], esi
    D(esp+0x24) = esi;
//		call    __CEXT_F(printf__clib3r)
    printf__clib3r(D(esp));
//		add     esp, byte 4
    esp += 4;
//		mov     ebx, 2
    ebx = 2;
//		mov     ecx, __CEXT_V(___181c9ch)		;; "MEN-SAM.CMF"
    ecx = ___181c9ch;
//		call    __CEXT_F(intro__anim)
    intro__anim();
//		push    byte 5
    PUSH(5);
//		mov     edx, __CEXT_V(___181ca8h)		;; "MEN-MUS.CMF"
    edx = ___181ca8h;
//		mov     eax, 1
    eax = 1;
//		call    __CEXT_F(___64864h__esp)
    ___64864h__esp(eax, edx, ebx, ecx, D(esp));
    esp += 4;
//		mov     eax, [__CEXT_V(ConfigMusicVolume)]
    eax = D(ConfigMusicVolume);
//		call    __CEXT_F(updateMSXVolume)
    updateMSXVolume(eax);
//		mov     eax, [__CEXT_V(ConfigSFXVolume)]
    eax = D(ConfigSFXVolume);
//		call    __CEXT_F(updateSFXVolume)
    updateSFXVolume(eax);
//		mov     eax, 2d00h			;; 11520
    eax = 0x2d00;
//		call    __CEXT_F(___682a4h)
    eax = ___682a4h(eax);
//		mov     eax, 5622h			;; 22050
    eax = 0x5622;
//		call    __CEXT_F(setSampleRate__esp)
    eax = setSampleRate__esp(eax);
//		call    __CEXT_F(___648d8h)
    ___648d8h();
//		mov     eax, 1
    eax = 1;
//		call    __CEXT_F(___659b8h)
    eax = ___659b8h(eax);
//		mov     al, [__CEXT_V(___196abch)]
    al = B(___196abch);
//		mov     [__CEXT_V(___1a2011h)], al
    B(___1a2011h) = al;
//		mov     al, [__CEXT_V(___196abdh)]
    al = B(___196abdh);
//		mov     edx, 4
    edx = 4;
//		mov     [__CEXT_V(___1a2012h)], al
    B(___1a2012h) = al;
//		mov     al, [__CEXT_V(___196abeh)]
    al = B(___196abeh);
//		mov     ebx, [__CEXT_V(Gamepad)]
    ebx = D(Gamepad);
//		mov     [__CEXT_V(___1a2013h)], al
    B(___1a2013h) = al;
//		mov     al, [__CEXT_V(___196abfh)]
    al = B(___196abfh);
//		mov     [__CEXT_V(___196ab8h)], edx
    D(___196ab8h) = edx;
//		mov     [__CEXT_V(___1a2014h)], al
    B(___1a2014h) = al;
//		cmp     ebx, byte 1
//		je      ___3e847h
    if(ebx == 1) goto ___3e847h;
//		cmp     ebx, byte 2
//		jne     ___3e860h
    if(ebx != 2) goto ___3e860h;
___3e847h:
//		mov     ecx, 6
	ecx = 6;
//		mov     edi, __CEXT_V(___186cc6h)
	edi = ___186cc6h;
//		mov     esi, __CEXT_V(___181c30h)		;; "Gamepad/Joystick enabled"
	esi = ___181c30h;
//		call    __CEXT_F(___596f0h)
	___596f0h();
//		rep movsd   
	while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		movsb   
	B(edi++) = B(esi++);
//		jmp     ___3e873h
	goto ___3e873h;
___3e860h:
//		mov     ecx, 6
	ecx = 6;
//		mov     edi, __CEXT_V(___186cc6h)
	edi = ___186cc6h;
//		mov     esi, __CEXT_V(___181c4ch)		;; "Gamepad/Joystick disabled"
	esi = ___181c4ch;
//		rep movsd   
	while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		movsw   
	W(edi) = W(esi);
	edi += 2; esi += 2;
___3e873h:
//		cmp     dword [__CEXT_V(ToneDialing)], byte 0
//		jne     ___3e88bh
    if(D(ToneDialing) != 0) goto ___3e88bh;
//		mov     edi, __CEXT_V(___187432h)
    edi = ___187432h;
//		mov     esi, __CEXT_V(string__pulse_dialing)		;; "Pulse Dialing"
    esi = string__pulse_dialing;
//		movsd   
    D(edi) = D(esi);
	edi += 4; esi += 4;
//		movsd   
    D(edi) = D(esi);
	edi += 4; esi += 4;
//		movsd   
    D(edi) = D(esi);
	edi += 4; esi += 4;
//		movsw   
    W(edi) = W(esi);
	edi += 2; esi += 2;
___3e88bh:
//		mov     eax, 46ch		;; BIOS tick count
//		mov     eax, [eax]
    eax = getBiosTicks();
//		call    __CEXT_F(srand__clib3r)
    srand__clib3r(eax);
//		call    __CEXT_F(___606dfh)
    ___606dfh();
//		mov     ax, 4f02h
//		mov     bx, 101h
//		int     10h
    setmode101h__vesa();
//		call    __CEXT_F(chkbankswitch__video)
    eax = chkbankswitch__video();
//		test    eax, eax
//		je      l_bs_ok
    if(eax == 0) goto l_bs_ok;
//		call    __CEXT_F(setmode3h__video)
    setmode3h__video();
//		push    __CEXT_V(___182c24h)
    PUSH(___182c24h);
//		call    __CEXT_F(printf__clib3r)
    printf__clib3r(D(esp));
//		add     esp, byte 4
    esp += 4;
//		push    __CEXT_V(___182cb8h)
    PUSH(___182cb8h);
//		call    __CEXT_F(printf__clib3r)
    printf__clib3r(D(esp));
//		add     esp, byte 4
    esp += 4;
//		call    __CEXT_F(___64a28h)
    ___64a28h();
//		call    __CEXT_F(freeAllocInfoTable)
    freeAllocInfoTable();
//		call    __CEXT_F(restore__keyboard)
    restore__keyboard();
//		mov     eax, 70h
    eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
    exit__clib3r(eax);
l_bs_ok:
//		mov     eax, 3ch
    eax = 0x3c;
//		xor     ebx, ebx
    ebx = 0;
//		call    __CEXT_F(___605deh)
    ___605deh(eax);
//		call    __CEXT_F(allocVGABuffer)
    allocVGABuffer();
//		call    __CEXT_F(apogee_gt_remedy)
    apogee_gt_remedy();
//		call    __CEXT_F(startingScreen__dr)
    startingScreen__dr();
//		call    __CEXT_F(loadMenuBPK)
    loadMenuBPK();
//		call    __CEXT_F(loadOtherBPK)
    loadOtherBPK();
//		call    __CEXT_F(emptyFunction_0)
    emptyFunction_0();
//		call    __CEXT_F(loadShopBPK)
    loadShopBPK();
//		call    __CEXT_F(loadAddBPK)
    loadAddBPK();
//		call    __CEXT_F(___3d2bch)
    ___3d2bch();
//		call    __CEXT_F(___12940h)
    ___12940h();
//		mov     edx, [__CEXT_V(MyID)]
    edx = D(MyID);
//		lea     eax, [edx*8+0]
    eax = 8*edx;
//		sub     eax, edx
    eax -= edx;
//		shl     eax, 2
    eax <<= 2;
//		sub     eax, edx
    eax -= edx;
//		mov     edx, [eax*4+__CEXT_V(Roster)+2ch]
    edx = D(eax*4+Roster+0x2c);
//		lea     eax, [edx*4+0]
    eax = 4*edx;
//		sub     eax, edx
    eax -= edx;
//		mov     edx, [__CEXT_V(p_pal_copper)]
    edx = D(p_pal_copper);
//		add     edx, eax
    edx += eax;
//		xor     eax, eax
    eax = 0;
//		mov     al, [edx+2]
    al = B(edx+2);
//		mov     [esp+28h], eax
    D(esp+0x28) = eax;
//		fild    word [esp+28h]
    FPUSH();
    st0 = (double)(short)W(esp+0x28);
//		sub     esp, byte 4
    esp -= 4;
//		xor     eax, eax
    eax = 0;
//		fstp    dword [esp]
    F32(esp) = (float)st0;
    FPOP();
//		mov     al, [edx+1]
    al = B(edx+1);
//		mov     [esp+2ch], eax
    D(esp+0x2c) = eax;
//		fild    word [esp+2ch]
    FPUSH();
    st0 = (double)(short)W(esp+0x2c);
//		sub     esp, byte 4
    esp -= 4;
//		xor     eax, eax
    eax = 0;
//		fstp    dword [esp]
    F32(esp) = (float)st0;
    FPOP();
//		mov     al, [edx]
    al = B(edx);
//		mov     [esp+30h], eax
    D(esp+0x30) = eax;
//		fild    word [esp+30h]
    FPUSH();
    st0 = (double)(short)W(esp+0x30);
//		sub     esp, byte 4
    esp -= 4;
//		fstp    dword [esp]
    F32(esp) = (float)st0;
    FPOP();
//		mov     ecx, 4b000h
    ecx = 0x4b000;
//		call    __CEXT_F(___11564h)
    ___11564h(F32(esp), F32(esp+4), F32(esp+8));
    esp += 0xc;
//		mov     esi, [__CEXT_V(p_bpk_menubg5)]
    esi = D(p_bpk_menubg5);
//		mov     edi, [__CEXT_V(VGABufferPtr_0)]
    edi = D(VGABufferPtr_0);
//		push    edi
    PUSH(edi);
//		mov     eax, ecx
    eax = ecx;
//		shr     ecx, 2
    ecx >>= 2;
//		rep movsd   
    while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		mov     cl, al
    cl = al;
//		and     cl, 3
    cl &= 3;
//		rep movsb   
    while(ecx){
		B(edi) = B(esi);
		edi++; esi++; ecx--;
	}
//		pop     edi
    POP(edi);
//		mov     edx, [__CEXT_V(MyID)]
    edx = D(MyID);
//		lea     eax, [edx*8+0]
    eax = 8*edx;
//		sub     eax, edx
    eax -= edx;
//		shl     eax, 2
    eax <<= 2;
//		sub     eax, edx
    eax -= edx;
//		xor     edi, edi
    edi = 0;
//		mov     dl, [__CEXT_V(___180130h)]
    dl = B(___180130h);
//		mov     [eax*4+__CEXT_V(Roster)+40h], edi
    D(eax*4+Roster+0x40) = edi;
//		mov     [esp+8], edi
    D(esp+8) = edi;
//		mov     [eax*4+__CEXT_V(Roster)], dl
    B(eax*4+Roster) = dl;
//		xor     eax, eax
    eax = 0;
___3e9dfh:
//		mov     dl, [__CEXT_V(___180130h)]
    dl = B(___180130h);
//		mov     [eax+__CEXT_V(RowBoxBuffers)], dl
    B(eax+RowBoxBuffers) = dl;
//		mov     edx, [esp+8]
    edx = D(esp+8);
//		inc     edx
    edx++;
//		xor     bl, bl
    bl = 0;
//		add     eax, 96h
    eax += 0x96;
//		mov     [edx+__CEXT_V(___1a1f4dh)], bl
    B(edx+___1a1f4dh) = bl;
//		mov     [esp+8], edx
    D(esp+8) = edx;
//		cmp     edx, byte 16h
//		jl      ___3e9dfh
    if((int)edx < 0x16) goto ___3e9dfh;
//		mov     ecx, 0dh
    ecx = 0xd;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		mov     esi, __CEXT_V(___182d08h)
    esi = ___182d08h;
//		mov     bh, 1
    bh = 1;
//		rep movsd   
    while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		mov     edx, __CEXT_V(RowBoxBuffers)
    edx = RowBoxBuffers;
//		xor     ecx, ecx
    ecx = 0;
//		mov     [__CEXT_V(RowBox0Colors_R5)], bh
    B(RowBox0Colors_R5) = bh;
//		mov     [esp+8], ecx
    D(esp+8) = ecx;
//		lea     ecx, [edx+96h]
    ecx = edx+0x96;
___3ea30h:
//		mov     esi, ecx
    esi = ecx;
//		mov     edi, edx
    edi = edx;
//		push    edi
    PUSH(edi);
___3ea35h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___3ea4dh
    if(al == 0) goto ___3ea4dh;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___3ea35h
    if(al != 0) goto ___3ea35h;
___3ea4dh:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+8]
    eax = D(esp+8);
//		mov     esi, [esp+8]
    esi = D(esp+8);
//		add     edx, 96h
    edx += 0x96;
//		add     ecx, 96h
    ecx += 0x96;
//		inc     esi
    esi++;
//		mov     al, [eax+__CEXT_V(___1a1f4fh)]
    al = B(eax+___1a1f4fh);
//		mov     [esp+8], esi
    D(esp+8) = esi;
//		mov     [esi+__CEXT_V(___1a1f4dh)], al
    B(esi+___1a1f4dh) = al;
//		cmp     esi, byte 15h
//		jl      ___3ea30h
    if((int)esi < 0x15) goto ___3ea30h;
//		mov     ecx, 0eh
    ecx = 0xe;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		mov     esi, __CEXT_V(___182d3ch)
    esi = ___182d3ch;
//		rep movsd   
    while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		movsw   
	W(edi) = W(esi);
	edi += 2; esi += 2;
//		mov     cl, 1
    cl = 1;
//		xor     ebp, ebp
    ebp = 0;
//		mov     [__CEXT_V(RowBox0Colors_R5)], cl
    B(RowBox0Colors_R5) = cl;
//		mov     ecx, __CEXT_V(RowBoxBuffers)
    ecx = RowBoxBuffers;
//		mov     [esp+8], ebp
    D(esp+8) = ebp;
//		lea     edx, [ecx+96h]
    edx = ecx+0x96;
___3eaa4h:
//		mov     esi, edx
    esi = edx;
//		mov     edi, ecx
    edi = ecx;
//		push    edi
    PUSH(edi);
___3eaa9h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___3eac1h
    if(al == 0) goto ___3eac1h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___3eaa9h
    if(al != 0) goto ___3eaa9h;
___3eac1h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+8]
    eax = D(esp+8);
//		mov     esi, [esp+8]
    esi = D(esp+8);
//		mov     al, [eax+__CEXT_V(___1a1f4fh)]
    al = B(eax+___1a1f4fh);
//		add     ecx, 96h
    ecx += 0x96;
//		mov     [esi+__CEXT_V(___1a1f4eh)], al
    B(esi+___1a1f4eh) = al;
//		lea     eax, [esi+1]
    eax = esi+1;
//		add     edx, 96h
    edx += 0x96;
//		mov     [esp+8], eax
    D(esp+8) = eax;
//		cmp     eax, byte 15h
//		jl      ___3eaa4h
    if((int)eax < 0x15) goto ___3eaa4h;
//		mov     byte [__CEXT_V(RowBox0Colors_R5)], 1
    B(RowBox0Colors_R5) = 1;
//		xor     ecx, ecx
    ecx = 0;
//		mov     al, [__CEXT_V(___180130h)]
    al = B(___180130h);
//		mov     [esp+8], ecx
    D(esp+8) = ecx;
//		mov     ecx, __CEXT_V(RowBoxBuffers)
    ecx = RowBoxBuffers;
//		mov     [__CEXT_V(___1a1dbah)], al
    B(___1a1dbah) = al;
//		lea     edx, [ecx+96h]
    edx = ecx+0x96;
___3eb10h:
//		mov     esi, edx
    esi = edx;
//		mov     edi, ecx
    edi = ecx;
//		push    edi
    PUSH(edi);
___3eb15h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___3eb2dh
    if(al == 0) goto ___3eb2dh;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___3eb15h
    if(al != 0) goto ___3eb15h;
___3eb2dh:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+8]
    eax = D(esp+8);
//		mov     esi, [esp+8]
    esi = D(esp+8);
//		add     ecx, 96h
    ecx += 0x96;
//		add     edx, 96h
    edx += 0x96;
//		inc     esi
    esi++;
//		mov     al, [eax+__CEXT_V(___1a1f4fh)]
    al = B(eax+___1a1f4fh);
//		mov     [esp+8], esi
    D(esp+8) = esi;
//		mov     [esi+__CEXT_V(___1a1f4dh)], al
    B(esi+___1a1f4dh) = al;
//		cmp     esi, byte 15h
//		jl      ___3eb10h
    if((int)esi < 0x15) goto ___3eb10h;
//		mov     ecx, 0fh
    ecx = 0xf;
//		mov     edi, __CEXT_V(___1a1dbah)
    edi = ___1a1dbah;
//		mov     esi, __CEXT_V(___182d78h)
    esi = ___182d78h;
//		mov     al, 1
    al = 1;
//		xor     ebp, ebp
    ebp = 0;
//		rep movsd   
    while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		movsw   
	W(edi) = W(esi);
	edi += 2; esi += 2;
//		movsb   
	B(edi++) = B(esi++);
//		mov     [__CEXT_V(RowBox0Colors_R5)], al
    B(RowBox0Colors_R5) = al;
//		mov     ecx, __CEXT_V(RowBoxBuffers)
    ecx = RowBoxBuffers;
//		mov     [esp+8], ebp
    D(esp+8) = ebp;
//		lea     edx, [ecx+96h]
    edx = ecx+0x96;
___3eb84h:
//		mov     esi, edx
    esi = edx;
//		mov     edi, ecx
    edi = ecx;
//		push    edi
    PUSH(edi);
___3eb89h:
//		mov     al, [esi]
    al = B(esi);
//		mov     [edi], al
    B(edi) = al;
//		cmp     al, 0
//		je      ___3eba1h
    if(al == 0) goto ___3eba1h;
//		mov     al, [esi+1]
    al = B(esi+1);
//		add     esi, byte 2
    esi += 2;
//		mov     [edi+1], al
    B(edi+1) = al;
//		add     edi, byte 2
    edi += 2;
//		cmp     al, 0
//		jne     ___3eb89h
    if(al != 0) goto ___3eb89h;
___3eba1h:
//		pop     edi
    POP(edi);
//		mov     eax, [esp+8]
    eax = D(esp+8);
//		mov     esi, [esp+8]
    esi = D(esp+8);
//		mov     al, [eax+__CEXT_V(___1a1f4fh)]
    al = B(eax+___1a1f4fh);
//		add     ecx, 96h
    ecx += 0x96;
//		mov     [esi+__CEXT_V(___1a1f4eh)], al
    B(esi+___1a1f4eh) = al;
//		lea     eax, [esi+1]
    eax = esi+1;
//		add     edx, 96h
    edx += 0x96;
//		mov     [esp+8], eax
    D(esp+8) = eax;
//		cmp     eax, byte 15h
//		jl      ___3eb84h
    if((int)eax < 0x15) goto ___3eb84h;
//		mov     ecx, 6dh
    ecx = 0x6d;
//		mov     al, [__CEXT_V(___180130h)]
    al = B(___180130h);
//		mov     ebx, 27fh
    ebx = 0x27f;
//		mov     [__CEXT_V(___1a1dbah)], al
    B(___1a1dbah) = al;
//		mov     ah, 1
    ah = 1;
//		mov     edx, 173h
    edx = 0x173;
//		mov     [__CEXT_V(RowBox0Colors_R5)], ah
    B(RowBox0Colors_R5) = ah;
//		xor     eax, eax
    eax = 0;
//		call    __CEXT_F(frameFooter__dr)
    frameFooter__dr(eax, edx, ebx, ecx);
//		call    __CEXT_F(footer__dr)
    footer__dr();
//		cmp     dword [esp+0ch], byte 0
//		jne     ___3efdch
    if(D(esp+0xc) != 0) goto ___3efdch;
//		mov     eax, [esp+20h]
    eax = D(esp+0x20);
//		mov     edx, [esp+20h]
    edx = D(esp+0x20);
//		add     eax, byte 38h
    eax += 0x38;
//		add     edx, byte 12h
    edx += 0x12;
//		mov     [esp+4], eax
    D(esp+4) = eax;
//		lea     eax, [edx*4+0]
    eax = 4*edx;
//		add     eax, edx
    eax += edx;
//		mov     esi, [esp+18h]
    esi = D(esp+0x18);
//		shl     eax, 7
    eax <<= 7;
//		add     eax, esi
    eax += esi;
//		mov     edx, [esp+20h]
    edx = D(esp+0x20);
//		add     eax, byte 28h
    eax += 0x28;
//		add     edx, byte 32h
    edx += 0x32;
//		mov     [esp+10h], eax
    D(esp+0x10) = eax;
//		lea     eax, [edx*4+0]
    eax = 4*edx;
//		add     eax, edx
    eax += edx;
//		shl     eax, 7
    eax <<= 7;
//		add     eax, esi
    eax += esi;
//		mov     ebp, [esp+18h]
    ebp = D(esp+0x18);
//		add     eax, 0a6h
    eax += 0xa6;
//		add     ebp, 8ch
    ebp += 0x8c;
//		mov     [esp+14h], eax
    D(esp+0x14) = eax;
___3ec59h:
//		mov     ecx, 2c380h
    ecx = 0x2c380;
//		mov     esi, [__CEXT_V(p_bpk_menubg5)]
    esi = D(p_bpk_menubg5);
//		mov     edi, [__CEXT_V(VGABufferPtr_0)]
    edi = D(VGABufferPtr_0);
//		add     esi, 0d200h
    esi += 0xd200;
//		add     edi, 0d200h
    edi += 0xd200;
//		mov     edx, 1
    edx = 1;
//		push    edi
    PUSH(edi);
//		mov     eax, ecx
    eax = ecx;
//		shr     ecx, 2
    ecx >>= 2;
//		rep movsd   
    while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		mov     cl, al
    cl = al;
//		and     cl, 3
    cl &= 3;
//		rep movsb   
    while(ecx){
		B(edi) = B(esi);
		edi++; esi++; ecx--;
	}
//		pop     edi
    POP(edi);
//		xor     eax, eax
    eax = 0;
//		call    __CEXT_F(___13710h)
    ___13710h(eax, edx);
//		cmp     dword [__CEXT_V(___196d84h)], byte 0
//		jne     ___3eca8h
    if(D(___196d84h) != 0) goto ___3eca8h;
//		cmp     dword [__CEXT_V(___185a2ch)], byte 0
//		je      ___3edeah
    if(D(___185a2ch) == 0) goto ___3edeah;
___3eca8h:
//		mov     ebx, [__CEXT_V(___196a84h)]
    ebx = D(___196a84h);
//		test    ebx, ebx
//		jne     ___3edeah
    if(ebx != 0) goto ___3edeah;
//		call    __CEXT_F(popScreen)
    popScreen();
//		call    __CEXT_F(___2b318h)
    ___2b318h();
//		mov     [esp+1ch], ebx
    D(esp+0x1c) = ebx;
//		mov     [esp], ebx
    D(esp) = ebx;
___3ecc7h:
//		call    __CEXT_F(waitSync__dr)
	waitSync__dr();
//		mov     eax, [esp+1ch]
	eax = D(esp+0x1c);
//		mov     edx, eax
	edx = eax;
//		mov     ecx, 2
	ecx = 2;
//		sar     edx, 1fh
	edx = ((int)edx < 0) ? -1 : 0;
//		idiv    ecx
	edx = idiv_rem(eax, edx, ecx);
//		test    edx, edx
//		je      ___3ece7h
	if(edx == 0) goto ___3ece7h;
//		xor     eax, eax
	eax = 0;
//		call    __CEXT_F(___13a98h)
	___13a98h(eax);
___3ece7h:
//		xor     edi, edi
	edi = 0;
//		mov     esi, [esp]
	esi = D(esp);
//		mov     [esp+8], edi
	D(esp+8) = edi;
___3ecf0h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [esp+8]
	al = B(esp+8);
//		push    eax
	PUSH(eax);
//		mov     edx, esi
	edx = esi;
//		mov     eax, [edi+__CEXT_V(Pal8to24_1)]
	eax = D(edi+Pal8to24_1);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
	if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		and     eax, 0ffh
	eax &= 0xff;
//		push    eax
	PUSH(eax);
//		mov     edx, esi
	edx = esi;
//		mov     eax, [edi+__CEXT_V(Pal8to24_1)+4]
	eax = D(edi+Pal8to24_1+4);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
	if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		and     eax, 0ffh
	eax &= 0xff;
//		push    eax
	PUSH(eax);
//		mov     edx, esi
	edx = esi;
//		mov     eax, [edi+__CEXT_V(Pal8to24_1)+8]
	eax = D(edi+Pal8to24_1+8);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
	if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		and     eax, 0ffh
	eax &= 0xff;
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(writeColor__video)
	writeColor__video(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
	esp += 0x10;
//		mov     eax, [esp+8]
	eax = D(esp+8);
//		inc     eax
	eax++;
//		add     edi, byte 0ch
	edi += 0xc;
//		mov     [esp+8], eax
	D(esp+8) = eax;
//		cmp     eax, dword 100h
//		jl      ___3ecf0h
	if((int)eax < 0x100) goto ___3ecf0h;
//		mov     ebx, [esp+1ch]
	ebx = D(esp+0x1c);
//		mov     edx, [esp+2]
	edx = D(esp+2);
//		inc     ebx
	ebx++;
//		add     edx, byte 2
	edx += 2;
//		mov     [esp+1ch], ebx
	D(esp+0x1c) = ebx;
//		mov     [esp+2], dx
	W(esp+2) = dx;
//		cmp     ebx, byte 32h
//		jl      ___3ecc7h
	if((int)ebx < 0x32) goto ___3ecc7h;
//		xor     esi, esi
	esi = 0;
//		mov     edi, [__CEXT_V(___185a2ch)]
	edi = D(___185a2ch);
//		mov     [__CEXT_V(___196d84h)], esi
	D(___196d84h) = esi;
//		test    edi, edi
//		je      ___3edeah
	if(edi == 0) goto ___3edeah;
//		mov     ecx, 4b000h
	ecx = 0x4b000;
//		mov     edi, [__CEXT_V(___VGABufferPtr_0)]
	edi = D(___VGABufferPtr_0);
//		mov     [__CEXT_V(___185a2ch)], esi
	D(___185a2ch) = esi;
//		mov     esi, [__CEXT_V(___1a1124h)]
	esi = D(___1a1124h);
//		push    edi
	PUSH(edi);
//		mov     eax, ecx
	eax = ecx;
//		shr     ecx, 2
	ecx >>= 2;
//		rep movsd   
    while(ecx){
		D(edi) = D(esi);
		edi += 4; esi += 4; ecx--;
	}
//		mov     cl, al
    cl = al;
//		and     cl, 3
    cl &= 3;
//		rep movsb   
    while(ecx){
		B(edi) = B(esi);
		edi++; esi++; ecx--;
	}
//		pop     edi
    POP(edi);
//		mov     eax, [__CEXT_V(___VGABufferPtr_0)]
    eax = D(___VGABufferPtr_0);
//		mov     [__CEXT_V(VGABufferPtr_0)], eax
    D(VGABufferPtr_0) = eax;
//		mov     eax, [__CEXT_V(___1a10e4h)]
    eax = D(___1a10e4h);
//		mov     [__CEXT_V(___1a1124h)], eax
    D(___1a1124h) = eax;
___3edeah:
//		cmp     dword [esp+24h], byte 0
//		je      ___3ee31h
	if(D(esp+0x24) == 0) goto ___3ee31h;
//		mov     ebx, [__CEXT_V(___196a84h)]
	ebx = D(___196a84h);
//		test    ebx, ebx
//		jne     ___3ee31h
	if(ebx != 0) goto ___3ee31h;
//		mov     eax, [__CEXT_V(___VGABufferPtr_0)]
	eax = D(___VGABufferPtr_0);
//		mov     [__CEXT_V(VGABufferPtr_0)], eax
	D(VGABufferPtr_0) = eax;
//		mov     eax, 0ffffffffh
	eax = 0xffffffff;
//		call    __CEXT_F(___3a7e0h)
	___3a7e0h(eax);
//		call    __CEXT_F(___649a8h)
	___649a8h();
//		call    __CEXT_F(___648d8h)
	___648d8h();
//		mov     eax, [__CEXT_V(___1a1ef4h)]
	eax = D(___1a1ef4h);
//		call    __CEXT_F(___682a4h)
	eax = ___682a4h(eax);
//		mov     eax, 10000h
	eax = 0x10000;
//		mov     [esp+24h], ebx
	D(esp+0x24) = ebx;
//		call    __CEXT_F(updateAMPVolume)
	updateAMPVolume(eax);
___3ee31h:
//		cmp     dword [__CEXT_V(___196a84h)], byte 0
//		jne     ___3ee3fh
	if(D(___196a84h) != 0) goto ___3ee3fh;
//		call    __CEXT_F(___12dc4h)
	___12dc4h();
___3ee3fh:
//		xor     eax, eax
	eax = 0;
//		call    __CEXT_F(___146c4h)
	eax = ___146c4h(eax);
//		inc     eax
	eax++;
//		cmp     eax, byte 7
//		ja      ___3efd1h
	if(eax > 7) goto ___3efd1h;
//		jmp     dword [cs:eax*4+l_drmainmenu]
	switch(eax){
	case 0: goto l_drmultiplayer;
	case 1: goto l_drstartracing;
	case 2: goto l_drmultiplayer;
	case 3: goto l_drconfigure;
	case 4: goto l_drhof;
	case 5: goto l_drcredits;
	case 6: goto l_drpreview;
	case 7: goto l_drexit;
	default: goto ___3efd1h;
	}
l_drstartracing:
//		call    __CEXT_F(chkcdrom__dr)
	eax = chkcdrom__dr();
//		test    eax, eax
//		jne     l_cdchk_ok
	if(eax != 0) goto l_cdchk_ok;
//		mov     ecx, 61h
	ecx = 0x61;
//		xor     edx, edx
	edx = 0;
//		mov     ebx, 1e4h
	ebx = 0x1e4;
//		call    __CEXT_F(___13710h)
	___13710h(eax, edx);
//		push    byte 1
	PUSH(1);
//		mov     edx, [esp+24h]
	edx = D(esp+0x24);
//		mov     eax, [esp+1ch]
	eax = D(esp+0x1c);
//		call    __CEXT_F(___13248h)
	___13248h(eax, edx, ebx, ecx, D(esp));
	esp += 4;
//		mov     ecx, [esp+10h]
	ecx = D(esp+0x10);
//		mov     ebx, __CEXT_V(___182db8h)			;; " ... insert cd-rom"
	ebx = ___182db8h;
//		mov     edx, __CEXT_V(Font0Props)
	edx = Font0Props;
//		mov     eax, [__CEXT_V(p_bpk_f_sma3a)]
	eax = D(p_bpk_f_sma3a);
//		call    __CEXT_F(renderTextToBuffer__video)
	renderTextToBuffer__video(eax, edx, ebx, ecx);
//		mov     ecx, [esp+14h]
	ecx = D(esp+0x14);
//		mov     ebx, __CEXT_V(STRING_CONTINUE)			;; "CONTINUE"
	ebx = STRING_CONTINUE;
//		mov     edx, __CEXT_V(___185ba9h)
	edx = ___185ba9h;
//		mov     eax, [__CEXT_V(p_bpk_f_big3a)]
	eax = D(p_bpk_f_big3a);
//		call    __CEXT_F(renderTextToBuffer__video)
	renderTextToBuffer__video(eax, edx, ebx, ecx);
//		mov     edx, [esp+4]
	edx = D(esp+4);
//		mov     eax, ebp
	eax = ebp;
//		call    __CEXT_F(updateScreen_TBD)
	updateScreen_TBD(eax, edx);
//		call    __CEXT_F(popScreen)
	popScreen();
//		mov     esi, 1dh
	esi = 0x1d;
l_cdchk_failed:
//		push    8000h
	PUSH(0x8000);
//		mov     eax, [__CEXT_V(___1854bch)]
	eax = D(___1854bch);
//		mov     ecx, [__CEXT_V(ConfigSFXVolume)]
	ecx = D(ConfigSFXVolume);
//		mov     edx, esi
	edx = esi;
//		push    eax
	PUSH(eax);
//		xor     ebx, ebx
	ebx = 0;
//		mov     eax, 1
	eax = 1;
//		call    __CEXT_F(playSFX__sound)
	playSFX__sound(eax, edx, ebx, ecx, D(esp), D(esp+4));
	esp += 8;
//		call    __CEXT_F(lastScanCode__keyboard)
	eax = lastScanCode__keyboard();
//		call    __CEXT_F(nullScanCode__keyboard)
	eax = nullScanCode__keyboard();
//		xor     bh, bh
	bh = 0;
l_cdchk_wait:
//		cmp     bh, 1ch			;; KEY_ENTER
//		je      l_cdchk_repeat
	if(bh == 0x1c) goto l_cdchk_repeat;
//		cmp     bh, 9ch			;; KEYPAD_ENTER
//		je      l_cdchk_repeat
	if(bh == 0x9c) goto l_cdchk_repeat;
//		call    __CEXT_F(lastScanCode__keyboard)
	eax = lastScanCode__keyboard();
//		mov     bl, al
	bl = al;
//		mov     edx, [esp+4]
	edx = D(esp+4);
//		mov     bh, al
	bh = al;
//		call    __CEXT_F(updateMenuBackgroundAndTextArea)
	updateMenuBackgroundAndTextArea();
//		call    __CEXT_F(updateMenuBackgroundAndTextArea)
	updateMenuBackgroundAndTextArea();
//		mov     eax, ebp
	eax = ebp;
//		call    __CEXT_F(updateScreen_TBD)
	updateScreen_TBD(eax, edx);
//		cmp     bl, 1				;; KEY_ESC
//		jne     l_cdchk_wait
	if(bl != 1) goto l_cdchk_wait;
l_cdchk_repeat:
//		call    __CEXT_F(lastScanCode__keyboard)
	eax = lastScanCode__keyboard();
//		call    __CEXT_F(nullScanCode__keyboard)
	eax = nullScanCode__keyboard();
//		call    __CEXT_F(chkcdrom__dr)
	eax = chkcdrom__dr();
//		test    eax, eax
//		jne     l_cdchk_repeat_ok
	if(eax != 0) goto l_cdchk_repeat_ok;
//		cmp     bh, 1				;; KEY_ESC
//		jne     l_cdchk_failed
	if(bh != 1) goto l_cdchk_failed;
l_cdchk_repeat_ok:
//		cmp     bh, 1				;; KEY_ESC
//		je      ___3efd1h
	if(bh == 1) goto ___3efd1h;
l_cdchk_ok:
//		call    __CEXT_F(startRacingMenu__dr)
	startRacingMenu__dr();
//		jmp     ___3efd1h
	goto ___3efd1h;
l_drmultiplayer:
//		call    __CEXT_F(multiplayerRaceMenu__dr)
	multiplayerRaceMenu__dr(eax);
//		jmp     ___3efd1h
	goto ___3efd1h;
l_drconfigure:
//		call    __CEXT_F(configureMenu__dr)
	configureMenu__dr();
//		jmp     ___3efd1h
	goto ___3efd1h;
l_drhof:
//		mov     edi, 1
	edi = 1;
//		call    __CEXT_F(hallOfFameMenu__dr)
	hallOfFameMenu__dr();
//		mov     [esp+24h], edi
	D(esp+0x24) = edi;
//		jmp     ___3efd1h
	goto ___3efd1h;
l_drcredits:
//		call    __CEXT_F(creditsMenu__dr)
	creditsMenu__dr();
//		jmp     ___3efd1h
	goto ___3efd1h;
l_drpreview:
//		call    __CEXT_F(showPreviewMenu__dr)
	showPreviewMenu__dr();
//		jmp     ___3efd1h
	goto ___3efd1h;
l_drexit:
//		mov     ecx, 50h
	ecx = 0x50;
//		xor     edx, edx
	edx = 0;
//		xor     eax, eax
	eax = 0;
//		mov     ebx, 12ch
	ebx = 0x12c;
//		call    __CEXT_F(___13710h)
	___13710h(eax, edx);
//		push    byte 1
	PUSH(1);
//		mov     edx, 0c8h
	edx = 0xc8;
//		mov     eax, 0aah
	eax = 0xaa;
//		call    __CEXT_F(___13248h)
	___13248h(eax, edx, ebx, ecx, D(esp));
	esp += 4;
//		mov     ecx, 208fdh
	ecx = 0x208fd;
//		mov     ebx, __CEXT_V(___182de4h)			;; "Are you sure?"
	ebx = ___182de4h;
//		mov     edx, __CEXT_V(Font0Props)
	edx = Font0Props;
//		mov     eax, [__CEXT_V(p_bpk_f_sma3a)]
	eax = D(p_bpk_f_sma3a);
//		call    __CEXT_F(renderTextToBuffer__video)
	renderTextToBuffer__video(eax, edx, ebx, ecx);
//		lea     ecx, [esp+0ch]
	ecx = esp+0xc;
//		mov     ebx, 1
	ebx = 1;
//		mov     edx, 0eeh
	edx = 0xee;
//		mov     eax, 0b4h
	eax = 0xb4;
//		call    __CEXT_F(___148cch)
	eax = ___148cch(eax, edx, ebx, ecx);
___3efd1h:
//		cmp     dword [esp+0ch], byte 0
//		je      ___3ec59h
	if(D(esp+0xc) == 0) goto ___3ec59h;
___3efdch:
//		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], byte 0
//		je      ___3f1bah
	if(D(NetworkConnectionEstablished) == 0) goto ___3f1bah;
//		mov     edx, __CEXT_V(___180ba0h)
	edx = ___180ba0h;
//		mov     eax, __CEXT_V(___186a6eh)
	eax = ___186a6eh;
//		call    __CEXT_F(strcmp__clib3r)
	eax = strcmp__clib3r(eax, edx);
//		mov     edx, [__CEXT_V(MyID)]
	edx = D(MyID);
//		mov     ecx, eax
	ecx = eax;
//		lea     eax, [edx*8+0]
	eax = 8*edx;
//		sub     eax, edx
	eax -= edx;
//		shl     eax, 2
	eax <<= 2;
//		sub     eax, edx
	eax -= edx;
//		mov     esi, __CEXT_V(Roster)
	esi = Roster;
//		shl     eax, 2
	eax <<= 2;
//		add     esi, eax
	esi += eax;
//		test    ecx, ecx
//		jne     ___3f131h
	if(ecx != 0) goto ___3f131h;
//		mov     edi, __CEXT_V(___1a1dbah)
	edi = ___1a1dbah;
//		mov     eax, [__CEXT_V(___180864h)]
	eax = D(___180864h);
//		mov     ebx, 14h
	ebx = 0x14;
//		mov     [__CEXT_V(___1a1dbah)], eax
	D(___1a1dbah) = eax;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___3f03dh:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3f055h
	if(al == 0) goto ___3f055h;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, byte 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, byte 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3f03dh
	if(al != 0) goto ___3f03dh;
___3f055h:
//		pop     edi
	POP(edi);
//		mov     esi, __CEXT_V(___180ca4h)
	esi = ___180ca4h;
//		xor     dh, dh
	dh = 0;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___3f066h:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3f07eh
	if(al == 0) goto ___3f07eh;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, byte 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, byte 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3f066h
	if(al != 0) goto ___3f066h;
___3f07eh:
//		pop     edi
	POP(edi);
//		mov     [__CEXT_V(RowBox0Colors_R5)], dh
	B(RowBox0Colors_R5) = dh;
//		mov     eax, edi
	eax = edi;
//		mov     edx, 64h
	edx = 0x64;
//		call    __CEXT_F(___23488h)
	___23488h(eax, edx, ebx);
//		mov     eax, [__CEXT_V(___180864h)]
	eax = D(___180864h);
//		mov     edx, [__CEXT_V(MyID)]
	edx = D(MyID);
//		mov     [__CEXT_V(___1a1dbah)], eax
	D(___1a1dbah) = eax;
//		lea     eax, [edx*8+0]
	eax = 8*edx;
//		sub     eax, edx
	eax -= edx;
//		shl     eax, 2
	eax <<= 2;
//		sub     eax, edx
	eax -= edx;
//		mov     esi, __CEXT_V(Roster)
	esi = Roster;
//		shl     eax, 2
	eax <<= 2;
//		add     esi, eax
	esi += eax;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___3f0c2h:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3f0dah
	if(al == 0) goto ___3f0dah;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, byte 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, byte 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3f0c2h
	if(al != 0) goto ___3f0c2h;
___3f0dah:
//		pop     edi
	POP(edi);
//		mov     esi, __CEXT_V(___18108ch)
	esi = ___18108ch;
//		xor     bl, bl
	bl = 0;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___3f0ebh:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3f103h
	if(al == 0) goto ___3f103h;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, byte 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, byte 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3f0ebh
	if(al != 0) goto ___3f0ebh;
___3f103h:
//		pop     edi
	POP(edi);
//		mov     ecx, [__CEXT_V(NetworkConnectionType)]
	ecx = D(NetworkConnectionType);
//		mov     [__CEXT_V(RowBox0Colors_R5)], bl
	D(RowBox0Colors_R5) = bl;
//		cmp     ecx, byte 2
//		jne     ___3f123h
	if(ecx != 2) goto ___3f123h;
//		mov     ebx, 6
	ebx = 6;
//		mov     edx, 64h
	edx = 0x64;
//		mov     eax, edi
	eax = edi;
//		jmp     ___3f19dh
	goto ___3f19dh;
___3f123h:
//		mov     ebx, 9
	ebx = 9;
//		mov     edx, 64h
	edx = 0x64;
//		mov     eax, edi
	eax = edi;
//		jmp     ___3f19dh
	goto ___3f19dh;
___3f131h:
//		mov     edi, __CEXT_V(___1a1dbah)
	edi = ___1a1dbah;
//		mov     eax, [__CEXT_V(___180864h)]
	eax = D(___180864h);
//		mov     ebx, 6
	ebx = 6;
//		mov     [__CEXT_V(___1a1dbah)], eax
	D(___1a1dbah) = eax;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___3f14eh:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3f166h
	if(al == 0) goto ___3f166h;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, byte 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, byte 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3f14eh
	if(al != 0) goto ___3f14eh;
___3f166h:
//		pop     edi
	POP(edi);
//		mov     esi, __CEXT_V(___180ca4h)
	esi = ___180ca4h;
//		xor     dl, dl
	dl = 0;
//		push    edi
	PUSH(edi);
//		sub     ecx, ecx
	ecx -= ecx;
//		dec     ecx
	ecx--;
//		mov     al, 0
	al = 0;
//		repne scasb   
	while((ecx--)&&(*(byte *)edi++ != al));
//		dec     edi
	edi--;
___3f177h:
//		mov     al, [esi]
	al = B(esi);
//		mov     [edi], al
	B(edi) = al;
//		cmp     al, 0
//		je      ___3f18fh
	if(al == 0) goto ___3f18fh;
//		mov     al, [esi+1]
	al = B(esi+1);
//		add     esi, byte 2
	esi += 2;
//		mov     [edi+1], al
	B(edi+1) = al;
//		add     edi, byte 2
	edi += 2;
//		cmp     al, 0
//		jne     ___3f177h
	if(al != 0) goto ___3f177h;
___3f18fh:
//		pop     edi
	POP(edi);
//		mov     [__CEXT_V(RowBox0Colors_R5)], dl
	B(RowBox0Colors_R5) = dl;
//		mov     eax, edi
	eax = edi;
//		mov     edx, 64h
	edx = 0x64;
___3f19dh:
//		call    __CEXT_F(___23488h)
	___23488h(eax, edx, ebx);
//		call    __CEXT_F(___61278h)
	___61278h();
//		xor     esi, esi
	esi = 0;
//		call    __CEXT_F(___623d4h)
	___623d4h();
//		mov     [__CEXT_V(NetworkConnectionEstablished)], esi
	D(NetworkConnectionEstablished) = esi;
//		mov     [__CEXT_V(NetworkConnectionType)], esi
	D(NetworkConnectionType) = esi;
___3f1bah:
//		call    __CEXT_F(___3d79ch)
	___3d79ch();
//		call    __CEXT_F(writeConfig__dr)
	writeConfig__dr();
//		call    __CEXT_F(unloadMenuBPK)
	unloadMenuBPK();
//		call    __CEXT_F(unloadOtherBPK)
	unloadOtherBPK();
//		call    __CEXT_F(unloadShopBPK)
	unloadShopBPK();
//		call    __CEXT_F(unloadAddBPK)
	unloadAddBPK();
//		call    __CEXT_F(___649a8h)
	___649a8h();
//		call    __CEXT_F(___64a28h)
	___64a28h();
//		add     esp, byte 2ch
	esp += 0x2c;
//		pop     ebp
	POP(ebp);
//		pop     edi
	POP(edi);
//		pop     esi
	POP(esi);
//		pop     edx
	POP(edx);
//		pop     ecx
	POP(ecx);
//		pop     ebx
	POP(ebx);
//		retn
	return;
}

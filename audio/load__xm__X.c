#include "x86.h"

#pragma pack(1)

typedef struct XM_Header {          // Description
/* 0000h */ char    type[17];       // ID="Extended module: "
/* 0011h */ char    module[20];     // Module name, padded with zeroes
/* 0025h */ byte    id;             // ID=01Ah
/* 0026h */ char    tracker[20];    // Tracker name
/* 003Ah */ word    revision;       // Tracker revision number, hi-byte is major version
/* 003Ch */ dword   headerSize;     // Header size
/* 0040h */ word    length;         // Song length in patterns
/* 0042h */ word    restart;        // Restart position
/* 0044h */ word    channels;       // Number of channels
/* 0046h */ word    patterns;       // Number of patterns (< 256)
								    // ="PAT"
/* 0048h */ word    instruments;    // Number of instruments (<128)
/* 004Ah */ word    flags;          // Flags :
                                    // 0 - Linear frequency table / Amiga freq. table
/* 004Ch */ word    tempo;          // Default tempo
/* 004Eh */ word    BPM;            // Default BPM
/* 0050h */ byte    order[256];     // Pattern order table
} XM_Header;

typedef struct XM_Pattern_Header {  // Description
/* 0000h */ dword   headerSize;     // Length of pattern block/header ??
/* 0004h */ byte    pack;           // Pattern pack type
/* 0005h */ word    rows;           // Number of rows in pattern (1..256)
/* 0007h */ word    dataSize;       // Size of pattern data
} XM_Pattern_Header;

typedef struct XM_Instrument_Header {   // Description
/* 0000h */ dword   headerSize;         // Instrument block/header size
/* 0004h */                  //22 char   ASCII Instrument name, 0 padded ?
/* 001Ah */                  // 1 byte   Instrument type (always 0)
/* 001Bh */                  // 1 word   Number of samples in instrument
/* 001Dh */                   //1 dword  Sample header size
/* 0021h */                  //96 byte   Sample numbers for all notes
/* 0081h */                  //48 byte   Points of volume envelope
/* 00C1h */                  //48 byte   Points of panning envelope
/* 0101h */                  // 1 byte   Number of volume points
/* 0102h */                  // 1 byte   Number of panning points
/* 0103h */                  // 1 byte   Volume sustain point
/* 0104h */                  // 1 byte   Volume loop start point
/* 0105h */                  // 1 byte   Volume loop end point
/* 0106h */                  // 1 byte   Panning sustain point
/* 0107h */                  // 1 byte   Panning loop start point
/* 0108h */                  // 1 byte   Panning loop end point
/* 0109h */                  // 1 byte   Volume type, bitmapped
						//		 0 - Volume on
					//			 1 - Sustain on
				//				 2 - Loop on
/* 010Ah */       //            1 byte   Panning type, bitmapped
				//				 0 - Panning on
				//				 1 - Sustain on
					//			 2 - Loop on
/* 010Bh */           //        1 byte   Vibrato type
/* 010Ch */             //      1 byte   Vibrato sweep
/* 010Dh */               //    1 byte   Vibrato depth
/* 010Eh */                 //  1 byte   Vibrato rate
/* 010Fh */                   //1 word   Volume fadeout
/* 0111h */                   //1 word   Reserved
} XM_Instrument_Header;

	extern const char string__Extended_Module[];	// "Extended Module: "
    extern byte ___24e9bch[];

    void * extract__musics_bpa(const char * elm, dword lock);
    int strncmp__clib3r(const char *, const char *, dword);
    void ___58b20h(int errn, ...);
    dword getentrysize__musics_bpa(const char * elm);

// 7552ch
void * loadXM(dword A, const char * cmf, dword * size, dword * instrumentCount){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte	esp[8];

	eax = A;
	edx = cmf;
	ebx = size;
	ecx = instrumentCount;

//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, byte 8
//		mov     ebp, eax
	ebp = eax;
//		mov     esi, edx
	esi = edx;
//		mov     [esp], ebx
	D(esp) = ebx;
//		mov     [esp+4], ecx
	D(esp+4) = ecx;
//		mov     edx, 1
	edx = 1;
//		mov     eax, esi
	eax = esi;
//		mov     ebx, 11h
	ebx = 0x11;
//		call    __CEXT_F(extract__musics_bpa)
	eax = extract__musics_bpa(eax, edx);
//		mov     edx, __CEXT_V(string__Extended_Module)
	edx = string__Extended_Module;
//		mov     edi, eax
	edi = eax;
//		call    __CEXT_F(strncmp__clib3r)
	eax = strncmp__clib3r(eax, edx, ebx);
//		test    eax, eax
//		je      ___75569h
	if(eax == 0) goto ___75569h;
//		push    esi
//		push    byte 28h
//		call    __CEXT_F(___58b20h)
	___58b20h(0x28, esi);
//		add     esp, byte 8
___75569h:
//		cmp     byte [edi+25h], 1ah
//		je      ___7557ah
	if(B(edi+0x25) == 0x1a) goto ___7557ah;
//		push    esi
//		push    byte 28h
//		call    __CEXT_F(___58b20h)
	___58b20h(0x28, esi);
//		add     esp, byte 8
___7557ah:
//		cmp     word [edi+3ah], 104h
//		jae     ___7558dh
	if(W(edi+0x3a) >= 0x104) goto ___7558dh;
//		push    esi
//		push    byte 28h
//		call    __CEXT_F(___58b20h)
	___58b20h(0x28, esi);
//		add     esp, byte 8
___7558dh:
//		test    ebp, ebp
//		je      ___755c1h
	if(ebp == 0) goto ___755c1h;
//		cmp     word [edi+40h], byte 0
//		jne     ___755a3h
	if(W(edi+0x40) != 0) goto ___755a3h;
//		push    esi
//		push    byte 29h
//		call    __CEXT_F(___58b20h)
	___58b20h(0x29, esi);
//		add     esp, byte 8
___755a3h:
//		cmp     word [edi+46h], byte 0
//		jne     ___755b5h
	if(W(edi+0x46) != 0) goto ___755b5h;
//		push    esi
//		push    byte 29h
//		call    __CEXT_F(___58b20h)
	___58b20h(0x29, esi);
//		add     esp, byte 8
___755b5h:
//		lea     eax, [edi+11h]
	eax = edi+0x11;
//		mov     byte [edi+25h], 0
	B(edi+0x25) = 0;
//		mov     [__CEXT_V(___24e9bch)], eax
	D(___24e9bch) = eax;
___755c1h:
//		mov     eax, esi
	eax = esi;
//		mov     edx, [esp]
	edx = D(esp);
//		call    __CEXT_F(getentrysize__musics_bpa)
	eax = getentrysize__musics_bpa(eax);
//		mov     [edx], eax
	D(edx) = eax;
//		test    ebp, ebp
//		je      ___75631h
	if(ebp == 0) goto ___75631h;
//		mov     eax, [esp+4]
	eax = D(esp+4);
//		mov     dword [eax], 0
	D(eax) = 0;
//		lea     eax, [edi+3ch]
	eax = edi+0x3c;
//		add     eax, [edi+3ch]
	eax += D(edi+0x3c);
//		xor     edx, edx
	edx = 0;
//		jmp     ___755f2h
	goto ___755f2h;
___755e5h:
//		xor     ebx, ebx
	ebx = 0;
//		mov     ecx, [eax]
	ecx = D(eax);
//		mov     bx, [eax+7]
	bx = W(eax+7);
//		add     eax, ecx
	eax += ecx;
//		inc     edx
	edx++;
//		add     eax, ebx
	eax += ebx;
___755f2h:
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, [edi+46h]
	bx = W(edi+0x46);
//		cmp     edx, ebx
//		jl      ___755e5h
	if((int)edx < (int)ebx) goto ___755e5h;
//		xor     esi, esi
	esi = 0;
//		jmp     ___75603h
	goto ___75603h;
___75600h:
//		inc     esi
	esi++;
//		add     eax, ebx
	eax += ebx;
___75603h:
//		xor     edx, edx
	edx = 0;
//		mov     dx, [edi+48h]
	dx = W(edi+0x48);
//		cmp     esi, edx
//		jge     ___7563dh
	if((int)esi >= (int)edx) goto ___7563dh;
//		xor     edx, edx
	edx = 0;
//		mov     ebp, [esp+4]
	ebp = D(esp+4);
//		mov     dx, [eax+1bh]
	dx = W(eax+0x1b);
//		mov     ecx, [eax+1dh]
	ecx = D(eax+0x1d);
//		add     [ebp+0], edx
	D(ebp) += edx;
//		mov     ebp, [eax]
	ebp = D(eax);
//		xor     ebx, ebx
	ebx = 0;
//		add     eax, ebp
	eax += ebp;
___75623h:
//		dec     edx
	edx--;
//		cmp     edx, byte 0ffffffffh
//		je      ___75600h
	if(edx == 0xffffffff) goto ___75600h;
//		mov     ebp, [eax]
	ebp = D(eax);
//		add     eax, ecx
	eax += ecx;
//		add     ebx, ebp
	ebx += ebp;
//		jmp     ___75623h
	goto ___75623h;
___75631h:
//		xor     eax, eax
	eax = 0;
//		mov     edx, [esp+4]
	edx = D(esp+4);
//		mov     ax, [edi+48h]
	ax = W(edi+0x48);
//		mov     [edx], eax
	D(edx) = eax;
___7563dh:
//		mov     eax, edi
	eax = edi;
//		add     esp, byte 8
//		pop     ebp
//		pop     edi
//		pop     esi
//		retn    
	return eax;
}

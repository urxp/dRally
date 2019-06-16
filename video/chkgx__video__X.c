#define al	((byte *)&eax)[0]
#define bl	((byte *)&ebx)[0]
#define cl	((byte *)&ecx)[0]
#define ch	((byte *)&ecx)[1]
#define dl	((byte *)&edx)[0]

typedef unsigned char 	byte;
typedef unsigned long	dword;

	extern byte GXType[];

void chkgx__video(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x190];

//		push    1a8h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		sub     esp, 190h
//		mov     edx, [GXType]
	edx = *(dword *)GXType;
//		mov     ecx, 190h
	ecx = 0x190;
//		mov     esi, 0c0000h
	esi = 0xc0000;
//		mov     edi, esp
	edi = esp;
//		push    edi
//		mov     eax, ecx
	eax = ecx;
//		shr     ecx, 2
	ecx >>= 2;
//		rep movsd   
	while(ecx--){

		*((dword *)edi + ecx) = *((dword *)esi + ecx);
	}
//		mov     cl, al
	cl = al;
//		and     cl, 3
	cl &= 3;
//		rep movsd   
	while(ecx--){

		*((dword *)edi + ecx) = *((dword *)esi + ecx);
	}
//		pop     edi
//		xor     eax, eax
	eax = 0;
//;; to uppercase ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
___1130dh:
//		mov     dl, [esp+eax]
	dl = *(byte *)(esp+eax);
//		cmp     dl, 60h
//		jbe     ___11322h
	if(dl <= 0x60) goto ___11322h;
//		cmp     dl, 84h
//		jae     ___11322h
	if(dl > 0x84) goto ___11322h;
//		mov     bl, dl
	bl = dl;
//		sub     bl, 20h
	bl -= 0x20;
//		mov     [esp+eax], bl
	*(byte *)(esp+eax) = bl;
___11322h:
//		inc     eax
	eax++;
//		cmp     eax, 190h
//		jl      ___1130dh
	if((int)eax < 0x190) goto ___1130dh;
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//;; check for 'cirrus' substring ;;;;;;;;;;;;;;;;;;
___1132eh:
//		cmp     byte [esp+eax], 43h		;; 'C'
//		jne     ___1135dh
	if(*(byte *)(esp+eax) != 0x43) goto ___1135dh;
//		cmp     byte [esp+eax+1], 49h		;; 'I'
//		jne     ___1135dh
	if(*(byte *)(esp+eax+1) != 0x49) goto ___1135dh;
//		mov     ch, [esp+eax+2]
	ch = *(byte *)(esp+eax+2);
//		cmp     ch, 52h						;; 'R'
//		jne     ___1135dh
	if(ch != 0x52) goto ___1135dh;
//		cmp     ch, [esp+eax+3]			;; 'R'
//		jne     ___1135dh
	if(ch != *(byte *)(esp+eax+3)) goto ___1135dh;
//		cmp     byte [esp+eax+4], 55h		;; 'U'
//		jne     ___1135dh
	if(*(byte *)(esp+eax+4) != 0x55) goto ___1135dh;
//		cmp     byte [esp+eax+5], 53h		;; 'S'
//		jne     ___1135dh
	if(*(byte *)(esp+eax+5) != 0x53) goto ___1135dh;
//		mov     edx, 2
	edx = 2;
___1135dh:
//		inc     eax
	eax++;
//		cmp     eax, 190h
//		jl      short ___1132eh
	if((int)eax < 0x190) goto ___1132eh;
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//		mov     [GXType], edx
	*(dword *)GXType = edx;
//		add     esp, 190h
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
}

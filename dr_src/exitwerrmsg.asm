cpu 386

    extern  __CHK
    extern  dr@5ec04h
    extern  dr@623d4h
    extern  dr@19bd60h
    extern  printf_
    extern  exit_
    extern  putchar

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE
@0:
db	1,"Unable to allocate sufficient amount of Base Memory!",0
db	2,"Unable to free Base Memory block!",0
db	3,"Unable to change the size of a Base Memory block!",0
db	4,"Unable to allocate sufficient amount of Flat Memory!",0
db	5,"Unable to free Flat Memory block!",0
db	6,"Unable to change the size Flat Memory block!",0
db	7,"Flat Memory block handle has changed while resizing!",0
db	8,"Selector Allocation failed! Not enough Selectors!",0
db	9,"Selector Deallocation failed!",0
db	0ah,"Unable to set Selector's Base!",0
db	0bh,"Unable to set Selector's Limit!",0
db	0ch,"...",0
db	0dh,"Unable to allocate sufficient amount of Heap Memory!",0
db	0eh,"Unable to free a Heap Memory block!",0
db	0fh,"Unable to change the size of a Heap Memory block!",0
db	10h,"You need at least a standard VGA!",0
db	11h,"Integrity Failure! File '%s' has been changed!",0
db	12h,"File Error! Couldn't find Archive '%s'!",0
db	13h,"File Error! Couldn't find File '%s'!",0
db	14h,"File Error! Couldn't find File '%s' inside Archive '%s'!",0
db	15h,"Unable to create Memory Log File '%s'!",0
db	16h,"Unable to write to Memory Log File '%s'!",0
db	17h,"Heap memory block size exceeded!",0
db	20h,"SoundBlaster or compatible initialization failed!",0
db	21h,"SoundBlaster or compatible I/O Error!",0
db	28h,"Sound Module '%s' is invalid!",0
db	29h,"Sound Module '%s' doesn't contain any data to play!",0
db	0ffh,0
db	90h

global exitWithErrMsg
exitWithErrMsg:
		push    490h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, 470h
		mov     ecx, 11bh
		mov     edi, esp
		mov     esi, @0
		rep movsd   
		movsw   
		movsb   
		mov     ah, [esp]
		mov     edx, esp
		cmp     ah, 0ffh
		je      @3
@1:
		mov     bh, [esp+488h]
		cmp     bh, [edx]
		je      @3
@2:
		mov     eax, edx
		mov     bh, [eax]
		inc     edx
		test    bh, bh
		jne     @2
		cmp     byte [edx], 0ffh
		jne     @1
@3:
		call    dr@5ec04h
		cmp     dword [dr@19bd60h], 0
		je      @4
		call    dr@623d4h
@4:
		mov     eax, 3
		int     10h
		cmp     byte [edx], 0ffh
		jne     @5
		xor     eax, eax
		mov     al, [esp+488h]
		push    eax
		push    $@@1
		call    printf_
		add     esp, 8
		mov     eax, 0ffh
		call    exit_
@5:
		xor     eax, eax
		mov     al, [esp+488h]
		push    eax
		push    $@@2
		inc     edx
		lea     ecx, [esp+494h]
		call    printf_
		mov     al, [edx]
		add     esp, 8
		test    al, al
		je      @13
@6:
		mov     bl, [edx]
		cmp     bl, 25h
		jne     @10
		mov     bl, [edx+1]
		inc     edx
		cmp     bl, 64h
		jb      @9
		lea     eax, [ecx+4]
		jbe     @7
		cmp     bl, 73h
		je      @8
		jmp     @9
@7:
		mov     edi, [eax-4]
		push    edi
		push    $@@3
		mov     ecx, eax
		call    printf_
		add     esp, 8
		jmp     @12
@8:
		mov     esi, [eax-4]
		push    esi
		push    $@@4
		mov     ecx, eax
		call    printf_
		add     esp, 8
		jmp     @12
@9:
		xor     eax, eax
		mov     al, [edx]
		jmp     @11
@10:
		xor     eax, eax
		mov     al, bl
@11:
		call    putchar
@12:
		mov     ah, [edx+1]
		inc     edx
		test    ah, ah
		jne     @6
@13:
		push    $@@5
		call    printf_
		add     esp, 4
		push    $@@6
		call    printf_
		add     esp, 4
		xor     eax, eax
		mov     al, [esp+488h]
		call    exit_
		add     esp, 470h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
$@@1:
db	0ah,"ESP Fatal Error 255:"
db	0ah,"--------------------"
db	0ah,"Undefined Fatal Error %d!"
db	0ah,7,0,0
$@@2:
db	0ah,"ESP Fatal Error %d:"
db	0ah,"--------------------"
db	0ah,0,0
$@@3:
db	"%d",0,0
$@@4:
db	"%s",0,0
$@@5:
db	0ah,7,0,0
$@@6:
db	"Please consult DRHELP.EXE for more information on how to resolve this problem."
db	0ah,0
cpu 386

    extern  __CHK
    extern  VGABufferPtr_0

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

;   dr@12e78(byte * eax, byte * edx, char * ebx, dword ecx);
;
;	eax - source data
;	edx	- proportions of letters
;   ebx - text to render
;	ecx - linear screen position


%define __arg0  [esp+4]
%define __arg1  [esp+14h]
%define __arg2  [esp+0ch]
%define __arg3  ebp

global renderTextToBuffer
renderTextToBuffer:
		push    30h
		call    __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, 20h
		mov     __arg0, eax
		mov     __arg1, edx
		mov     __arg2, ebx
		mov     __arg3, ecx
		xor     ebx, ebx
		mov     bl, [edx]
		mov     [esp], ebx
		xor     ebx, ebx
		mov     bl, [edx+1]
		mov     [esp+10h], ebx
		mov     ebx, [esp]
		imul    ebx, [esp+10h]
		xor     edx, edx
		mov     [esp+8], ebx
		mov     ebx, __arg2
		mov     [esp+18h], edx
		mov     [esp+1ch], ebx
		jmp     dr@12f3dh
dr@12ec5h:
		mov     ebx, [esp+1ch]
		cmp     byte [ebx], 0fah
		jne     dr@12ed1h
		inc     __arg3
		jmp     dr@12f2bh
dr@12ed1h:
		mov     esi, [esp+1ch]
		xor     ecx, ecx
		mov     cl, [esi]
		mov     esi, [esp+8]
		sub     ecx, 20h
		imul    esi, ecx
		mov     edi, __arg0
		mov     ebx, [VGABufferPtr_0]
		mov     edx, [esp]
		add     ebx, __arg3
		mov     ecx, [esp+10h]
		add     esi, edi
dr@12ef8h:
		mov     edi, edx
dr@12efah:
		mov     al, [esi]
		or      al, al
		je      dr@12f02h
		mov     [ebx], al
dr@12f02h:
		inc     ebx
		inc     esi
		dec     edi
		jne     dr@12efah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     dr@12ef8h
		mov     ecx, [esp+1ch]
		xor     ebx, ebx
		mov     eax, __arg1
		mov     bl, [ecx]
		add     ebx, eax
		mov     bl, [ebx-1eh]
		and     ebx, 0ffh
		add     __arg3, ebx
dr@12f2bh:
		mov     ebx, [esp+18h]
		mov     edx, [esp+1ch]
		inc     ebx
		inc     edx
		mov     [esp+18h], ebx
		mov     [esp+1ch], edx
dr@12f3dh:
		mov     edi, __arg2
		mov     esi, [esp+18h]
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     ecx, esi
		ja      dr@12ec5h
		add     esp, 20h
		pop     ebp
		pop     edi
		pop     esi
		retn
%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(_chain_intr)
		mov     ecx, eax
		mov     eax, edx
		mov     esp, ebp
		xchg    ecx, [ebp+28h]
		xchg    eax, [ebp+2ch]
		pop     gs
		pop     fs
		pop     es
		pop     ds
		pop     edi
		pop     esi
		pop     ebp
		pop     ebx
		pop     ebx
		pop     edx
		retf    

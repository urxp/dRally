%include "macros.inc"

    extern  __CEXT_V(Sound_SampleRate)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(setSampleRate__esp))
		cmp     ax, word 1f40h
		jae     ___6599bh
		mov     eax, 1f40h
___6599bh:
		cmp     ax, word 0ac44h
		jbe     ___659a6h
		mov     eax, 0ac44h
___659a6h:
		mov     [__CEXT_V(Sound_SampleRate)], ax
		retn    

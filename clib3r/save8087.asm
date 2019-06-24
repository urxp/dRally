%include "macros.inc"
%include "layout.inc"

section @text

_do_nothing_:
		retn    

section @data

__GDECL(___Save8087)
dd	_do_nothing_
__GDECL(___Rest8087)
dd	_do_nothing_
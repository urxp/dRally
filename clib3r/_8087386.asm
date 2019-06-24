%include "macros.inc"

    extern  __chk8087_
    extern  __no87

%include "layout.inc"


section @data

__GDECL(__8087)
db  0
__GDECL(__real87)
db  0


section @xi

db  0,2
dd  __chk8087_

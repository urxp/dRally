cpu 386
%include "macros.inc"

section .text


db	19h,0fh,3bh,3ch,3dh,3eh,3fh,40h,41h,42h,43h,44h,57h,58h,1
times 0dch db 0
__GDECL(___106cbh)
db	"TR1",0,"TR2",0,"TR3",0,"TR4",0
db	"TR5",0,"TR6",0,"TR7",0,"TR8",0
db	"TR9",0,"TR1",0,"TR2",0,"TR3",0
db	"TR4",0,"TR5",0,"TR6",0,"TR7",0
db	"TR8",0,"TR9",0,"TR0",0,0
__GDECL(___10718h)
db	0b3h,0bah,1,0,0a3h,1ch,2,0,33h,0adh,2,0,23h,0fh,3,0
__GDECL(___10728h)
db	98h,0f6h,1,0,88h,58h,2,0,18h,0e9h,2,0,8,4bh,3,0
__GDECL(___10738h)
db	0b5h,42h,1,0,0a5h,0a4h,1,0,35h,35h,2,0,25h,97h,2,0
db	52h,49h,58h,33h,80h,2,0e0h,1,0afh,0

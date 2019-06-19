#ifndef __X86_H
#define __X86_H

#define al 	((byte *)&eax)[0]
#define ah 	((byte *)&eax)[1]
#define ax 	((word *)&eax)[0]
#define bl 	((byte *)&ebx)[0]
#define bh 	((byte *)&ebx)[1]
#define bx 	((word *)&ebx)[0]
#define cl 	((byte *)&ecx)[0]
#define ch 	((byte *)&ecx)[1]
#define cx 	((word *)&ecx)[0]
#define dl 	((byte *)&edx)[0]
#define dh 	((byte *)&edx)[1]
#define dx 	((word *)&edx)[0]
#define si 	((word *)&esi)[0]
#define di 	((word *)&edi)[0]

#define B(b)	(*(byte *)(b))
#define W(w)	(*(word *)(w))
#define D(d)	(*(dword *)(d))

typedef unsigned char   byte;
typedef unsigned short 	word;
typedef unsigned long   dword;


#endif // __X86_H

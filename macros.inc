%define __GDECL(name)   __GDECL0 name 
%macro __GDECL0 1
global %1
%1:
%endmacro

rEAX    equ 0
rEBX    equ 4
rECX    equ 8
rEDX    equ 0ch
rESI    equ 10h
rEDI    equ 14h
rCF     equ 18h

sES     equ 0
sCS     equ 2
sSS     equ 4
sDS     equ 6
sFS     equ 8
sGS     equ 0ah

%define __EAX(base) dword [base + rEAX]
%define __AX(base)  word [base + rEAX]
%define __AL(base)  byte [base + rEAX]
%define __EBX(base) dword [base + rEBX]
%define __BX(base)  word [base + rEBX]
%define __BL(base)  byte [base + rEBX]
%define __ECX(base) dword [base + rECX]
%define __CX(base)  word [base + rECX]
%define __CL(base)  byte [base + rECX]
%define __EDX(base) dword [base + rEDX]
%define __DX(base)  word [base + rEDX]
%define __DL(base)  byte [base + rEDX]
%define __ESI(base) dword [base + rESI]
%define __SI(base)  word [base + rESI]
%define __EDI(base) dword [base + rEDI]
%define __DI(base)  word [base + rEDI]
%define __CF(base)  dword [base + rCF]

%define __ES(base)  word [base + sES]
%define __CS(base)  word [base + sCS]
%define __SS(base)  word [base + sSS]
%define __DS(base)  word [base + sDS]
%define __FS(base)  word [base + sFS]
%define __GS(base)  word [base + sGS]

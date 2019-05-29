%define __CEXT_V(name)  _ %+ name
%define __CEXT_F(name)  name %+ _
%define __GDECL(name)   __GDECL0 name 

%macro __GDECL0 1
global %1
%1:
%endmacro
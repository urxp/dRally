cpu 386

group  cgroup BEGTEXT @text
group  dgroup @data @bss @stack

section BEGTEXT	public use32 align=16 class=code
section @text public use32 align=4 class=code
section @data public use32 align=16 class=data
section @bss public use32 align=16 class=bss
section @stack stack use32 align=16 class=stack
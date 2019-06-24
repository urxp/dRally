cpu 386

group  cgroup @begtext @text
group  dgroup @null @afternull @const @const2 @data @tib @ti @tie @xib @xi @xie @yib @yi @yie @bss @stack

section @begtext    public use32 align=16 class=code
section @text       public use32 align=4 class=code
section @null		public use32 align=16 class=begdata
section @afternull  public use32 align=2 class=begdata
section @const      public use32 align=2 class=data
section @const2     public use32 align=2 class=data
section @data       public use32 align=16 class=data
section @tib        public use32 align=1 class=data
section @ti         public use32 align=1 class=data
section @tie        public use32 align=1 class=data
section @xib        public use32 align=2 class=data
section @xi         public use32 align=2 class=data
section @xie        public use32 align=2 class=data
section @yib        public use32 align=2 class=data
section @yi         public use32 align=2 class=data
section @yie        public use32 align=2 class=data
section @bss        public use32 align=16 class=bss
section @stack      stack use32 align=16 class=stack

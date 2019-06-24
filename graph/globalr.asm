%include "macros.inc"

    extern  __StdFont

%include "layout.inc"

section @data

__GDECL(__StartUp)
db  1
__GDECL(__GrMode)
db  0
__GDECL(__ErrorStatus)
db  0,0
__GDECL(__CurrPos)
db  0,0,0,0
__GDECL(__LogOrg)
db  0,0,0,0
__GDECL(__Clipping)
db  1
__GDECL(__CharAttr)
db  7
__GDECL(__Wrap)
db  1,0
__GDECL(__CursState)
db  1,0
__GDECL(__GrCursor)
db  0,0
__GDECL(__CurrActivePage)
db  0,0
__GDECL(__CurrVisualPage)
db  0,0
__GDECL(__CurrBkColor)
db  0,0,0,0
__GDECL(__CurrColor)
db  0,0
__GDECL(__Palette)
db  3,0
__GDECL(__FillMask)
db  0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
__GDECL(__DefMask)
db  0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
__GDECL(__HaveMask)
db  0
__GDECL(__Transparent)
db  1,0
__GDECL(__PaRf_x)
db  0,0
__GDECL(__PaRf_y)
db  0,0
__GDECL(__LineStyle)
db  0ffh,0ffh
__GDECL(__StyleWrap)
db  0,0
__GDECL(__PlotAct)
db  0,0
__GDECL(__TextSettings)
db  1,0,0,0,0,0,0,0
db  0,0,0,0,0,0,0,0
__GDECL(__CurrFont)
dd  __StdFont
__GDECL(__ArcInfo)
db  0,0,0,0,0,0,0,0
db  0,0,0,0,0,0,0,0
db  0,0,0,0,0,0,0,0
db  0,0,0,0,0,0,0,0
__GDECL(__CurrPos_w)
db  0,0,0,0,0,0,0,0
db  0,0,0,0,0,0,0,0
__GDECL(__Window)
db  1,0,0,0,0,0,0,0
db  0,0,0,0,80h,3fh,0,0
db  80h,3fh
__GDECL(__BiosSeg)
db  34h,0
__GDECL(__MonoSeg)
db  1ch,0
__GDECL(__CgaSeg)
db  1ch,0
__GDECL(__EgaSeg)
db  1ch,0
__GDECL(__RomSeg)
db  34h,0
__GDECL(__BiosOff)
db  0,4,0,0
__GDECL(__MonoOff)
db  0,0,0,0
__GDECL(__CgaOff)
db  0,0,0,0
__GDECL(__EgaOff)
db  0,0,0,0
__GDECL(__RomOff)
db  0,0,0ch,0
__GDECL(__CurrState)
dd  __ConfigBuffer


section @bss

__GDECL(__SetVGAPage)
    resb    4
__GDECL(__Screen)
    resb	0ch
__GDECL(__TextPos)
    resb	4
__GDECL(__ConfigBuffer)
    resb	3ah
__GDECL(__DBCSPairs)
    resb	0ah
__GDECL(__SVGAType)
    resb	2
__GDECL(__StackSeg)
    resb	2
__GDECL(__DefMode)
    resb	2
__GDECL(__DefTextRows)
    resb	2
__GDECL(__CursorShape)
    resb	2
__GDECL(__Tx_Col_Min)
    resb	2
__GDECL(__Tx_Row_Max)
    resb	2
__GDECL(__Tx_Col_Max)
    resb	2
__GDECL(__Tx_Row_Min)
    resb	4
__GDECL(__IsDBCS)
    resb	1

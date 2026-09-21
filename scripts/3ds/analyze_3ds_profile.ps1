# Analyses the log of the dRally 3DS profiler build (DR3_DEBUG=1).
#
#   powershell -ExecutionPolicy Bypass -File scripts\analyze_3ds_profile.ps1 -Log <drally_3ds.log>
#
# It groups the per-second "STAT" lines by phase and measurement variant (that is what the automatic
# variant rotation is for) and prints the profiler's own phase summaries verbatim.
param(
    [string]$Log = "$env:APPDATA\azahar\sdmc\drally_3ds.log"     # Azahar; on hardware copy the log from the SD card
)

$ErrorActionPreference = 'Stop'
if (-not (Test-Path $Log)) { throw "log not found: $Log" }

$lines = Get-Content $Log

Write-Host "=== profiler log: $Log" -ForegroundColor Cyan
($lines | Select-String -Pattern 'PROF init|PROF mode|present path|audio opened|audio request') |
    ForEach-Object { '  ' + $_.Line.Trim() }

# ---------------------------------------------------------------- STAT parsing ---
$statPattern = '^\[dr3\] STAT (?<phase>\S+) (?<var>\S+) (?<w>\d+)x(?<h>\d+) (?<path>\w+) \| ' +
               'pres=(?<pc>\d+) avg=(?<pa>\d+) max=(?<pmax>\d+) blit=(?<bl>\d+) flush=(?<fl>\d+) swap=(?<sw>\d+) \| ' +
               'game=(?<gc>\d+) avg=(?<ga>\d+) max=(?<gmax>\d+) io=(?<ic>\d+) avg=(?<ia>\d+) delay=(?<dl>\d+) \| ' +
               'frame=(?<fa>\d+) max=(?<fmax>\d+) skip=(?<sk>\d+) \| ' +
               'audio cb=(?<cb>\d+) fr=(?<fr>\d+) mix=(?<mx>\d+) stalls=(?<st>\d+) ticks=(?<tk>\d+) \| ' +
               'hist=(?<h0>\d+)/(?<h1>\d+)/(?<h2>\d+)/(?<h3>\d+)'

$rows = @{}
foreach ($m in ($lines | Select-String -Pattern $statPattern)) {
    $g = $m.Matches[0].Groups
    $key = "$($g['phase'].Value)/$($g['var'].Value)"
    if (-not $rows.ContainsKey($key)) { $rows[$key] = New-Object System.Collections.ArrayList }
    [void]$rows[$key].Add([pscustomobject]@{
        w    = [int]$g['w'].Value;  h    = [int]$g['h'].Value; path = $g['path'].Value
        pres = [int]$g['pa'].Value; blit = [int]$g['bl'].Value; flush = [int]$g['fl'].Value
        swap = [int]$g['sw'].Value; game = [int]$g['ga'].Value; io   = [int]$g['ia'].Value
        frame= [int]$g['fa'].Value; skip = [int]$g['sk'].Value; cb   = [int]$g['cb'].Value
        fr   = [int]$g['fr'].Value; mix  = [int]$g['mx'].Value; stall= [int]$g['st'].Value
        ticks= [int]$g['tk'].Value
    })
}

Write-Host ''
Write-Host '=== averages per phase / variant (all values in microseconds unless noted)' -ForegroundColor Cyan
Write-Host ('{0,-18} {1,5} {2,8} {3,8} {4,7} {5,7} {6,7} {7,8} {8,7} {9,8} {10,7} {11,7} {12,7} {13,7}' -f `
    'phase/variant', 'n', 'mode', 'present', 'blit', 'flush', 'swap', 'game', 'aud_cb', 'io_us', 'frame', 'skip', 'audiofr', 'stalls')

foreach ($key in ($rows.Keys | Sort-Object)) {
    $r = $rows[$key]
    $avg = {
        param($prop)
        [int](($r | Measure-Object -Property $prop -Average).Average)
    }
    $mode = "$($r[0].w)x$($r[0].h) $($r[0].path)"
    Write-Host ('{0,-18} {1,5} {2,8} {3,8} {4,7} {5,7} {6,7} {7,8} {8,7} {9,8} {10,7} {11,7} {12,7} {13,7}' -f `
        $key, $r.Count, $mode, (& $avg 'pres'), (& $avg 'blit'), (& $avg 'flush'), (& $avg 'swap'),
        (& $avg 'game'), (& $avg 'cb'), (& $avg 'io'), (& $avg 'frame'), (& $avg 'skip'),
        (& $avg 'fr'), (& $avg 'stall'))
}

Write-Host ''
Write-Host '=== interpretation hints ===' -ForegroundColor Cyan
Write-Host '  blit  : our conversion + framebuffer write   -> the part we can still optimise'
Write-Host '  flush : GSPGPU_FlushDataCache (cache flush)  -> unavoidable for the whole buffer'
Write-Host '  swap  : gfxScreenSwapBuffers (with vsync)    -> unavoidable'
Write-Host '  So "skip-blit" rows show the floor: present minus blit is the cost we cannot remove.'
Write-Host '  frames budget is 14285us (70 Hz). If frame avg + present avg stays below that, the engine keeps up.'
Write-Host '  audiofr should be ~32728/s; less means the mixer is starved (music drags). stalls>0 confirm it.'

Write-Host ''
Write-Host '=== profiler phase summaries (verbatim) ===' -ForegroundColor Cyan
($lines | Select-String -Pattern 'PROF === |PROF   var=|PROF   io=|PROF variant|PROF --- ') |
    ForEach-Object { $_.Line }

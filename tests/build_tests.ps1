# Builds and runs the host unit tests for the portable 3DS port code
# (platform_3ds/dr3_blit.c and platform_3ds/dr3_input_map.c) with MSVC.
#
#   powershell -ExecutionPolicy Bypass -File tests/build_tests.ps1
$ErrorActionPreference = 'Stop'

$vswhere = "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe"
if (-not (Test-Path $vswhere)) { throw 'vswhere.exe not found - is Visual Studio Build Tools installed?' }
$msbuild = & $vswhere -latest -products * -requires Microsoft.Component.MSBuild -find 'MSBuild\**\Bin\MSBuild.exe' |
           Select-Object -First 1
if (-not $msbuild) { throw 'MSBuild.exe not found' }

$proj = Join-Path $PSScriptRoot 'Dr3Tests.vcxproj'

Write-Host "=== building $proj ===" -ForegroundColor Cyan
& $msbuild $proj /p:Configuration=Release /p:Platform=x64 /nologo /v:m
if ($LASTEXITCODE -ne 0) { throw "Build failed (exit $LASTEXITCODE)" }

$exe = Join-Path $PSScriptRoot 'bin\x64\Release\Dr3Tests.exe'
Write-Host "=== running $exe ===" -ForegroundColor Cyan
& $exe
$rc = $LASTEXITCODE
Write-Host ("=== tests {0} ===" -f $(if ($rc -eq 0) { 'PASSED' } else { 'FAILED' })) -ForegroundColor $(if ($rc -eq 0) { 'Green' } else { 'Red' })
exit $rc

#!/usr/bin/env bash
# Builds the Nintendo 3DS port with devkitARM.
#
#   bash scripts/3ds/build_3ds.sh            # release  -> build/3ds/dRally_3ds.3dsx
#   bash scripts/3ds/build_3ds.sh debug      # profiler -> build/3ds_debug/dRally_3ds_debug.3dsx
#   bash scripts/3ds/build_3ds.sh all        # both
#
# SDL2 has to be built first (scripts/3ds/build_sdl2_3ds.sh); this script points the makefile at that
# local prefix, so nothing has to be installed into the devkitPro tree.
#
# Overridable through the environment:
#   DEVKITPRO         devkitPro installation      (default /opt/devkitpro, on msys2 /c/devkitPro)
#   SDL2_3DS_PREFIX   SDL2 install prefix         (default <repo>/third_party/SDL2-3ds-install)
set -e

REPO=${REPO:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)}
SDL2_PREFIX=${SDL2_3DS_PREFIX:-$REPO/third_party/SDL2-3ds-install}
MODE=${1:-release}

export DEVKITPRO=${DEVKITPRO:-/opt/devkitpro}
export DEVKITARM=${DEVKITARM:-$DEVKITPRO/devkitARM}
export PATH=$DEVKITPRO/tools/bin:$DEVKITARM/bin:$PATH

cd "$REPO"

echo "=== env"
arm-none-eabi-gcc --version | head -1
make --version | head -1

echo "=== SDL2 prefix"
ls -la "$SDL2_PREFIX/lib" | grep -i sdl || true

if [ "$MODE" = "release" ] || [ "$MODE" = "all" ]; then
  echo "=== make (release)"
  make -f Makefile.3ds -j6 SDL2_3DS_PREFIX="$SDL2_PREFIX"
fi

if [ "$MODE" = "debug" ] || [ "$MODE" = "all" ]; then
  echo "=== make (profiler build, -DDR3_PROFILE)"
  make -f Makefile.3ds -j6 DR3_DEBUG=1 SDL2_3DS_PREFIX="$SDL2_PREFIX"
fi

echo "=== result"
ls -la build/3ds/ 2>/dev/null || true
ls -la build/3ds_debug/ 2>/dev/null || true
echo "DRALLY_3DS_BUILD_OK"

#!/usr/bin/env bash
# Builds SDL2 for the Nintendo 3DS with its native n3ds backend and installs it into a local prefix.
#
#   bash scripts/3ds/build_sdl2_3ds.sh
#
# Why: devkitPro packages SDL 1.2 for the 3DS, not SDL2 - and SDL2 is what this port uses (its n3ds
# backend provides the display and the DSP audio).  Nothing is installed into the devkitPro tree, so
# no administrator rights are needed (which also means it works inside an unprivileged shell).
#
# Overridable through the environment:
#   DEVKITPRO         devkitPro installation      (default /opt/devkitpro, on msys2 /c/devkitPro)
#   SDL_SRC           SDL2 source checkout        (default <repo>/third_party/SDL)
#   SDL_BUILD         build directory             (default <SDL_SRC>/build-3ds)
#   SDL2_3DS_PREFIX   install prefix              (default <repo>/third_party/SDL2-3ds-install)
set -e

REPO=${REPO:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)}
DEVKITPRO=${DEVKITPRO:-/opt/devkitpro}

export DEVKITPRO
export DEVKITARM=${DEVKITARM:-$DEVKITPRO/devkitARM}
export PATH=$DEVKITPRO/tools/bin:$DEVKITARM/bin:$PATH

SRC=${SDL_SRC:-$REPO/third_party/SDL}
BUILD=${SDL_BUILD:-$SRC/build-3ds}
PREFIX=${SDL2_3DS_PREFIX:-$REPO/third_party/SDL2-3ds-install}

echo "=== DEVKITPRO=$DEVKITPRO"
arm-none-eabi-gcc --version | head -1
cmake --version | head -1

echo "=== configure"
cmake -S "$SRC" -B "$BUILD" -G "Unix Makefiles" \
    -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/3DS.cmake" \
    -DCMAKE_BUILD_TYPE=Release \
    -DN3DS=ON \
    -DSDL_SHARED=OFF \
    -DSDL_STATIC=ON \
    -DSDL_TESTS=OFF \
    -DSDL_TEST=OFF \
    -DCMAKE_INSTALL_PREFIX="$PREFIX"

echo "=== build"
cmake --build "$BUILD" -j6

echo "=== install"
cmake --install "$BUILD"

echo "=== result"
ls -la "$PREFIX/lib" | grep -i sdl || true
echo "SDL2_3DS_BUILD_OK"

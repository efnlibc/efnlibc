#!/bin/sh
ninja="../ninja/ninja"
if [ ! -d bin/ ]; then
    mkdir -p bin
fi
cd bin/
$ninja -f ../build.ninja
cd -

#! /bin/sh
build_type="$1"

if [ -z "$build_type" ]; then
    build_type="Debug"
fi

cmake -DCMAKE_BUILD_TYPE=$build_type -S . -B build; cd ..
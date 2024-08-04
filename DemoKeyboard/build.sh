#!/usr/bin/env bash

#
# Find and uncomment your platform and comment out the rest!
#

# MacOS GLUT
clang++ -I.. -o DemoKeyboard-mac DemoKeyboard.cpp -arch arm64 -std=c++20 -mmacosx-version-min=10.15 -Wall -framework OpenGL -framework GLUT -framework Carbon -lpng

# Linux XLIB
# clang++ -I.. -o DemoKeyboard-xlib DemoKeyboard.cpp -O2 -lX11 -lGL -lm -lpthread -lpng -lstdc++fs -std=c++20

# Linux GLUT
# clang++ -I.. -o DemoKeyboard-glut DemoKeyboard.cpp -O2 -lglut -lGL -lm -lpng -lstdc++fs -std=c++20 -DOLC_PLATFORM_GLUT

# Emscripten
# em++ -I.. -o DemoKeyboard.html DemoKeyboard.cpp -O2 -s ALLOW_MEMORY_GROWTH=1 -s MAX_WEBGL_VERSION=2 -s MIN_WEBGL_VERSION=2 -s USE_LIBPNG=1 -std=c++20 --preload-file assets@assets

# Windows via MinGW
# x86_64-w64-mingw32-g++ -I.. -o DemoKeyboard.exe DemoKeyboard.cpp -luser32 -lgdi32 -lopengl32 -lgdiplus -lshlwapi -ldwmapi -lstdc++fs -std=c++20 -static


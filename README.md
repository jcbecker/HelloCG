# HelloCG
Hello Computer Graphics is a classic implementation of the Hello World equivalent
in graphics programing, a triangle with red, green and blue vertices.

The latest version of OpenGL available in the development environment was 4.5.

HelloCG code available on file `/src/main.cpp`.

This implementation was thought to work on the main desktop platforms (Linux, MacOS and Windows), but tested in only one environment so far.

For window and input control, GLFW is used, available in `/3rdparty/glfw`.

GLAD is used to properly load OpenGL functions, available in `/3rdparty/glfw/deps/glad`.

GLFW and GLAD are compiled and linked using cmake.

## Description of the development and testing environment
* OS: Arch Linux 
* Kernel: x86_64 Linux 5.0.2-arch1-1-ARCH
* CPU: Intel Core i7-5500U @ 4x 3GHz
* GPU: intel
* Compiler: GCC 8.2.1

## Dependencies
* CMake 3.9 or greater
* Graphic card and graphic driver with suport to OpenGL 4.5
* C++ compiler (GCC, Clang or MSVC)

### How to compile and run
```shell
cd HelloCG
git submodule init
git submodule update
mkdir build
cd build
cmake ..
make
./hcg
```

### Thanks
 * To Joey de Vries for share a nice tutorial in https://learnopengl.com 
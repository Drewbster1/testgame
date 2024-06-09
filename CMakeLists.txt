cmake_minimum_required(VERSION 3.16)
project(testgame)

add_compile_options(-I/usr/local/opt/freetype/include/freetype2)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set (COMPILE_WARNING_AS_ERROR)
set (CMAKE_CXX_STANDARD 20)
message(STATUS ${CMAKE_CXX_COMPILER})

add_subdirectory(src)
add_subdirectory(external)

cmake_minimum_required(VERSION 3.17)
project(c_programming_modern C)

set(CMAKE_C_STANDARD 99)

add_executable(pun basis/pun.c)
add_executable(dweight basis/dweight.c)
add_executable(dweight2 basis/dweight2.c)
add_executable(macro basis/macro.c)
add_executable(celsius basis/celsius.c)
add_executable(helloWorld basis/helloWorld.c)
add_executable(expands basis/expands.c)
add_executable(dweight3 basis/dweight3.c)
add_executable(initialization basis/initialization.c)
add_executable(printAsterisk basis/printAsterisk.c)

add_executable(tprintf printf/tprintf.c)

add_executable(addfrac printf/addfrac.c)

add_executable(upc operator/upc.c)

add_executable(broker selection/broker.c)

add_executable(date selection/date.c)

add_executable(square loop/square.c)

add_executable(sum loop/sum.c)

add_executable(numdigit loop/numdigit.c)

add_executable(square2 loop/square2.c)

add_executable(square3 loop/square3.c)

add_executable(checking loop/checking.c)

add_executable(sum2 type/sum2.c)

add_executable(length type/length.c)

add_executable(length2 type/length2.c)

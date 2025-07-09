cmake_minimum_required(VERSION 3.10)
project(Data-Oriented-Programming--DOP-)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_executable(dop_benchmark benchmarks/benchmark_runner.cpp)

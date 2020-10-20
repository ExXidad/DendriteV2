cmake_minimum_required(VERSION 3.15)
project(DendriteV2)

include_directories(C:/vs_libs/eigen-3.3.7)

set(CMAKE_CXX_STANDARD 17)

add_executable(DendriteV2 main.cpp Dendrite.cpp Dendrite.h Particle.cpp Particle.h)
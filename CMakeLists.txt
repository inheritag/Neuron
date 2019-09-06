cmake_minimum_required(VERSION 3.5)
project(NEURON)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-std=c++14")

add_executable(
	Neuron
	src/main.cpp
	src/Neuron.cpp
)

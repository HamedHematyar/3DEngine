cmake_minimum_required(VERSION 3.28)
project(Patterns)

set(CMAKE_CXX_STANDARD 26)

include_directories(./include)
link_directories(./libs)

add_executable(Patterns glad.c main.cpp
        Camera.cpp
        Shader.cpp
        Buffer.cpp
        Geometry.cpp
)

target_link_libraries(Patterns libglfw3.a opengl32)

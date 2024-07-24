cmake_minimum_required(VERSION 3.28)
project(3DEngine)

set(CMAKE_CXX_STANDARD 26)

include_directories(./include)
link_directories(./libs)

add_executable(3DEngine include/glad/glad.c src/main.cpp
        src/Camera.cpp
        src/Shader.cpp
        src/Buffer.cpp
        src/Geometry.cpp
)

target_link_libraries(3DEngine libglfw3.a opengl32)

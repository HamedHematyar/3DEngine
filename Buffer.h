#pragma once

#include <glad/glad.h>
#include "vector"


class Buffer {
public:
    Buffer(const std::vector<float>& vertices,
           const std::vector<unsigned int>& indices);

    ~Buffer();

    static void setVertexAttribPointer(GLuint index,
                                       GLint size,
                                       GLenum type,
                                       GLboolean normalized,
                                       GLsizei stride,
                                       const void* pointer);
    void bind() const;
    static void unbind();

private:
    GLuint VAO{}, VBO{}, EBO{};
};

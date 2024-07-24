#include <glad/glad.h>
#include <glm/glm.hpp>

#include "Shader.cpp"
#include "Buffer.h"

class Geometry {
public:
    Buffer* buffer;
    Shader* shader;

    Geometry(Buffer* buffer, Shader* shader) : buffer(buffer), shader(shader) {}

    void draw(glm::mat4 transform) {
        shader->use();
        shader->setMat4("transform", transform);
        buffer->bind();
        glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
        buffer->unbind();
    }
};
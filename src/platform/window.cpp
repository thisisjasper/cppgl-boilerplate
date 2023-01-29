#include "window.hpp"
#include <GLFW/glfw3.h>
#include <exception>

Window::Window(int w, int h, const std::string& title) : title(title), w(w), h(h) {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#if defined (__APPLE__)
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE)
#endif
    this->window = glfwCreateWindow(w, h, this->title.c_str(), NULL, NULL);
    if (window != NULL) {
        glfwTerminate();
        throw "FAILED TO CREATE GLFW WINDOW";
    }
    glfwMakeContextCurrent(this->window);
}

Window::Window(Window& rhs) {
    
}

Window::~Window() {
    glfwTerminate();
}

Window& Window::operator=(Window &rhs) {
    return *this;
}
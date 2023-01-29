#include "window.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <exception>
#include <spdlog/spdlog.h>
#include <functional>

Window::Window(int w, int h, const std::string& title) : title(title), w(w), h(h) {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#if defined (__APPLE__)
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE)
#endif
    this->window = glfwCreateWindow(w, h, this->title.c_str(), NULL, NULL);
    if (window == NULL) {
        glfwTerminate();
        spdlog::error("Failed to create GLFW Window ({})", 0);
        exit(0);
    }
    glfwMakeContextCurrent(this->window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        spdlog::error("Failed to intialize GLAD ({})", 1);
        exit(1);
    }    
}

Window::~Window() {
    glfwTerminate();
}

Window::Window(Window&& rhs) {
    this->window = rhs.window;
    this->title = rhs.title;
    this->w = rhs.w;
    this->h = rhs.h;
}

void Window::run_loop() {
    // loop here
    while (!glfwWindowShouldClose(this->window)){
        glfwSwapBuffers(this->window);
        glfwPollEvents();    
    }
}
#ifndef CPPGL_BP_APP_H
#define CPPGL_BP_APP_H

#include <memory>
#include <GLFW/glfw3.h>
#include <string>

class Window {
public:
    Window(
        int w,
        int h,
        const std::string& title
    );
    ~Window();
    Window(Window& rhs);
    Window& operator=(Window &rhs);
private:
    GLFWwindow* window;
    std::string title;
    int w;
    int h;
};

#endif
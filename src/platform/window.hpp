#ifndef CPPGL_BP_APP_H
#define CPPGL_BP_APP_H

#include <memory>
#include <string>
#include <functional>

struct GLFWwindow;

class Window {
public:
    Window(
        int w,
        int h,
        const std::string& title
    );
    ~Window();
    Window(Window& rhs) = delete;
    Window(Window&& rhs);
    Window& operator=(Window &rhs) = delete;
    Window& operator=(Window &&rhs) = delete;
public:
    void run_loop();
private:
    GLFWwindow* window;
    std::string title;
    int w;
    int h;
};

#endif
#include "vendor/glad/include/glad/glad.h"
#include <GLFW/glfw3.h>
#include <iostream>

bool set_up();
void tear_down();

int main() {
    if (!set_up())
        std::cout << "Initialization failed." << std::endl;

    tear_down();

    return 0;
}

bool set_up() {
    return glfwInit();
}

void tear_down() {
    glfwTerminate();
}
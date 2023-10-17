#include <iostream>
#include "Window.h"

int main() {
    std::cout << "Creating Window\n";

    Window* pWindow = new Window();

    bool running = true;

    while (running) {
        //Render
        if (!pWindow->ProccesMessages()) {
            std::cout << "Closing Window";
            running = false;
        }

        Sleep(10);
    }
    delete pWindow;

    return 0;
}
#pragma once

#include <Windows.h>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

void AddMenus();

class Window {
public:
    Window();
    Window(const Window&) = delete;
    Window& operator =(const Window&) = delete;
    ~Window();

    bool ProccesMessages();

private:
    HINSTANCE m_hInstance;
    HWND m_hWnd;

};
#pragma once
#include "sudoku_g.h"
#include "sudoku_t.h"
#include <Windows.h>
using namespace sudoku;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew sudoku_g);
    return 0;
}
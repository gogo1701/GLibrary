//Made by me and my c++ course
//
//
//Library features drawing graphics,
//
//
//Can be used freely with credit.
//
//
//Hope you like it :)
//
//




#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <winuser.h>
#include <time.h>

HANDLE hConsoleOutput = ::GetStdHandle(STD_OUTPUT_HANDLE);

enum COLORS
{
    BLACK = 0,
    BLUE = FOREGROUND_BLUE,
    GREEN = FOREGROUND_GREEN,
    RED = FOREGROUND_RED,

    CYAN = FOREGROUND_BLUE | FOREGROUND_GREEN,
    BROWN = FOREGROUND_RED | FOREGROUND_GREEN,
    PURPLE = FOREGROUND_RED | FOREGROUND_BLUE,
    GREY = 0 | FOREGROUND_INTENSITY,
    YELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    PINK = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    WHITE =  FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,

    LIGHT_GREY =  FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN,
    LIGHT_BLUE = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    LIGHT_CYAN = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    LIGHT_GREEN = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    LIGHT_RED = FOREGROUND_RED | FOREGROUND_INTENSITY
};

void draw_char(char ch, int y, int x, COLORS foreground_color, COLORS background_color)
{
    CHAR_INFO ch_info;
    ch_info.Char.AsciiChar = ch;
    ch_info.Attributes = foreground_color | (background_color << 4);

    COORD buf_size = {1, 1};
    COORD buf_coord = {0, 0};
    SMALL_RECT screen_pos = {x, y, x+1, y+1};
    ::WriteConsoleOutput(hConsoleOutput, &ch_info, buf_size, buf_coord, &screen_pos);
}

void drawHorizontalLine(int posX, int posY, int columns, COLORS color)
{
    for (int j = posY; j < columns + posY; j++)
    {
        draw_char(' ', posX, j, color, color);
    }
}

void drawVerticalLine(int posX, int posY, int rows, COLORS color)
{
    for (int j = posX; j < rows + posX; j++)
    {
        draw_char(' ', j, posY, color, color);

    }
}

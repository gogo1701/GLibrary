//Made by me and my c++ course
//
//
//Library features drawing graphics including a pre-ready dice system.
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

void drawDice1(int posX, int posY, int diceSize, COLORS color)
{
    for(int i = 1 + posX; i <= diceSize/2 + posX; i++)
    {
        drawHorizontalLine(i, 1 + posY, diceSize, color);
    }

    if (diceSize/2 % 2 == 0)
    {
        drawHorizontalLine(posX + diceSize/4+1, diceSize/2 - 1 + posY, 4, WHITE);
        drawHorizontalLine(posX + diceSize/4, diceSize/2 - 1 + posY, 4, WHITE);
    }
    else
    {
        drawHorizontalLine(posX + diceSize/4+1, diceSize/2 + posY, 2, WHITE);
    }
}

void drawDice3(int posX, int posY, int diceSize, COLORS color)
{
    for(int i = 1 + posX; i <= diceSize/2  + posX; i++)
    {
        drawHorizontalLine(i, 1 + posY, diceSize, color);
    }
    if (diceSize/2 % 2 == 0)
    {
        drawHorizontalLine(2  + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(3  + posX, diceSize - 5 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/4+1 + posX, diceSize/2 - 1 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/4 + posX, diceSize/2 - 1 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2  + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1  + posX, 3 + posY, 4, WHITE);
    }
    else
    {
        drawHorizontalLine(2  + posX, diceSize - 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/4+1 + posX, diceSize/2 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1  + posX, 3 + posY, 2, WHITE);
    }
}

void drawDice5(int posX, int posY, int diceSize, COLORS color)
{
    for(int i = 1 + posX; i <= diceSize/2 + posX; i++)
    {
        drawHorizontalLine(i, 1 + posY, diceSize, color);
    }
    if (diceSize/2 % 2 == 0)
    {
        drawHorizontalLine(2 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(3 + posX, 3 + posY, 4, WHITE);

        drawHorizontalLine(2 + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(3 + posX, diceSize - 5 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/4+1 + posX, diceSize/2 - 1 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/4 + posX, diceSize/2 - 1 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2 + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, diceSize - 5 + posY, 4, WHITE);
    }
    else
    {
        drawHorizontalLine(2 + posX, 3 + posY, 2, WHITE);
        drawHorizontalLine(2 + posX, diceSize - 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/4+1 + posX, diceSize/2 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, diceSize - 3 + posY, 2, WHITE);
    }
}

void drawDice4(int posX, int posY, int diceSize, COLORS color)
{
    for(int i = 1  + posX; i <= diceSize/2  + posX; i++)
    {
        drawHorizontalLine(i, 1 + posY, diceSize, color);
    }
    if (diceSize/2 % 2 == 0)
    {
        drawHorizontalLine(2 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(3 + posX, 3 + posY, 4, WHITE);

        drawHorizontalLine(2 + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(3 + posX, diceSize - 5 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2 + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, diceSize - 5 + posY, 4, WHITE);
    }
    else
    {
        drawHorizontalLine(2 + posX, 3 + posY, 2, WHITE);
        drawHorizontalLine(2 + posX, diceSize - 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, diceSize - 3 + posY, 2, WHITE);
    }
}

void drawDice2(int posX, int posY, int diceSize, COLORS color)
{
    for(int i = 1 + posX; i <= diceSize/2 + posX; i++)
    {
        drawHorizontalLine(i, 1 + posY, diceSize, color);
    }
    if (diceSize/2 % 2 == 0)
    {
        drawHorizontalLine(2 + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(3 + posX, diceSize - 5 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 4, WHITE);
    }
    else
    {
        drawHorizontalLine(2 + posX, diceSize - 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 2, WHITE);
    }
}

void drawDice6(int posX, int posY, int diceSize, COLORS color)
{
    for(int i = 1 + posX; i <= diceSize/2 + posX; i++)
    {
        drawHorizontalLine(i, 1 + posY, diceSize, color);
    }
    if (diceSize/2 % 2 == 0)
    {
        drawHorizontalLine(2 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(3 + posX, 3 + posY, 4, WHITE);

        drawHorizontalLine(2 + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(3 + posX, diceSize - 5 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/4 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/4 + 1 + posX, 3 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/4 + posX, diceSize-5 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/4 + 1 + posX, diceSize-5 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2 + posX, 3 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 4, WHITE);

        drawHorizontalLine(diceSize/2 - 2 + posX, diceSize - 5 + posY, 4, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, diceSize - 5 + posY, 4, WHITE);
    }
    else
    {
        drawHorizontalLine(2 + posX, 3 + posY, 2, WHITE);
        drawHorizontalLine(2 + posX, diceSize - 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/4 + 1 + posX, 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/4 + 1 + posX, diceSize-3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, 3 + posY, 2, WHITE);
        drawHorizontalLine(diceSize/2 - 1 + posX, diceSize - 3 + posY, 2, WHITE);
    }
}

void showDice(int posX, int posY, int number, int diceSize, COLORS color)
{
    switch(number)
    {
    case 1:
        drawDice1(posX, posY, diceSize, color);
        Sleep(200 * number);
        break;
    case 2:
        drawDice2(posX, posY, diceSize, color);
        Sleep(200 * number);
        break;
    case 3:
        drawDice3(posX, posY, diceSize, color);
        Sleep(200 * number);
        break;
    case 4:
        drawDice4(posX, posY, diceSize, color);
        Sleep(200 * number);
        break;
    case 5:
        drawDice5(posX, posY, diceSize, color);
        Sleep(200 * number);
        break;
    case 6:
        drawDice6(posX, posY, diceSize, color);
        Sleep(200 * number);
        break;
    }
}




void drawBackground(int posX, int posY, int rows, int cols,COLORS color)
{
    for(int i = posX; i <= posX + rows; i++)
    {
        drawHorizontalLine(i,posY,cols,color);
    }

}

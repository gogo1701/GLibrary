//Made by me and my c++ course
//
//
//Library features drawing graphics including a pre-ready number system.
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

void drawNumber0(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY + numberSize - 1, numberSize, color);
}

void drawNumber1(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawVerticalLine(1 + posX,1+numberSize-1 + posY,numberSize+1,color);
}

void drawNumber2(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize/2, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX + numberSize/2, 1 + posY, numberSize/2, color);
    drawVerticalLine(1 + posX, 1 + posY + numberSize - 1, numberSize/2, color);
}

void drawNumber3(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize/2, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY + numberSize - 1, numberSize, color);
}

void drawNumber4(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX + numberSize/2, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY, numberSize/2, color);
    drawVerticalLine(1 + posX, 1 + posY + numberSize - 1, numberSize + 1, color);
}

void drawNumber5(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize/2, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY, numberSize/2, color);
    drawVerticalLine(1 + posX + numberSize/2, 1 + posY + numberSize - 1, numberSize/2, color);
}

void drawNumber6(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize/2, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX + numberSize/2, 1 + posY + numberSize - 1, numberSize/2, color);
}

void drawNumber7(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY + numberSize - 1, numberSize+1, color);
}

void drawNumber8(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize/2, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY + numberSize - 1, numberSize, color);
}

void drawNumber9(int posX, int posY, int numberSize, COLORS color)
{
    if (numberSize % 2 == 1)
    {
        numberSize++;
    }
    drawHorizontalLine(1 + posX, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize/2, 1 + posY, numberSize, color);
    drawHorizontalLine(1 + posX + numberSize, 1 + posY, numberSize, color);
    drawVerticalLine(1 + posX, 1 + posY, numberSize/2, color);
    drawVerticalLine(1 + posX, 1 + posY + numberSize - 1, numberSize, color);
}

void showNumber(int posX, int posY, int numberSize,int number,COLORS color)
{
    switch(number)
    {
    case 1:
        drawNumber1(posX, posY, numberSize, color);
        break;
    case 2:
        drawNumber2(posX, posY, numberSize, color);
        break;
    case 3:
        drawNumber3(posX, posY, numberSize, color);
        break;
    case 4:
        drawNumber4(posX, posY, numberSize, color);
        break;
    case 5:
        drawNumber5(posX, posY, numberSize, color);
        break;
    case 6:
        drawNumber6(posX, posY, numberSize, color);
        break;
    case 7:
        drawNumber7(posX, posY, numberSize, color);
        break;
    case 8:
        drawNumber8(posX, posY, numberSize, color);
        break;
    case 9:
        drawNumber9(posX, posY, numberSize, color);
        break;
    case 0:
        drawNumber0(posX, posY, numberSize, color);
        break;
    case 10:
        drawNumber1(posX, posY, numberSize, color);
        drawNumber0(posX, posY+ 20, numberSize, color);
        break;
    case 11:
        drawNumber1(posX, posY, numberSize, color);
        drawNumber1(posX, posY+ 20, numberSize, color);
        break;
    case 12:
        drawNumber1(posX, posY, numberSize, color);
        drawNumber2(posX, posY+ 20, numberSize, color);
        break;
    case 13:
        drawNumber1(posX, posY, numberSize, color);
        drawNumber3(posX, posY+ 20, numberSize, color);
        break;
    case 14:
        drawNumber1(posX, posY, numberSize, color);
        drawNumber4(posX, posY+ 20, numberSize, color);
        break;
    case 15:
        drawNumber1(posX, posY, numberSize, color);
        drawNumber5(posX, posY+ 20, numberSize, color);
        break;
    case 16:
        drawNumber1(posX, posY, numberSize, color);
        drawNumber6(posX, posY+ 20, numberSize, color);
        break;
    }

}

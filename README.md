# GLibrary
Library for drawing console graphics in c++.
## main.cpp
With the library an example demo of a random dice game has been given. Enter the player's names and play 3 rounds of random dice to see who gets the most, but be careful if you get a 1 you will lose all of your score!
## Colors(have to be capital to work):
BLACK

BLUE

GREEN

RED

CYAN

BROWN

PURPLE

GREY

YELLOW

PINK

WHITE

LIGHT_GREY

LIGHT_BLUE

LIGHT_CYAN

LIGHT_GREEN

LIGHT_RED


## Functions in GBase.h:

### drawHorizontalLine(posX,posY,columns,color);
Is used to draw horizontal lines.

### drawVerticalLine(posX,posY,rows,color);
Is used to draw vertical lines.


## Functions in GNumbers.h:

### drawNumber(can be from 0 to 9)(posX,posY,NumberSize,color);
Is used to draw numbers.

### showNumber(posX,posY,numberSize,number,color);
Is used to draw numbers. Supports numbers from 0 to 16.


## Functions in GDice.h:

### drawDice(can be from 1 to 6)(posX,posY,NumberSize,color);
Is used to draw dice.

### showDice(posX,posY,number,diceSize,color);
Is used to draw dice, but easier.

### drawBackground(posX,posY,rows,cols,color);
Is used to draw a big rectangle that is filled with the color specified.

 

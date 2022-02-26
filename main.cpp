#include <iostream>
#include "GBase.h"
#include "GDice.h"
#include "GNumbers.h"

using namespace std;

int main()
{
    string player1Name;
    string player2Name;

    cout << "Player 1 name:";
    cin >> player1Name;

    cout << "Player 2 name:";
    cin >> player2Name;

    system("cls");

    srand(time(NULL));

    int posX=0;
    int posY = 5;

    int rows = 2;
    int cols = 2;

    int numberSize= 5;

    int player1Sum=0;
    int player2Sum=0;

    int turns = 3;
    int diceSize = 20;



    for(int i = 1; i <= turns; i++)
    {
        int randomNumber1 = 1 + rand() % 6; /// 1 + 0,1,2,3,4,5


        for (int i = 1; i <= 12; i++)
        {
            showDice(posX, posY, i, diceSize, RED);
        }

        showDice(posX, posY, randomNumber1, diceSize, GREEN);
        if(randomNumber1 == 1)
        {
            player1Sum = 0;
        }
        else
        {
            player1Sum+= randomNumber1;
        }
        drawBackground(posX + diceSize/2 +2,posY + 1,numberSize+ 1,numberSize+1,BLACK);
        showNumber(posX + diceSize / 2 + 1, posY, numberSize, player1Sum / 10, GREEN);
        drawBackground(posX + diceSize/2 +2,posY + numberSize + 3,numberSize+ 1,numberSize+1,BLACK);
        showNumber(posX + diceSize / 2 + 1, posY + numberSize + 2, numberSize, player1Sum % 10, GREEN);

        Sleep(2000);
        /// posX += diceSize/2 + 5;
        int randomNumber2 = 1 + rand() % 6; /// 1 + 0,1,2,3,4,5
        for (int i = 1; i <= 12; i++)
        {
            showDice(posX, posY + diceSize+ 5, i, diceSize, BLUE);
        }
        showDice(posX, posY + diceSize + 5,randomNumber2, diceSize, CYAN);
        if(randomNumber2 == 1)
        {
            player2Sum = 0;
        }
        else
        {
            player2Sum += randomNumber2;
        }
        drawBackground(posX + diceSize/2 +2,posY + 1 + diceSize + 5,numberSize+ 1,numberSize+1,BLACK);
        showNumber(posX + diceSize / 2 +1,posY + diceSize + 5, numberSize, player2Sum / 10, GREEN);
        drawBackground(posX + diceSize/2 + 2, posY + numberSize + 2 + 1 + diceSize + 5, numberSize+1, numberSize +1,BLACK);
        showNumber(posX+diceSize/2+1,posY+numberSize+2+diceSize + 5,numberSize,player2Sum%10,GREEN);
        Sleep(2000);

    }
    for(int i = 1; i < 21; i++)
    {
        cout << endl;
    }


    if(player1Sum > player2Sum)
    {
        cout<<  player1Name << " won!" << endl;
        cout<<"By " << player1Sum - player2Sum << " points!";
    }
    else if(player2Sum > player1Sum)
    {
        cout<< player2Name <<" won!"<<endl;
        cout<<"By " << player2Sum - player1Sum << " points!";
    }
    else if(player1Sum == player2Sum)
    {
        cout<<"It's a tie!" << endl;
    }
    while(true)
    {
        if (GetAsyncKeyState('M'))
        {
            drawDice1(posX, posY, 20, RED);
        }
        if (GetAsyncKeyState('N'))
        {
            drawDice3(posX, posY, 20, RED);
        }
        if (GetAsyncKeyState('O'))
        {
            drawDice5(posX, posY, 20, RED);
        }
        if (GetAsyncKeyState('P'))
        {
            drawDice4(posX, posY, 20, RED);
        }
        if (GetAsyncKeyState('Q'))
        {
            drawDice2(posX, posY, 20, RED);
        }
        if (GetAsyncKeyState('R'))
        {
            drawDice6(posX, posY, 20, RED);
        }
    }
}

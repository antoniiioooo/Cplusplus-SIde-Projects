// Antonio Olivera
// January 30, 2023
// The program we will try to develop a game sorted like the game snake where  we try to move the snake around to try to get the apples.

#include <iostream>
#include <curses.h> 
using namespace std;

// declaring all variables
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
}
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = width / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw()
{
    system("clear");
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else
                cout << " ";

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

   for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;
}

void Input()
{
     
    if (kbhit() )
    {
        switch (getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic()
{
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        // Sleep(10); sleep (10);
    }

    return 0;
}

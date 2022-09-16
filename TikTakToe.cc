#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

// Spielfeld mit der groeße 4x4
char playing_field[4][4] = {{'A', 'B', 'C', 'D'}, {'E', 'F', 'G', 'H'}, {'I', 'J', 'K', 'L'}, {'M', 'N', 'O', 'P'}};

void DrawField()
{
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            cout << playing_field[x][y] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    DrawField();
    return 0;
}

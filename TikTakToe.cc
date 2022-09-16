#include <iostream>
#include <windows.h>
using namespace std;

// Spielfeld mit der groeße 4x4
char playing_field[4][4] = {{'A', 'B', 'C', 'D'}, {'E', 'F', 'G', 'H'}, {'I', 'J', 'K', 'L'}, {'M', 'N', 'O', 'P'}};
char get_pos;

char set_char = 'X';

void SwitchPlayer()
{
    if (set_char == 'X')
        set_char = 'Y';
    else
        set_char = 'X';
}

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

void DrawMove()
{
    cout << "Bitte wähle ein Feld aus: ";
    cin >> get_pos;
    switch (get_pos)
    {
    case 'a':
        playing_field[0][0] = set_char;
        break;
    case 'b':
        playing_field[0][1] = set_char;
        break;
    case 'c':
        playing_field[0][2] = set_char;
        break;
    case 'd':
        playing_field[0][3] = set_char;
        break;
    case 'e':
        playing_field[1][0] = set_char;
        break;
    case 'f':
        playing_field[1][1] = set_char;
        break;
    case 'g':
        playing_field[1][2] = set_char;
        break;
    case 'h':
        playing_field[1][3] = set_char;
        break;
    case 'i':
        playing_field[2][0] = set_char;
        break;
    case 'j':
        playing_field[2][1] = set_char;
        break;
    case 'k':
        playing_field[2][2] = set_char;
        break;
    case 'l':
        playing_field[2][3] = set_char;
        break;
    case 'm':
        playing_field[3][0] = set_char;
        break;
    case 'n':
        playing_field[3][1] = set_char;
        break;
    case 'o':
        playing_field[3][2] = set_char;
        break;
    case 'p':
        playing_field[3][3] = set_char;
        break;
    }
}

int main()
{
    system("clear");
    while (true)
    {
        DrawField();
        DrawMove();
        SwitchPlayer();
        system("clear");
    }


    return 0;
}

#include <iostream>
#include <windows.h>
using namespace std;

// Spielfeld mit der groeße 4x4
char playing_field[4][4] = {{'A', 'B', 'C', 'D'}, {'E', 'F', 'G', 'H'}, {'I', 'J', 'K', 'L'}, {'M', 'N', 'O', 'P'}};
char get_pos;
char player01 = 'X';
char player02 = 'Y';


char WinningPlayer()
{
    // Gamingen Player X
    if (playing_field[0][0] == player01 && playing_field[0][1] == player01 && playing_field[0][2] == player01 &&
        playing_field[0][3] == player01)
        return player01;
    else if (playing_field[1][0] == player01 && playing_field[1][1] == player01 && playing_field[1][2] == player01 &&
             playing_field[1][3] == player01)
        return player01;
    else if (playing_field[2][0] == player01 && playing_field[2][1] == player01 && playing_field[2][2] == player01 &&
             playing_field[3][3] == player01)
        return player01;
    else if (playing_field[4][0] == player01 && playing_field[4][1] == player01 && playing_field[4][2] == player01 &&
             playing_field[4][3] == player01)
        return player01;
    // Gamingen Player Y
    else if (playing_field[0][0] == player02 && playing_field[0][1] == player02 && playing_field[0][2] == player02 &&
             playing_field[0][3] == player02)
        return player02;
    else if (playing_field[1][0] == player02 && playing_field[1][1] == player02 && playing_field[1][2] == player02 &&
             playing_field[1][3] == player02)
        return player02;
    else if (playing_field[2][0] == player02 && playing_field[2][1] == player02 && playing_field[2][2] == player02 &&
             playing_field[3][3] == player02)
        return player02;
    else if (playing_field[4][0] == player02 && playing_field[4][1] == player02 && playing_field[4][2] == player02 &&
             playing_field[4][3] == player02)
        return player02;
    else
        return '/';
}

void SwitchPlayer()
{
    if (player01 == 'X')
    {
        player01 = 'Y';
        player02 = 'X';
    }
    else
    {
        player01 = 'X';
        player02 = 'Y';
    }
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
    cout << "Bitte wähle ein Feld aus [Player: " << player01 << "]: ";
    cin >> get_pos;
    switch (get_pos)
    {
    case 'a':
        playing_field[0][0] = player01;
        break;
    case 'b':
        playing_field[0][1] = player01;
        break;
    case 'c':
        playing_field[0][2] = player01;
        break;
    case 'd':
        playing_field[0][3] = player01;
        break;
    case 'e':
        playing_field[1][0] = player01;
        break;
    case 'f':
        playing_field[1][1] = player01;
        break;
    case 'g':
        playing_field[1][2] = player01;
        break;
    case 'h':
        playing_field[1][3] = player01;
        break;
    case 'i':
        playing_field[2][0] = player01;
        break;
    case 'j':
        playing_field[2][1] = player01;
        break;
    case 'k':
        playing_field[2][2] = player01;
        break;
    case 'l':
        playing_field[2][3] = player01;
        break;
    case 'm':
        playing_field[3][0] = player01;
        break;
    case 'n':
        playing_field[3][1] = player01;
        break;
    case 'o':
        playing_field[3][2] = player01;
        break;
    case 'p':
        playing_field[3][3] = player01;
        break;
    }
}

int main()
{
    bool run = true;
    while (run)
    {
        system("clear");
        DrawField();
        if (WinningPlayer() == 'X')
        {
            run = false;
            cout << "----------------------" << endl;
            cout << "Player X wins the Game" << endl;
            cout << "----------------------" << endl;
        }
        else if (WinningPlayer() == 'Y')
        {
            run = false;
            cout << "----------------------" << endl;
            cout << "Player Y wins the Game" << endl;
            cout << "----------------------" << endl;
        }
        else
        {
            DrawMove();
            SwitchPlayer();
        }
    }
    return 0;
}

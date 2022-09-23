#include <iostream>
#include <windows.h>
using namespace std;

// Spielfeld mit der groeße 4x4
char playing_field[4][4] = {{'A', 'B', 'C', 'D'}, {'E', 'F', 'G', 'H'}, {'I', 'J', 'K', 'L'}, {'M', 'N', 'O', 'P'}};
char get_pos;
char main_player = 'X';
char other_player = 'Y';


char WinningPlayer()
{
    // Gamingen Player X
    if (playing_field[0][0] == main_player && playing_field[0][1] == main_player &&
        playing_field[0][2] == main_player && playing_field[0][3] == main_player)
        return main_player;
    else if (playing_field[1][0] == main_player && playing_field[1][1] == main_player &&
             playing_field[1][2] == main_player && playing_field[1][3] == main_player)
        return main_player;
    else if (playing_field[2][0] == main_player && playing_field[2][1] == main_player &&
             playing_field[2][2] == main_player && playing_field[3][3] == main_player)
        return main_player;
    else if (playing_field[4][0] == main_player && playing_field[4][1] == main_player &&
             playing_field[4][2] == main_player && playing_field[4][3] == main_player)
        return main_player;
    // Gamingen Player Y
    else if (playing_field[0][0] == other_player && playing_field[0][1] == other_player &&
             playing_field[0][2] == other_player && playing_field[0][3] == other_player)
        return other_player;
    else if (playing_field[1][0] == other_player && playing_field[1][1] == other_player &&
             playing_field[1][2] == other_player && playing_field[1][3] == other_player)
        return other_player;
    else if (playing_field[2][0] == other_player && playing_field[2][1] == other_player &&
             playing_field[2][2] == other_player && playing_field[3][3] == other_player)
        return other_player;
    else if (playing_field[4][0] == other_player && playing_field[4][1] == other_player &&
             playing_field[4][2] == other_player && playing_field[4][3] == other_player)
        return other_player;
    else
        return '/';
}

void SwitchPlayer()
{
    if (main_player == 'X')
    {
        main_player = 'Y';
        other_player = 'X';
    }
    else
    {
        main_player = 'X';
        other_player = 'Y';
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
    cout << "Bitte wähle ein Feld aus [Player: " << main_player << "]: ";
    cin >> get_pos;
    switch (get_pos)
    {
    case 'a':
        if (playing_field[0][0] == other_player)
            break;
        else
        {
            playing_field[0][0] = main_player;
            break;
        }
    case 'b':
        if (playing_field[0][1] == other_player)
            break;
        else
        {
            playing_field[0][1] = main_player;
            break;
        }
    case 'c':
        if (playing_field[0][2] == other_player)
            break;
        else
        {
            playing_field[0][2] = main_player;
            break;
        }
    case 'd':
        if (playing_field[0][3] == other_player)
            break;
        else
        {
            playing_field[0][3] = main_player;
            break;
        }
    case 'e':
        if (playing_field[1][0] == other_player)
            break;
        else
        {
            playing_field[1][0] = main_player;
            break;
        }
    case 'f':
        if (playing_field[1][1] == other_player)
            break;
        else
        {
            playing_field[1][1] = main_player;
            break;
        }
    case 'g':
        if (playing_field[1][2] == other_player)
            break;
        else
        {
            playing_field[1][2] = main_player;
            break;
        }
    case 'h':
        if (playing_field[1][3] == other_player)
            break;
        else
        {
            playing_field[1][3] = main_player;
            break;
        }
    case 'i':
        if (playing_field[2][0] == other_player)
            break;
        else
        {
            playing_field[2][0] = main_player;
            break;
        }
    case 'j':
        if (playing_field[2][1] == other_player)
            break;
        else
        {
            playing_field[2][1] = main_player;
            break;
        }
    case 'k':
        if (playing_field[2][2] == other_player)
            break;
        else
        {
            playing_field[2][2] = main_player;
            break;
        }
    case 'l':
        if (playing_field[2][3] == other_player)
            break;
        else
        {
            playing_field[2][3] = main_player;
            break;
        }
    case 'm':
        if (playing_field[3][0] == other_player)
            break;
        else
        {
            playing_field[3][0] = main_player;
            break;
        }
    case 'n':
        if (playing_field[3][1] == other_player)
            break;
        else
        {
            playing_field[3][1] = main_player;
            break;
        }
    case 'o':
        if (playing_field[3][2] == other_player)
            break;
        else
        {
            playing_field[3][2] = main_player;
            break;
        }
    case 'p':
        if (playing_field[3][3] == other_player)
            break;
        else
        {
            playing_field[3][3] = main_player;
            break;
        }
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

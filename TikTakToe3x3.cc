#include <iostream>
#include <windows.h>
using namespace std;

// Spielfeld mit der groeße 4x4
char playing_field[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char get_pos;
char main_player = 'X';
char other_player = 'Y';
bool used_field = false;
int num_rounds = 0;

char WinningPlayer()
{
    // Gamingen Player X
    if (playing_field[0][0] == main_player && playing_field[0][1] == main_player && playing_field[0][2] == main_player)
        return main_player;
    else if (playing_field[1][0] == main_player && playing_field[1][1] == main_player &&
             playing_field[1][2] == main_player)
        return main_player;
    else if (playing_field[2][0] == main_player && playing_field[2][1] == main_player &&
             playing_field[2][2] == main_player)
        return main_player;
    else if (playing_field[0][0] == main_player && playing_field[1][1] == main_player &&
             playing_field[2][2] == main_player)
        return main_player;
    else if (playing_field[0][2] == main_player && playing_field[1][1] == main_player &&
             playing_field[2][0] == main_player)
        return main_player;
    // Gamingen Player Y
    else if (playing_field[0][0] == other_player && playing_field[0][1] == other_player &&
             playing_field[0][2] == other_player)
        return other_player;
    else if (playing_field[1][0] == other_player && playing_field[1][1] == other_player &&
             playing_field[1][2] == other_player)
        return other_player;
    else if (playing_field[2][0] == other_player && playing_field[2][1] == other_player &&
             playing_field[2][2] == other_player)
        return other_player;
    else if (playing_field[0][0] == other_player && playing_field[1][1] == other_player &&
             playing_field[2][2] == other_player)
        return other_player;
    else if (playing_field[0][2] == other_player && playing_field[1][1] == other_player &&
             playing_field[2][0] == other_player)
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
    cout << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << playing_field[x][y] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

void DrawMove()
{
    if (used_field == true)
    {
        cout << "-> Das Feld ist besetzt! [Player " << main_player << "]: ";
        cin >> get_pos;
        used_field = false;
    }
    else
    {
        cout << "Bitte wähle ein Feld aus [Player " << main_player << "]: ";
        cin >> get_pos;
    }
    switch (get_pos)
    {
    case '1':
        if (playing_field[0][0] != '1')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[0][0] = main_player;
            break;
        }
    case '2':
        if (playing_field[0][1] != '2')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[0][1] = main_player;
            break;
        }
    case '3':
        if (playing_field[0][2] != '3')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[0][2] = main_player;
            break;
        }
    case '4':
        if (playing_field[1][0] != '4')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[1][0] = main_player;
            break;
        }
    case '5':
        if (playing_field[1][1] != '5')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[1][1] = main_player;
            break;
        }
    case '6':
        if (playing_field[1][2] != '6')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[1][2] = main_player;
            break;
        }
    case '7':
        if (playing_field[2][0] != '7')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[2][0] = main_player;
            break;
        }
    case '8':
        if (playing_field[2][1] != '8')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[2][1] = main_player;
            break;
        }
    case '9':
        if (playing_field[2][2] != '9')
        {
            used_field = true;
            DrawMove();
            break;
        }
        else
        {
            playing_field[2][2] = main_player;
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
        else if (WinningPlayer() == '/' && num_rounds == 9)
        {
            run = false;
            cout << "----------------------" << endl;
            cout << "         DRAW         " << endl;
            cout << "----------------------" << endl;
        }
        else
        {
            DrawMove();
            SwitchPlayer();
            num_rounds++;
        }
    }
    return 0;
}

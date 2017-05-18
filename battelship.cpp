#include<iostream>
using namespace std;


//submarine size = 4;
const int submarines = 1;
//destroyers size = 2;
const int destroyers = 2;
//crushers size = 1
const int crushers = 4;


class battelship{
private:
    char board[10][10];
    char attack_board[10][10];
    string name;
public:
    int attack_x;
    int attack_y;
    void initialize_board();
    void print_board();
    void initialize_attack_board();
    void print_attack_board();
    void attack(battelship player);
    void change_attack_board();
};

void battelship::initialize_board()
{
    for(register int k = 0 ; k < 10 ; k++ )
    {
        string line;
        cin >> line;
        for(register int i = 0 ; i < 10 ; i++ )
        {
            board[k][i] = line[k];
        }
    }
}

void battelship::print_board()
{
    for(register int i = 0 ; i < 10 ; i++ )
    {
        for(register int j = 0 ; j < 10 ; j++ )
        {
            cout << board[i][j];
        }
        cout << "\n";
    }
}

void battelship::initialize_attack_board()
{
    for(register int i = 0 ; i < 10 ; i++ )
    {
        for(register int j = 0 ; j < 10 ; j++ )
        {
            attack_board[i][j] = '.';
        }
    }
}

void battelship::print_attack_board()
{
    for(register int i = 0 ; i < 10 ; i++ )
    {
        for(register int j = 0 ; j < 10 ; j++)
        {
            cout << attack_board[i][j];
        }
        cout << "\n";
    }
}

void battelship::attack(battelship player)
{
    if(board[player.x][player.y] == '#')
        board[player.x][player.y] = 'X';
}

int main()
{
    int n;
    cin >> n;
    battelship *player = new battelship[n];
    return 0;
}

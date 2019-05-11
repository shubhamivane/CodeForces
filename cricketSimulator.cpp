#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Player{
    private:
        string name;
        float probArr[8];
        string type;
        unsigned int runs;
        unsigned int wickets;
        string status;
    public:
        Player(){
        };
        Player(string n, float *arr, string t, unsigned int r, unsigned int w) : name{n}, type{t}, runs{r}, wickets{w}
        {
            for(int i ; i < 8 ; i++) probArr[i] = arr[i];
        }

};
class Team{
    private:
        string name;
        Player players[11];
        unsigned int runs;
    public:
        Team(string n): name{n},  
};
class Match{
    private:
        Team team[2];
        Team *winner, *loser;
    public:
        Match
};
int main(){
    return 0;
}

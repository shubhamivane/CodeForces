#include<iostream>
using namespace std;
int fib(int n,int *memo)
{
    if(n <= 1)
        return 0;
    if(n == 2)
        return 1;
    if(!memo[n])
        memo[n] = fib(n-1,memo) + fib(n-2,memo);
    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    int memo[n+1];
    for(register int i  = 0 ; i < n+1 ; i++ )
        memo[i] = 0;
    int f = fib(n,&memo[0]);
    cout << f ;
    return 0;
}

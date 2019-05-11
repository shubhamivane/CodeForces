#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long num)
{
    bool isPrime = true;
    for(long long i = 2; i <= sqrt(num); ++i)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main()
{
    int t;
    long long a, b, sum, diff;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        sum = a + b;
        diff = a - b;
        if(diff == 1 && isPrime(sum) )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout << ( a <= b ? b : a) << " " << (a+b) <<endl;
    }
    return 0;
}

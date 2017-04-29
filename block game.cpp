#include<iostream>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int n,rev=0,dup;
        cin >> n;
        dup = n;
        while(dup)
        {
            int mod = dup%10;
            rev = rev*10 + mod;
            dup /= 10;
        }
        if(n == rev)
            cout << "wins" << endl;
        else
            cout << "losses" << endl;
    }
    return 0;
}

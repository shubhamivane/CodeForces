#include<iostream>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int n,c=0;
        cin >> n;
        while(n)
        {
            register int mod = n%10;
            if(mod == 4)c++;
            n /= 10;
        }
        cout << c << endl;
    }
    return 0;
}

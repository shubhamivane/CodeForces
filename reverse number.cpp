#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int s,rev = 0;
        cin >> s;
        while(s)
        {
            rev = rev*10 + s%10;
            s /= 10;
        }
        cout << rev << endl;
    }
    return 0;
}

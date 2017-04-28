#include<iostream>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int n,s=0;
        cin >> n;
        if(n == 1)s=1;
        else if(n == 2)s=2;
        else
            s = n/2+1;
        cout << s << endl;
    }
    return 0;
}

#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int n , fact = 1;
        cin >> n;
        for(register int i = 1 ; i <= n ; i++ )
        fact *= i;
        cout << fact << endl;
    }
    return 0;
}

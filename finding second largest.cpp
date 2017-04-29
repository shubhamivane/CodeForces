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
        int x,y,z;
        cin >> x >> y >> z;
        if((x>y||x>z)&&(x<y||x<z))
            cout << x << endl;
        if((y>x||y>z)&&(y<x||y<z))
            cout << y <<endl;
        if((z>x||z>y)&&(z<x||z<y))
            cout << z <<endl;
    }
    return 0;
}

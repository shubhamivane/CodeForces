#include <iostream>
using namespace std;
int main()
{
    int n, ax, ay, bx, by, cx, cy;
    cin >>  n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    if((cx < ax && bx < ax) || (cx > ax && bx > ax))
    {
        if((cy < ay && by < ay) || (cy > ay && by > ay))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}

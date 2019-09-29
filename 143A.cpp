#include <bits/stdc++.h>
using namespace std;
int main(){
    int r1, r2, c1, c2, d1, d2, sum = 0;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    int a, b, c, d;
    sum = r1 + r2 + d1 + d2 + c1 + c2;
    if(sum % 3){
        cout << "-1" << endl;
    }
    else{
        a = (d1 + r1 - c2) / 2;
        d = d1 - a;
        b = c2 - d;
        c = c1 - a;
        if((a > 9 || a < 1) || (b > 9 || b < 1) || (c > 9 || c < 1) || (d > 9 || d < 1)){
            cout << "-1" << endl;
        }
        else if(a == b || a == c || a == d || b == c || b == d || c == d){
            cout << "-1" << endl;
        }
        else{
            cout << a << " " << b << endl;
            cout << c << " " << d << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int t;
    cin >> n;
    while(n){
        t = n % 10;
        if(t != 4 && t != 7){
            cout << "NO" << endl;
            return 0;
        }
        n /= 10;
    }
    cout << "YES" << endl;
    return 0;
}

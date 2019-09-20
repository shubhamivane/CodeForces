#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n, t;
    cin >> n;
    bool flag = true;
    while(n){
        t = n % 10;
        if(t == 7 || t == 4){
            n /= 10;
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}

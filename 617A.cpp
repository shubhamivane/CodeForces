#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    if(n >= 5){
        cnt += n / 5;
        n %= 5;
    }
    if(n >= 4){
        cnt += n / 4;
        n %= 4;
    }
    if(n >= 3){
        cnt += n / 3;
        n %= 3;
    }
    if(n >=2){
        cnt += n / 2;
        n %= 2;
    }
    if(n >= 1){
        cnt += n / 1;
        n %= 1;
    }
    cout << cnt << endl;
    return 0;
}

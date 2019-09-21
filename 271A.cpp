#include <bits/stdc++.h>
using namespace std;
bool digitDifferent(int n){
    set<int> s;
    while(n){
        if(s.find(n % 10) != s.end()) {
            return false;
        }
        s.insert(n % 10);
        n /= 10;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    for(int i = n + 1 ; ; i++){
        if(digitDifferent(i)){
            cout << i << endl;
            break;
        }
    }
    return 0;
}

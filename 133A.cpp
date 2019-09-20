#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    bool flag = true;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
    return 0;
}

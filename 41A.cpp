#include <bits/stdc++.h>
using namespace std;
int main(){
    string str, str2;
    cin >> str >> str2;
    bool flag = true;
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] != str2[str.size()-i-1]){
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

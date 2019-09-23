#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string tmp = "abcdefghijklmnopqrstuvwxyz";
    cin >> str;
    map<char, int> m;
    for(int i = 0 ; i < str.size() ; i++){
        if(m.find(str[i]) == m.end()) m[str[i]] = i;
    }
    for(int k = 0 ; k < str.size() ; k++){
        bool flag = true;
        for(int i = str[k] - 'a' ; i >= 0 ; i--){
            if(m[tmp[i]] < m[str[k]]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "Mike" << endl;
        }
        else{
            cout << "Ann" << endl;
        }
    }
    return 0;
}

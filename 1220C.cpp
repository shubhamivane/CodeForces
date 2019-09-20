#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string tmp = "abcdefghijklmnopqrstuvwxyz";
    cin >> str;
    vector<int> v(str.size(), 0);
    set<char> s;
    s.insert(str[0]);
    for(int i = 1 ; i < str.size() ; i++){
        for(int j = str[i] - 98 ; j >= 0 ; j--){
            if(s.find(tmp[j]) != s.end()){
                v[i] = 1;
                break;
            }
        }
        s.insert(str[i]);
    }
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i]) {
            cout << "Ann" << endl;
        } else{
            cout << "Mike" << endl;
        }
    }
    return 0;
}

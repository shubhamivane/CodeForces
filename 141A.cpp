#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    vector<int> cnt(26,0);
    bool flag = true;
    for(int i = 0 ; i < str1.size() ; i++){
        cnt[str1[i]-'A'] += 1;
    }
    for(int i = 0 ; i < str2.size() ; i++){
        cnt[str2[i]-'A'] += 1;
    }
    for(int i = 0 ; i < str3.size() ; i++){
        cnt[str3[i]-'A'] -= 1;
    }
    for(int i = 0 ; i < 26 ; i++){
        if(cnt[i]){
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

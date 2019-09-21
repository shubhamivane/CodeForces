#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int l = 0, u = 0;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] >= 'A' && s[i] <= 90){
            u++;
        }
        else{
            l++;
        }
    }
    if(l >= u){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s << endl;
    return 0;
}

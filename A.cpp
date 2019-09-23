#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin >> n;
    cin >> str;
    map<char, int> m;
    for(int i = 0 ; i < n ; i++){
        if(m.find(str[i]) == m.end()) m[str[i]] = 1;
        else m[str[i]]++;
    }
    int noz = m['z'];
    int noo = m['o'] - m['z'];
    for(int i = 0 ; i < noo ; i++) cout << "1" << " ";
    for(int i = 0 ; i < noz ; i++) {
        cout << "0";
        if(noz != i + 1) cout << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(str.begin(), str.begin() + 1, str.begin(), ::toupper);
    cout << str << endl;
    return 0;
}

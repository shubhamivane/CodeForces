#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    int ca = count(str.begin(), str.end(), 'A');
    int cd = n - ca;
    //cout << ca << endl;
    if(ca > cd){
        cout << "Anton" << endl;
    }
    else if(ca == cd){
        cout << "Friendship" << endl;
    }
    else{
        cout << "Danik" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> even;
    map<int,int> odd;
    int n, ele, mxo = -1, mxe = -1, cnte = 0, cnto = 0, coste = 0 , costo = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> ele;
        if(ele & 1) cnto++;
        else cnte++;
    }
    cout << min(cnte, cnto) << endl;
    return 0;
}

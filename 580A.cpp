#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s = 0, mx = 1, i;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    for(i = 1 ; i < n ; i++){
        if(v[i] < v[i-1]){
            mx = max(mx, i - s);
            s = i;
        }
    }
    cout << max(mx, i - s) << endl;
    return 0;
}

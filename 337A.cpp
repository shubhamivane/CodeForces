#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, mn = INT_MAX;
    cin >> n >> m;
    vector<int> v(m);
    for(int i = 0 ; i < m ; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < m - n + 1; i++){
        mn = min(mn, v[i+n-1] - v[i]);
    }
    cout << mn << endl;
    return 0;
}

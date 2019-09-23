#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, mn, cntb;
    cin >> t;
    while(t--){
        cntb = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++) {
            cin >> v[i];
        }
        mn = v[n-1];
        for(int i = n - 2 ; i >= 0 ; i--){
            if(v[i] > mn) {
                cntb++;
            }else{
                mn = v[i];
            }
        }
        cout << cntb << endl;
    }
    return 0;
}

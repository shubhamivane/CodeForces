#include <iostream>
using namespace std;
int main() {
    int t, len, q, r, l;
    cin >> t;
    while(t--){
        cin >> len >> q;
        int arr[len], temp[len] = {0};
        for(int i = 0 ; i < len ; i++) cin >> arr[i];
        for(int i = 0 ; i < len ; i++) temp[i] = (i == 0 ? arr[i] : (temp[i-1] + arr[i]));
        while(q--) {
            cin >> l >> r;
            if(l == 0)
                cout << temp[r];
            else
                cout << temp[r] - temp[l-1];
        }
    }
    return 0;
}
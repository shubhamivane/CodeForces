#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin >> n >> k;
    n = (n & 1 ? n+1 : n);
    cout << (n/2 >= k ? (1 + 2 * (k-1)) : (2 + (k - n/2 - 1)*2)) << endl;
    return 0;
}

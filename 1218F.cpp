#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, a;
    unsigned long long int sum = 0;
    bool flag = true;
    priority_queue< int, vector<int>, greater<int> > pq;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> v2(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    cin >> a;
    for(int i = 0 ; i < n ; i++){
        cin >> v2[i];
    }
    unsigned long long int k_cur = v[0];
    for(int i = 0 ; i < n ; i++){
        //cout << k_cur << " " << v[i] << endl;
        pq.push(v2[i]);
        while(k_cur < v[i] && pq.empty() == false){
            sum += pq.top();
            pq.pop();
            k_cur += a;
        }
        if(k_cur < v[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << sum << endl;
    } else{
        cout << "-1" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    unsigned long long sum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    cin>>q;
    vector<int> vq(q);
    sort(v.begin(),v.end());
    for(int i=0;i<q;i++)cin>>vq[i];
    for(int i=0;i<q;i++){
        cout<<sum-v[n-vq[i]]<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    sort(v.begin(),v.begin()+n/2);
    sort(v.begin()+n/2,v.end(),greater<int>());
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    return 0;
}

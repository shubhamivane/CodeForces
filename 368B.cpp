#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    int arr[n],memo[n];
    map<int,int> m;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n-1;i>=0;i--){
        if(m.find(arr[i])==m.end()){
            m[arr[i]]=1;
            memo[i]=1;
        }
        else
            memo[i]=0;
    }
    int t;
    for(int i=n-2;i>=0;i--)memo[i] += memo[i+1];
    for(int i=0;i<l;i++){
        cin>>t;
        cout<<memo[t-1]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int backtrack(vector<int>& v,vector<int>& a,int pos,int s,int num){
    //cout<<num<<" ";
    if(m.find(num) != m.end()) return -1;
    if(num > s || num <= 0) return -1;
    a[pos] = num;
    m[num] = num;
    if(pos+1 == s) return 1;
    num = v[pos] + a[pos];
    return backtrack(v,a,pos+1,s,num);
}

int main(){
    int n,ans;
    cin>>n;
    vector<int> v(n-1);
    vector<int> aux(n);
    for(int i=0;i<n-1;i++)cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        ans=backtrack(v,aux,0,n,i);
        m.clear();
        //cout<<"\n";
        if(ans==-1)continue;
        else break;
    }
    if(ans==-1)cout<<"-1"<<endl;
    else
        for(int i=0;i<n;i++)cout<<aux[i]<<" ";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,w;
    int m=0;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>w;
        if(i==0) v[i]=w;
        else if(w==1) v[i]= v[i-1]+1;
        if(m<v[i]) m=v[i];
    }
//    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i] == 0 && i != 0){
            ans=v[i-1];
            break;
        }
    }
 //   cout<<"\n"<<ans<<endl;
     cout<<max(m,(v[n-1]+ans))<<endl;
    return 0;
}

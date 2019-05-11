#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t, c;
    long long cnt=0,ways=0;
    cin>>n>>t>>c;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        if(ele<=t)cnt++;
        else{
            if(cnt<c){
                cnt=0;
                continue;
            }
            ways+=(cnt-c)+1;
            cnt=0;
        }
    }
    if(cnt>=c) ways+=(cnt-c)+1;
    cout<<ways<<endl;
    return 0;
}
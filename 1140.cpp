#include <bits/stdc++.h>
using namespace std;
int transform(int n,int m){
    int cnt=0;
    if(m < n) return -1;
    if(m % n != 0) return -1;
    int q = m/n;
    while(q != 1){
        if(q%2==0){
            q/=2;
        }
        else if(q%3==0){
            q/=3;
        }
        else{
            return -1;
        }
        cnt++;
    }
    return cnt;
}
int main(){
    int n, m;
    cin>>n>>m;
    cout<<transform(n,m)<<endl;
    return 0;
}

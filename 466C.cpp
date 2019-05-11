#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    long long int sum=0;
    long long int ss;
    int count=0;
    for(int i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}
    if(sum%3==0)
    {
        ss=sum/3;
        sum=0;
        int cnt[n]={0};
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==ss)cnt[i]=i>0?(cnt[i-1]+1):1;
        }
        
    }
    cout<<count<<endl;
    return 0;
}
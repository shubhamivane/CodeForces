#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt1,cnt2,cnt3,cnt4;
    bool flag = true;
    cin>>cnt1>>cnt2>>cnt3>>cnt4;
    if(cnt1!=cnt4)flag=false;
    if(cnt1==0&&cnt1==cnt4&&cnt3!=0)flag=false;
    if(flag) cout<<"1"<<endl;
    else cout<<"0"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void input(int n, map<int,int>& m){
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        if(m.find(num)==m.end()) m[num]=1;
        else m[num]++;
    }
}
int missing(map<int,int>& m1,map<int,int>& m2){
    auto itr=m1.begin();
    for(;itr!=m1.end();itr++){
        if(m2.find(itr->first)==m2.end())
        {
            return itr->first;
        }
        if(m2.find(itr->first) != m2.end() && itr->second > m2[itr->first]) return itr->first;
    }
}
int main(){
    int n;
    int mi1,mi2;
    cin>>n;
    map<int,int> m1,m2;
    input(n,m1);
    input(n-1,m2);
    mi1=missing(m1,m2);
    m1.clear();
    input(n-2,m1);
    mi2=missing(m2,m1);
    cout<<mi1<<endl;
    cout<<mi2<<endl;
    return 0;
}
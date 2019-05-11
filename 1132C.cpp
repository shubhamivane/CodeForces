#include <bits/stdc++.h>
using namespace std;
struct p{
    int l;
    int r;
    int s;
};
bool compare(const p& lhs, const p& rhs){
    return lhs.s < rhs.s;
}
int main(){
    int n, q;
    int l,r;
    long sec=0;
    cin>>n>>q;
    vector<p> v;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        p t;
        t.l=l;
        t.r;
        t.s=t.r-t.l;
        v.push_back(t);
    }
    sort<v.begin(),v.end(), compare);
    int len=v.size();
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500][500],b[500][500];
map< int,vector<int> > ma,mb;
void input(int a){
    int num;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>num;
            if(a == 1){
                if(ma.find(i+j) == ma.end()){
                    vector<int> v;
                    v.push_back(num);
                    ma[(i+j)] = v;
                }
                else
                    ma[i+j].push_back(num);
            }
            else{
                if(mb.find(i+j) == mb.end()){
                    vector<int> v;
                    v.push_back(num);
                    m[i+j] = v;
                }
                else
                    ma[i+j].push_back(num);
            }
        }
    }
    auto itra = ma.begin();
    auto itrb = mb.begin();
    for(; itra != ma.end() || itrb != mb.end() ; itra++, itrb++){
        sort(itra->second.begin(),itra->second.end());
        sort(itrb->second.begin(),itrb->second.end());
    }
}
int main(){
    cin>>n>>m;
    input(1);
    input(2);
    for(int i=0;i<(n+m-2);i++)
        for(int j=0;j<ma[i].size();j++)
            if(ma[i][j] != mb[i][j]){
                cout<<"NO"<<endl;
                return 0;
            }
    cout << "YES"<<endl;
    return 0;
}

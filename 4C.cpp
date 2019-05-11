#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string w;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin>>w;
        if(m.find(w)==m.end()){
            cout<<"OK\n";
            m[w]=1;
        } else{
            cout<<w<<m[w]<<endl;
            m[w]++;
        }
    }
    return 0;
}
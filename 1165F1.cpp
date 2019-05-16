#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,t,d,cnt=0,b=0;
	cin>>n>>m;
	int a[n+1];
	vector<pair<int,int>> v(m);
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=0;i<m;i++){
		cin>>d>>t;
		v.push_back(make_pair(d,t));
	}
	sort(v.begin(),v.end());
	int lo=0;
	for(auto i=v.begin();i<v.end();i++){
		if(a[i->second]!=0){
			cnt=i->first;
			b+=i->first-lo;
			lo=i->first;
			if(a[i->second] < b){
				a[i->second]=0;
				b-=a[i->second];
			} else{
				a[i->second]-=b;
				b=0;
			}
		}
	}
	int tcnt=0;
	for(int i=1;i<=n;i++) tcnt+=a[i];
	cout<<tcnt*2-b+cnt<<endl;
	return 0;
}

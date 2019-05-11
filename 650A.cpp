#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main(){
	int n,x,y;
	cin>>n;
	map<int,int> mx;
	map<int,int> my;
	map<pair<int,int>,int> mp;
	long long pair=0;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if(mx.count(x)){ pair+=mx[x];mx[x]++;}
		else mx[x]=1;
		if(my.count(y)){ pair+=my[y];my[y]++;}
		else my[y]=1;
		if(mp.count(make_pair(x,y))){ pair-=mp[make_pair(x,y)]; mp[make_pair(x,y)]++;}
		else mp[make_pair(x,y)]=1;
	}
	cout<<pair<<endl;
	return 0;
}

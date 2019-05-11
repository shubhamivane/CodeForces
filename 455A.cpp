#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	unsigned long long int sum=0;
	cin>>n;
	vector<int> v(n);
	map<int,long long> m;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(m.find(v[i])!=m.end())m[v[i]]=v[i];
		else
			m[v[i]]+=v[i];
	}
	vector<int> keys;
	for(auto itr=m.begin();itr!=m.end();itr++){
		keys.push_back(itr->first);
	}
	for(int i=1;i<n;i++){
	}
	return 0;
}

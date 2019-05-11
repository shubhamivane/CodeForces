#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	vector<int> a(m);
	vector<int> b(n);
	for(int i=0;i<m;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		auto itr=upper_bound(a.begin(),a.end(),b[i]);
		cout<<itr-a.begin()<<" ";
	}
	return 0;
}

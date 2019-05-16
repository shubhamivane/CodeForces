#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,itr=1;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++) if(v[i]>=itr)itr++;
	cout<<itr-1<<endl;
	return 0;
}

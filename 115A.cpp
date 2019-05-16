#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)a[i]=i;
	map<int,int> m;
	for(int i=0;i<n;i++){
		cin>>p;
		if(p==-1) m[i+1]=1;
		else m[p]+=1;	
	}
	int max=INT_MIN;
	for(auto itr=m.begin();itr!=m.end();itr++)if(max<itr->second) max=itr->second;
	cout<<max<<endl;
	return 0;
}

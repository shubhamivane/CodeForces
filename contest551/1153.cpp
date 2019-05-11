#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int a[n],w[n];
	for(int i=0;i<n;i++)cin>>a[i]>>w[i];
	int temp=0, idx=-1;
	for(int i=0;i<n;i++){
		int nxt=a[i];
		while(nxt<t)nxt+=w[i];
		if(idx==-1 || temp > nxt-t){
			temp=nxt-t;
			idx=i+1;
		}
	}
	cout<<idx<<endl;
	return 0;
}

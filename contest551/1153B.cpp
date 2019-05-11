#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,h;
	cin>>n>>m>>h;
	int a[m],b[n],mat[n][m];
	for(int i=0;i<m;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)cin>>mat[i][j];
	for(int i=n-1;i>=0;i--)
	{
		int prev=-1,val;
		for(int j=0;j<m;j++){
			if(mat[i][j]==0)continue;
			mat[i][j]=min(a[j],b[i]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)cout<<mat[i][j]<<" ";
		cout<<"\n";
	}
	return 0;

}

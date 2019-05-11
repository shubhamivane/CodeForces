#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n;
	char c1,c2,c3,c4;
	cin>>n>>s;
	int arr[n-3]={0};
	for(int i=0;i<n-3;i++){
		c1=s[i],c2=s[i+1],c3=s[i+2],c4=s[i+3];
		arr[i] = min(c1-'A','Z'-c1+1) + min(abs(c2-'C'),'Z'-c2+3) + min(abs(c3-'T'),c3-'A'+7) + min(abs(c4-'G'),'Z'-c4+7);
	}
	int m=arr[0];
	for(int i=1;i<n-3;i++) if(m>arr[i])m=arr[i];
	cout<<m<<endl;
	return 0;
}

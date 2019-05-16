#include<iostream>
using namespace std;
int main(){
	int n,x,y,cnt=0;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	for(int i=n-x;i<n;i++){
		if(i!=(n-y-1)&&s[i]=='1')cnt++;
		if(i==(n-y-1)&&s[i]=='0')cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}

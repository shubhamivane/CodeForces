#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long a,b,res=1;
	cin>>a>>b;
	while(b>0){
		if(b&1) res *= a;
		a=a*a;
		b>>=1;
	}
	cout<<res<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long int n,even,odd;
	cin>>n;
	if(n%2==0)even=odd=n/2;
	else{
		even=n/2;
		odd=n/2+1;
	}
	long long int ans=even+(even-odd)*n;
	cout<<ans<<endl;
	return 0;
}

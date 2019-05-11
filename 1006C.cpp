#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	//vector<int> m1(n),m2(n);
	for(int i=0;i<n;i++)cin>>v[i];
	vector<long long> vl(n),vr(n);
	vl[0]=v[0];
	vr[n-1]=v[n-1];
	int i,j;
	long long max=0;
	for(i=1, j=n-2;i<n;i++,j--){
		vl[i] = v[i] + vl[i-1];
		vr[j] = v[j] + vr[j+1];
	}
	i=0;
	j=n-1;
	while(i<j){
		if(vl[i] < vr[j]) i++;
		else if(vl[i] > vr[j]) j--;
		else {
			max=vl[i];
			i++;
		}
	}
	cout<<max<<endl;
	return 0;
}

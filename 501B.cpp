#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<string> s;
	map<string,string> m;
	string str, str2;
	for(int i=0;i<n;i++){
		cin>>str>>str2;
		if(s.count(str)==0)s.insert(str);
		if(s.count(str2)==0)s.insert(str2);
		m[str]=str2;
	}
	int size=s.size();
	int arr[size];
	for(int i=0;i<size;i++)
	return 0;
}

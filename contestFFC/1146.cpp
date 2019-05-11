#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.size();i++)if(s[i]=='a')c++;
	if(c>s.size()/2)cout<<s.size()<<endl;
	else cout<<2*c-1<<endl;
	return 0;
}

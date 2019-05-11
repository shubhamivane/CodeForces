#include<iostream>
using namespace std;
int main()
{
	string s,temp="";
	cin>>s;
	for(int i=0;i<s.size();i++)if(s[i]!='a')temp+=s[i];
	if(temp.size()==0)cout<<s<<endl;
	else if(temp.size()%2||s[s.size()-1]=='a')cout<<":("<<endl;
	else {
		int i,j;
		bool f=true;
		for(i=0,j=temp.size()/2;i<temp.size()/2;i++,j++){
			if(temp[i]!=temp[j]){f=false;break;}
		}
		if(!f)cout<<":("<<endl;
		else{
			cout<<s.substr(0,s.size()-temp.size()/2)<<endl;
		}
	}
	return 0;
}

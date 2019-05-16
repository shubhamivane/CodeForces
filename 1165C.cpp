#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0,si=0;
	cin>>n;
	string s,ans="";
	cin>>s;
	if(s==""){
		cout<<cnt<<"\n"<<s<<"\n";
		return 0;
	}
	ans+=s[0];
	for(int i=1;i<s.size();i++){
		if(si%2==0&&ans[si]==s[i]){
			cnt++;
			i++;
			if(i>=n)break;
			while(i<n&&ans[si]==s[i]){cnt++;i++;}
			if(i>=n) break;
			ans+=s[i];
			si++;
		}
		else{
			ans+=s[i];
			si++;
		}
	}
	if(ans.size()%2){
		cnt++;
		if(si==0) ans="";
		else ans=ans.substr(0,ans.size()-1);
	}
	cout<<cnt<<"\n"<<ans<<"\n";
	return 0;
}

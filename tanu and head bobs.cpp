#include<iostream>
using namespace std;
int main()
{
	int t,n,i,ni,ns;
	char ch;
	cin>>t;
	while(t--)
	{i=ni=ns=0;
		cin>>n;
		while(n--)
		{
			cin>>ch;
			if(ch=='N') ns++;
			else if(ch=='Y') ni++;
			else if(ch=='I') i++;
		}
		if(i>0)
			cout<<"INDIAN\n";
		else if(ni>0)
			cout<<"NOT INDIAN\n";
		else
			cout<<"NOT SURE\n";
	}
	return 0;
}

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	register int t;
	cin >> t;
	while(t--)
	{
	    int b,ls;
	    float maxrs,minrs;
	    cin >> b >> ls;
	    minrs = sqrt(ls*ls - b*b);
	    maxrs = sqrt(ls*ls+b*b);
	    cout << minrs << " " << maxrs << endl;
	}
return 0;
}

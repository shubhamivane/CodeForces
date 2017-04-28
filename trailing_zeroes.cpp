#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    register int testcase;
    cin >> testcase;
    while(testcase--)
    {
        register int num;
        register int c = 0;
        cin >> num;
        for(int j=5;num/j>=1;j*=5)
        {
            c += num/j;
        }
        cout << c << endl;
    }
    return 0;
}

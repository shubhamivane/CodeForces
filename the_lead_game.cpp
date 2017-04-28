#include<iostream>
using namespace std;
int main()
{
    register int n;
    register int lead = 0,p1 = 0,p2 = 0,w;
    cin >> n;
    while(n--)
    {
        int temp1,temp2;
        cin >> temp1 >> temp2;
        p1+=temp1;
        p2+=temp2;
        int diff = ( p1 > p2 ) ? p1 - p2 : p2 - p1;
        if(lead < diff){
            w =( p1 > p2 ) ? 1 : 2;
            lead = diff;
        }
    }
    cout << w <<" "<< lead;
    return 0;
}

#include<iostream>
using namespace std;
int longest_sequence(int *arr,int s,int i,int j)
{
    int sum = 0;

}
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
       int s;
       cin >> s;
       int arr[s][s];
       for(register int i=0,k=1;k<=s;i++,k++)
        for(register int j=0;j<=i;j++)
            cin >> arr[i][j];
       int sum = longest_sequence((int *)arr,s,0,0);
    }
    return 0;
}

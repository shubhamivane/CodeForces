#include<iostream>
using namespace std;
int find_gcd(int num1,int num2)
{
    if(num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int mod = 1;
    while(mod)
    {
        mod = num1 % num2;
        if(mod == 0)return num2;
        num1 = num2;
        num2 = mod;
    }
}
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int n;
        cin >> n;
        int arr[n];
        for(register int i = 0 ; i < n ; i++ )
            cin >> arr[i];
        register int gcd = arr[0];
        for(register int i = 0 ; i < n ; i++ )
        {
            gcd = find_gcd(gcd,arr[i]);
        }
        for(register int i = 0 ; i < n ; i++ )
            cout << arr[i]/gcd << " ";
    }
    return 0;
}

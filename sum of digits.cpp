#include<iostream>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int num,sum=0;
        cin >> num;
        while(num)
        {
            sum += num%10;
            num /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}

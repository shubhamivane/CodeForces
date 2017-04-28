#include<iostream>
using namespace std;
int gcd(int num1,int num2)
{
  int mod = 1;
  while(mod == 1)
  {
     mod = num1%num2;
     if(mod == 0)break;
     num1 = num2;
     num2 = mod;
  }
  return num2;
}
int main()
{
    int t;
    cin >> t;
    for(register int i = t; i >=0 ;i--)
    {
        int num1,num2;
        cin >> num1 >> num2;
        if(num1 < num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        cout << gcd(num1,num2) << " " << (num1*num2);
    }
    return 0;
}

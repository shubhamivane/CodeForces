#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,g;
        cin >> a >> b;
        g = a > b ? a : b;
        for(register int i=1;i<=1001;i++)
        {
            if(i%2 == 0)
            {
                b -= i;
                if(b<0)
                {
                    cout << "Limak" << endl;
                    break;
                }
            }
            else
            {
                a -= i;
                if(a<0)
                {
                    cout << "Bob" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

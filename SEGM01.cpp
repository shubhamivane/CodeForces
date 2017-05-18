#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int f , l = 0 , no = 0;
        string str;
        cin >> str;
        for(register int i = 0 ; i < str.size() ; i++ )
        {
            if(str[i] == '1')
            {
                if(no == 0) f = i;
                if(i > l) l = i;
                no++;
            }
        }
        if(l - f + 1 == no)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}



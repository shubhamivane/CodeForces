#include<iostream>
#include<string>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << (s[0]-48+s[s.length()-1]-48) << endl;
    }
    return 0;
}

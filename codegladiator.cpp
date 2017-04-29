#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string w , s;
    int c=0;
    cin >> w;
    cin >> s;
    sort(w.begin(),w.end());
    for(register int i = 0 ; i < s.length()-w.length() + 1;i++)
    {
        string sub = s.substr(i,w.length());
        sort(sub.begin(),sub.end());
        if(!w.compare(sub)){
            c++;
        }
    }
    cout << c;
    return 0;
}

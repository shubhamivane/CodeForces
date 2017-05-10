#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int flag = 1;
        string activity;
        cin >> activity;
        for(register int i=1;i<activity.size();i++)
        {
            if(activity[i] < activity[i-1])
                flag = 0;
        }
        if(flag)
        cout << "yes" << endl;
        else
        cout << "no" << endl;
    }
    return 0;
}

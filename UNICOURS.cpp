#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int c=0;
        cin >> n;
        int arr[n];
        int v[n];
        for(register int i=0;i<n;i++)
            v[i] = 0;
        for(register int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(i == 0)continue;
            v[arr[i]-1] = 1;
        }
        for(register int i=0;i<n;i++)
        {
            if(v[i] == 0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}

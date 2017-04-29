#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        register int n,num;
        cin >> n;
        vector <int> arr;
        for(register int i = 0; i < n; i++)
        {
            cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end());
        cout << (arr[0]+arr[1]) << endl;
    }
    return 0;
}

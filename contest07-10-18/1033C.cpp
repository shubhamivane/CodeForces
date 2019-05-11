#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> um;
    unordered_map<int, int> um2; 
    for(int i = 0 ; i < n ; i++) 
    {
        cin >> v[i];
        um[v[i]] = i;
    }
    for(int i = 2; i <= n ; i++)
    {
        
    }
    return 0;
}
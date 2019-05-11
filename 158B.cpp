#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
	int n, count = 0;
    unordered_map<int, int> m;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(m.find(v[i]) != m.end())
            m[v[i]] += 1;
        else
            m[v[i]] = 1;
    }
    if(m.find(1) == m.end())
        m[1] = 0;
    if(m.find(4) != m.end() )
        count = m[4];
    for(int i = 3 ; i >= 2 ; i--)
    {
        if(i == 3 && m.find(3) != m.end())
        {
            count += m[3];
            m[1] = m[3] >= m[1] ? 0 : m[1] - m[3];
        }
        if(i == 2 && m.find(2) != m.end())
        {
            count += m[2] / 2;
            m[2] = m[2] & 1 ? 1 : 0;
            if(m[2] > 0)
            {
                count += 1;
                m[1] -= 2;
            }
        }
    }
    if(m[1] > 0)
        count += (m[1] + 3)/4;
    cout << count << endl;
	return 0;
}

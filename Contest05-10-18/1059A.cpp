#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long n, l, a, prev = 0, count = 0, s,p;
    cin >> n >> l >> a;
    for(long i = 0 ; i < n ; i++)
    {
        cin >> s >> p;
        if(s - prev >= a)
            count += (s - prev) / a;
        prev = s + p;
    }
    if(l - prev >= a)
        count += (l - prev)/a;
    cout << count << endl;
    return 0;
}

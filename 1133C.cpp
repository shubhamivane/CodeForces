#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, num, count = 0, max = 0, i = 0, j =0;
    vector<int> v;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(i = 0 ; i < n ; i++) {
        if(v[j] - v[i] <= 5) continue;
        else{
            if(max < i-j) max = i - j;
            j++;
        }
    }
    if(max < i - j) max = i - j;
    cout << max;
    return 0;
}

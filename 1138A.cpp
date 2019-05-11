#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,cnt1=0,cnt2=0,max=0,num,prev;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        num = v[i];
        if(num == 1) cnt1 = (prev == 1 ? (cnt1+1) : 1);
        if(num == 2) cnt2 = (prev == 2 ? (cnt2+1) : 1);
        if(num != prev || i != 0)
            if(max < (min(cnt1,cnt2)*2)) max = min(cnt1, cnt2)*2;
        prev = num;
    }
    cout<<max<<endl;
    return 0;
}

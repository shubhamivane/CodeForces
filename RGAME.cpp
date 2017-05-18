#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <climits>

#define P 1000000007

#define ll long long
#define inp(n) scanf("%lld",&n);

using namespace std;

long long power(long long a,long long b){
    long long x=1,y=a;
    while(b > 0){
        if(b%2){
            x = (x*y);
            if (x>P)
            	x%=P;
        }
        y = (y*y);
        if(y>P)
        	y%=P;
        b /= 2;
    }
    return x;
}

int main(){
    ll t;
    inp(t);
    while(t--){
        ll n;
        inp(n);
        ll a[n+1];
        for(ll i=0;i<=n;i++)
            inp(a[i]);
        ll sum = 2*a[0];
        ll ans = 0;
        for(int i=1;i<=n;i++){
            ans = ((2*ans)%P + (a[i]*sum)%P)%P;
            sum = (sum + (power(2,i)*a[i])%P)%P;
        }
        cout << ans << endl;
    }
    return 0;
}

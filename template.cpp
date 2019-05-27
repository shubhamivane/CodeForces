#include <bits/stdc++.h>
using namespace std;

/****************** DEFINE *************************/
#define DEBUG TRUE
#define FOR(i, j, k, in) for(int i = j ; i < k ; i += in)
#define FORL(i, j, k , in) for(long long i = j ; i < k ; i += in)
#define RFOR(i, j, k, in) for(int i = j ; i >= k ; i -= in)
#define RFORL(i, j, k, in) for(long long i = j ; i >= k ; i -= in)
#define REP(i, j) FOR(i,0,j,1)
#define RREP(i , j) RFOR(i,j,0,1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for(auto it = l.begin() ; it != l.end() ; it++)
#define MP make_pair
#define PB push_back

/***************** TypeDef **************************/
typedef unsigned long long int  uint64;
typedef long long int int64;
typedef unsigned long int uint32;
typedef long int int32;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int,int> MII;
typedef map<string,int> MSI;
typedef map<char, int> MCI;
typedef map<PII,int> MPIII;
typedef map<int,VI> MIVI;
typedef set<int> SETI;
typedef multiset<int> MSETI;

int main(){
    #ifdef DEBUG
        freopen("input.txt", "r",stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int32 n;
    cin>>n;
    VI v(n);
    REP(i,n) cin>>v[i];
    REP(i,n) cout<<v[i];
    return 0;
}
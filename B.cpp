#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector< vector<int> > mat(n, vector<int>(n,0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat[i][j];
        }
    }
    int g = sqrt(mat[0][1] * 1LL * mat[0][2] / mat[2][1]);
    for(int i = 0 ; i < n ; i++){
        if(i == 0)cout << g << " ";
        else cout << mat[0][i] / g << " ";
    }
    return 0;
}

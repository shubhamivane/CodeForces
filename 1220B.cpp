#include <bits/stdc++.h>
#include <numeric>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector< vector<int> > mat(n, vector<int>(0));
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> mat[i][j];
		}
	}
    int g = __gcd(mat[0][1], mat[0][2]);
    for(int i = 3; i < n ; i++){
        g = __gcd(g, mat[0][i]);
    }
    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            cout << g << " ";
        }
        else{
            cout << mat[0][i]/g << " ";
        }
    }
    cout << "\n";
	return 0;
}

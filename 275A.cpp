#include <bits/stdc++.h>
using namespace std;
int toggle(int n, int t){
    return (t & 1 ? 255 ^ n ^ 254 : n);
}
int main(){
    int mat[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};
    int ele;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> ele;
            if(ele != 0){
                if(i != 0){
                    mat[i-1][j] = toggle(mat[i-1][j], ele);
                }
                if(i != 2){
                    mat[i+1][j] = toggle(mat[i+1][j], ele);
                }
                if(j != 0){
                    mat[i][j-1] = toggle(mat[i][j-1], ele);
                }
                if(j != 2){
                    mat[i][j+1] = toggle(mat[i][j+1], ele);
                }
                mat[i][j] = toggle(mat[i][j], ele);
            }
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << mat[i][j];
        }
        cout << "\n";
    }
    return 0;
}

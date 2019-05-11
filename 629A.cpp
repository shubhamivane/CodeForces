#include<iostream>
using namespace std;
int main(){
    int n;
    long cnt1,cnt2, sum=0;
    cin >> n;
    char mat[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cnt1=cnt2=0;
        for(int j=0;j<n;j++){
            if(mat[i][j] == 'C')cnt1++;
            if(mat[j][i] == 'C')cnt2++;
        }
        sum = sum + cnt1*(cnt1-1)/2 + cnt2*(cnt2-1)/2;
    }
    cout<<sum<<endl;
    return 0;
}

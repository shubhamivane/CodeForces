#include <iostream>
using namespace std;
int main(){
    int t;
    string num, ans;
    cin >> t;
    while(t--){
        ans="";
        cin >> num;
        for(int i = 0 ; i < num.size() ; i++){
            if(num[i] == '9'){
                for(; i < num.size() ; i++) ans += '8';
                break;
            }
            else if((num[i] - 48) & 1) {
                if(i == num.size() - 1) {
                    if(num[i] > '1') ans += (num[i] - 1);
                    else ans += (num[i] + 1); 
                }
                else if(num[i+1] >= '5') {
                    ans += (num[i] + 1);
                    for( i = i + 1; i < num.size() ; i++) 
                        ans += '0';
                }
                else {
                    if(num[i] != '1') ans += (num[i] - 1);
                    for(i = i+1 ; i < num.size() ; i++)
                        ans += '8';
                }
            }
            else
                ans += num[i];
            //cout << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}

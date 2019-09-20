
#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long int s){
	for(long long int i = 2 ; i <= sqrt(s) ; i++){
		if(s % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	long long int n;
	cin >> n;
	long long int s = sqrt(n);
	if(s*s < n) {
		cout << "NO" << endl;
	} else {
		if(is_prime(s)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}

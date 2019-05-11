#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

int main()
{
	int n, ele;
	bool flag = false;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> ele;
		if(ele) flag = true;
	}
	if(flag)cout << "HARD" << endl;
	else cout << "EASY" << endl;
	return 0;
}

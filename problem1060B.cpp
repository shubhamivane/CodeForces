#include <iostream>
#include <cmath>

using namespace std;
int digitSum(long long num)
{
	int sum = 0;
	while(num != 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main()
{
	long long num, a, hth;
	int sum, i;
	cin >> num;
	if(num < 10) 
		cout << num << endl;
	else
	{
		sum = i = 0;
		hth = 0;
		while(pow(10, i + 1) <= num) 
		{
			i++;
		}
		hth = pow(10, i);
		a = (num/hth - 1) * hth + hth - 1;
		sum = digitSum(a) + digitSum(num-a);
		cout << sum << endl;
	}
	return 0;
}

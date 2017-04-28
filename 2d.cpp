#include<iostream>
using namespace std;
void show(int *arr,int i,int j)
{
    int *a = (arr+i*2);
    cout << a[j];
}
int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    show((int *)arr,0,0);
    return 0;
}

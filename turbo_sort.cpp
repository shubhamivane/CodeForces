#include<iostream>
using namespace std;
void Merge(int A[ ] , int start, int mid, int en)
{
    int p = start ,q = mid+1;
    int Arr[en-start+1] , k=0;
    for(int i = start ;i <= en ;i++)
    {
        if(p > mid)
            Arr[ k++ ] = A[ q++] ;
        else if ( q > en)
            Arr[ k++ ] = A[ p++ ];
        else if( A[ p ] < A[ q ])
            Arr[ k++ ] = A[ p++ ];
        else
            Arr[ k++ ] = A[ q++];
    }
    for (int p=0 ; p< k ;p ++)
    {
        A[ start++ ] = Arr[ p ] ;
    }
}
void Mergesort(int *arr,int l,int r)
{
    if(r<=l)
        return;
    else
    {
        int q = (r+l)/2;
        Mergesort(&arr[0],l,q);
        Mergesort(&arr[0],q+1,r);
        Merge(&arr[0],l,q,r);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(register int i=0;i<n;i++)
        cin >> arr[i];
    Mergesort(&arr[0],0,n-1);
    for(register int i=0;i<n;i++)
        cout << arr[i] << endl;
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool binarysearch(string word,string *arr,int s,int e)
{
    if(s == e && !word.compare(arr[s]))
        return true;
    if(s == e)
        return false;
    int mid = (e-s)/2;
    if(word.compare(arr[mid] > 0))
        binarysearch(word,arr,mid,e);
    if(word.compare(arr[mid]) < 0))
        binarysearch(word,s,mid);
}
int main()
{
    register int t;
    cin >> t;
    while(t--)
    {
        int c = 0;
        string d1[4];
        string d2[4];
        for(register int i = 0 ; i < 4 ; i++ )
            getline(cin,d1[i]);
        for(register int i = 0 ; i < 4 ; i++ )
            getline(cin,d2[i]);
        sort(d1.begin(),d1.end());
        for(register int i = 0 ; i < 4 ; i++ )
            if(binarysearch(d2[i],&d1,0,3))
                c++;
        cout << c >= 2 ? "similar"  : "dissimilar" << endl;
    }
    return 0;
}

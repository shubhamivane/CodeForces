#include<iostream>
#include<vector>
using namespace std;
int largest_seq(vector<int>& v,vector<int>& l,int k)
{
    int c = v[k-1];
    for(register int i=k;i<v.size();i++)
    {
        cout << "\n" << v[i] << " " << v[i-k] << endl;
        if(c < v[i] - v[i-k])
        {
            c = v[i] - v[i-k];
            cout << "\n c , v[i] and v[i-k] " << c << " " << v[i] << " " << v[i-k] << endl;
        }
    }
    return c;
}
int main()
{
    int n,k,p;
    int c;
    cin >> n >> k >> p;
    vector<int> v;
    vector<int> l(n,0);
    for(register int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    string str;
    cin >> str;
    for(register int i=0;i<v.size();i++)
    {
        if(i == 0)
            l[i] = v[i];
        else
            l[i] = l[i-1] + v[i];
    }
    for(register int i=0;i<p;i++)
    {
        if(str[i] == '?')
        {
           if(i == 0)
            c = largest_seq(v,l,k);
           else
           {
               if(str[i-1] != '?')
                  c = largest_seq(v,l,k);
           }
           cout << c << endl;
        }
        else
        {
             int temp = l[l.size()-1];
             l.erase(l.begin()+l.size()-1);
             l.insert(l.begin(),temp);
             int ele = v[v.size()-1];
             v.erase(v.begin()+v.size()-1);
             v.insert(v.begin(),ele);
             if(ele == 0)
                l[0] = 0;
             if(ele != 0)
             {
                 for(register int i = 0 ; i < v.size() ; i++ )
                 {
                     if(i==0)
                        l[i] = v[i];
                     else
                       l[i] = l[i-1] + v[i];
                 }
             }
        }
    }
    return 0;
}

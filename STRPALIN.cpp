#include<bits/stdc++.h>
using namespace std;

//char s1[1004];
//char s2[1004];
int t;

string s1,s2;

int main()
{
    cin>>t;
    //scanf("%d", &t);
    map<char, int> ma;

    bool ans;

    while(t--)
    {
        ans = false;
        ma.clear();

        //scanf("%s", s1);
        //scanf("%s", s2);

        cin>>s1>>s2;

        for(int i=0; i<s1.length(); i++)
        {
            if(ma[s1[i]] == 0)
            {
                ma[s1[i]]++;
            }
        }

        for(int i=0; i<s2.length(); i++)
        {
            if(ma[s2[i]] != 0)
            {
                ans = true;break;
            }
        }

        if(ans == false)
        {
            cout<<"No"<<endl;
            //printf("No\n");
        }
        else
        {
            cout<<"Yes"<<endl;
            //printf("Yes\n");
        }
    }


    return 0;
}

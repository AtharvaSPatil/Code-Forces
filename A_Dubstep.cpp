#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int flag =1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            if(!flag)
            {
                cout<<" ";
                flag=0;
            }
        }
        else
        {
            flag=0;
            cout<<s[i];
        }
    }
    return 0;
}
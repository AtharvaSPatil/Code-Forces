#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s,og="codeforces";
        int count=0;
        cin>>s;
        for(int i=0;i<10;i++)
        {
            if(s[i]!=og[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
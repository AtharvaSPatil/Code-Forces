#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 

map<string,int> ms;
signed main()
{
 
    int n,mx=0,i;
    string s,ans;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
           ms[s]++;
        if(ms[s]>mx)
        {
            mx=ms[s];
            ans=s;
        }
    }
    cout<<ans<<endl;
}
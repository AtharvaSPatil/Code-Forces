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
        int x,n,m;
        cin>>x>>n>>m;
        while(x>0&&n&&x/2+10<x)
        {
            n--;
            x=x/2+10;
        }
        if(x<=m*10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
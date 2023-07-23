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
        int a,b;
        cin>>a>>b;
        if(a%b!=0)
        {
            cout<<1<<endl;
            cout<<a<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<a-1<<endl;
        }
    }

    return 0;
}
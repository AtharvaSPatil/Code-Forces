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
        int n;
        cin>>n;

        if(n%2==0)
            cout<<"0 "<<n/2<<' '<<n/2<<'\n';
        else
            cout<<"-1\n";
    }

    return 0;
}
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
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cout<<n+1-x<<' ';
        }
        cout<<'\n';
    }

    return 0;
}
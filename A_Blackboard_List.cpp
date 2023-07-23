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
        cin >> n;
        int mn = INT_MAX, mx = INT_MIN;

        for(int i = 0; i < n; ++i) 
        {
            int x; 
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }

        if(mn < 0) 
        cout << mn << '\n';
        else 
        cout << mx << '\n';
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


// #define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        k = min(k, 30);
        cout << min(n, (1 << k) - 1) + 1 << "\n";
    }

    return 0;
}
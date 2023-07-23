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
         int n, k;
    cin >> n >> k;
    string t[n];
    int ans = n;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        if(t[i] != t[0]) {
            ans--;
        }
    }
    cout << ans << "\n";
    }

    return 0;
}
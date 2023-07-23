#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 

const int MOD = 1e9 + 7;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> b(n);
        for (int i=0; i<n; i++) cin >> b[i];
        sort(b.begin(), b.end(), greater<>());
        int result = 1;
        for (int i=0; i<n; i++){
            int geq_count = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            result = result * max(geq_count - i, (int)0) % MOD;
        }
        cout << result << "\n";
    }

    return 0;
}
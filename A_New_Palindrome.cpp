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
        string s;
        cin >> s;
        s = s.substr(0, s.size() / 2);
        int k = unique(s.begin(), s.end()) - s.begin();
        cout << (k == 1 ? "NO" : "YES") << '\n';
    }

    return 0;
}
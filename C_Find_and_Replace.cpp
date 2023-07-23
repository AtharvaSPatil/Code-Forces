#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 

void solve()
{
    int n;
	cin >> n;
    string s;
    cin >> s;
    int mp[26];
    for (int i = 0; i < 26; i++) 
    {
    	mp[i] = -1;
    }
    for (int i = 0; i < n; i++) 
    {
    	int curr = (s[i] - 'a');
    	if (mp[curr] == -1) 
        {
    		mp[curr] = (i % 2);
       	}
    	else 
        {
    		if (mp[curr] != (i % 2)) 
            {
                cout << "NO\n"; 
                return;
            }
    	}
    }
    cout << "YES\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
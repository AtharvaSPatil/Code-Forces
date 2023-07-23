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
		int ans = 1;
		if(s[0] == '0') ans = 0;
		if(s[0] == '?') ans = 9;
		for(int j = 1; j < s.size(); j++)
			if(s[j] == '?')
				ans *= 10;
		cout << ans << endl;
    }

    return 0;
}
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
        int n, a, b;
		cin >> n >> a >> b;
		for (int i = 0; i < n; ++i) 
        {
			cout << char('a' + i % b);
		}
		cout << endl;
    }

    return 0;
}
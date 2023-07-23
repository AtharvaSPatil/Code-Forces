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
        int x, y, n;
		cin >> x >> y >> n;
		if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} 
        else 
        {
			cout << n - n % x - (x - y) << endl;
		}
    }

    return 0;
}
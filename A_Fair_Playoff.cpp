#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;
        if ((max(a, b) < min(c, d)) || (min(a, b) > max(c, d)))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

const int MOD = 998'244'353;

void updated(int &a, int b)
{
    a = (a * 1LL * b) % MOD;
}

int t;
string s;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> s;
        int res = 1;
        int k = s.size();
        int n = s.size();
        for (int l = 0; l < n;)
        {
            int r = l + 1;
            while (r < n && s[l] == s[r])
                ++r;
            updated(res, r - l);
            --k;
            l = r;
        }

        for (int i = 1; i <= k; ++i)
            updated(res, i);
        cout << k << ' ' << res << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;

int power(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        int value = power(a, b / 2);
        if (b % 2 == 0)
            return value * value;
        else
            return value * value * a;
    }
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / (gcd(a, b));
}

vector<int> primefactors(int n)
{
    vector<int> factors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n + 1, INT_MAX);
        vector<int> b(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        vector<pair<int, int>> p;

        for (int i = 1; i <= n; i++)
        {
            if (i + 1 <= n && b[i] % b[i + 1] == 0)
            {
                int j = i;
                while (j + 1 <= n && b[j] % b[j + 1] == 0)
                {
                    j++;
                }
                p.push_back({i, j});
                i = j;
            }
        }
        int len = 0;
        for (auto x : p)
        {
            int l = x.first, r = x.first;
            int temp = a[r];
            while (r <= x.second)
            {
                if (temp <= m)
                    len = max(len, r - l + 1);
                r++;
                if (r <= x.second)
                    temp += a[r];
                else
                    break;
                while (temp > m && l <= r)
                {
                    temp -= a[l];
                    l++;
                }
            }

            if (temp <= m)
                len = max(len, r - l);
        }
        if (len == 0)
        {
            int x = *min_element(a.begin(), a.end());
            if (x <= m)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            cout << len << endl;
        }
    }

    return 0;
}
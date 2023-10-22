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
        int n;
        int h;
        cin >> n >> h;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        int l = 1, r = 1e18;
        while (l <= r)
        {
            int m = (l + r) / 2;
            int sum = m;
            for (int i = 0; i < n - 1; ++i)
                sum += min(m, a[i + 1] - a[i]);
            if (sum < h)
                l = m + 1;
            else
                r = m - 1;
        }
        cout << r + 1 << endl;
    }

    return 0;
}
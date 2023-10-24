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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    vector<int> good(2, 0);
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > b[i] && !good[0])
        {
            cout << "NO" << endl;
            return;
        }
        else if (a[i] < b[i] && !good[1])
        {
            cout << "NO" << endl;
            return;
        }
        if (a[i] == -1)
            good[0] = 1;
        if (a[i] == 1)
            good[1] = 1;
    }
    cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
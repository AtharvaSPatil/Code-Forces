#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;

int power(int x, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        int value = power(x, b / 2);
        if (b % 2 == 0)
            return value * value;
        else
            return value * value * x;
    }
}

int gcd(int x, int b)
{
    if (x == 0)
        return b;
    else
        return gcd(b % x, x);
}

int lcm(int x, int b)
{
    return (x * b) / (gcd(x, b));
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
        int n, k, x;
        cin >> n >> k >> x;

        int sumin = ((k * (k + 1)) / 2);
        int sumax = ((k * (2 * n - k + 1)) / 2);

        if (x >= sumin && x <= sumax)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
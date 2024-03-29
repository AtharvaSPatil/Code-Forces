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
        cin >> n;

        int l = 1;
        int r = 1e9;
        int s = 0;

        vector<int> neq;

        for (int i = 0; i < n; i++)
        {
            int a, x;
            cin >> a >> x;

            if (a == 1)
                l = max(l, x);
            if (a == 2)
                r = min(r, x);
            if (a == 3)
                neq.push_back(x);
        }
        for (int x : neq)
            if (x >= l and x <= r)
                s++;

        cout<<max((int)(r-l+1-s),(int)0)<<endl;
    }

    return 0;
}
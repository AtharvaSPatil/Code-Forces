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
const int N = 100;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n, 1);
        vector<vector<int>> v(N + 1);
        for (int i = 0; i < n; i++)
        {
            v[a[i]].push_back(i);
        }
        int k = 2;
        for (int x = 1; x <= N; x++)
        {
            if ((int)v[x].size() >= 2)
            {
                b[v[x][0]] = k;
                k++;
                if (k > 3)
                {
                    break;
                }
            }
        }
        if (k <= 3)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
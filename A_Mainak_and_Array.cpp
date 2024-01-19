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
        int N;
        cin >> N;

        int A[N];
        int ans = -1000000007;

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i)
        {
            ans = max(ans, A[(i - 1 + N) % N] - A[i]);
        }

        for (int i = 1; i < N; ++i)
        {
            ans = max(ans, A[i] - A[0]);
        }

        for (int i = 0; i < N - 1; ++i)
        {
            ans = max(ans, A[N - 1] - A[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
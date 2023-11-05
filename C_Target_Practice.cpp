#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

string alph = "abc";

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        cnt += (s[i] != alph[i]);
    }
    cout << (cnt <= 2 ? "YES\n" : "NO\n");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
}

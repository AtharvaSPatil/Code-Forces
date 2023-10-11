#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;

int power(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    else
    {
        int value=power(a,b/2);
        if(b%2==0)
            return value*value;
        else
            return value*value*a;
    }
}

int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}

int lcm(int a,int b)
{
        return (a*b)/(gcd(a,b));
}

vector<int> primefactors(int n)
{
    vector<int> factors;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            factors.push_back(i);
            n/=i;
        }
    }
    return factors;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t(n+1,'0');
        int ans = 0;
        int max_1 = 0;
        int max_2 = 0;
        for(int i = 0;i <= n/2-1;++i)
        {
            if(s[i] == s[n-i-1])
                max_2++;
            else
                ans++;
        }
        if(n%2 == 1)
            max_1++;
        for(int j = 0;j <= max_2;++j)
        {
            for(int k = 0;k <= max_1;++k)
            {
                t[ans + j*2 + k] = '1';
            }
        }
        cout << t << "\n";
    }

    return 0;
}
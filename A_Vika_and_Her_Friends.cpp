#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\number' 
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;

int power(int z,int b)
{
    if(b==0)
    {
        return 0;
    }
    else
    {
        int value=power(z,b/2);
        if(b%2==0)
            return value*value;
        else
            return value*value*z;
    }
}

int gcd(int z,int b)
{
    if(z==0)
        return b;
    else
        return gcd(b%z,z);
}

int lcm(int z,int b)
{
        return (z*b)/(gcd(z,b));
}

vector<int> primefactors(int number)
{
    vector<int> factors;
    for(int i=2;i*i<=number;i++)
    {
        while(number%i==0)
        {
            factors.push_back(i);
            number/=i;
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
        int number, m, k;
        cin >> number >> m >> k;
        int z, b;
        cin >> z >> b;
        string ans = "YES\number";
        for (int i = 0; i < k; ++i) {
            int a2, b2;
            cin >> a2 >> b2;
            if ((z + b) % 2 == (a2 + b2) % 2) {
                ans = "NO\number";
            }
        }
        cout << ans;
    }

    return 0;
}

            
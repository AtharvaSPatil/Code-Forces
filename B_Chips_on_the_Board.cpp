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
        vector<int> a(n), b(n);
        for (auto& x : a) 
            cin >> x;
        for (auto& x : b) 
            cin >> x;
        int mnA=*min_element(a.begin(), a.end());
        int sA=accumulate(a.begin(), a.end(), 0LL);
        int mnB=*min_element(b.begin(), b.end());
        int sB=accumulate(b.begin(), b.end(), 0LL);
        int ans=min(mnA*n+sB,mnB*n+sA);
        cout<<ans<<endl;
    }

    return 0;
}
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
void solve()
{
    int l,r;
        cin>>l>>r;
        if(l==r)
        {
            for(int i=2;i*i<=l;i++)
            {
                if(l%i==0)
                {
                    int q=l/i;
                    if(q>1)
                    {
                        cout<<i<<" "<<(i*(q-1))<<endl;
                        return;
                    }
                }
            }
        }
        if(l&1) l++;
        if(l==2) l=4;
        int a=l-2;
        if(a+2<=r)
        cout<<a<<" "<<2;
        else 
        cout<<-1;
        cout<<endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
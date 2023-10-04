#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 

int power(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
        //minor change 2
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
    if(n!=1)
    factors.push_back(n);
    return factors;
}

vector<int> prefix_sum_array(vector<int> a)
{
    vector<int> ans;
    int n=sizeof(a)/sizeof(a[0]);
    ans[0]=0;
    for(int i=0;i<n;i++)
    {
        ans[i]=ans[i]+a[i];
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        vector<int> res;
        for(int i=0;i<5;i++)
        {
            cin>>v[i];
        }
        res=prefix_sum_array(v);
        for(int i=0;i<5;i++)
        {
            res[i];
        }
    }

    return 0;
}

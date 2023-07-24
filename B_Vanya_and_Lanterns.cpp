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
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int res=max(a[0],l-a[n-1])*2;
    for(int i=0;i<n-1;i++)
    {
        res=max(res,a[i+1]-a[i]);
    }
    cout.precision(10);
    cout<<fixed<<res/2.0<<endl;
    // Alternate approach to work on Later remember This
    // vector<int > v(l,0);
    // for(int i=0,j=0;i<l || j<n;i++)
    // {
    //     if(a[j]==i)
    //     {
    //         v.push_back(1);
    //         j++;
    //     }
    // }
    // double check=max(a[0]-0,l-a[n-1]),newer;
    // for(int i=0;i<l;i++)
    // {
    //     double checker=0;
    //     if(v[i]==1)
    //     {
    //         while(v[i]!=1 && i<n)
    //         {
    //             checker++;
    //             i++;
    //         }
    //     }
    //     check=max(check,checker);
    // }
    // if(check==newer)
    // {
    //     cout<<check<<endl;
    // }
    // else
    // {
    //     cout<<check/2<<endl;
    // }
    return 0;
}
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
	    int x;
	    cin >> n >> x;
	    int a[n];
	    for (int i = 0; i < n; i++) 
        {
		    cin >> a[i];
	    }
	    int lo = 0, hi = 2'000'000'007;
	    while (lo < hi) 
        {
		    int mid = lo + (hi - lo + 1) / 2;
		    int tot = 0;
		    for (int i = 0; i < n; i++) 
            {
			    tot += max(mid - a[i], 0LL);
		    }
		    if (tot <= x) {lo = mid;} 
		    else {hi = mid - 1;}
	    }
	    cout << lo << endl;
    }

    return 0;
}
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
        int temp, sum = 0, x1, x2, x3, y1, y2, y3;

	    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;

	    temp = min(x1, y3);
	    x1 -= temp;
	    y3 -= temp;

	    temp = min(x2, y1);
	    x2 -= temp;
	    y1 -= temp;

	    temp = min(x3, y2);
	    x3 -= temp;
	    y2 -= temp;
	    sum += 2 * temp;

	    sum -= 2 * min(x2, y3);

	    cout << sum << endl;
    }

    return 0;
}
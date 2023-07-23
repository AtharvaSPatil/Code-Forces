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
        vector<string> s(3);
		for (int i = 0; i < 3; i++)
			cin >> s[i];
		string res = "DRAW";
		for(int i = 0; i < 3; i++) {
			if (s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][0] != '.')
				res=s[i][0];
		}
		for (int i = 0; i < 3; i++) {
			if (s[0][i] == s[1][i] && s[1][i] == s[2][i] && s[0][i] != '.')
				res=s[0][i];
		}
		if (s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[0][0] != '.')
			res=s[0][0];
		if (s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[0][2] != '.')
			res=s[0][2];
		cout << res << endl;

    }

    return 0;
}
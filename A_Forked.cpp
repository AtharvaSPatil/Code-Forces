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
        int a,b,x,y,x2,y2;
        cin>>a>>b>>x>>y>>x2>>y2;
        set<pair<int,int>>s1,s2;
 
		s1.insert({x+a,y+b});
		s1.insert({x+a,y-b});
		s1.insert({x-a,y+b});
		s1.insert({x-a,y-b});
		s1.insert({x+b,y+a});
		s1.insert({x+b,y-a});
		s1.insert({x-b,y+a});
		s1.insert({x-b,y-a});
		s2.insert({x2+a,y2+b});
		s2.insert({x2+a,y2-b});
		s2.insert({x2-a,y2+b});
		s2.insert({x2-a,y2-b});
		s2.insert({x2+b,y2+a});
		s2.insert({x2+b,y2-a});
		s2.insert({x2-b,y2+a});
		s2.insert({x2-b,y2-a});
 
		int ans=0;
		for(auto x:s1){
			if(s2.find(x)!=s2.end())ans++;
		}cout<<ans<<endl; 
    }

    return 0;
}
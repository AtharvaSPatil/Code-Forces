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
    
    int n;
    cin >> n;
    int i = 0;
    while(n > 5*ceil(pow(2,i)))
    {
        n -= 5*ceil(pow(2,i));
        i ++;
    }
    int ans = (n -1)/ceil(pow(2,i));
    if(ans == 0) cout << "Sheldon";
    else if(ans == 1) cout << "Leonard";
    else if(ans == 2) cout << "Penny";
    else if(ans == 3) cout << "Rajesh";
    else if(ans == 4) cout << "Howard";

    return 0;
}
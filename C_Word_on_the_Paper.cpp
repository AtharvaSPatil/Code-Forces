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



signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string ans="";
        char a[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(a[i][j]!='.')
                {
                    ans.push_back(a[i][j]);
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
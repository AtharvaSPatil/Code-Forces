#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0,count=0,flag=0;
        cin>>n>>k;
        if(k*k<=n && n%2==k%2)
        {cout<<"YES"<<endl;}
        else
        {cout<<"NO"<<endl;}
    }

    return 0;
}
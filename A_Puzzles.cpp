#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x=INT_MAX;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<=m-n;i++)
    {
     x=min(x,(a[i+(n-1)]-a[i]));
    }
    cout<<abs(x)<<endl;
    return 0;
}
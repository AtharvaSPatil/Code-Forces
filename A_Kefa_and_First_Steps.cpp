#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,d=1,c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int y=a[0];
    for(int i=1;i<n;i++)
    {
        int x=a[i];
        if(x>=y)
        {
            d++;
        }
        else
        {
            d=1;
        }
        c=max(c,d);
    }
    cout<<c<<endl;
    return 0;
}
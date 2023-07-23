#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j,ans=0,n;
    for(i=1; i<=5; i++)
        for(j=1; j<=5; j++)
        {
            cin>>n;
            if(n==1)
                ans=abs(i-3)+abs(j-3);
        }
    cout<<ans<<endl;
    return 0;
}
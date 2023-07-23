#include<bits/stdc++.h>
using namespace std;

long long tosum(long long n)
{
    long long ans=n*1ll*(n+1)/2;
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r,ans;
        cin>>l>>r;
        if(l>r)
        {
            swap(l,r);
        }
        ans=tosum(r)-tosum(l-1);
        cout<<ans<<endl;
    }

    return 0;
}
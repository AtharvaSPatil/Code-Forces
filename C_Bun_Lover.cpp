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
        int n;
        cin>>n;
        cout<<1 + 4*n + (((n-2)*(n-1))/2 + ((n-1)*(n))/2)<<endl;
        
    }

    return 0;
}
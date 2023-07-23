#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<=n/2)
        {
            cout<<k+(k-1)<<endl;
        }
        else
        {
            cout<<2*(k-(n/2))<<endl;
        }
    }
    else
    {
        if(k<=(n+1)/2)
        {
            cout<<k+(k-1)<<endl;
        }
        else
        {
            cout<<2*(k-((n+1)/2))<<endl;
        }
    }
    
    return 0;
}
// 1 3 5 7 9 2 4 6 8 10
// 1 2 3 4 5 6 7 8 9 10

// 1 3 5 7 2 4 6
// 1 2 3 4 5 6 7
#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, c(0), m(0);
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        c -= a;
        c += b;
        if (c > m)
        {
            m = c;
        }
    }

    cout<<m<<endl;
    return 0;
}
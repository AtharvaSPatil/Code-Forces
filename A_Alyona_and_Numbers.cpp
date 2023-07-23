#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,extras,q,multiplier,q2;
    cin>>n>>m;
    extras=n%5; // 1
    q=n/5;      // 1
    multiplier=m%5; // 2
    q2=m/5; // 2
    int ans= (q*10) + (extras*2) + multiplier;  
    cout<<ans<<endl;
    return 0;
}
// extras 1
// q 2
// multiplier 4
// q2 2
/*
    1   4 9 14
    2   3 8 13
    3   2 7 12
    4   1 6 11
    5   5 10
    6   4 9 14
    7   3 8 13
    8   2 7 12
    9   1 6 11
    10  5 10
    11  4 9 14
*/
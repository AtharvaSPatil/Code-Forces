#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res=(a*b*c*d)%100;
    cout<<res<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n%5!=0)
    {
        cout<<(floor(n/5)+1)<<endl;
    }
    else
    {
        cout<<n/5<<endl;
    }
    return 0;
}
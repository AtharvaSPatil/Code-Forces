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
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        int a=n/10;
        int b=n/100*10+n%10;
        cout<<max(a,b)<<endl;
    }

    return 0;
}
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
        int a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int c=a*(b+1);
            b=a*b;
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }

    return 0;
}
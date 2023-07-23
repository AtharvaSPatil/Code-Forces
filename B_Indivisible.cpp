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
        int a;cin>>a;
        if(a==1){
            cout<<"1\n";
            continue;
        }
        if((a*(a+1)/2)%a==0){
            cout<<"-1\n";
            continue;
        }
        for(int i=a;i>0;i--){
            if(i&1)cout<<i<<' '<<i+1<<' ';
        }
        cout<<'\n';
    }

    return 0;
}
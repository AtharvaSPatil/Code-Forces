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
        int n,m,sumn=0,summ=0;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sumn+=a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            summ+=b[i];
        }
        if(summ==sumn)
            cout<<"Draw"<<endl;
        else if(summ>sumn)
            cout<<"Tenzing"<<endl;
        else
            cout<<"Tsondu"<<endl;
        
    }

    return 0;
}
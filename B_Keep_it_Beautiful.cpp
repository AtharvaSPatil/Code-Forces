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
        // int n;
        // cin>>n;
        // int a[n];
        // for(int i=0;i<n;i++)
        // {
        //     cin>>a[i];
        // }
        // string s;
        // s[0]=1;
        // s[1]=1;
        // for(int i=2;i<n;i++)
        // {
        //     if(a[i]>a[i-1] )
        //     {

        //     }
        // }
    int q;cin>>q;
    int last = -1;
    int first = -1;
    int rot = 0;
    for (int i = 0; i < q; i++)
    {
        int x;cin>>x;
        if(i==0)
        {
            cout<<1;
            last = x;
            first = x;
            continue;
        }
        if(rot==1)
        {
            if(x>=last && x<=first)
            {
                cout<<1;
                last = x;
            }
            else
            {
                cout<<0;
            }
            continue;
        }
        else if(x>=last)
        {
            cout<<1;
            last = x;
            continue;
        }
        else if(x<=first)
        {
            rot = 1;
            cout<<1;
            last = x;
            continue;
        }
        else
        {
            cout<<0;
        }
    }
    cout<<endl;
    }

    return 0;
}
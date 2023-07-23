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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }   
        sort(a,a+n);
        for(int i=1;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                n=n-2;
                i=i+2;
            }
        }
        cout<<n+1<<endl;
    }

    return 0;
}
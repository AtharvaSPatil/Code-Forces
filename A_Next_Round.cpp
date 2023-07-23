#include<bits/stdc++.h>
using namespace std;


#define int long long
#define endl '\n' 


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
        int n,k,count=0;
        int a[n];
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<a[k+1] && a[i]>0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    

    return 0;
}
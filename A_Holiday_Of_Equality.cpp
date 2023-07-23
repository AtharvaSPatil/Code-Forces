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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<(n*a[n-1])-sum<<endl;

    

    return 0;
}